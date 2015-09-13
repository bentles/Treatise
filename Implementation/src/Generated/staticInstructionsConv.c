add:
{
int16_t arg0 = GetArg0(*ip);
int16_t arg1 = GetArg1(*ip);
if (IsInt(g[arg0]) && IsInt(g[arg1])) {
g[arg0].i += g[arg1].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: add");
return 1;
}
#ifdef STATS
opcodeCounters[0].count++;
#endif /* STATS */
goto *dynOpcodes[GetOpcode(*ip)];
}

addc:
{
int16_t arg0 = GetArg0(*ip);
if (IsInt(g[arg0])) {
int16_t dconstant = *(ip +1);
int64_t constant = *((int64_t*)(ip + dconstant));
g[arg0].i += constant;
ip += 2;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: addc");
return 1;
}
#ifdef STATS
opcodeCounters[1].count++;
#endif /* STATS */
goto *dynOpcodes[GetOpcode(*ip)];
}

sub:
{
int16_t arg0 = GetArg0(*ip);
int16_t arg1 = GetArg1(*ip);
if (IsInt(g[arg0]) && IsInt(g[arg1])) {
g[arg0].i -= g[arg1].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: sub");
return 1;
}
#ifdef STATS
opcodeCounters[2].count++;
#endif /* STATS */
goto *dynOpcodes[GetOpcode(*ip)];
}

csub:
{
int16_t arg0 = GetArg0(*ip);
if (IsInt(g[arg0])) {
int16_t dconstant = *(ip +1);
int64_t constant = *((int64_t*)(ip + dconstant));
g[arg0].i = constant - g[arg0].i;
ip += 2;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: csub");
return 1;
}
#ifdef STATS
opcodeCounters[3].count++;
#endif /* STATS */
goto *dynOpcodes[GetOpcode(*ip)];
}

mul:
{
int16_t arg0 = GetArg0(*ip);
int16_t arg1 = GetArg1(*ip);
if (IsInt(g[arg0]) && IsInt(g[arg1])) {
g[arg0].i *= g[arg1].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: mul");
return 1;
}
#ifdef STATS
opcodeCounters[4].count++;
#endif /* STATS */
goto *dynOpcodes[GetOpcode(*ip)];
}

mulc:
{
int16_t arg0 = GetArg0(*ip);
if (IsInt(g[arg0])) {
int16_t dconstant = *(ip +1);
int64_t constant = *((int64_t*)(ip + dconstant));
g[arg0].i *= constant;
ip += 2;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: mulc");
return 1;
}
#ifdef STATS
opcodeCounters[5].count++;
#endif /* STATS */
goto *dynOpcodes[GetOpcode(*ip)];
}

div:
{
int16_t arg0 = GetArg0(*ip);
int16_t arg1 = GetArg1(*ip);
if (IsInt(g[arg0]) && IsInt(g[arg1])) {
int64_t divtemp = g[arg0].i / g[arg1].i;
int64_t modtemp = g[arg0].i % g[arg1].i;
g[0].i = modtemp;
g[0].tag = 0;
g[arg0].i = divtemp;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: div");
return 1;
}
#ifdef STATS
opcodeCounters[6].count++;
#endif /* STATS */
goto *dynOpcodes[GetOpcode(*ip)];
}

divc:
{
int16_t arg0 = GetArg0(*ip);
if (IsInt(g[arg0])) {
int16_t dconstant = *(ip +1);
int64_t constant = *((int64_t*)(ip + dconstant));
int64_t divtemp = g[arg0].i / constant;
int64_t modtemp = g[arg0].i % constant;
g[0].i = modtemp;
g[0].tag = 0;
g[arg0].i = divtemp;
ip += 2;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: divc");
return 1;
}
#ifdef STATS
opcodeCounters[7].count++;
#endif /* STATS */
goto *dynOpcodes[GetOpcode(*ip)];
}

and:
{
int16_t arg0 = GetArg0(*ip);
int16_t arg1 = GetArg1(*ip);
if (IsInt(g[arg0]) && IsInt(g[arg1])) {
g[arg0].i &= g[arg1].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: and");
return 1;
}
#ifdef STATS
opcodeCounters[8].count++;
#endif /* STATS */
goto *dynOpcodes[GetOpcode(*ip)];
}

