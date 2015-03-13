/*#!/usr/bin/node*/

//convenience names
var i = 0;
var p = 1;

var getConst = "int16_t displacement = program[pc + 1];\n" +
	    "int64_t const = *((int64_t*)(&program[pc + displacement]);\n";

var lookups = [
    { name:"add", inputs: 2,
      instructions:[
          { name:"add", pcChange: 1, legal:[i,i],
            template : "/*<0>*/.i = /*<0>*/.i + /*<1>*/.i;\n"}]},
    { name:"addk", inputs: 1,
      instructions:[
          { name:"addik", pcChange: 2, legal: [i],
            template:
            getConst + "/*<0>*/.i = /*<0>*/.i + const;\n"}]},
    { name: "sub", inputs: 2,
      instructions:[
          { name:"sub", pcChange: 1, legal:[i,i],
            template : "/*<0>*/.i = /*<0>*/.i - /*<1>*/.i;\n"}]},
    { name:"subk", inputs: 1,
      instructions:[
          { name:"subki", pcChange: 2, legal: [i],
            template:
            getConst + "/*<0>*/.i = const - /*<0>*/.i;\n"}]},
    { name: "mov", inputs:2,
      instructions: [
	      { name:"movii", pcChange: 1, legal:[i,i],
	        template: "/*<0>*/.i = /*<1>*/.i;\n"},
	      { name:"movpp", pcChange: 1, legal:[p,p],
	        template: "/*<0>*/.p = /*<1>*/.p;\n"}]},
    { name: "movk", inputs: 1,
      instructions: [
	      { name:"movik", pcChange: 2, legal: [i],
	        template: getConst + "/*<0>*/.i = const;\n"},
	      { name: "movpN", pcChange: 1, legal: [p],
	        template: "/*<0>*/.p = NULL;\n"}]}
];

var numtypes = 2;
var numregisters = 6;
var numstates = Math.pow(numtypes, numregisters);

//generate lookup table entries for some instruction
function genLookups (inst)
{
    var lookups = [];
    
    var numcalls = Math.pow(numregisters, inst.inputs);
    for (var state = 0; state < numstates; state++) {
        var stateInBase_NumTypes = stateToBase(state, numtypes, numregisters);
        for (var j = 0; j < numcalls; j++) {
            var call = getCall(inst.inputs, numregisters, j);

            var name = "";
            if (islegal(call, stateInBase_NumTypes, inst.legal)) {
                name = '&&' + getStaticInstructionName(inst.name, call);
            }
            else
                name = '&&error';            
            
            lookups.push(name);
        }
    }
    return lookups;
}

//returns an array of which registers are being called 
function getCall(numinputs, numregisters, i)
{
    var call = [];
    if (numinputs)
    {	
        call[numinputs - 1] = i % numregisters;
        for (var k = numinputs - 2; k >= 0; k--){
            call[k] = Math.floor(i / Math.pow(numregisters, numinputs - k - 1)) % numregisters;
        }
    }
    return call;
}

//convert state number to array of register states
function stateToBase(i, b, numregisters)
{
    var baseb = [];
    for (var j = 0; j < numregisters -1; j++)
    {
        var place = Math.pow(b, numregisters-1-j);
        baseb[j] = Math.floor(i / place);
        i %= place;
    }
    baseb[numregisters-1] = i % b;        

    return baseb;
}

//check for legality of arguments
function islegal(call, convertedState, legalcalls)
{
    //call = [a, b, ...] a and b are numbers of registers
    var callTypes = [];
    for (var i = 0; i < call.length; i++) {
        callTypes[i] = convertedState[call[i]];
    }

    var legal = false;
    for (var j = 0; j < legalcalls.length; j++)
    {
        legal = true;
        for (var k = 0; k < callTypes.length; k++) {
            if (callTypes[k] !== legalcalls[j][k])
            {
                legal = false;
                break;
            }
        }

        if (legal)
            break;
    }
    
    return legal;
}

function getStaticInstructionName(name, call)
{
    return name + call.join([seperator = '_']);
}

//Let's arbitrarily do this completely differently
function StaticInstructionMaker(inst, numregisters)
{
    this.numregisters = numregisters;
    this.name = inst.name;
    this.pcChange = inst.pcChange;
    this.inputs = inst.inputs;
    this.templates = inst.templates;
    this.code = "";
    this.goTo = "goto *dynOpcodes[(ts << 11) + program[pc]];";
}

StaticInstructionMaker.prototype.genCode = function() {
    var numCalls = Math.pow(this.numregisters, this.inputs); //6^2 usually

    for (var i = 0; i < numCalls; i++)
    {
        var call = getCall(this.inputs, this.numregisters, i); //call[ 3, 4 ] => name3_4
        var name = getStaticInstructionName(this.name, call);

        //write out label
        this.code += name + ":\n";

        //perform instruction for arguments
        this.code += this.substituteIntoTemplate(call) + "\n";

        //change state
        this.code += this.changeState(call) + "\n";
        
        //update pc
        this.code += this.changePC() + "\n";

        //goto next instruction
        this.code += this.goTo + "\n";

        this.code += "\n\n";
    }
};

StaticInstructionMaker.prototype.changeState = function(call) {
    return ""; //TODO: create when needed
};

StaticInstructionMaker.prototype.changePC = function() {
    if (!this.pcChange)
        return "";
    else
        return "pc += " + this.pcChange + ";" ;
};

StaticInstructionMaker.prototype.substituteIntoTemplate = function(call)
{	
	for (var h = 0; h < templates.length; h++)
	{		
		for (var i = 0; i < call.length; i++)
		{
			var token = '/*<' + i + '>*/' ;
			while (true)
			{
				var pos = subbedString.indexOf(token);

				if (pos < 0)
					break;
				else {
					subbedString = subbedString.replace(token, "g[" + call[i] + "]");
				}
			}
		}
	
	}
	return subbedString;
};

var ans2 = new StaticInstructionMaker(instructions[0], numregisters);
ans2.genCode();
console.log(ans2.code);

