add:
{
int16_t arg0 = GetArg0(program[pc]);
int16_t arg1 = GetArg1(program[pc]);
if (IsInt(g[arg0]) && IsInt(g[arg1])) {
g[arg0].i += g[arg1].i;
pc++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: add");
return 1;
}
goto *dynOpcodes[GetOpcode(program[pc])];
}

addc:
{
int16_t arg0 = GetArg0(program[pc]);
if (IsInt(g[arg0])) {
int16_t dconstant = program[pc +1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[arg0].i += constant;
pc += 2;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: addc");
return 1;
}
goto *dynOpcodes[GetOpcode(program[pc])];
}

sub:
{
int16_t arg0 = GetArg0(program[pc]);
int16_t arg1 = GetArg1(program[pc]);
if (IsInt(g[arg0]) && IsInt(g[arg1])) {
g[arg0].i -= g[arg1].i;
pc++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: sub");
return 1;
}
goto *dynOpcodes[GetOpcode(program[pc])];
}

csub:
{
int16_t arg0 = GetArg0(program[pc]);
if (IsInt(g[arg0])) {
int16_t dconstant = program[pc +1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[arg0].i = constant - g[arg0].i;
pc += 2;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: csub");
return 1;
}
goto *dynOpcodes[GetOpcode(program[pc])];
}

mul:
{
int16_t arg0 = GetArg0(program[pc]);
int16_t arg1 = GetArg1(program[pc]);
if (IsInt(g[arg0]) && IsInt(g[arg1])) {
g[arg0].i *= g[arg1].i;
pc++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: mul");
return 1;
}
goto *dynOpcodes[GetOpcode(program[pc])];
}

mulc:
{
int16_t arg0 = GetArg0(program[pc]);
if (IsInt(g[arg0])) {
int16_t dconstant = program[pc +1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[arg0].i *= constant;
pc += 2;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: mulc");
return 1;
}
goto *dynOpcodes[GetOpcode(program[pc])];
}

div:
{
int16_t arg0 = GetArg0(program[pc]);
int16_t arg1 = GetArg1(program[pc]);
if (IsInt(g[arg0]) && IsInt(g[arg1])) {
g[0].i = g[arg0].i % g[arg1].i;
g[arg0].i /= g[arg1].i;
g[0].tag = 0;
ts &= 0xF800;
pc++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: div");
return 1;
}
goto *dynOpcodes[GetOpcode(program[pc])];
}

divc:
{
int16_t arg0 = GetArg0(program[pc]);
if (IsInt(g[arg0])) {
int16_t dconstant = program[pc +1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[0].i = g[arg0].i % constant;
g[arg0].i /= constant;
g[0].tag = 0;
ts &= 0xF800;
pc += 2;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: divc");
return 1;
}
goto *dynOpcodes[GetOpcode(program[pc])];
}

and:
{
int16_t arg0 = GetArg0(program[pc]);
int16_t arg1 = GetArg1(program[pc]);
if (IsInt(g[arg0]) && IsInt(g[arg1])) {
g[arg0].i &= g[arg1].i;
pc++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: and");
return 1;
}
goto *dynOpcodes[GetOpcode(program[pc])];
}

andc:
{
int16_t arg0 = GetArg0(program[pc]);
if (IsInt(g[arg0])) {
int16_t dconstant = program[pc +1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[arg0].i &= constant;
pc += 2;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: andc");
return 1;
}
goto *dynOpcodes[GetOpcode(program[pc])];
}

or:
{
int16_t arg0 = GetArg0(program[pc]);
int16_t arg1 = GetArg1(program[pc]);
if (IsInt(g[arg0]) && IsInt(g[arg1])) {
g[arg0].i |= g[arg1].i;
pc++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: or");
return 1;
}
goto *dynOpcodes[GetOpcode(program[pc])];
}

orc:
{
int16_t arg0 = GetArg0(program[pc]);
if (IsInt(g[arg0])) {
int16_t dconstant = program[pc +1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[arg0].i |= constant;
pc += 2;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: orc");
return 1;
}
goto *dynOpcodes[GetOpcode(program[pc])];
}

xor:
{
int16_t arg0 = GetArg0(program[pc]);
int16_t arg1 = GetArg1(program[pc]);
if (IsInt(g[arg0]) && IsInt(g[arg1])) {
g[arg0].i ^= g[arg1].i;
pc++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: xor");
return 1;
}
goto *dynOpcodes[GetOpcode(program[pc])];
}

shl:
{
int16_t arg0 = GetArg0(program[pc]);
int16_t arg1 = GetArg1(program[pc]);
if (IsInt(g[arg0]) && IsInt(g[arg1])) {
g[arg0].i <<= g[arg1].i;
pc++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: shl");
return 1;
}
goto *dynOpcodes[GetOpcode(program[pc])];
}

shlc:
{
int16_t arg0 = GetArg0(program[pc]);
if (IsInt(g[arg0])) {
int16_t dconstant = program[pc +1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[arg0].i <<= constant;
pc += 2;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: shlc");
return 1;
}
goto *dynOpcodes[GetOpcode(program[pc])];
}

cshl:
{
int16_t arg0 = GetArg0(program[pc]);
if (IsInt(g[arg0])) {
int16_t dconstant = program[pc +1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[arg0].i = constant << g[arg0].i;
pc += 2;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: cshl");
return 1;
}
goto *dynOpcodes[GetOpcode(program[pc])];
}

shr:
{
int16_t arg0 = GetArg0(program[pc]);
int16_t arg1 = GetArg1(program[pc]);
if (IsInt(g[arg0]) && IsInt(g[arg1])) {
g[arg0].i = (uint64_t)g[arg0].i >> g[arg0].i;
pc++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: shr");
return 1;
}
goto *dynOpcodes[GetOpcode(program[pc])];
}

shrc:
{
int16_t arg0 = GetArg0(program[pc]);
if (IsInt(g[arg0])) {
int16_t constant = program[pc + 1];
g[arg0].i = (uint64_t)g[arg0].i >> constant;
pc += 2;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: shrc");
return 1;
}
goto *dynOpcodes[GetOpcode(program[pc])];
}

cshr:
{
int16_t arg0 = GetArg0(program[pc]);
if (IsInt(g[arg0])) {
int16_t constant = program[pc + 1];
g[arg0].i = (uint64_t)constant >> g[arg0].i;
pc += 2;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: cshr");
return 1;
}
goto *dynOpcodes[GetOpcode(program[pc])];
}

sar:
{
int16_t arg0 = GetArg0(program[pc]);
int16_t arg1 = GetArg1(program[pc]);
if (IsInt(g[arg0]) && IsInt(g[arg1])) {
g[arg0].i >>= g[arg1].i;
pc++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: sar");
return 1;
}
goto *dynOpcodes[GetOpcode(program[pc])];
}

sarc:
{
int16_t arg0 = GetArg0(program[pc]);
if (IsInt(g[arg0])) {
int16_t constant = program[pc + 1];
g[arg0].i >>= constant;
pc += 2;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: sarc");
return 1;
}
goto *dynOpcodes[GetOpcode(program[pc])];
}

csar:
{
int16_t arg0 = GetArg0(program[pc]);
if (IsInt(g[arg0])) {
int16_t constant = program[pc + 1];
g[arg0].i = constant >> g[arg0].i;
pc += 2;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: csar");
return 1;
}
goto *dynOpcodes[GetOpcode(program[pc])];
}

mov:
{
int16_t arg0 = GetArg0(program[pc]);
int16_t arg1 = GetArg1(program[pc]);
if (IsInt(g[arg0]) && IsInt(g[arg1])) {
g[arg0].i = g[arg1].i;
pc++;
}
else if (IsPointer(g[arg0]) && IsPointer(g[arg1])) {
g[arg0].tag = g[arg1].tag;
g[arg0].p = g[arg1].p;
pc++;
}
else if (IsInt(g[arg0]) && IsPointer(g[arg1])) {
g[arg0].p = g[arg1].p;
g[arg0].tag = g[arg1].tag;
pc++;
}
else if (IsPointer(g[arg0]) && IsInt(g[arg1])) {
g[arg0].i = g[arg1].i;
g[arg0].tag = 0;
pc++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: mov");
return 1;
}
goto *dynOpcodes[GetOpcode(program[pc])];
}

movc:
{
int16_t arg0 = GetArg0(program[pc]);
if (IsInt(g[arg0])) {
int16_t dconstant = program[pc +1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[arg0].i = constant;
pc += 2;
}
else if (IsPointer(g[arg0])) {
int16_t dconstant = program[pc +1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[arg0].i = constant;
g[arg0].tag = 0;
pc += 2;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: movc");
return 1;
}
goto *dynOpcodes[GetOpcode(program[pc])];
}

null:
{
int16_t arg0 = GetArg0(program[pc]);
if (IsPointer(g[arg0])) {
g[arg0].p = NULL;
pc++;
}
else if (IsInt(g[arg0])) {
g[arg0].p = NULL;
g[arg0].tag = 1;
pc++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: null");
return 1;
}
goto *dynOpcodes[GetOpcode(program[pc])];
}

getl:
{
int16_t arg0 = GetArg0(program[pc]);
if (IsInt(g[arg0])) {
int16_t constant = program[pc + 1];
value val = fp[constant];
if (val.tag != 0) {
g[arg0].tag = val.tag;
g[arg0].p = val.p;
}
else {
g[arg0].i = val.i;
}
pc += 2;
}
else if (IsPointer(g[arg0])) {
int16_t constant = program[pc + 1];
value val = fp[constant];
if (val.tag == 0) {
g[arg0].tag = 0;
g[arg0].i = val.i;
}
else {g[arg0].tag = val.tag;
g[arg0].p = val.p;
}
pc += 2;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getl");
return 1;
}
goto *dynOpcodes[GetOpcode(program[pc])];
}

setl:
{
int16_t arg0 = GetArg0(program[pc]);
if (IsInt(g[arg0])) {
int16_t constant = program[pc + 1];
value* vp = fp + constant;
(*vp).tag = g[arg0].tag;
(*vp).i = g[arg0].i;
pc += 2;
}
else if (IsPointer(g[arg0])) {
int16_t constant = program[pc + 1];
value* vp = fp + constant;
(*vp).tag = g[arg0].tag;
(*vp).p = g[arg0].p;
pc += 2;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setl");
return 1;
}
goto *dynOpcodes[GetOpcode(program[pc])];
}

geto:
{
int16_t arg0 = GetArg0(program[pc]);
int16_t arg1 = GetArg1(program[pc]);
int16_t arg2 = GetArg2(program[pc]);
if (IsInt(g[arg0]) && IsPointer(g[arg1]) && IsInt(g[arg2])) {
value val = ((object *)(g[arg1].p))->data[g[arg2].i];
if (val.tag != 0) {
g[arg0].tag = val.tag;
g[arg0].p = val.p;
}
else {
g[arg0].i = val.i;
}
pc++;
}
else if (IsPointer(g[arg0]) && IsPointer(g[arg1]) && IsInt(g[arg2])) {
int16_t constant = program[pc + 1];
value val = ((object *)(g[arg1].p))->data[g[arg2].i];
if (val.tag == 0) {
g[arg0].tag = 0;
g[arg0].i = val.i;
}
g[arg0].tag = val.tag;
g[arg0].p = val.p;
pc++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
goto *dynOpcodes[GetOpcode(program[pc])];
}

seto:
{
int16_t arg0 = GetArg0(program[pc]);
int16_t arg1 = GetArg1(program[pc]);
int16_t arg2 = GetArg2(program[pc]);
if (IsPointer(g[arg0]) && IsInt(g[arg1]) && IsInt(g[arg2])) {
value *vp = &(((object *)(g[arg0].p))->data[g[arg2].i]);
vp->tag =0;
vp->i = g[arg1].i;
pc++;
}
else if (IsPointer(g[arg0]) && IsPointer(g[arg1]) && IsInt(g[arg2])) {
value *vp = &(((object *)(g[arg0].p))->data[g[arg2].i]);
vp->tag = g[arg1].tag;
vp->p = g[arg1].p;
pc++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
goto *dynOpcodes[GetOpcode(program[pc])];
}

getb:
{
int16_t arg0 = GetArg0(program[pc]);
int16_t arg1 = GetArg1(program[pc]);
int16_t arg2 = GetArg2(program[pc]);
if (IsInt(g[arg0]) && IsPointer(g[arg1]) && IsInt(g[arg2])) {
uint8_t val = ((buffer *)(g[arg1].p))->data[g[arg2].i];
g[arg0].i = val;
pc++;
}
else if (IsPointer(g[arg0]) && IsPointer(g[arg1]) && IsInt(g[arg2])) {
uint8_t val = ((buffer *)(g[arg1].p))->data[g[arg2].i];
g[arg0].tag = 0;
g[arg0].i = val;
pc++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
goto *dynOpcodes[GetOpcode(program[pc])];
}

setb:
{
int16_t arg0 = GetArg0(program[pc]);
int16_t arg1 = GetArg1(program[pc]);
int16_t arg2 = GetArg2(program[pc]);
if (IsPointer(g[arg0]) && IsInt(g[arg1]) && IsInt(g[arg2])) {
buffer *base = (buffer *)(g[arg0].p);
base->data[g[arg1].i] = g[arg2].i;
pc++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
goto *dynOpcodes[GetOpcode(program[pc])];
}

jmp:
{
pc += program[pc+1];
goto *dynOpcodes[GetOpcode(program[pc])];
}

jmpf:
{
int16_t dconstant = program[pc +1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
pc += constant;
goto *dynOpcodes[GetOpcode(program[pc])];
}

swtch:
{
int16_t arg0 = GetArg0(program[pc]);
if (IsInt(g[arg0])) {
int16_t tableSize = program[pc + 1];
if(g[arg0].i < 0 || g[arg0].i >= tableSize) {
int16_t defaultJump = program[pc + tableSize + 2];
pc += defaultJump;
}
else {
int16_t jump = program[pc + g[arg0].i + 2];
pc += jump;
 }
}
else {
fprintf(stderr, "type error, illegal types used for instruction: swtch");
return 1;
}
goto *dynOpcodes[GetOpcode(program[pc])];
}

jcmp:
{
int16_t arg0 = GetArg0(program[pc]);
int16_t arg1 = GetArg1(program[pc]);
if (IsInt(g[arg0]) && IsInt(g[arg1])) {
if (g[arg0].i < g[arg1].i)
pc += program[pc + 1];
else if(g[arg0].i == g[arg1].i)
pc += program[pc + 2];
else
pc += program[pc + 3];
}
else if (IsPointer(g[arg0]) && IsPointer(g[arg1])) {
if (g[arg0].p == g[arg1].p)
pc += program[pc + 1];
else
pc += program[pc + 2];
}
else if (IsPointer(g[arg0]) && IsInt(g[arg1])) {
pc += 4;
}
else if (IsInt(g[arg0]) && IsPointer(g[arg1])) {
pc += 4;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: jcmp");
return 1;
}
goto *dynOpcodes[GetOpcode(program[pc])];
}

jcmpc:
{
int16_t arg0 = GetArg0(program[pc]);
if (IsInt(g[arg0])) {
int16_t dconstant = program[pc +1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
if (g[arg0].i < constant)
pc += program[pc + 2];
else if(g[arg0].i == constant)
pc += program[pc + 3];
else
pc += program[pc + 4];
}
else if (IsPointer(g[arg0])) {
pc += 5;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: jcmpc");
return 1;
}
goto *dynOpcodes[GetOpcode(program[pc])];
}

jnullp:
{
int16_t arg0 = GetArg0(program[pc]);
if (IsInt(g[arg0])) {
if (g[arg0].p == NULL)
pc += program[pc + 2];
else
pc += program[pc + 3];
}
else if (IsPointer(g[arg0])) {
pc += 5;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: jnullp");
return 1;
}
goto *dynOpcodes[GetOpcode(program[pc])];
}

call:
{
int64_t newpc = pc + program[pc + 1];
int64_t *sizep = (int64_t*)&program[newpc];
int64_t size = sizeof(stackframe) + sizeof(value) * (*sizep);
stackframe *base = (stackframe*)malloc(size);
if (base) {
base->fp = fp; base->pc = pc; base->ts = ts;
SaveRegisters(base->g);
value *newfp = base->l;
memcpy(newfp, fp + program[pc + 2], program[pc + 3]*sizeof(value));
fp = newfp;
pc = newpc + 4;
}
else {
fprintf(stderr, "malloc failed");
return 1;
}
goto *dynOpcodes[GetOpcode(program[pc])];
}

ret:
{
stackframe *cur = (stackframe*)((size_t)fp - sizeof(stackframe));
fp = cur->fp; pc = cur->pc; ts = (cur->ts & 0xF000) | (ts & 0x10800);
RestoreRegisters(cur->g);
free(cur);//probably does a thing 
if (fp == NULL)
return 0;
pc += 4;
goto *dynOpcodes[GetOpcode(program[pc])];
}

newo:
{
int16_t arg0 = GetArg0(program[pc]);
int16_t arg1 = GetArg1(program[pc]);
if (IsPointer(g[arg0]) && IsInt(g[arg1])) {
object *base = (object*)malloc(sizeof(object) + sizeof(value)*g[arg1].i);
if (base) {
base->sf = MakeSizeAndFlags(size,0);
g[arg0].tag = 2;
g[arg0].p = base;
}
else {
fprintf(stderr, "malloc failed");
return 1;
}
pc++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: newo");
return 1;
}
goto *dynOpcodes[GetOpcode(program[pc])];
}

newb:
{
int16_t arg0 = GetArg0(program[pc]);
int16_t arg1 = GetArg1(program[pc]);
if (IsPointer(g[arg0]) && IsInt(g[arg1])) {
buffer *base = (buffer*)malloc(sizeof(buffer) + sizeof(int8_t)*g[arg1].i);
if (base) {
    base->sf = MakeSizeAndFlags(g[arg1].i,0);
    g[arg0].tag = 4;
        g[arg0].p = base;
}
else {
    fprintf(stderr, "malloc failed");
    return 1;
}
pc++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: newb");
return 1;
}
goto *dynOpcodes[GetOpcode(program[pc])];
}

err:
{
int16_t derrdisp = program[pc +1];
int64_t errdisp = *((int64_t*)(&program[pc + derrdisp]));
fprintf(stderr, "err case"); 
pc++;
goto *dynOpcodes[GetOpcode(program[pc])];
}

in:
{
int16_t arg0 = GetArg0(program[pc]);
if (IsPointer(g[arg0])) {
buffer *bp = g[arg0].p;
int size = GetSize(bp->sf);
if (fgets(bp->data, size, stdin) == NULL) {
    if (feof(stdin))
        bp->data[0] = 3;
    else {
        fprintf(stderr, "input error");
        return 1;
    }
}
else {
    size_t ln = strlen(bp->data) - 1;
    if (bp->data[ln] == '\n')
        bp->data[ln] = '\0';
}
pc++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: in");
return 1;
}
goto *dynOpcodes[GetOpcode(program[pc])];
}

out:
{
int16_t arg0 = GetArg0(program[pc]);
if (IsPointer(g[arg0])) {
buffer *bp = g[arg0].p;
puts(bp->data);
pc++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: out");
return 1;
}
goto *dynOpcodes[GetOpcode(program[pc])];
}

error:
{
fprintf(stderr, "Error");
return 1;
}

undefined:
{
fprintf(stderr,"undefined");
return 1;
}