andc:
{
int16_t arg0 = GetArg0(*ip);
if (IsInt(g[arg0])) {
int16_t dconstant = *(ip +1);
int64_t constant = *((int64_t*)(ip + dconstant));
g[arg0].i &= constant;
ip += 2;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: andc");
return 1;
}
#ifdef STATS
opcodeCounters[9].count++;
#endif /* STATS */
goto *dynOpcodes[GetOpcode(*ip)];
}

or:
{
int16_t arg0 = GetArg0(*ip);
int16_t arg1 = GetArg1(*ip);
if (IsInt(g[arg0]) && IsInt(g[arg1])) {
g[arg0].i |= g[arg1].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: or");
return 1;
}
#ifdef STATS
opcodeCounters[10].count++;
#endif /* STATS */
goto *dynOpcodes[GetOpcode(*ip)];
}

orc:
{
int16_t arg0 = GetArg0(*ip);
if (IsInt(g[arg0])) {
int16_t dconstant = *(ip +1);
int64_t constant = *((int64_t*)(ip + dconstant));
g[arg0].i |= constant;
ip += 2;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: orc");
return 1;
}
#ifdef STATS
opcodeCounters[11].count++;
#endif /* STATS */
goto *dynOpcodes[GetOpcode(*ip)];
}

xor:
{
int16_t arg0 = GetArg0(*ip);
int16_t arg1 = GetArg1(*ip);
if (IsInt(g[arg0]) && IsInt(g[arg1])) {
g[arg0].i ^= g[arg1].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: xor");
return 1;
}
#ifdef STATS
opcodeCounters[12].count++;
#endif /* STATS */
goto *dynOpcodes[GetOpcode(*ip)];
}

shl:
{
int16_t arg0 = GetArg0(*ip);
int16_t arg1 = GetArg1(*ip);
if (IsInt(g[arg0]) && IsInt(g[arg1])) {
g[arg0].i <<= g[arg1].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: shl");
return 1;
}
#ifdef STATS
opcodeCounters[13].count++;
#endif /* STATS */
goto *dynOpcodes[GetOpcode(*ip)];
}

shlc:
{
int16_t arg0 = GetArg0(*ip);
if (IsInt(g[arg0])) {
int16_t constant = *(ip + 1);
g[arg0].i <<= constant;
ip += 2;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: shlc");
return 1;
}
#ifdef STATS
opcodeCounters[14].count++;
#endif /* STATS */
goto *dynOpcodes[GetOpcode(*ip)];
}

cshl:
{
int16_t arg0 = GetArg0(*ip);
if (IsInt(g[arg0])) {
int16_t dconstant = *(ip +1);
int64_t constant = *((int64_t*)(ip + dconstant));
g[arg0].i = constant << g[arg0].i;
ip += 2;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: cshl");
return 1;
}
#ifdef STATS
opcodeCounters[15].count++;
#endif /* STATS */
goto *dynOpcodes[GetOpcode(*ip)];
}

shr:
{
int16_t arg0 = GetArg0(*ip);
int16_t arg1 = GetArg1(*ip);
if (IsInt(g[arg0]) && IsInt(g[arg1])) {
g[arg0].i = (int64_t)((uint64_t)g[arg0].i >> g[arg0].i);
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: shr");
return 1;
}
#ifdef STATS
opcodeCounters[16].count++;
#endif /* STATS */
goto *dynOpcodes[GetOpcode(*ip)];
}

shrc:
{
int16_t arg0 = GetArg0(*ip);
if (IsInt(g[arg0])) {
int16_t constant = *(ip + 1);
g[arg0].i = (int64_t)((uint64_t)g[arg0].i >> constant);
ip += 2;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: shrc");
return 1;
}
#ifdef STATS
opcodeCounters[17].count++;
#endif /* STATS */
goto *dynOpcodes[GetOpcode(*ip)];
}

