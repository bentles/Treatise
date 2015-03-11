/*#!/usr/bin/node*/

/* need to know
 * which register combinations are legal
 * how many inputs
 * name
 */
var i = 0;
var p = 1;

var instructions = [
    { name:"add", inputs:2, legal:[[i,i]] },
    { name: "addk", inputs:1, legal:[[i]] },
    { name: "sub", inputs:2, legal:[[i,i]] }
];

var numtypes = 2;
var numregisters = 6;
var numstates = Math.pow(numtypes, numregisters);

var ans = genLookups(instructions[0]);

//generate lookup table entries for some instruction
function genLookups (inst)
{
    var lookups = [];
    
    var numcalls = Math.pow(6, inst.inputs);
    for (var state = 0; state < numstates; state++) {
        var stateInBase_NumTypes = stateToBase(state, numtypes, numregisters);
        for (var j = 0; j < numcalls; j++) {
            var call = getCall(inst.inputs, numregisters, j);

            var name = "";
            if (islegal(call, stateInBase_NumTypes, inst.legal)) {
                name = '&&' + inst.name + call.join([seperator = '_']);
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