cshr:
{
int16_t arg0 = GetArg0(*ip);
if (IsInt(g[arg0])) {
int16_t constant = *(ip + 1);
g[arg0].i = (uint64_t)constant >> g[arg0].i;
ip += 2;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: cshr");
return 1;
}
#ifdef STATS
opcodeCounters[18].count++;
#endif /* STATS */
goto *dynOpcodes[GetOpcode(*ip)];
}

sar:
{
int16_t arg0 = GetArg0(*ip);
int16_t arg1 = GetArg1(*ip);
if (IsInt(g[arg0]) && IsInt(g[arg1])) {
g[arg0].i >>= g[arg1].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: sar");
return 1;
}
#ifdef STATS
opcodeCounters[19].count++;
#endif /* STATS */
goto *dynOpcodes[GetOpcode(*ip)];
}

sarc:
{
int16_t arg0 = GetArg0(*ip);
if (IsInt(g[arg0])) {
int16_t constant = *(ip + 1);
g[arg0].i >>= constant;
ip += 2;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: sarc");
return 1;
}
#ifdef STATS
opcodeCounters[20].count++;
#endif /* STATS */
goto *dynOpcodes[GetOpcode(*ip)];
}

csar:
{
int16_t arg0 = GetArg0(*ip);
if (IsInt(g[arg0])) {
int16_t constant = *(ip + 1);
g[arg0].i = constant >> g[arg0].i;
ip += 2;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: csar");
return 1;
}
#ifdef STATS
opcodeCounters[21].count++;
#endif /* STATS */
goto *dynOpcodes[GetOpcode(*ip)];
}

mov:
{
int16_t arg0 = GetArg0(*ip);
int16_t arg1 = GetArg1(*ip);
if (IsInt(g[arg0]) && IsInt(g[arg1])) {
g[arg0].i = g[arg1].i;
ip++;
}
else if (IsPointer(g[arg0]) && IsPointer(g[arg1])) {
g[arg0].tag = g[arg1].tag;
g[arg0].p = g[arg1].p;
ip++;
}
else if (IsInt(g[arg0]) && IsPointer(g[arg1])) {
g[arg0].p = g[arg1].p;
g[arg0].tag = g[arg1].tag;
ip++;
}
else if (IsPointer(g[arg0]) && IsInt(g[arg1])) {
g[arg0].i = g[arg1].i;
g[arg0].tag = 0;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: mov");
return 1;
}
#ifdef STATS
opcodeCounters[22].count++;
#endif /* STATS */
goto *dynOpcodes[GetOpcode(*ip)];
}

movc:
{
int16_t arg0 = GetArg0(*ip);
if (IsInt(g[arg0])) {
int16_t dconstant = *(ip +1);
int64_t constant = *((int64_t*)(ip + dconstant));
g[arg0].i = constant;
ip += 2;
}
else if (IsPointer(g[arg0])) {
int16_t dconstant = *(ip +1);
int64_t constant = *((int64_t*)(ip + dconstant));
g[arg0].i = constant;
g[arg0].tag = 0;
ip += 2;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: movc");
return 1;
}
#ifdef STATS
opcodeCounters[23].count++;
#endif /* STATS */
goto *dynOpcodes[GetOpcode(*ip)];
}

null:
{
int16_t arg0 = GetArg0(*ip);
if (IsPointer(g[arg0])) {
g[arg0].p = NULL;
ip++;
}
else if (IsInt(g[arg0])) {
g[arg0].p = NULL;
g[arg0].tag = 1;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: null");
return 1;
}
#ifdef STATS
opcodeCounters[24].count++;
#endif /* STATS */
goto *dynOpcodes[GetOpcode(*ip)];
}

getl:
{
int16_t arg0 = GetArg0(*ip);
if (IsInt(g[arg0])) {
int16_t constant = *(ip + 1);
value val = fp[constant];
if (val.tag != 0) {
g[arg0].tag = val.tag;
g[arg0].p = val.p;
}
else {
g[arg0].i = val.i;
}
ip += 2;
}
else if (IsPointer(g[arg0])) {
int16_t constant = *(ip + 1);
value val = fp[constant];
if (val.tag == 0) {
g[arg0].tag = 0;
g[arg0].i = val.i;
}
else {g[arg0].tag = val.tag;
g[arg0].p = val.p;
}
ip += 2;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getl");
return 1;
}
#ifdef STATS
opcodeCounters[25].count++;
#endif /* STATS */
goto *dynOpcodes[GetOpcode(*ip)];
}

setl:
{
int16_t arg0 = GetArg0(*ip);
if (IsInt(g[arg0])) {
int16_t constant = *(ip + 1);
value* vp = fp + constant;
(*vp).tag = g[arg0].tag;
(*vp).i = g[arg0].i;
ip += 2;
}
else if (IsPointer(g[arg0])) {
int16_t constant = *(ip + 1);
value* vp = fp + constant;
(*vp).tag = g[arg0].tag;
(*vp).p = g[arg0].p;
ip += 2;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setl");
return 1;
}
#ifdef STATS
opcodeCounters[26].count++;
#endif /* STATS */
goto *dynOpcodes[GetOpcode(*ip)];
}

geto:
{
int16_t arg0 = GetArg0(*ip);
int16_t arg1 = GetArg1(*ip);
int16_t arg2 = GetArg2(*ip);
if (IsInt(g[arg0]) && IsPointer(g[arg1]) && IsInt(g[arg2])) {
value val = ((object *)(g[arg1].p))->data[g[arg2].i];
if (val.tag != 0) {
g[arg0].tag = val.tag;
g[arg0].p = val.p;
}
else {
g[arg0].i = val.i;
}
ip++;
}
else if (IsPointer(g[arg0]) && IsPointer(g[arg1]) && IsInt(g[arg2])) {
value val = ((object *)(g[arg1].p))->data[g[arg2].i];
if (val.tag == 0) {
g[arg0].tag = 0;
g[arg0].i = val.i;
}
g[arg0].tag = val.tag;
g[arg0].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[27].count++;
#endif /* STATS */
goto *dynOpcodes[GetOpcode(*ip)];
}

seto:
{
int16_t arg0 = GetArg0(*ip);
int16_t arg1 = GetArg1(*ip);
int16_t arg2 = GetArg2(*ip);
if (IsPointer(g[arg0]) && IsInt(g[arg1]) && IsInt(g[arg2])) {
value *vp = &(((object *)(g[arg0].p))->data[g[arg1].i]);
vp->tag =0;
vp->i = g[arg2].i;
ip++;
}
else if (IsPointer(g[arg0]) && IsInt(g[arg1]) && IsPointer(g[arg2])) {
value *vp = &(((object *)(g[arg0].p))->data[g[arg1].i]);
vp->tag = g[arg2].tag;
vp->p = g[arg2].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[28].count++;
#endif /* STATS */
goto *dynOpcodes[GetOpcode(*ip)];
}

getb:
{
int16_t arg0 = GetArg0(*ip);
int16_t arg1 = GetArg1(*ip);
int16_t arg2 = GetArg2(*ip);
if (IsInt(g[arg0]) && IsPointer(g[arg1]) && IsInt(g[arg2])) {
uint8_t val = ((buffer *)(g[arg1].p))->data[g[arg2].i];
g[arg0].i = val;
ip++;
}
else if (IsPointer(g[arg0]) && IsPointer(g[arg1]) && IsInt(g[arg2])) {
uint8_t val = ((buffer *)(g[arg1].p))->data[g[arg2].i];
g[arg0].tag = 0;
g[arg0].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[29].count++;
#endif /* STATS */
goto *dynOpcodes[GetOpcode(*ip)];
}

setb:
{
int16_t arg0 = GetArg0(*ip);
int16_t arg1 = GetArg1(*ip);
int16_t arg2 = GetArg2(*ip);
if (IsPointer(g[arg0]) && IsInt(g[arg1]) && IsInt(g[arg2])) {
buffer *base = (buffer *)(g[arg0].p);
base->data[g[arg1].i] = g[arg2].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[30].count++;
#endif /* STATS */
goto *dynOpcodes[GetOpcode(*ip)];
}

jmp:
{
ip += *(ip+1);
#ifdef STATS
opcodeCounters[31].count++;
#endif /* STATS */
goto *dynOpcodes[GetOpcode(*ip)];
}

jmpf:
{
int16_t dconstant = *(ip +1);
int64_t constant = *((int64_t*)(ip + dconstant));
ip += constant;
#ifdef STATS
opcodeCounters[32].count++;
#endif /* STATS */
goto *dynOpcodes[GetOpcode(*ip)];
}

swtch:
{
int16_t arg0 = GetArg0(*ip);
if (IsInt(g[arg0])) {
int16_t tableSize = *(ip + 1);
if(g[arg0].i < 0 || g[arg0].i >= tableSize) {
int16_t defaultJump = *(ip + tableSize + 2);
ip += defaultJump;
}
else {
int16_t jump = *(ip + g[arg0].i + 2);
ip += jump;
 }
}
else {
fprintf(stderr, "type error, illegal types used for instruction: swtch");
return 1;
}
#ifdef STATS
opcodeCounters[33].count++;
#endif /* STATS */
goto *dynOpcodes[GetOpcode(*ip)];
}

jcmp:
{
int16_t arg0 = GetArg0(*ip);
int16_t arg1 = GetArg1(*ip);
if (IsInt(g[arg0]) && IsInt(g[arg1])) {
if (g[arg0].i < g[arg1].i)
ip += *(ip + 1);
else if(g[arg0].i == g[arg1].i)
ip += *(ip + 2);
else
ip += *(ip + 3);
}
else if (IsPointer(g[arg0]) && IsPointer(g[arg1])) {
if (g[arg0].p == g[arg1].p)
ip += *(ip + 1);
else
ip += *(ip + 2);
}
else if (IsPointer(g[arg0]) && IsInt(g[arg1])) {
ip += 4;
}
else if (IsInt(g[arg0]) && IsPointer(g[arg1])) {
ip += 4;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: jcmp");
return 1;
}
#ifdef STATS
opcodeCounters[34].count++;
#endif /* STATS */
goto *dynOpcodes[GetOpcode(*ip)];
}

jcmpc:
{
int16_t arg0 = GetArg0(*ip);
if (IsInt(g[arg0])) {
int16_t dconstant = *(ip +1);
int64_t constant = *((int64_t*)(ip + dconstant));
if (g[arg0].i < constant)
ip += *(ip + 2);
else if(g[arg0].i == constant)
ip += *(ip + 3);
else
ip += *(ip + 4);
}
else if (IsPointer(g[arg0])) {
ip += 5;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: jcmpc");
return 1;
}
#ifdef STATS
opcodeCounters[35].count++;
#endif /* STATS */
goto *dynOpcodes[GetOpcode(*ip)];
}

jnullp:
{
int16_t arg0 = GetArg0(*ip);
if (IsPointer(g[arg0])) {
if (g[arg0].p != NULL)
ip += *(ip + 1);
else
ip += *(ip + 2);
}
else if (IsInt(g[arg0])) {
ip += 5;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: jnullp");
return 1;
}
#ifdef STATS
opcodeCounters[36].count++;
#endif /* STATS */
goto *dynOpcodes[GetOpcode(*ip)];
}

call:
{
int16_t *newip = ip + *(ip + 1);
int64_t *sizep = (int64_t*)newip;
int64_t size = sizeof(stackframe) + sizeof(value) * (*sizep);
stackframe *base = (stackframe*)malloc(size);
if (base) {
base->fp = fp; base->ip = ip; base->ts = ts;
SaveRegisters(base->g);
value *newfp = base->l;
memcpy(newfp, fp + *(ip + 2), *(ip + 3)*sizeof(value));
fp = newfp;
ip = newip + 4;
}
else {
fprintf(stderr, "malloc failed");
return 1;
}
#ifdef STATS
opcodeCounters[37].count++;
#endif /* STATS */
goto *dynOpcodes[GetOpcode(*ip)];
}

ret:
{
stackframe *cur = (stackframe*)((size_t)fp - sizeof(stackframe));
fp = cur->fp; ip = cur->ip; ts = (cur->ts & 0xF000) | (ts & 0x10800);
RestoreRegisters(cur->g);
free(cur);//probably does a thing 
if (fp == NULL)
{
    #ifdef STATS
    printStats();
    #endif /* STATS */
    return 0;
}
ip += 4;
#ifdef STATS
opcodeCounters[38].count++;
#endif /* STATS */
goto *dynOpcodes[GetOpcode(*ip)];
}

newo:
{
int16_t arg0 = GetArg0(*ip);
int16_t arg1 = GetArg1(*ip);
if (IsInt(g[arg1])) {
object *base = (object*)malloc(sizeof(object) + sizeof(value)* g[arg1].i);
if (base) {
base->sf = MakeSizeAndFlags(size,0);
g[arg0].tag = 2;
g[arg0].p = base;
}
else {
fprintf(stderr, "malloc failed");
return 1;
}
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: newo");
return 1;
}
#ifdef STATS
opcodeCounters[39].count++;
#endif /* STATS */
goto *dynOpcodes[GetOpcode(*ip)];
}

newb:
{
int16_t arg0 = GetArg0(*ip);
int16_t arg1 = GetArg1(*ip);
if (IsInt(g[arg1])) {
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
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: newb");
return 1;
}
#ifdef STATS
opcodeCounters[40].count++;
#endif /* STATS */
goto *dynOpcodes[GetOpcode(*ip)];
}

movsc:
{
int16_t arg0 = GetArg0(*ip);
int16_t dconstant = *(ip +1);
int64_t constant = *((int64_t*)(ip + dconstant));
buffer *base = (buffer*)malloc(sizeof(buffer) + sizeof(int8_t)*constant);
if (base) {
    base->sf = MakeSizeAndFlags(constant,0);
    strcpy((int8_t *)&(base->data) ,(int8_t *)(ip + dconstant + 4));
    g[arg0].tag = 4;
        g[arg0].p = base;
}
else {
    fprintf(stderr, "malloc failed");
    return 1;
}
ip += 2;
#ifdef STATS
opcodeCounters[41].count++;
#endif /* STATS */
goto *dynOpcodes[GetOpcode(*ip)];
}

err:
{
int16_t derrdisp = *(ip +1);
int64_t errdisp = *((int64_t*)(ip + derrdisp));
printf("0:%d 1:%d 2:%d 3:%d 4:%d 5:%d\n", g[0].i, g[1].i, g[2].i, g[3].i,  g[4].i, g[5].i); 
ip++;
#ifdef STATS
opcodeCounters[42].count++;
#endif /* STATS */
goto *dynOpcodes[GetOpcode(*ip)];
}

in:
{
int16_t arg0 = GetArg0(*ip);
if (IsPointer(g[arg0])) {
buffer *bp = g[arg0].p;
int size = GetSize(bp->sf);
if (fgets(bp->data, size, stdin) == NULL) {
    if (feof(stdin))
        bp->data[0] = 0;
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
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: in");
return 1;
}
#ifdef STATS
opcodeCounters[43].count++;
#endif /* STATS */
goto *dynOpcodes[GetOpcode(*ip)];
}

out:
{
int16_t arg0 = GetArg0(*ip);
if (IsPointer(g[arg0])) {
buffer *bp = g[arg0].p;
fwrite(bp->data, sizeof(int8_t), GetSize(bp->sf), stdout);
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: out");
return 1;
}
#ifdef STATS
opcodeCounters[44].count++;
#endif /* STATS */
goto *dynOpcodes[GetOpcode(*ip)];
}

print:
{
int16_t arg0 = GetArg0(*ip);
if (IsPointer(g[arg0])) {
buffer *bp = g[arg0].p;
puts(bp->data);
ip++;
}
else if (IsInt(g[arg0])) {
printf("%d\n", g[arg0].i);
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: print");
return 1;
}
#ifdef STATS
opcodeCounters[45].count++;
#endif /* STATS */
goto *dynOpcodes[GetOpcode(*ip)];
}

error:
{
fprintf(stdout, "Error");
return 1;
}

undefined:
{
fprintf(stdout,"undefined");
return 1;
}

