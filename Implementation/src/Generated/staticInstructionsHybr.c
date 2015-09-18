add_0_0:
{
if (IsInt(g[0]) && IsInt(g[0])) {
g[0].i += g[0].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: add");
return 1;
}
#ifdef STATS
opcodeCounters[0].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

add_0_1:
{
if (IsInt(g[0]) && IsInt(g[1])) {
g[0].i += g[1].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: add");
return 1;
}
#ifdef STATS
opcodeCounters[1].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

add_0_2:
{
if (IsInt(g[0]) && IsInt(g[2])) {
g[0].i += g[2].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: add");
return 1;
}
#ifdef STATS
opcodeCounters[2].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

add_0_3:
{
if (IsInt(g[0]) && IsInt(g[3])) {
g[0].i += g[3].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: add");
return 1;
}
#ifdef STATS
opcodeCounters[3].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

add_0_4:
{
if (IsInt(g[0]) && IsInt(g[4])) {
g[0].i += g[4].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: add");
return 1;
}
#ifdef STATS
opcodeCounters[4].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

add_0_5:
{
if (IsInt(g[0]) && IsInt(g[5])) {
g[0].i += g[5].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: add");
return 1;
}
#ifdef STATS
opcodeCounters[5].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

add_1_0:
{
if (IsInt(g[1]) && IsInt(g[0])) {
g[1].i += g[0].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: add");
return 1;
}
#ifdef STATS
opcodeCounters[6].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

add_1_1:
{
if (IsInt(g[1]) && IsInt(g[1])) {
g[1].i += g[1].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: add");
return 1;
}
#ifdef STATS
opcodeCounters[7].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

add_1_2:
{
if (IsInt(g[1]) && IsInt(g[2])) {
g[1].i += g[2].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: add");
return 1;
}
#ifdef STATS
opcodeCounters[8].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

add_1_3:
{
if (IsInt(g[1]) && IsInt(g[3])) {
g[1].i += g[3].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: add");
return 1;
}
#ifdef STATS
opcodeCounters[9].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

add_1_4:
{
if (IsInt(g[1]) && IsInt(g[4])) {
g[1].i += g[4].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: add");
return 1;
}
#ifdef STATS
opcodeCounters[10].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

add_1_5:
{
if (IsInt(g[1]) && IsInt(g[5])) {
g[1].i += g[5].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: add");
return 1;
}
#ifdef STATS
opcodeCounters[11].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

add_2_0:
{
if (IsInt(g[2]) && IsInt(g[0])) {
g[2].i += g[0].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: add");
return 1;
}
#ifdef STATS
opcodeCounters[12].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

add_2_1:
{
if (IsInt(g[2]) && IsInt(g[1])) {
g[2].i += g[1].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: add");
return 1;
}
#ifdef STATS
opcodeCounters[13].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

add_2_2:
{
if (IsInt(g[2]) && IsInt(g[2])) {
g[2].i += g[2].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: add");
return 1;
}
#ifdef STATS
opcodeCounters[14].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

add_2_3:
{
if (IsInt(g[2]) && IsInt(g[3])) {
g[2].i += g[3].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: add");
return 1;
}
#ifdef STATS
opcodeCounters[15].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

add_2_4:
{
if (IsInt(g[2]) && IsInt(g[4])) {
g[2].i += g[4].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: add");
return 1;
}
#ifdef STATS
opcodeCounters[16].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

add_2_5:
{
if (IsInt(g[2]) && IsInt(g[5])) {
g[2].i += g[5].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: add");
return 1;
}
#ifdef STATS
opcodeCounters[17].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

add_3_0:
{
if (IsInt(g[3]) && IsInt(g[0])) {
g[3].i += g[0].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: add");
return 1;
}
#ifdef STATS
opcodeCounters[18].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

add_3_1:
{
if (IsInt(g[3]) && IsInt(g[1])) {
g[3].i += g[1].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: add");
return 1;
}
#ifdef STATS
opcodeCounters[19].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

add_3_2:
{
if (IsInt(g[3]) && IsInt(g[2])) {
g[3].i += g[2].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: add");
return 1;
}
#ifdef STATS
opcodeCounters[20].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

add_3_3:
{
if (IsInt(g[3]) && IsInt(g[3])) {
g[3].i += g[3].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: add");
return 1;
}
#ifdef STATS
opcodeCounters[21].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

add_3_4:
{
if (IsInt(g[3]) && IsInt(g[4])) {
g[3].i += g[4].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: add");
return 1;
}
#ifdef STATS
opcodeCounters[22].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

add_3_5:
{
if (IsInt(g[3]) && IsInt(g[5])) {
g[3].i += g[5].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: add");
return 1;
}
#ifdef STATS
opcodeCounters[23].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

add_4_0:
{
if (IsInt(g[4]) && IsInt(g[0])) {
g[4].i += g[0].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: add");
return 1;
}
#ifdef STATS
opcodeCounters[24].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

add_4_1:
{
if (IsInt(g[4]) && IsInt(g[1])) {
g[4].i += g[1].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: add");
return 1;
}
#ifdef STATS
opcodeCounters[25].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

add_4_2:
{
if (IsInt(g[4]) && IsInt(g[2])) {
g[4].i += g[2].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: add");
return 1;
}
#ifdef STATS
opcodeCounters[26].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

add_4_3:
{
if (IsInt(g[4]) && IsInt(g[3])) {
g[4].i += g[3].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: add");
return 1;
}
#ifdef STATS
opcodeCounters[27].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

add_4_4:
{
if (IsInt(g[4]) && IsInt(g[4])) {
g[4].i += g[4].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: add");
return 1;
}
#ifdef STATS
opcodeCounters[28].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

add_4_5:
{
if (IsInt(g[4]) && IsInt(g[5])) {
g[4].i += g[5].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: add");
return 1;
}
#ifdef STATS
opcodeCounters[29].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

add_5_0:
{
if (IsInt(g[5]) && IsInt(g[0])) {
g[5].i += g[0].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: add");
return 1;
}
#ifdef STATS
opcodeCounters[30].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

add_5_1:
{
if (IsInt(g[5]) && IsInt(g[1])) {
g[5].i += g[1].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: add");
return 1;
}
#ifdef STATS
opcodeCounters[31].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

add_5_2:
{
if (IsInt(g[5]) && IsInt(g[2])) {
g[5].i += g[2].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: add");
return 1;
}
#ifdef STATS
opcodeCounters[32].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

add_5_3:
{
if (IsInt(g[5]) && IsInt(g[3])) {
g[5].i += g[3].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: add");
return 1;
}
#ifdef STATS
opcodeCounters[33].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

add_5_4:
{
if (IsInt(g[5]) && IsInt(g[4])) {
g[5].i += g[4].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: add");
return 1;
}
#ifdef STATS
opcodeCounters[34].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

add_5_5:
{
if (IsInt(g[5]) && IsInt(g[5])) {
g[5].i += g[5].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: add");
return 1;
}
#ifdef STATS
opcodeCounters[35].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

addc_0:
{
if (IsInt(g[0])) {
int16_t dconstant = *(ip +1);
int64_t constant = *((int64_t*)(ip + dconstant));
g[0].i += constant;
ip += 2;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: addc");
return 1;
}
#ifdef STATS
opcodeCounters[36].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

addc_1:
{
if (IsInt(g[1])) {
int16_t dconstant = *(ip +1);
int64_t constant = *((int64_t*)(ip + dconstant));
g[1].i += constant;
ip += 2;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: addc");
return 1;
}
#ifdef STATS
opcodeCounters[37].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

addc_2:
{
if (IsInt(g[2])) {
int16_t dconstant = *(ip +1);
int64_t constant = *((int64_t*)(ip + dconstant));
g[2].i += constant;
ip += 2;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: addc");
return 1;
}
#ifdef STATS
opcodeCounters[38].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

addc_3:
{
if (IsInt(g[3])) {
int16_t dconstant = *(ip +1);
int64_t constant = *((int64_t*)(ip + dconstant));
g[3].i += constant;
ip += 2;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: addc");
return 1;
}
#ifdef STATS
opcodeCounters[39].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

addc_4:
{
if (IsInt(g[4])) {
int16_t dconstant = *(ip +1);
int64_t constant = *((int64_t*)(ip + dconstant));
g[4].i += constant;
ip += 2;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: addc");
return 1;
}
#ifdef STATS
opcodeCounters[40].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

addc_5:
{
if (IsInt(g[5])) {
int16_t dconstant = *(ip +1);
int64_t constant = *((int64_t*)(ip + dconstant));
g[5].i += constant;
ip += 2;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: addc");
return 1;
}
#ifdef STATS
opcodeCounters[41].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

sub_0_1:
{
if (IsInt(g[0]) && IsInt(g[1])) {
g[0].i -= g[1].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: sub");
return 1;
}
#ifdef STATS
opcodeCounters[42].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

sub_0_2:
{
if (IsInt(g[0]) && IsInt(g[2])) {
g[0].i -= g[2].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: sub");
return 1;
}
#ifdef STATS
opcodeCounters[43].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

sub_0_3:
{
if (IsInt(g[0]) && IsInt(g[3])) {
g[0].i -= g[3].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: sub");
return 1;
}
#ifdef STATS
opcodeCounters[44].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

sub_0_4:
{
if (IsInt(g[0]) && IsInt(g[4])) {
g[0].i -= g[4].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: sub");
return 1;
}
#ifdef STATS
opcodeCounters[45].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

sub_0_5:
{
if (IsInt(g[0]) && IsInt(g[5])) {
g[0].i -= g[5].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: sub");
return 1;
}
#ifdef STATS
opcodeCounters[46].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

sub_1_0:
{
if (IsInt(g[1]) && IsInt(g[0])) {
g[1].i -= g[0].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: sub");
return 1;
}
#ifdef STATS
opcodeCounters[47].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

sub_1_2:
{
if (IsInt(g[1]) && IsInt(g[2])) {
g[1].i -= g[2].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: sub");
return 1;
}
#ifdef STATS
opcodeCounters[48].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

sub_1_3:
{
if (IsInt(g[1]) && IsInt(g[3])) {
g[1].i -= g[3].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: sub");
return 1;
}
#ifdef STATS
opcodeCounters[49].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

sub_1_4:
{
if (IsInt(g[1]) && IsInt(g[4])) {
g[1].i -= g[4].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: sub");
return 1;
}
#ifdef STATS
opcodeCounters[50].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

sub_1_5:
{
if (IsInt(g[1]) && IsInt(g[5])) {
g[1].i -= g[5].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: sub");
return 1;
}
#ifdef STATS
opcodeCounters[51].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

sub_2_0:
{
if (IsInt(g[2]) && IsInt(g[0])) {
g[2].i -= g[0].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: sub");
return 1;
}
#ifdef STATS
opcodeCounters[52].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

sub_2_1:
{
if (IsInt(g[2]) && IsInt(g[1])) {
g[2].i -= g[1].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: sub");
return 1;
}
#ifdef STATS
opcodeCounters[53].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

sub_2_3:
{
if (IsInt(g[2]) && IsInt(g[3])) {
g[2].i -= g[3].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: sub");
return 1;
}
#ifdef STATS
opcodeCounters[54].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

sub_2_4:
{
if (IsInt(g[2]) && IsInt(g[4])) {
g[2].i -= g[4].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: sub");
return 1;
}
#ifdef STATS
opcodeCounters[55].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

sub_2_5:
{
if (IsInt(g[2]) && IsInt(g[5])) {
g[2].i -= g[5].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: sub");
return 1;
}
#ifdef STATS
opcodeCounters[56].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

sub_3_0:
{
if (IsInt(g[3]) && IsInt(g[0])) {
g[3].i -= g[0].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: sub");
return 1;
}
#ifdef STATS
opcodeCounters[57].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

sub_3_1:
{
if (IsInt(g[3]) && IsInt(g[1])) {
g[3].i -= g[1].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: sub");
return 1;
}
#ifdef STATS
opcodeCounters[58].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

sub_3_2:
{
if (IsInt(g[3]) && IsInt(g[2])) {
g[3].i -= g[2].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: sub");
return 1;
}
#ifdef STATS
opcodeCounters[59].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

sub_3_4:
{
if (IsInt(g[3]) && IsInt(g[4])) {
g[3].i -= g[4].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: sub");
return 1;
}
#ifdef STATS
opcodeCounters[60].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

sub_3_5:
{
if (IsInt(g[3]) && IsInt(g[5])) {
g[3].i -= g[5].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: sub");
return 1;
}
#ifdef STATS
opcodeCounters[61].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

sub_4_0:
{
if (IsInt(g[4]) && IsInt(g[0])) {
g[4].i -= g[0].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: sub");
return 1;
}
#ifdef STATS
opcodeCounters[62].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

sub_4_1:
{
if (IsInt(g[4]) && IsInt(g[1])) {
g[4].i -= g[1].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: sub");
return 1;
}
#ifdef STATS
opcodeCounters[63].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

sub_4_2:
{
if (IsInt(g[4]) && IsInt(g[2])) {
g[4].i -= g[2].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: sub");
return 1;
}
#ifdef STATS
opcodeCounters[64].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

sub_4_3:
{
if (IsInt(g[4]) && IsInt(g[3])) {
g[4].i -= g[3].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: sub");
return 1;
}
#ifdef STATS
opcodeCounters[65].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

sub_4_5:
{
if (IsInt(g[4]) && IsInt(g[5])) {
g[4].i -= g[5].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: sub");
return 1;
}
#ifdef STATS
opcodeCounters[66].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

sub_5_0:
{
if (IsInt(g[5]) && IsInt(g[0])) {
g[5].i -= g[0].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: sub");
return 1;
}
#ifdef STATS
opcodeCounters[67].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

sub_5_1:
{
if (IsInt(g[5]) && IsInt(g[1])) {
g[5].i -= g[1].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: sub");
return 1;
}
#ifdef STATS
opcodeCounters[68].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

sub_5_2:
{
if (IsInt(g[5]) && IsInt(g[2])) {
g[5].i -= g[2].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: sub");
return 1;
}
#ifdef STATS
opcodeCounters[69].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

sub_5_3:
{
if (IsInt(g[5]) && IsInt(g[3])) {
g[5].i -= g[3].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: sub");
return 1;
}
#ifdef STATS
opcodeCounters[70].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

sub_5_4:
{
if (IsInt(g[5]) && IsInt(g[4])) {
g[5].i -= g[4].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: sub");
return 1;
}
#ifdef STATS
opcodeCounters[71].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

csub_0:
{
if (IsInt(g[0])) {
int16_t dconstant = *(ip +1);
int64_t constant = *((int64_t*)(ip + dconstant));
g[0].i = constant - g[0].i;
ip += 2;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: csub");
return 1;
}
#ifdef STATS
opcodeCounters[72].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

csub_1:
{
if (IsInt(g[1])) {
int16_t dconstant = *(ip +1);
int64_t constant = *((int64_t*)(ip + dconstant));
g[1].i = constant - g[1].i;
ip += 2;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: csub");
return 1;
}
#ifdef STATS
opcodeCounters[73].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

csub_2:
{
if (IsInt(g[2])) {
int16_t dconstant = *(ip +1);
int64_t constant = *((int64_t*)(ip + dconstant));
g[2].i = constant - g[2].i;
ip += 2;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: csub");
return 1;
}
#ifdef STATS
opcodeCounters[74].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

csub_3:
{
if (IsInt(g[3])) {
int16_t dconstant = *(ip +1);
int64_t constant = *((int64_t*)(ip + dconstant));
g[3].i = constant - g[3].i;
ip += 2;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: csub");
return 1;
}
#ifdef STATS
opcodeCounters[75].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

csub_4:
{
if (IsInt(g[4])) {
int16_t dconstant = *(ip +1);
int64_t constant = *((int64_t*)(ip + dconstant));
g[4].i = constant - g[4].i;
ip += 2;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: csub");
return 1;
}
#ifdef STATS
opcodeCounters[76].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

csub_5:
{
if (IsInt(g[5])) {
int16_t dconstant = *(ip +1);
int64_t constant = *((int64_t*)(ip + dconstant));
g[5].i = constant - g[5].i;
ip += 2;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: csub");
return 1;
}
#ifdef STATS
opcodeCounters[77].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

mul_0_0:
{
if (IsInt(g[0]) && IsInt(g[0])) {
g[0].i *= g[0].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: mul");
return 1;
}
#ifdef STATS
opcodeCounters[78].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

mul_0_1:
{
if (IsInt(g[0]) && IsInt(g[1])) {
g[0].i *= g[1].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: mul");
return 1;
}
#ifdef STATS
opcodeCounters[79].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

mul_0_2:
{
if (IsInt(g[0]) && IsInt(g[2])) {
g[0].i *= g[2].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: mul");
return 1;
}
#ifdef STATS
opcodeCounters[80].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

mul_0_3:
{
if (IsInt(g[0]) && IsInt(g[3])) {
g[0].i *= g[3].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: mul");
return 1;
}
#ifdef STATS
opcodeCounters[81].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

mul_0_4:
{
if (IsInt(g[0]) && IsInt(g[4])) {
g[0].i *= g[4].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: mul");
return 1;
}
#ifdef STATS
opcodeCounters[82].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

mul_0_5:
{
if (IsInt(g[0]) && IsInt(g[5])) {
g[0].i *= g[5].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: mul");
return 1;
}
#ifdef STATS
opcodeCounters[83].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

mul_1_0:
{
if (IsInt(g[1]) && IsInt(g[0])) {
g[1].i *= g[0].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: mul");
return 1;
}
#ifdef STATS
opcodeCounters[84].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

mul_1_1:
{
if (IsInt(g[1]) && IsInt(g[1])) {
g[1].i *= g[1].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: mul");
return 1;
}
#ifdef STATS
opcodeCounters[85].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

mul_1_2:
{
if (IsInt(g[1]) && IsInt(g[2])) {
g[1].i *= g[2].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: mul");
return 1;
}
#ifdef STATS
opcodeCounters[86].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

mul_1_3:
{
if (IsInt(g[1]) && IsInt(g[3])) {
g[1].i *= g[3].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: mul");
return 1;
}
#ifdef STATS
opcodeCounters[87].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

mul_1_4:
{
if (IsInt(g[1]) && IsInt(g[4])) {
g[1].i *= g[4].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: mul");
return 1;
}
#ifdef STATS
opcodeCounters[88].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

mul_1_5:
{
if (IsInt(g[1]) && IsInt(g[5])) {
g[1].i *= g[5].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: mul");
return 1;
}
#ifdef STATS
opcodeCounters[89].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

mul_2_0:
{
if (IsInt(g[2]) && IsInt(g[0])) {
g[2].i *= g[0].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: mul");
return 1;
}
#ifdef STATS
opcodeCounters[90].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

mul_2_1:
{
if (IsInt(g[2]) && IsInt(g[1])) {
g[2].i *= g[1].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: mul");
return 1;
}
#ifdef STATS
opcodeCounters[91].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

mul_2_2:
{
if (IsInt(g[2]) && IsInt(g[2])) {
g[2].i *= g[2].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: mul");
return 1;
}
#ifdef STATS
opcodeCounters[92].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

mul_2_3:
{
if (IsInt(g[2]) && IsInt(g[3])) {
g[2].i *= g[3].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: mul");
return 1;
}
#ifdef STATS
opcodeCounters[93].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

mul_2_4:
{
if (IsInt(g[2]) && IsInt(g[4])) {
g[2].i *= g[4].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: mul");
return 1;
}
#ifdef STATS
opcodeCounters[94].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

mul_2_5:
{
if (IsInt(g[2]) && IsInt(g[5])) {
g[2].i *= g[5].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: mul");
return 1;
}
#ifdef STATS
opcodeCounters[95].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

mul_3_0:
{
if (IsInt(g[3]) && IsInt(g[0])) {
g[3].i *= g[0].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: mul");
return 1;
}
#ifdef STATS
opcodeCounters[96].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

mul_3_1:
{
if (IsInt(g[3]) && IsInt(g[1])) {
g[3].i *= g[1].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: mul");
return 1;
}
#ifdef STATS
opcodeCounters[97].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

mul_3_2:
{
if (IsInt(g[3]) && IsInt(g[2])) {
g[3].i *= g[2].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: mul");
return 1;
}
#ifdef STATS
opcodeCounters[98].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

mul_3_3:
{
if (IsInt(g[3]) && IsInt(g[3])) {
g[3].i *= g[3].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: mul");
return 1;
}
#ifdef STATS
opcodeCounters[99].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

mul_3_4:
{
if (IsInt(g[3]) && IsInt(g[4])) {
g[3].i *= g[4].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: mul");
return 1;
}
#ifdef STATS
opcodeCounters[100].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

mul_3_5:
{
if (IsInt(g[3]) && IsInt(g[5])) {
g[3].i *= g[5].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: mul");
return 1;
}
#ifdef STATS
opcodeCounters[101].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

mul_4_0:
{
if (IsInt(g[4]) && IsInt(g[0])) {
g[4].i *= g[0].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: mul");
return 1;
}
#ifdef STATS
opcodeCounters[102].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

mul_4_1:
{
if (IsInt(g[4]) && IsInt(g[1])) {
g[4].i *= g[1].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: mul");
return 1;
}
#ifdef STATS
opcodeCounters[103].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

mul_4_2:
{
if (IsInt(g[4]) && IsInt(g[2])) {
g[4].i *= g[2].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: mul");
return 1;
}
#ifdef STATS
opcodeCounters[104].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

mul_4_3:
{
if (IsInt(g[4]) && IsInt(g[3])) {
g[4].i *= g[3].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: mul");
return 1;
}
#ifdef STATS
opcodeCounters[105].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

mul_4_4:
{
if (IsInt(g[4]) && IsInt(g[4])) {
g[4].i *= g[4].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: mul");
return 1;
}
#ifdef STATS
opcodeCounters[106].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

mul_4_5:
{
if (IsInt(g[4]) && IsInt(g[5])) {
g[4].i *= g[5].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: mul");
return 1;
}
#ifdef STATS
opcodeCounters[107].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

mul_5_0:
{
if (IsInt(g[5]) && IsInt(g[0])) {
g[5].i *= g[0].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: mul");
return 1;
}
#ifdef STATS
opcodeCounters[108].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

mul_5_1:
{
if (IsInt(g[5]) && IsInt(g[1])) {
g[5].i *= g[1].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: mul");
return 1;
}
#ifdef STATS
opcodeCounters[109].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

mul_5_2:
{
if (IsInt(g[5]) && IsInt(g[2])) {
g[5].i *= g[2].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: mul");
return 1;
}
#ifdef STATS
opcodeCounters[110].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

mul_5_3:
{
if (IsInt(g[5]) && IsInt(g[3])) {
g[5].i *= g[3].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: mul");
return 1;
}
#ifdef STATS
opcodeCounters[111].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

mul_5_4:
{
if (IsInt(g[5]) && IsInt(g[4])) {
g[5].i *= g[4].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: mul");
return 1;
}
#ifdef STATS
opcodeCounters[112].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

mul_5_5:
{
if (IsInt(g[5]) && IsInt(g[5])) {
g[5].i *= g[5].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: mul");
return 1;
}
#ifdef STATS
opcodeCounters[113].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

mulc_0:
{
if (IsInt(g[0])) {
int16_t dconstant = *(ip +1);
int64_t constant = *((int64_t*)(ip + dconstant));
g[0].i *= constant;
ip += 2;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: mulc");
return 1;
}
#ifdef STATS
opcodeCounters[114].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

mulc_1:
{
if (IsInt(g[1])) {
int16_t dconstant = *(ip +1);
int64_t constant = *((int64_t*)(ip + dconstant));
g[1].i *= constant;
ip += 2;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: mulc");
return 1;
}
#ifdef STATS
opcodeCounters[115].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

mulc_2:
{
if (IsInt(g[2])) {
int16_t dconstant = *(ip +1);
int64_t constant = *((int64_t*)(ip + dconstant));
g[2].i *= constant;
ip += 2;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: mulc");
return 1;
}
#ifdef STATS
opcodeCounters[116].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

mulc_3:
{
if (IsInt(g[3])) {
int16_t dconstant = *(ip +1);
int64_t constant = *((int64_t*)(ip + dconstant));
g[3].i *= constant;
ip += 2;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: mulc");
return 1;
}
#ifdef STATS
opcodeCounters[117].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

mulc_4:
{
if (IsInt(g[4])) {
int16_t dconstant = *(ip +1);
int64_t constant = *((int64_t*)(ip + dconstant));
g[4].i *= constant;
ip += 2;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: mulc");
return 1;
}
#ifdef STATS
opcodeCounters[118].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

mulc_5:
{
if (IsInt(g[5])) {
int16_t dconstant = *(ip +1);
int64_t constant = *((int64_t*)(ip + dconstant));
g[5].i *= constant;
ip += 2;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: mulc");
return 1;
}
#ifdef STATS
opcodeCounters[119].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

div_0_1:
{
if (IsInt(g[0]) && IsInt(g[1])) {
int64_t divtemp = g[0].i / g[1].i;
int64_t modtemp = g[0].i % g[1].i;
g[0].i = modtemp;
g[0].tag = 0;
g[0].i = divtemp;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: div");
return 1;
}
#ifdef STATS
opcodeCounters[120].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

div_0_2:
{
if (IsInt(g[0]) && IsInt(g[2])) {
int64_t divtemp = g[0].i / g[2].i;
int64_t modtemp = g[0].i % g[2].i;
g[0].i = modtemp;
g[0].tag = 0;
g[0].i = divtemp;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: div");
return 1;
}
#ifdef STATS
opcodeCounters[121].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

div_0_3:
{
if (IsInt(g[0]) && IsInt(g[3])) {
int64_t divtemp = g[0].i / g[3].i;
int64_t modtemp = g[0].i % g[3].i;
g[0].i = modtemp;
g[0].tag = 0;
g[0].i = divtemp;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: div");
return 1;
}
#ifdef STATS
opcodeCounters[122].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

div_0_4:
{
if (IsInt(g[0]) && IsInt(g[4])) {
int64_t divtemp = g[0].i / g[4].i;
int64_t modtemp = g[0].i % g[4].i;
g[0].i = modtemp;
g[0].tag = 0;
g[0].i = divtemp;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: div");
return 1;
}
#ifdef STATS
opcodeCounters[123].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

div_0_5:
{
if (IsInt(g[0]) && IsInt(g[5])) {
int64_t divtemp = g[0].i / g[5].i;
int64_t modtemp = g[0].i % g[5].i;
g[0].i = modtemp;
g[0].tag = 0;
g[0].i = divtemp;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: div");
return 1;
}
#ifdef STATS
opcodeCounters[124].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

div_1_0:
{
if (IsInt(g[1]) && IsInt(g[0])) {
int64_t divtemp = g[1].i / g[0].i;
int64_t modtemp = g[1].i % g[0].i;
g[0].i = modtemp;
g[0].tag = 0;
g[1].i = divtemp;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: div");
return 1;
}
#ifdef STATS
opcodeCounters[125].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

div_1_2:
{
if (IsInt(g[1]) && IsInt(g[2])) {
int64_t divtemp = g[1].i / g[2].i;
int64_t modtemp = g[1].i % g[2].i;
g[0].i = modtemp;
g[0].tag = 0;
g[1].i = divtemp;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: div");
return 1;
}
#ifdef STATS
opcodeCounters[126].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

div_1_3:
{
if (IsInt(g[1]) && IsInt(g[3])) {
int64_t divtemp = g[1].i / g[3].i;
int64_t modtemp = g[1].i % g[3].i;
g[0].i = modtemp;
g[0].tag = 0;
g[1].i = divtemp;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: div");
return 1;
}
#ifdef STATS
opcodeCounters[127].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

div_1_4:
{
if (IsInt(g[1]) && IsInt(g[4])) {
int64_t divtemp = g[1].i / g[4].i;
int64_t modtemp = g[1].i % g[4].i;
g[0].i = modtemp;
g[0].tag = 0;
g[1].i = divtemp;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: div");
return 1;
}
#ifdef STATS
opcodeCounters[128].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

div_1_5:
{
if (IsInt(g[1]) && IsInt(g[5])) {
int64_t divtemp = g[1].i / g[5].i;
int64_t modtemp = g[1].i % g[5].i;
g[0].i = modtemp;
g[0].tag = 0;
g[1].i = divtemp;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: div");
return 1;
}
#ifdef STATS
opcodeCounters[129].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

div_2_0:
{
if (IsInt(g[2]) && IsInt(g[0])) {
int64_t divtemp = g[2].i / g[0].i;
int64_t modtemp = g[2].i % g[0].i;
g[0].i = modtemp;
g[0].tag = 0;
g[2].i = divtemp;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: div");
return 1;
}
#ifdef STATS
opcodeCounters[130].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

div_2_1:
{
if (IsInt(g[2]) && IsInt(g[1])) {
int64_t divtemp = g[2].i / g[1].i;
int64_t modtemp = g[2].i % g[1].i;
g[0].i = modtemp;
g[0].tag = 0;
g[2].i = divtemp;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: div");
return 1;
}
#ifdef STATS
opcodeCounters[131].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

div_2_3:
{
if (IsInt(g[2]) && IsInt(g[3])) {
int64_t divtemp = g[2].i / g[3].i;
int64_t modtemp = g[2].i % g[3].i;
g[0].i = modtemp;
g[0].tag = 0;
g[2].i = divtemp;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: div");
return 1;
}
#ifdef STATS
opcodeCounters[132].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

div_2_4:
{
if (IsInt(g[2]) && IsInt(g[4])) {
int64_t divtemp = g[2].i / g[4].i;
int64_t modtemp = g[2].i % g[4].i;
g[0].i = modtemp;
g[0].tag = 0;
g[2].i = divtemp;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: div");
return 1;
}
#ifdef STATS
opcodeCounters[133].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

div_2_5:
{
if (IsInt(g[2]) && IsInt(g[5])) {
int64_t divtemp = g[2].i / g[5].i;
int64_t modtemp = g[2].i % g[5].i;
g[0].i = modtemp;
g[0].tag = 0;
g[2].i = divtemp;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: div");
return 1;
}
#ifdef STATS
opcodeCounters[134].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

div_3_0:
{
if (IsInt(g[3]) && IsInt(g[0])) {
int64_t divtemp = g[3].i / g[0].i;
int64_t modtemp = g[3].i % g[0].i;
g[0].i = modtemp;
g[0].tag = 0;
g[3].i = divtemp;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: div");
return 1;
}
#ifdef STATS
opcodeCounters[135].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

div_3_1:
{
if (IsInt(g[3]) && IsInt(g[1])) {
int64_t divtemp = g[3].i / g[1].i;
int64_t modtemp = g[3].i % g[1].i;
g[0].i = modtemp;
g[0].tag = 0;
g[3].i = divtemp;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: div");
return 1;
}
#ifdef STATS
opcodeCounters[136].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

div_3_2:
{
if (IsInt(g[3]) && IsInt(g[2])) {
int64_t divtemp = g[3].i / g[2].i;
int64_t modtemp = g[3].i % g[2].i;
g[0].i = modtemp;
g[0].tag = 0;
g[3].i = divtemp;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: div");
return 1;
}
#ifdef STATS
opcodeCounters[137].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

div_3_4:
{
if (IsInt(g[3]) && IsInt(g[4])) {
int64_t divtemp = g[3].i / g[4].i;
int64_t modtemp = g[3].i % g[4].i;
g[0].i = modtemp;
g[0].tag = 0;
g[3].i = divtemp;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: div");
return 1;
}
#ifdef STATS
opcodeCounters[138].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

div_3_5:
{
if (IsInt(g[3]) && IsInt(g[5])) {
int64_t divtemp = g[3].i / g[5].i;
int64_t modtemp = g[3].i % g[5].i;
g[0].i = modtemp;
g[0].tag = 0;
g[3].i = divtemp;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: div");
return 1;
}
#ifdef STATS
opcodeCounters[139].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

div_4_0:
{
if (IsInt(g[4]) && IsInt(g[0])) {
int64_t divtemp = g[4].i / g[0].i;
int64_t modtemp = g[4].i % g[0].i;
g[0].i = modtemp;
g[0].tag = 0;
g[4].i = divtemp;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: div");
return 1;
}
#ifdef STATS
opcodeCounters[140].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

div_4_1:
{
if (IsInt(g[4]) && IsInt(g[1])) {
int64_t divtemp = g[4].i / g[1].i;
int64_t modtemp = g[4].i % g[1].i;
g[0].i = modtemp;
g[0].tag = 0;
g[4].i = divtemp;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: div");
return 1;
}
#ifdef STATS
opcodeCounters[141].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

div_4_2:
{
if (IsInt(g[4]) && IsInt(g[2])) {
int64_t divtemp = g[4].i / g[2].i;
int64_t modtemp = g[4].i % g[2].i;
g[0].i = modtemp;
g[0].tag = 0;
g[4].i = divtemp;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: div");
return 1;
}
#ifdef STATS
opcodeCounters[142].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

div_4_3:
{
if (IsInt(g[4]) && IsInt(g[3])) {
int64_t divtemp = g[4].i / g[3].i;
int64_t modtemp = g[4].i % g[3].i;
g[0].i = modtemp;
g[0].tag = 0;
g[4].i = divtemp;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: div");
return 1;
}
#ifdef STATS
opcodeCounters[143].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

div_4_5:
{
if (IsInt(g[4]) && IsInt(g[5])) {
int64_t divtemp = g[4].i / g[5].i;
int64_t modtemp = g[4].i % g[5].i;
g[0].i = modtemp;
g[0].tag = 0;
g[4].i = divtemp;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: div");
return 1;
}
#ifdef STATS
opcodeCounters[144].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

div_5_0:
{
if (IsInt(g[5]) && IsInt(g[0])) {
int64_t divtemp = g[5].i / g[0].i;
int64_t modtemp = g[5].i % g[0].i;
g[0].i = modtemp;
g[0].tag = 0;
g[5].i = divtemp;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: div");
return 1;
}
#ifdef STATS
opcodeCounters[145].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

div_5_1:
{
if (IsInt(g[5]) && IsInt(g[1])) {
int64_t divtemp = g[5].i / g[1].i;
int64_t modtemp = g[5].i % g[1].i;
g[0].i = modtemp;
g[0].tag = 0;
g[5].i = divtemp;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: div");
return 1;
}
#ifdef STATS
opcodeCounters[146].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

div_5_2:
{
if (IsInt(g[5]) && IsInt(g[2])) {
int64_t divtemp = g[5].i / g[2].i;
int64_t modtemp = g[5].i % g[2].i;
g[0].i = modtemp;
g[0].tag = 0;
g[5].i = divtemp;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: div");
return 1;
}
#ifdef STATS
opcodeCounters[147].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

div_5_3:
{
if (IsInt(g[5]) && IsInt(g[3])) {
int64_t divtemp = g[5].i / g[3].i;
int64_t modtemp = g[5].i % g[3].i;
g[0].i = modtemp;
g[0].tag = 0;
g[5].i = divtemp;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: div");
return 1;
}
#ifdef STATS
opcodeCounters[148].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

div_5_4:
{
if (IsInt(g[5]) && IsInt(g[4])) {
int64_t divtemp = g[5].i / g[4].i;
int64_t modtemp = g[5].i % g[4].i;
g[0].i = modtemp;
g[0].tag = 0;
g[5].i = divtemp;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: div");
return 1;
}
#ifdef STATS
opcodeCounters[149].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

divc_0:
{
if (IsInt(g[0])) {
int16_t dconstant = *(ip +1);
int64_t constant = *((int64_t*)(ip + dconstant));
int64_t divtemp = g[0].i / constant;
int64_t modtemp = g[0].i % constant;
g[0].i = modtemp;
g[0].tag = 0;
g[0].i = divtemp;
ip += 2;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: divc");
return 1;
}
#ifdef STATS
opcodeCounters[150].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

divc_1:
{
if (IsInt(g[1])) {
int16_t dconstant = *(ip +1);
int64_t constant = *((int64_t*)(ip + dconstant));
int64_t divtemp = g[1].i / constant;
int64_t modtemp = g[1].i % constant;
g[0].i = modtemp;
g[0].tag = 0;
g[1].i = divtemp;
ip += 2;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: divc");
return 1;
}
#ifdef STATS
opcodeCounters[151].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

divc_2:
{
if (IsInt(g[2])) {
int16_t dconstant = *(ip +1);
int64_t constant = *((int64_t*)(ip + dconstant));
int64_t divtemp = g[2].i / constant;
int64_t modtemp = g[2].i % constant;
g[0].i = modtemp;
g[0].tag = 0;
g[2].i = divtemp;
ip += 2;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: divc");
return 1;
}
#ifdef STATS
opcodeCounters[152].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

divc_3:
{
if (IsInt(g[3])) {
int16_t dconstant = *(ip +1);
int64_t constant = *((int64_t*)(ip + dconstant));
int64_t divtemp = g[3].i / constant;
int64_t modtemp = g[3].i % constant;
g[0].i = modtemp;
g[0].tag = 0;
g[3].i = divtemp;
ip += 2;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: divc");
return 1;
}
#ifdef STATS
opcodeCounters[153].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

divc_4:
{
if (IsInt(g[4])) {
int16_t dconstant = *(ip +1);
int64_t constant = *((int64_t*)(ip + dconstant));
int64_t divtemp = g[4].i / constant;
int64_t modtemp = g[4].i % constant;
g[0].i = modtemp;
g[0].tag = 0;
g[4].i = divtemp;
ip += 2;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: divc");
return 1;
}
#ifdef STATS
opcodeCounters[154].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

divc_5:
{
if (IsInt(g[5])) {
int16_t dconstant = *(ip +1);
int64_t constant = *((int64_t*)(ip + dconstant));
int64_t divtemp = g[5].i / constant;
int64_t modtemp = g[5].i % constant;
g[0].i = modtemp;
g[0].tag = 0;
g[5].i = divtemp;
ip += 2;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: divc");
return 1;
}
#ifdef STATS
opcodeCounters[155].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

and_0_1:
{
if (IsInt(g[0]) && IsInt(g[1])) {
g[0].i &= g[1].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: and");
return 1;
}
#ifdef STATS
opcodeCounters[156].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

and_0_2:
{
if (IsInt(g[0]) && IsInt(g[2])) {
g[0].i &= g[2].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: and");
return 1;
}
#ifdef STATS
opcodeCounters[157].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

and_0_3:
{
if (IsInt(g[0]) && IsInt(g[3])) {
g[0].i &= g[3].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: and");
return 1;
}
#ifdef STATS
opcodeCounters[158].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

and_0_4:
{
if (IsInt(g[0]) && IsInt(g[4])) {
g[0].i &= g[4].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: and");
return 1;
}
#ifdef STATS
opcodeCounters[159].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

and_0_5:
{
if (IsInt(g[0]) && IsInt(g[5])) {
g[0].i &= g[5].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: and");
return 1;
}
#ifdef STATS
opcodeCounters[160].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

and_1_0:
{
if (IsInt(g[1]) && IsInt(g[0])) {
g[1].i &= g[0].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: and");
return 1;
}
#ifdef STATS
opcodeCounters[161].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

and_1_2:
{
if (IsInt(g[1]) && IsInt(g[2])) {
g[1].i &= g[2].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: and");
return 1;
}
#ifdef STATS
opcodeCounters[162].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

and_1_3:
{
if (IsInt(g[1]) && IsInt(g[3])) {
g[1].i &= g[3].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: and");
return 1;
}
#ifdef STATS
opcodeCounters[163].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

and_1_4:
{
if (IsInt(g[1]) && IsInt(g[4])) {
g[1].i &= g[4].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: and");
return 1;
}
#ifdef STATS
opcodeCounters[164].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

and_1_5:
{
if (IsInt(g[1]) && IsInt(g[5])) {
g[1].i &= g[5].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: and");
return 1;
}
#ifdef STATS
opcodeCounters[165].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

and_2_0:
{
if (IsInt(g[2]) && IsInt(g[0])) {
g[2].i &= g[0].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: and");
return 1;
}
#ifdef STATS
opcodeCounters[166].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

and_2_1:
{
if (IsInt(g[2]) && IsInt(g[1])) {
g[2].i &= g[1].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: and");
return 1;
}
#ifdef STATS
opcodeCounters[167].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

and_2_3:
{
if (IsInt(g[2]) && IsInt(g[3])) {
g[2].i &= g[3].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: and");
return 1;
}
#ifdef STATS
opcodeCounters[168].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

and_2_4:
{
if (IsInt(g[2]) && IsInt(g[4])) {
g[2].i &= g[4].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: and");
return 1;
}
#ifdef STATS
opcodeCounters[169].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

and_2_5:
{
if (IsInt(g[2]) && IsInt(g[5])) {
g[2].i &= g[5].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: and");
return 1;
}
#ifdef STATS
opcodeCounters[170].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

and_3_0:
{
if (IsInt(g[3]) && IsInt(g[0])) {
g[3].i &= g[0].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: and");
return 1;
}
#ifdef STATS
opcodeCounters[171].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

and_3_1:
{
if (IsInt(g[3]) && IsInt(g[1])) {
g[3].i &= g[1].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: and");
return 1;
}
#ifdef STATS
opcodeCounters[172].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

and_3_2:
{
if (IsInt(g[3]) && IsInt(g[2])) {
g[3].i &= g[2].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: and");
return 1;
}
#ifdef STATS
opcodeCounters[173].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

and_3_4:
{
if (IsInt(g[3]) && IsInt(g[4])) {
g[3].i &= g[4].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: and");
return 1;
}
#ifdef STATS
opcodeCounters[174].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

and_3_5:
{
if (IsInt(g[3]) && IsInt(g[5])) {
g[3].i &= g[5].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: and");
return 1;
}
#ifdef STATS
opcodeCounters[175].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

and_4_0:
{
if (IsInt(g[4]) && IsInt(g[0])) {
g[4].i &= g[0].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: and");
return 1;
}
#ifdef STATS
opcodeCounters[176].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

and_4_1:
{
if (IsInt(g[4]) && IsInt(g[1])) {
g[4].i &= g[1].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: and");
return 1;
}
#ifdef STATS
opcodeCounters[177].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

and_4_2:
{
if (IsInt(g[4]) && IsInt(g[2])) {
g[4].i &= g[2].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: and");
return 1;
}
#ifdef STATS
opcodeCounters[178].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

and_4_3:
{
if (IsInt(g[4]) && IsInt(g[3])) {
g[4].i &= g[3].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: and");
return 1;
}
#ifdef STATS
opcodeCounters[179].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

and_4_5:
{
if (IsInt(g[4]) && IsInt(g[5])) {
g[4].i &= g[5].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: and");
return 1;
}
#ifdef STATS
opcodeCounters[180].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

and_5_0:
{
if (IsInt(g[5]) && IsInt(g[0])) {
g[5].i &= g[0].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: and");
return 1;
}
#ifdef STATS
opcodeCounters[181].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

and_5_1:
{
if (IsInt(g[5]) && IsInt(g[1])) {
g[5].i &= g[1].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: and");
return 1;
}
#ifdef STATS
opcodeCounters[182].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

and_5_2:
{
if (IsInt(g[5]) && IsInt(g[2])) {
g[5].i &= g[2].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: and");
return 1;
}
#ifdef STATS
opcodeCounters[183].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

and_5_3:
{
if (IsInt(g[5]) && IsInt(g[3])) {
g[5].i &= g[3].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: and");
return 1;
}
#ifdef STATS
opcodeCounters[184].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

and_5_4:
{
if (IsInt(g[5]) && IsInt(g[4])) {
g[5].i &= g[4].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: and");
return 1;
}
#ifdef STATS
opcodeCounters[185].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

andc_0:
{
if (IsInt(g[0])) {
int16_t dconstant = *(ip +1);
int64_t constant = *((int64_t*)(ip + dconstant));
g[0].i &= constant;
ip += 2;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: andc");
return 1;
}
#ifdef STATS
opcodeCounters[186].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

andc_1:
{
if (IsInt(g[1])) {
int16_t dconstant = *(ip +1);
int64_t constant = *((int64_t*)(ip + dconstant));
g[1].i &= constant;
ip += 2;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: andc");
return 1;
}
#ifdef STATS
opcodeCounters[187].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

andc_2:
{
if (IsInt(g[2])) {
int16_t dconstant = *(ip +1);
int64_t constant = *((int64_t*)(ip + dconstant));
g[2].i &= constant;
ip += 2;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: andc");
return 1;
}
#ifdef STATS
opcodeCounters[188].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

andc_3:
{
if (IsInt(g[3])) {
int16_t dconstant = *(ip +1);
int64_t constant = *((int64_t*)(ip + dconstant));
g[3].i &= constant;
ip += 2;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: andc");
return 1;
}
#ifdef STATS
opcodeCounters[189].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

andc_4:
{
if (IsInt(g[4])) {
int16_t dconstant = *(ip +1);
int64_t constant = *((int64_t*)(ip + dconstant));
g[4].i &= constant;
ip += 2;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: andc");
return 1;
}
#ifdef STATS
opcodeCounters[190].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

andc_5:
{
if (IsInt(g[5])) {
int16_t dconstant = *(ip +1);
int64_t constant = *((int64_t*)(ip + dconstant));
g[5].i &= constant;
ip += 2;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: andc");
return 1;
}
#ifdef STATS
opcodeCounters[191].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

or_0_1:
{
if (IsInt(g[0]) && IsInt(g[1])) {
g[0].i |= g[1].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: or");
return 1;
}
#ifdef STATS
opcodeCounters[192].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

or_0_2:
{
if (IsInt(g[0]) && IsInt(g[2])) {
g[0].i |= g[2].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: or");
return 1;
}
#ifdef STATS
opcodeCounters[193].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

or_0_3:
{
if (IsInt(g[0]) && IsInt(g[3])) {
g[0].i |= g[3].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: or");
return 1;
}
#ifdef STATS
opcodeCounters[194].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

or_0_4:
{
if (IsInt(g[0]) && IsInt(g[4])) {
g[0].i |= g[4].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: or");
return 1;
}
#ifdef STATS
opcodeCounters[195].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

or_0_5:
{
if (IsInt(g[0]) && IsInt(g[5])) {
g[0].i |= g[5].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: or");
return 1;
}
#ifdef STATS
opcodeCounters[196].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

or_1_0:
{
if (IsInt(g[1]) && IsInt(g[0])) {
g[1].i |= g[0].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: or");
return 1;
}
#ifdef STATS
opcodeCounters[197].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

or_1_2:
{
if (IsInt(g[1]) && IsInt(g[2])) {
g[1].i |= g[2].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: or");
return 1;
}
#ifdef STATS
opcodeCounters[198].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

or_1_3:
{
if (IsInt(g[1]) && IsInt(g[3])) {
g[1].i |= g[3].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: or");
return 1;
}
#ifdef STATS
opcodeCounters[199].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

or_1_4:
{
if (IsInt(g[1]) && IsInt(g[4])) {
g[1].i |= g[4].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: or");
return 1;
}
#ifdef STATS
opcodeCounters[200].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

or_1_5:
{
if (IsInt(g[1]) && IsInt(g[5])) {
g[1].i |= g[5].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: or");
return 1;
}
#ifdef STATS
opcodeCounters[201].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

or_2_0:
{
if (IsInt(g[2]) && IsInt(g[0])) {
g[2].i |= g[0].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: or");
return 1;
}
#ifdef STATS
opcodeCounters[202].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

or_2_1:
{
if (IsInt(g[2]) && IsInt(g[1])) {
g[2].i |= g[1].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: or");
return 1;
}
#ifdef STATS
opcodeCounters[203].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

or_2_3:
{
if (IsInt(g[2]) && IsInt(g[3])) {
g[2].i |= g[3].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: or");
return 1;
}
#ifdef STATS
opcodeCounters[204].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

or_2_4:
{
if (IsInt(g[2]) && IsInt(g[4])) {
g[2].i |= g[4].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: or");
return 1;
}
#ifdef STATS
opcodeCounters[205].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

or_2_5:
{
if (IsInt(g[2]) && IsInt(g[5])) {
g[2].i |= g[5].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: or");
return 1;
}
#ifdef STATS
opcodeCounters[206].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

or_3_0:
{
if (IsInt(g[3]) && IsInt(g[0])) {
g[3].i |= g[0].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: or");
return 1;
}
#ifdef STATS
opcodeCounters[207].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

or_3_1:
{
if (IsInt(g[3]) && IsInt(g[1])) {
g[3].i |= g[1].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: or");
return 1;
}
#ifdef STATS
opcodeCounters[208].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

or_3_2:
{
if (IsInt(g[3]) && IsInt(g[2])) {
g[3].i |= g[2].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: or");
return 1;
}
#ifdef STATS
opcodeCounters[209].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

or_3_4:
{
if (IsInt(g[3]) && IsInt(g[4])) {
g[3].i |= g[4].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: or");
return 1;
}
#ifdef STATS
opcodeCounters[210].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

or_3_5:
{
if (IsInt(g[3]) && IsInt(g[5])) {
g[3].i |= g[5].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: or");
return 1;
}
#ifdef STATS
opcodeCounters[211].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

or_4_0:
{
if (IsInt(g[4]) && IsInt(g[0])) {
g[4].i |= g[0].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: or");
return 1;
}
#ifdef STATS
opcodeCounters[212].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

or_4_1:
{
if (IsInt(g[4]) && IsInt(g[1])) {
g[4].i |= g[1].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: or");
return 1;
}
#ifdef STATS
opcodeCounters[213].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

or_4_2:
{
if (IsInt(g[4]) && IsInt(g[2])) {
g[4].i |= g[2].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: or");
return 1;
}
#ifdef STATS
opcodeCounters[214].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

or_4_3:
{
if (IsInt(g[4]) && IsInt(g[3])) {
g[4].i |= g[3].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: or");
return 1;
}
#ifdef STATS
opcodeCounters[215].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

or_4_5:
{
if (IsInt(g[4]) && IsInt(g[5])) {
g[4].i |= g[5].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: or");
return 1;
}
#ifdef STATS
opcodeCounters[216].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

or_5_0:
{
if (IsInt(g[5]) && IsInt(g[0])) {
g[5].i |= g[0].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: or");
return 1;
}
#ifdef STATS
opcodeCounters[217].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

or_5_1:
{
if (IsInt(g[5]) && IsInt(g[1])) {
g[5].i |= g[1].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: or");
return 1;
}
#ifdef STATS
opcodeCounters[218].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

or_5_2:
{
if (IsInt(g[5]) && IsInt(g[2])) {
g[5].i |= g[2].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: or");
return 1;
}
#ifdef STATS
opcodeCounters[219].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

or_5_3:
{
if (IsInt(g[5]) && IsInt(g[3])) {
g[5].i |= g[3].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: or");
return 1;
}
#ifdef STATS
opcodeCounters[220].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

or_5_4:
{
if (IsInt(g[5]) && IsInt(g[4])) {
g[5].i |= g[4].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: or");
return 1;
}
#ifdef STATS
opcodeCounters[221].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

orc_0:
{
if (IsInt(g[0])) {
int16_t dconstant = *(ip +1);
int64_t constant = *((int64_t*)(ip + dconstant));
g[0].i |= constant;
ip += 2;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: orc");
return 1;
}
#ifdef STATS
opcodeCounters[222].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

orc_1:
{
if (IsInt(g[1])) {
int16_t dconstant = *(ip +1);
int64_t constant = *((int64_t*)(ip + dconstant));
g[1].i |= constant;
ip += 2;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: orc");
return 1;
}
#ifdef STATS
opcodeCounters[223].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

orc_2:
{
if (IsInt(g[2])) {
int16_t dconstant = *(ip +1);
int64_t constant = *((int64_t*)(ip + dconstant));
g[2].i |= constant;
ip += 2;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: orc");
return 1;
}
#ifdef STATS
opcodeCounters[224].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

orc_3:
{
if (IsInt(g[3])) {
int16_t dconstant = *(ip +1);
int64_t constant = *((int64_t*)(ip + dconstant));
g[3].i |= constant;
ip += 2;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: orc");
return 1;
}
#ifdef STATS
opcodeCounters[225].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

orc_4:
{
if (IsInt(g[4])) {
int16_t dconstant = *(ip +1);
int64_t constant = *((int64_t*)(ip + dconstant));
g[4].i |= constant;
ip += 2;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: orc");
return 1;
}
#ifdef STATS
opcodeCounters[226].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

orc_5:
{
if (IsInt(g[5])) {
int16_t dconstant = *(ip +1);
int64_t constant = *((int64_t*)(ip + dconstant));
g[5].i |= constant;
ip += 2;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: orc");
return 1;
}
#ifdef STATS
opcodeCounters[227].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

xor_0_1:
{
if (IsInt(g[0]) && IsInt(g[1])) {
g[0].i ^= g[1].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: xor");
return 1;
}
#ifdef STATS
opcodeCounters[228].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

xor_0_2:
{
if (IsInt(g[0]) && IsInt(g[2])) {
g[0].i ^= g[2].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: xor");
return 1;
}
#ifdef STATS
opcodeCounters[229].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

xor_0_3:
{
if (IsInt(g[0]) && IsInt(g[3])) {
g[0].i ^= g[3].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: xor");
return 1;
}
#ifdef STATS
opcodeCounters[230].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

xor_0_4:
{
if (IsInt(g[0]) && IsInt(g[4])) {
g[0].i ^= g[4].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: xor");
return 1;
}
#ifdef STATS
opcodeCounters[231].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

xor_0_5:
{
if (IsInt(g[0]) && IsInt(g[5])) {
g[0].i ^= g[5].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: xor");
return 1;
}
#ifdef STATS
opcodeCounters[232].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

xor_1_0:
{
if (IsInt(g[1]) && IsInt(g[0])) {
g[1].i ^= g[0].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: xor");
return 1;
}
#ifdef STATS
opcodeCounters[233].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

xor_1_2:
{
if (IsInt(g[1]) && IsInt(g[2])) {
g[1].i ^= g[2].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: xor");
return 1;
}
#ifdef STATS
opcodeCounters[234].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

xor_1_3:
{
if (IsInt(g[1]) && IsInt(g[3])) {
g[1].i ^= g[3].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: xor");
return 1;
}
#ifdef STATS
opcodeCounters[235].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

xor_1_4:
{
if (IsInt(g[1]) && IsInt(g[4])) {
g[1].i ^= g[4].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: xor");
return 1;
}
#ifdef STATS
opcodeCounters[236].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

xor_1_5:
{
if (IsInt(g[1]) && IsInt(g[5])) {
g[1].i ^= g[5].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: xor");
return 1;
}
#ifdef STATS
opcodeCounters[237].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

xor_2_0:
{
if (IsInt(g[2]) && IsInt(g[0])) {
g[2].i ^= g[0].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: xor");
return 1;
}
#ifdef STATS
opcodeCounters[238].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

xor_2_1:
{
if (IsInt(g[2]) && IsInt(g[1])) {
g[2].i ^= g[1].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: xor");
return 1;
}
#ifdef STATS
opcodeCounters[239].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

xor_2_3:
{
if (IsInt(g[2]) && IsInt(g[3])) {
g[2].i ^= g[3].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: xor");
return 1;
}
#ifdef STATS
opcodeCounters[240].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

xor_2_4:
{
if (IsInt(g[2]) && IsInt(g[4])) {
g[2].i ^= g[4].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: xor");
return 1;
}
#ifdef STATS
opcodeCounters[241].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

xor_2_5:
{
if (IsInt(g[2]) && IsInt(g[5])) {
g[2].i ^= g[5].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: xor");
return 1;
}
#ifdef STATS
opcodeCounters[242].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

xor_3_0:
{
if (IsInt(g[3]) && IsInt(g[0])) {
g[3].i ^= g[0].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: xor");
return 1;
}
#ifdef STATS
opcodeCounters[243].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

xor_3_1:
{
if (IsInt(g[3]) && IsInt(g[1])) {
g[3].i ^= g[1].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: xor");
return 1;
}
#ifdef STATS
opcodeCounters[244].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

xor_3_2:
{
if (IsInt(g[3]) && IsInt(g[2])) {
g[3].i ^= g[2].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: xor");
return 1;
}
#ifdef STATS
opcodeCounters[245].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

xor_3_4:
{
if (IsInt(g[3]) && IsInt(g[4])) {
g[3].i ^= g[4].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: xor");
return 1;
}
#ifdef STATS
opcodeCounters[246].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

xor_3_5:
{
if (IsInt(g[3]) && IsInt(g[5])) {
g[3].i ^= g[5].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: xor");
return 1;
}
#ifdef STATS
opcodeCounters[247].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

xor_4_0:
{
if (IsInt(g[4]) && IsInt(g[0])) {
g[4].i ^= g[0].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: xor");
return 1;
}
#ifdef STATS
opcodeCounters[248].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

xor_4_1:
{
if (IsInt(g[4]) && IsInt(g[1])) {
g[4].i ^= g[1].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: xor");
return 1;
}
#ifdef STATS
opcodeCounters[249].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

xor_4_2:
{
if (IsInt(g[4]) && IsInt(g[2])) {
g[4].i ^= g[2].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: xor");
return 1;
}
#ifdef STATS
opcodeCounters[250].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

xor_4_3:
{
if (IsInt(g[4]) && IsInt(g[3])) {
g[4].i ^= g[3].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: xor");
return 1;
}
#ifdef STATS
opcodeCounters[251].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

xor_4_5:
{
if (IsInt(g[4]) && IsInt(g[5])) {
g[4].i ^= g[5].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: xor");
return 1;
}
#ifdef STATS
opcodeCounters[252].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

xor_5_0:
{
if (IsInt(g[5]) && IsInt(g[0])) {
g[5].i ^= g[0].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: xor");
return 1;
}
#ifdef STATS
opcodeCounters[253].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

xor_5_1:
{
if (IsInt(g[5]) && IsInt(g[1])) {
g[5].i ^= g[1].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: xor");
return 1;
}
#ifdef STATS
opcodeCounters[254].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

xor_5_2:
{
if (IsInt(g[5]) && IsInt(g[2])) {
g[5].i ^= g[2].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: xor");
return 1;
}
#ifdef STATS
opcodeCounters[255].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

xor_5_3:
{
if (IsInt(g[5]) && IsInt(g[3])) {
g[5].i ^= g[3].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: xor");
return 1;
}
#ifdef STATS
opcodeCounters[256].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

xor_5_4:
{
if (IsInt(g[5]) && IsInt(g[4])) {
g[5].i ^= g[4].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: xor");
return 1;
}
#ifdef STATS
opcodeCounters[257].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

shl_0_1:
{
if (IsInt(g[0]) && IsInt(g[1])) {
g[0].i <<= g[1].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: shl");
return 1;
}
#ifdef STATS
opcodeCounters[258].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

shl_0_2:
{
if (IsInt(g[0]) && IsInt(g[2])) {
g[0].i <<= g[2].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: shl");
return 1;
}
#ifdef STATS
opcodeCounters[259].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

shl_0_3:
{
if (IsInt(g[0]) && IsInt(g[3])) {
g[0].i <<= g[3].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: shl");
return 1;
}
#ifdef STATS
opcodeCounters[260].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

shl_0_4:
{
if (IsInt(g[0]) && IsInt(g[4])) {
g[0].i <<= g[4].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: shl");
return 1;
}
#ifdef STATS
opcodeCounters[261].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

shl_0_5:
{
if (IsInt(g[0]) && IsInt(g[5])) {
g[0].i <<= g[5].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: shl");
return 1;
}
#ifdef STATS
opcodeCounters[262].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

shl_1_0:
{
if (IsInt(g[1]) && IsInt(g[0])) {
g[1].i <<= g[0].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: shl");
return 1;
}
#ifdef STATS
opcodeCounters[263].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

shl_1_2:
{
if (IsInt(g[1]) && IsInt(g[2])) {
g[1].i <<= g[2].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: shl");
return 1;
}
#ifdef STATS
opcodeCounters[264].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

shl_1_3:
{
if (IsInt(g[1]) && IsInt(g[3])) {
g[1].i <<= g[3].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: shl");
return 1;
}
#ifdef STATS
opcodeCounters[265].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

shl_1_4:
{
if (IsInt(g[1]) && IsInt(g[4])) {
g[1].i <<= g[4].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: shl");
return 1;
}
#ifdef STATS
opcodeCounters[266].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

shl_1_5:
{
if (IsInt(g[1]) && IsInt(g[5])) {
g[1].i <<= g[5].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: shl");
return 1;
}
#ifdef STATS
opcodeCounters[267].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

shl_2_0:
{
if (IsInt(g[2]) && IsInt(g[0])) {
g[2].i <<= g[0].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: shl");
return 1;
}
#ifdef STATS
opcodeCounters[268].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

shl_2_1:
{
if (IsInt(g[2]) && IsInt(g[1])) {
g[2].i <<= g[1].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: shl");
return 1;
}
#ifdef STATS
opcodeCounters[269].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

shl_2_3:
{
if (IsInt(g[2]) && IsInt(g[3])) {
g[2].i <<= g[3].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: shl");
return 1;
}
#ifdef STATS
opcodeCounters[270].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

shl_2_4:
{
if (IsInt(g[2]) && IsInt(g[4])) {
g[2].i <<= g[4].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: shl");
return 1;
}
#ifdef STATS
opcodeCounters[271].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

shl_2_5:
{
if (IsInt(g[2]) && IsInt(g[5])) {
g[2].i <<= g[5].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: shl");
return 1;
}
#ifdef STATS
opcodeCounters[272].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

shl_3_0:
{
if (IsInt(g[3]) && IsInt(g[0])) {
g[3].i <<= g[0].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: shl");
return 1;
}
#ifdef STATS
opcodeCounters[273].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

shl_3_1:
{
if (IsInt(g[3]) && IsInt(g[1])) {
g[3].i <<= g[1].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: shl");
return 1;
}
#ifdef STATS
opcodeCounters[274].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

shl_3_2:
{
if (IsInt(g[3]) && IsInt(g[2])) {
g[3].i <<= g[2].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: shl");
return 1;
}
#ifdef STATS
opcodeCounters[275].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

shl_3_4:
{
if (IsInt(g[3]) && IsInt(g[4])) {
g[3].i <<= g[4].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: shl");
return 1;
}
#ifdef STATS
opcodeCounters[276].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

shl_3_5:
{
if (IsInt(g[3]) && IsInt(g[5])) {
g[3].i <<= g[5].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: shl");
return 1;
}
#ifdef STATS
opcodeCounters[277].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

shl_4_0:
{
if (IsInt(g[4]) && IsInt(g[0])) {
g[4].i <<= g[0].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: shl");
return 1;
}
#ifdef STATS
opcodeCounters[278].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

shl_4_1:
{
if (IsInt(g[4]) && IsInt(g[1])) {
g[4].i <<= g[1].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: shl");
return 1;
}
#ifdef STATS
opcodeCounters[279].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

shl_4_2:
{
if (IsInt(g[4]) && IsInt(g[2])) {
g[4].i <<= g[2].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: shl");
return 1;
}
#ifdef STATS
opcodeCounters[280].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

shl_4_3:
{
if (IsInt(g[4]) && IsInt(g[3])) {
g[4].i <<= g[3].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: shl");
return 1;
}
#ifdef STATS
opcodeCounters[281].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

shl_4_5:
{
if (IsInt(g[4]) && IsInt(g[5])) {
g[4].i <<= g[5].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: shl");
return 1;
}
#ifdef STATS
opcodeCounters[282].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

shl_5_0:
{
if (IsInt(g[5]) && IsInt(g[0])) {
g[5].i <<= g[0].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: shl");
return 1;
}
#ifdef STATS
opcodeCounters[283].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

shl_5_1:
{
if (IsInt(g[5]) && IsInt(g[1])) {
g[5].i <<= g[1].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: shl");
return 1;
}
#ifdef STATS
opcodeCounters[284].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

shl_5_2:
{
if (IsInt(g[5]) && IsInt(g[2])) {
g[5].i <<= g[2].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: shl");
return 1;
}
#ifdef STATS
opcodeCounters[285].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

shl_5_3:
{
if (IsInt(g[5]) && IsInt(g[3])) {
g[5].i <<= g[3].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: shl");
return 1;
}
#ifdef STATS
opcodeCounters[286].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

shl_5_4:
{
if (IsInt(g[5]) && IsInt(g[4])) {
g[5].i <<= g[4].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: shl");
return 1;
}
#ifdef STATS
opcodeCounters[287].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

shlc_0:
{
if (IsInt(g[0])) {
int16_t constant = *(ip + 1);
g[0].i <<= constant;
ip += 2;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: shlc");
return 1;
}
#ifdef STATS
opcodeCounters[288].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

shlc_1:
{
if (IsInt(g[1])) {
int16_t constant = *(ip + 1);
g[1].i <<= constant;
ip += 2;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: shlc");
return 1;
}
#ifdef STATS
opcodeCounters[289].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

shlc_2:
{
if (IsInt(g[2])) {
int16_t constant = *(ip + 1);
g[2].i <<= constant;
ip += 2;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: shlc");
return 1;
}
#ifdef STATS
opcodeCounters[290].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

shlc_3:
{
if (IsInt(g[3])) {
int16_t constant = *(ip + 1);
g[3].i <<= constant;
ip += 2;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: shlc");
return 1;
}
#ifdef STATS
opcodeCounters[291].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

shlc_4:
{
if (IsInt(g[4])) {
int16_t constant = *(ip + 1);
g[4].i <<= constant;
ip += 2;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: shlc");
return 1;
}
#ifdef STATS
opcodeCounters[292].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

shlc_5:
{
if (IsInt(g[5])) {
int16_t constant = *(ip + 1);
g[5].i <<= constant;
ip += 2;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: shlc");
return 1;
}
#ifdef STATS
opcodeCounters[293].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

cshl_0:
{
if (IsInt(g[0])) {
int16_t dconstant = *(ip +1);
int64_t constant = *((int64_t*)(ip + dconstant));
g[0].i = constant << g[0].i;
ip += 2;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: cshl");
return 1;
}
#ifdef STATS
opcodeCounters[294].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

cshl_1:
{
if (IsInt(g[1])) {
int16_t dconstant = *(ip +1);
int64_t constant = *((int64_t*)(ip + dconstant));
g[1].i = constant << g[1].i;
ip += 2;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: cshl");
return 1;
}
#ifdef STATS
opcodeCounters[295].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

cshl_2:
{
if (IsInt(g[2])) {
int16_t dconstant = *(ip +1);
int64_t constant = *((int64_t*)(ip + dconstant));
g[2].i = constant << g[2].i;
ip += 2;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: cshl");
return 1;
}
#ifdef STATS
opcodeCounters[296].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

cshl_3:
{
if (IsInt(g[3])) {
int16_t dconstant = *(ip +1);
int64_t constant = *((int64_t*)(ip + dconstant));
g[3].i = constant << g[3].i;
ip += 2;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: cshl");
return 1;
}
#ifdef STATS
opcodeCounters[297].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

cshl_4:
{
if (IsInt(g[4])) {
int16_t dconstant = *(ip +1);
int64_t constant = *((int64_t*)(ip + dconstant));
g[4].i = constant << g[4].i;
ip += 2;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: cshl");
return 1;
}
#ifdef STATS
opcodeCounters[298].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

cshl_5:
{
if (IsInt(g[5])) {
int16_t dconstant = *(ip +1);
int64_t constant = *((int64_t*)(ip + dconstant));
g[5].i = constant << g[5].i;
ip += 2;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: cshl");
return 1;
}
#ifdef STATS
opcodeCounters[299].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

shr_0_1:
{
if (IsInt(g[0]) && IsInt(g[1])) {
g[0].i = (int64_t)((uint64_t)g[0].i >> g[0].i);
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: shr");
return 1;
}
#ifdef STATS
opcodeCounters[300].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

shr_0_2:
{
if (IsInt(g[0]) && IsInt(g[2])) {
g[0].i = (int64_t)((uint64_t)g[0].i >> g[0].i);
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: shr");
return 1;
}
#ifdef STATS
opcodeCounters[301].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

shr_0_3:
{
if (IsInt(g[0]) && IsInt(g[3])) {
g[0].i = (int64_t)((uint64_t)g[0].i >> g[0].i);
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: shr");
return 1;
}
#ifdef STATS
opcodeCounters[302].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

shr_0_4:
{
if (IsInt(g[0]) && IsInt(g[4])) {
g[0].i = (int64_t)((uint64_t)g[0].i >> g[0].i);
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: shr");
return 1;
}
#ifdef STATS
opcodeCounters[303].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

shr_0_5:
{
if (IsInt(g[0]) && IsInt(g[5])) {
g[0].i = (int64_t)((uint64_t)g[0].i >> g[0].i);
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: shr");
return 1;
}
#ifdef STATS
opcodeCounters[304].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

shr_1_0:
{
if (IsInt(g[1]) && IsInt(g[0])) {
g[1].i = (int64_t)((uint64_t)g[1].i >> g[1].i);
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: shr");
return 1;
}
#ifdef STATS
opcodeCounters[305].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

shr_1_2:
{
if (IsInt(g[1]) && IsInt(g[2])) {
g[1].i = (int64_t)((uint64_t)g[1].i >> g[1].i);
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: shr");
return 1;
}
#ifdef STATS
opcodeCounters[306].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

shr_1_3:
{
if (IsInt(g[1]) && IsInt(g[3])) {
g[1].i = (int64_t)((uint64_t)g[1].i >> g[1].i);
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: shr");
return 1;
}
#ifdef STATS
opcodeCounters[307].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

shr_1_4:
{
if (IsInt(g[1]) && IsInt(g[4])) {
g[1].i = (int64_t)((uint64_t)g[1].i >> g[1].i);
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: shr");
return 1;
}
#ifdef STATS
opcodeCounters[308].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

shr_1_5:
{
if (IsInt(g[1]) && IsInt(g[5])) {
g[1].i = (int64_t)((uint64_t)g[1].i >> g[1].i);
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: shr");
return 1;
}
#ifdef STATS
opcodeCounters[309].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

shr_2_0:
{
if (IsInt(g[2]) && IsInt(g[0])) {
g[2].i = (int64_t)((uint64_t)g[2].i >> g[2].i);
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: shr");
return 1;
}
#ifdef STATS
opcodeCounters[310].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

shr_2_1:
{
if (IsInt(g[2]) && IsInt(g[1])) {
g[2].i = (int64_t)((uint64_t)g[2].i >> g[2].i);
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: shr");
return 1;
}
#ifdef STATS
opcodeCounters[311].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

shr_2_3:
{
if (IsInt(g[2]) && IsInt(g[3])) {
g[2].i = (int64_t)((uint64_t)g[2].i >> g[2].i);
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: shr");
return 1;
}
#ifdef STATS
opcodeCounters[312].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

shr_2_4:
{
if (IsInt(g[2]) && IsInt(g[4])) {
g[2].i = (int64_t)((uint64_t)g[2].i >> g[2].i);
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: shr");
return 1;
}
#ifdef STATS
opcodeCounters[313].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

shr_2_5:
{
if (IsInt(g[2]) && IsInt(g[5])) {
g[2].i = (int64_t)((uint64_t)g[2].i >> g[2].i);
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: shr");
return 1;
}
#ifdef STATS
opcodeCounters[314].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

shr_3_0:
{
if (IsInt(g[3]) && IsInt(g[0])) {
g[3].i = (int64_t)((uint64_t)g[3].i >> g[3].i);
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: shr");
return 1;
}
#ifdef STATS
opcodeCounters[315].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

shr_3_1:
{
if (IsInt(g[3]) && IsInt(g[1])) {
g[3].i = (int64_t)((uint64_t)g[3].i >> g[3].i);
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: shr");
return 1;
}
#ifdef STATS
opcodeCounters[316].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

shr_3_2:
{
if (IsInt(g[3]) && IsInt(g[2])) {
g[3].i = (int64_t)((uint64_t)g[3].i >> g[3].i);
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: shr");
return 1;
}
#ifdef STATS
opcodeCounters[317].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

shr_3_4:
{
if (IsInt(g[3]) && IsInt(g[4])) {
g[3].i = (int64_t)((uint64_t)g[3].i >> g[3].i);
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: shr");
return 1;
}
#ifdef STATS
opcodeCounters[318].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

shr_3_5:
{
if (IsInt(g[3]) && IsInt(g[5])) {
g[3].i = (int64_t)((uint64_t)g[3].i >> g[3].i);
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: shr");
return 1;
}
#ifdef STATS
opcodeCounters[319].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

shr_4_0:
{
if (IsInt(g[4]) && IsInt(g[0])) {
g[4].i = (int64_t)((uint64_t)g[4].i >> g[4].i);
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: shr");
return 1;
}
#ifdef STATS
opcodeCounters[320].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

shr_4_1:
{
if (IsInt(g[4]) && IsInt(g[1])) {
g[4].i = (int64_t)((uint64_t)g[4].i >> g[4].i);
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: shr");
return 1;
}
#ifdef STATS
opcodeCounters[321].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

shr_4_2:
{
if (IsInt(g[4]) && IsInt(g[2])) {
g[4].i = (int64_t)((uint64_t)g[4].i >> g[4].i);
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: shr");
return 1;
}
#ifdef STATS
opcodeCounters[322].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

shr_4_3:
{
if (IsInt(g[4]) && IsInt(g[3])) {
g[4].i = (int64_t)((uint64_t)g[4].i >> g[4].i);
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: shr");
return 1;
}
#ifdef STATS
opcodeCounters[323].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

shr_4_5:
{
if (IsInt(g[4]) && IsInt(g[5])) {
g[4].i = (int64_t)((uint64_t)g[4].i >> g[4].i);
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: shr");
return 1;
}
#ifdef STATS
opcodeCounters[324].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

shr_5_0:
{
if (IsInt(g[5]) && IsInt(g[0])) {
g[5].i = (int64_t)((uint64_t)g[5].i >> g[5].i);
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: shr");
return 1;
}
#ifdef STATS
opcodeCounters[325].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

shr_5_1:
{
if (IsInt(g[5]) && IsInt(g[1])) {
g[5].i = (int64_t)((uint64_t)g[5].i >> g[5].i);
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: shr");
return 1;
}
#ifdef STATS
opcodeCounters[326].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

shr_5_2:
{
if (IsInt(g[5]) && IsInt(g[2])) {
g[5].i = (int64_t)((uint64_t)g[5].i >> g[5].i);
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: shr");
return 1;
}
#ifdef STATS
opcodeCounters[327].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

shr_5_3:
{
if (IsInt(g[5]) && IsInt(g[3])) {
g[5].i = (int64_t)((uint64_t)g[5].i >> g[5].i);
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: shr");
return 1;
}
#ifdef STATS
opcodeCounters[328].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

shr_5_4:
{
if (IsInt(g[5]) && IsInt(g[4])) {
g[5].i = (int64_t)((uint64_t)g[5].i >> g[5].i);
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: shr");
return 1;
}
#ifdef STATS
opcodeCounters[329].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

shrc_0:
{
if (IsInt(g[0])) {
int16_t constant = *(ip + 1);
g[0].i = (int64_t)((uint64_t)g[0].i >> constant);
ip += 2;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: shrc");
return 1;
}
#ifdef STATS
opcodeCounters[330].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

shrc_1:
{
if (IsInt(g[1])) {
int16_t constant = *(ip + 1);
g[1].i = (int64_t)((uint64_t)g[1].i >> constant);
ip += 2;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: shrc");
return 1;
}
#ifdef STATS
opcodeCounters[331].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

shrc_2:
{
if (IsInt(g[2])) {
int16_t constant = *(ip + 1);
g[2].i = (int64_t)((uint64_t)g[2].i >> constant);
ip += 2;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: shrc");
return 1;
}
#ifdef STATS
opcodeCounters[332].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

shrc_3:
{
if (IsInt(g[3])) {
int16_t constant = *(ip + 1);
g[3].i = (int64_t)((uint64_t)g[3].i >> constant);
ip += 2;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: shrc");
return 1;
}
#ifdef STATS
opcodeCounters[333].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

shrc_4:
{
if (IsInt(g[4])) {
int16_t constant = *(ip + 1);
g[4].i = (int64_t)((uint64_t)g[4].i >> constant);
ip += 2;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: shrc");
return 1;
}
#ifdef STATS
opcodeCounters[334].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

shrc_5:
{
if (IsInt(g[5])) {
int16_t constant = *(ip + 1);
g[5].i = (int64_t)((uint64_t)g[5].i >> constant);
ip += 2;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: shrc");
return 1;
}
#ifdef STATS
opcodeCounters[335].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

cshr_0:
{
if (IsInt(g[0])) {
int16_t constant = *(ip + 1);
g[0].i = (uint64_t)constant >> g[0].i;
ip += 2;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: cshr");
return 1;
}
#ifdef STATS
opcodeCounters[336].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

cshr_1:
{
if (IsInt(g[1])) {
int16_t constant = *(ip + 1);
g[1].i = (uint64_t)constant >> g[1].i;
ip += 2;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: cshr");
return 1;
}
#ifdef STATS
opcodeCounters[337].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

cshr_2:
{
if (IsInt(g[2])) {
int16_t constant = *(ip + 1);
g[2].i = (uint64_t)constant >> g[2].i;
ip += 2;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: cshr");
return 1;
}
#ifdef STATS
opcodeCounters[338].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

cshr_3:
{
if (IsInt(g[3])) {
int16_t constant = *(ip + 1);
g[3].i = (uint64_t)constant >> g[3].i;
ip += 2;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: cshr");
return 1;
}
#ifdef STATS
opcodeCounters[339].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

cshr_4:
{
if (IsInt(g[4])) {
int16_t constant = *(ip + 1);
g[4].i = (uint64_t)constant >> g[4].i;
ip += 2;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: cshr");
return 1;
}
#ifdef STATS
opcodeCounters[340].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

cshr_5:
{
if (IsInt(g[5])) {
int16_t constant = *(ip + 1);
g[5].i = (uint64_t)constant >> g[5].i;
ip += 2;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: cshr");
return 1;
}
#ifdef STATS
opcodeCounters[341].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

sar_0_1:
{
if (IsInt(g[0]) && IsInt(g[1])) {
g[0].i >>= g[1].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: sar");
return 1;
}
#ifdef STATS
opcodeCounters[342].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

sar_0_2:
{
if (IsInt(g[0]) && IsInt(g[2])) {
g[0].i >>= g[2].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: sar");
return 1;
}
#ifdef STATS
opcodeCounters[343].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

sar_0_3:
{
if (IsInt(g[0]) && IsInt(g[3])) {
g[0].i >>= g[3].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: sar");
return 1;
}
#ifdef STATS
opcodeCounters[344].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

sar_0_4:
{
if (IsInt(g[0]) && IsInt(g[4])) {
g[0].i >>= g[4].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: sar");
return 1;
}
#ifdef STATS
opcodeCounters[345].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

sar_0_5:
{
if (IsInt(g[0]) && IsInt(g[5])) {
g[0].i >>= g[5].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: sar");
return 1;
}
#ifdef STATS
opcodeCounters[346].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

sar_1_0:
{
if (IsInt(g[1]) && IsInt(g[0])) {
g[1].i >>= g[0].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: sar");
return 1;
}
#ifdef STATS
opcodeCounters[347].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

sar_1_2:
{
if (IsInt(g[1]) && IsInt(g[2])) {
g[1].i >>= g[2].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: sar");
return 1;
}
#ifdef STATS
opcodeCounters[348].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

sar_1_3:
{
if (IsInt(g[1]) && IsInt(g[3])) {
g[1].i >>= g[3].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: sar");
return 1;
}
#ifdef STATS
opcodeCounters[349].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

sar_1_4:
{
if (IsInt(g[1]) && IsInt(g[4])) {
g[1].i >>= g[4].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: sar");
return 1;
}
#ifdef STATS
opcodeCounters[350].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

sar_1_5:
{
if (IsInt(g[1]) && IsInt(g[5])) {
g[1].i >>= g[5].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: sar");
return 1;
}
#ifdef STATS
opcodeCounters[351].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

sar_2_0:
{
if (IsInt(g[2]) && IsInt(g[0])) {
g[2].i >>= g[0].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: sar");
return 1;
}
#ifdef STATS
opcodeCounters[352].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

sar_2_1:
{
if (IsInt(g[2]) && IsInt(g[1])) {
g[2].i >>= g[1].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: sar");
return 1;
}
#ifdef STATS
opcodeCounters[353].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

sar_2_3:
{
if (IsInt(g[2]) && IsInt(g[3])) {
g[2].i >>= g[3].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: sar");
return 1;
}
#ifdef STATS
opcodeCounters[354].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

sar_2_4:
{
if (IsInt(g[2]) && IsInt(g[4])) {
g[2].i >>= g[4].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: sar");
return 1;
}
#ifdef STATS
opcodeCounters[355].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

sar_2_5:
{
if (IsInt(g[2]) && IsInt(g[5])) {
g[2].i >>= g[5].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: sar");
return 1;
}
#ifdef STATS
opcodeCounters[356].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

sar_3_0:
{
if (IsInt(g[3]) && IsInt(g[0])) {
g[3].i >>= g[0].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: sar");
return 1;
}
#ifdef STATS
opcodeCounters[357].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

sar_3_1:
{
if (IsInt(g[3]) && IsInt(g[1])) {
g[3].i >>= g[1].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: sar");
return 1;
}
#ifdef STATS
opcodeCounters[358].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

sar_3_2:
{
if (IsInt(g[3]) && IsInt(g[2])) {
g[3].i >>= g[2].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: sar");
return 1;
}
#ifdef STATS
opcodeCounters[359].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

sar_3_4:
{
if (IsInt(g[3]) && IsInt(g[4])) {
g[3].i >>= g[4].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: sar");
return 1;
}
#ifdef STATS
opcodeCounters[360].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

sar_3_5:
{
if (IsInt(g[3]) && IsInt(g[5])) {
g[3].i >>= g[5].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: sar");
return 1;
}
#ifdef STATS
opcodeCounters[361].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

sar_4_0:
{
if (IsInt(g[4]) && IsInt(g[0])) {
g[4].i >>= g[0].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: sar");
return 1;
}
#ifdef STATS
opcodeCounters[362].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

sar_4_1:
{
if (IsInt(g[4]) && IsInt(g[1])) {
g[4].i >>= g[1].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: sar");
return 1;
}
#ifdef STATS
opcodeCounters[363].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

sar_4_2:
{
if (IsInt(g[4]) && IsInt(g[2])) {
g[4].i >>= g[2].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: sar");
return 1;
}
#ifdef STATS
opcodeCounters[364].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

sar_4_3:
{
if (IsInt(g[4]) && IsInt(g[3])) {
g[4].i >>= g[3].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: sar");
return 1;
}
#ifdef STATS
opcodeCounters[365].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

sar_4_5:
{
if (IsInt(g[4]) && IsInt(g[5])) {
g[4].i >>= g[5].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: sar");
return 1;
}
#ifdef STATS
opcodeCounters[366].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

sar_5_0:
{
if (IsInt(g[5]) && IsInt(g[0])) {
g[5].i >>= g[0].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: sar");
return 1;
}
#ifdef STATS
opcodeCounters[367].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

sar_5_1:
{
if (IsInt(g[5]) && IsInt(g[1])) {
g[5].i >>= g[1].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: sar");
return 1;
}
#ifdef STATS
opcodeCounters[368].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

sar_5_2:
{
if (IsInt(g[5]) && IsInt(g[2])) {
g[5].i >>= g[2].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: sar");
return 1;
}
#ifdef STATS
opcodeCounters[369].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

sar_5_3:
{
if (IsInt(g[5]) && IsInt(g[3])) {
g[5].i >>= g[3].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: sar");
return 1;
}
#ifdef STATS
opcodeCounters[370].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

sar_5_4:
{
if (IsInt(g[5]) && IsInt(g[4])) {
g[5].i >>= g[4].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: sar");
return 1;
}
#ifdef STATS
opcodeCounters[371].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

sarc_0:
{
if (IsInt(g[0])) {
int16_t constant = *(ip + 1);
g[0].i >>= constant;
ip += 2;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: sarc");
return 1;
}
#ifdef STATS
opcodeCounters[372].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

sarc_1:
{
if (IsInt(g[1])) {
int16_t constant = *(ip + 1);
g[1].i >>= constant;
ip += 2;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: sarc");
return 1;
}
#ifdef STATS
opcodeCounters[373].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

sarc_2:
{
if (IsInt(g[2])) {
int16_t constant = *(ip + 1);
g[2].i >>= constant;
ip += 2;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: sarc");
return 1;
}
#ifdef STATS
opcodeCounters[374].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

sarc_3:
{
if (IsInt(g[3])) {
int16_t constant = *(ip + 1);
g[3].i >>= constant;
ip += 2;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: sarc");
return 1;
}
#ifdef STATS
opcodeCounters[375].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

sarc_4:
{
if (IsInt(g[4])) {
int16_t constant = *(ip + 1);
g[4].i >>= constant;
ip += 2;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: sarc");
return 1;
}
#ifdef STATS
opcodeCounters[376].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

sarc_5:
{
if (IsInt(g[5])) {
int16_t constant = *(ip + 1);
g[5].i >>= constant;
ip += 2;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: sarc");
return 1;
}
#ifdef STATS
opcodeCounters[377].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

csar_0:
{
if (IsInt(g[0])) {
int16_t constant = *(ip + 1);
g[0].i = constant >> g[0].i;
ip += 2;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: csar");
return 1;
}
#ifdef STATS
opcodeCounters[378].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

csar_1:
{
if (IsInt(g[1])) {
int16_t constant = *(ip + 1);
g[1].i = constant >> g[1].i;
ip += 2;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: csar");
return 1;
}
#ifdef STATS
opcodeCounters[379].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

csar_2:
{
if (IsInt(g[2])) {
int16_t constant = *(ip + 1);
g[2].i = constant >> g[2].i;
ip += 2;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: csar");
return 1;
}
#ifdef STATS
opcodeCounters[380].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

csar_3:
{
if (IsInt(g[3])) {
int16_t constant = *(ip + 1);
g[3].i = constant >> g[3].i;
ip += 2;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: csar");
return 1;
}
#ifdef STATS
opcodeCounters[381].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

csar_4:
{
if (IsInt(g[4])) {
int16_t constant = *(ip + 1);
g[4].i = constant >> g[4].i;
ip += 2;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: csar");
return 1;
}
#ifdef STATS
opcodeCounters[382].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

csar_5:
{
if (IsInt(g[5])) {
int16_t constant = *(ip + 1);
g[5].i = constant >> g[5].i;
ip += 2;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: csar");
return 1;
}
#ifdef STATS
opcodeCounters[383].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

mov_0_1:
{
if (IsInt(g[0]) && IsInt(g[1])) {
g[0].i = g[1].i;
ip++;
}
else if (IsPointer(g[0]) && IsPointer(g[1])) {
g[0].tag = g[1].tag;
g[0].p = g[1].p;
ip++;
}
else if (IsInt(g[0]) && IsPointer(g[1])) {
g[0].p = g[1].p;
g[0].tag = g[1].tag;
ip++;
}
else if (IsPointer(g[0]) && IsInt(g[1])) {
g[0].i = g[1].i;
g[0].tag = 0;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: mov");
return 1;
}
#ifdef STATS
opcodeCounters[384].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

mov_0_2:
{
if (IsInt(g[0]) && IsInt(g[2])) {
g[0].i = g[2].i;
ip++;
}
else if (IsPointer(g[0]) && IsPointer(g[2])) {
g[0].tag = g[2].tag;
g[0].p = g[2].p;
ip++;
}
else if (IsInt(g[0]) && IsPointer(g[2])) {
g[0].p = g[2].p;
g[0].tag = g[2].tag;
ip++;
}
else if (IsPointer(g[0]) && IsInt(g[2])) {
g[0].i = g[2].i;
g[0].tag = 0;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: mov");
return 1;
}
#ifdef STATS
opcodeCounters[385].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

mov_0_3:
{
if (IsInt(g[0]) && IsInt(g[3])) {
g[0].i = g[3].i;
ip++;
}
else if (IsPointer(g[0]) && IsPointer(g[3])) {
g[0].tag = g[3].tag;
g[0].p = g[3].p;
ip++;
}
else if (IsInt(g[0]) && IsPointer(g[3])) {
g[0].p = g[3].p;
g[0].tag = g[3].tag;
ip++;
}
else if (IsPointer(g[0]) && IsInt(g[3])) {
g[0].i = g[3].i;
g[0].tag = 0;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: mov");
return 1;
}
#ifdef STATS
opcodeCounters[386].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

mov_0_4:
{
if (IsInt(g[0]) && IsInt(g[4])) {
g[0].i = g[4].i;
ip++;
}
else if (IsPointer(g[0]) && IsPointer(g[4])) {
g[0].tag = g[4].tag;
g[0].p = g[4].p;
ip++;
}
else if (IsInt(g[0]) && IsPointer(g[4])) {
g[0].p = g[4].p;
g[0].tag = g[4].tag;
ip++;
}
else if (IsPointer(g[0]) && IsInt(g[4])) {
g[0].i = g[4].i;
g[0].tag = 0;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: mov");
return 1;
}
#ifdef STATS
opcodeCounters[387].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

mov_0_5:
{
if (IsInt(g[0]) && IsInt(g[5])) {
g[0].i = g[5].i;
ip++;
}
else if (IsPointer(g[0]) && IsPointer(g[5])) {
g[0].tag = g[5].tag;
g[0].p = g[5].p;
ip++;
}
else if (IsInt(g[0]) && IsPointer(g[5])) {
g[0].p = g[5].p;
g[0].tag = g[5].tag;
ip++;
}
else if (IsPointer(g[0]) && IsInt(g[5])) {
g[0].i = g[5].i;
g[0].tag = 0;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: mov");
return 1;
}
#ifdef STATS
opcodeCounters[388].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

mov_1_0:
{
if (IsInt(g[1]) && IsInt(g[0])) {
g[1].i = g[0].i;
ip++;
}
else if (IsPointer(g[1]) && IsPointer(g[0])) {
g[1].tag = g[0].tag;
g[1].p = g[0].p;
ip++;
}
else if (IsInt(g[1]) && IsPointer(g[0])) {
g[1].p = g[0].p;
g[1].tag = g[0].tag;
ip++;
}
else if (IsPointer(g[1]) && IsInt(g[0])) {
g[1].i = g[0].i;
g[1].tag = 0;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: mov");
return 1;
}
#ifdef STATS
opcodeCounters[389].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

mov_1_2:
{
if (IsInt(g[1]) && IsInt(g[2])) {
g[1].i = g[2].i;
ip++;
}
else if (IsPointer(g[1]) && IsPointer(g[2])) {
g[1].tag = g[2].tag;
g[1].p = g[2].p;
ip++;
}
else if (IsInt(g[1]) && IsPointer(g[2])) {
g[1].p = g[2].p;
g[1].tag = g[2].tag;
ip++;
}
else if (IsPointer(g[1]) && IsInt(g[2])) {
g[1].i = g[2].i;
g[1].tag = 0;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: mov");
return 1;
}
#ifdef STATS
opcodeCounters[390].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

mov_1_3:
{
if (IsInt(g[1]) && IsInt(g[3])) {
g[1].i = g[3].i;
ip++;
}
else if (IsPointer(g[1]) && IsPointer(g[3])) {
g[1].tag = g[3].tag;
g[1].p = g[3].p;
ip++;
}
else if (IsInt(g[1]) && IsPointer(g[3])) {
g[1].p = g[3].p;
g[1].tag = g[3].tag;
ip++;
}
else if (IsPointer(g[1]) && IsInt(g[3])) {
g[1].i = g[3].i;
g[1].tag = 0;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: mov");
return 1;
}
#ifdef STATS
opcodeCounters[391].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

mov_1_4:
{
if (IsInt(g[1]) && IsInt(g[4])) {
g[1].i = g[4].i;
ip++;
}
else if (IsPointer(g[1]) && IsPointer(g[4])) {
g[1].tag = g[4].tag;
g[1].p = g[4].p;
ip++;
}
else if (IsInt(g[1]) && IsPointer(g[4])) {
g[1].p = g[4].p;
g[1].tag = g[4].tag;
ip++;
}
else if (IsPointer(g[1]) && IsInt(g[4])) {
g[1].i = g[4].i;
g[1].tag = 0;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: mov");
return 1;
}
#ifdef STATS
opcodeCounters[392].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

mov_1_5:
{
if (IsInt(g[1]) && IsInt(g[5])) {
g[1].i = g[5].i;
ip++;
}
else if (IsPointer(g[1]) && IsPointer(g[5])) {
g[1].tag = g[5].tag;
g[1].p = g[5].p;
ip++;
}
else if (IsInt(g[1]) && IsPointer(g[5])) {
g[1].p = g[5].p;
g[1].tag = g[5].tag;
ip++;
}
else if (IsPointer(g[1]) && IsInt(g[5])) {
g[1].i = g[5].i;
g[1].tag = 0;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: mov");
return 1;
}
#ifdef STATS
opcodeCounters[393].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

mov_2_0:
{
if (IsInt(g[2]) && IsInt(g[0])) {
g[2].i = g[0].i;
ip++;
}
else if (IsPointer(g[2]) && IsPointer(g[0])) {
g[2].tag = g[0].tag;
g[2].p = g[0].p;
ip++;
}
else if (IsInt(g[2]) && IsPointer(g[0])) {
g[2].p = g[0].p;
g[2].tag = g[0].tag;
ip++;
}
else if (IsPointer(g[2]) && IsInt(g[0])) {
g[2].i = g[0].i;
g[2].tag = 0;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: mov");
return 1;
}
#ifdef STATS
opcodeCounters[394].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

mov_2_1:
{
if (IsInt(g[2]) && IsInt(g[1])) {
g[2].i = g[1].i;
ip++;
}
else if (IsPointer(g[2]) && IsPointer(g[1])) {
g[2].tag = g[1].tag;
g[2].p = g[1].p;
ip++;
}
else if (IsInt(g[2]) && IsPointer(g[1])) {
g[2].p = g[1].p;
g[2].tag = g[1].tag;
ip++;
}
else if (IsPointer(g[2]) && IsInt(g[1])) {
g[2].i = g[1].i;
g[2].tag = 0;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: mov");
return 1;
}
#ifdef STATS
opcodeCounters[395].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

mov_2_3:
{
if (IsInt(g[2]) && IsInt(g[3])) {
g[2].i = g[3].i;
ip++;
}
else if (IsPointer(g[2]) && IsPointer(g[3])) {
g[2].tag = g[3].tag;
g[2].p = g[3].p;
ip++;
}
else if (IsInt(g[2]) && IsPointer(g[3])) {
g[2].p = g[3].p;
g[2].tag = g[3].tag;
ip++;
}
else if (IsPointer(g[2]) && IsInt(g[3])) {
g[2].i = g[3].i;
g[2].tag = 0;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: mov");
return 1;
}
#ifdef STATS
opcodeCounters[396].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

mov_2_4:
{
if (IsInt(g[2]) && IsInt(g[4])) {
g[2].i = g[4].i;
ip++;
}
else if (IsPointer(g[2]) && IsPointer(g[4])) {
g[2].tag = g[4].tag;
g[2].p = g[4].p;
ip++;
}
else if (IsInt(g[2]) && IsPointer(g[4])) {
g[2].p = g[4].p;
g[2].tag = g[4].tag;
ip++;
}
else if (IsPointer(g[2]) && IsInt(g[4])) {
g[2].i = g[4].i;
g[2].tag = 0;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: mov");
return 1;
}
#ifdef STATS
opcodeCounters[397].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

mov_2_5:
{
if (IsInt(g[2]) && IsInt(g[5])) {
g[2].i = g[5].i;
ip++;
}
else if (IsPointer(g[2]) && IsPointer(g[5])) {
g[2].tag = g[5].tag;
g[2].p = g[5].p;
ip++;
}
else if (IsInt(g[2]) && IsPointer(g[5])) {
g[2].p = g[5].p;
g[2].tag = g[5].tag;
ip++;
}
else if (IsPointer(g[2]) && IsInt(g[5])) {
g[2].i = g[5].i;
g[2].tag = 0;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: mov");
return 1;
}
#ifdef STATS
opcodeCounters[398].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

mov_3_0:
{
if (IsInt(g[3]) && IsInt(g[0])) {
g[3].i = g[0].i;
ip++;
}
else if (IsPointer(g[3]) && IsPointer(g[0])) {
g[3].tag = g[0].tag;
g[3].p = g[0].p;
ip++;
}
else if (IsInt(g[3]) && IsPointer(g[0])) {
g[3].p = g[0].p;
g[3].tag = g[0].tag;
ip++;
}
else if (IsPointer(g[3]) && IsInt(g[0])) {
g[3].i = g[0].i;
g[3].tag = 0;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: mov");
return 1;
}
#ifdef STATS
opcodeCounters[399].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

mov_3_1:
{
if (IsInt(g[3]) && IsInt(g[1])) {
g[3].i = g[1].i;
ip++;
}
else if (IsPointer(g[3]) && IsPointer(g[1])) {
g[3].tag = g[1].tag;
g[3].p = g[1].p;
ip++;
}
else if (IsInt(g[3]) && IsPointer(g[1])) {
g[3].p = g[1].p;
g[3].tag = g[1].tag;
ip++;
}
else if (IsPointer(g[3]) && IsInt(g[1])) {
g[3].i = g[1].i;
g[3].tag = 0;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: mov");
return 1;
}
#ifdef STATS
opcodeCounters[400].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

mov_3_2:
{
if (IsInt(g[3]) && IsInt(g[2])) {
g[3].i = g[2].i;
ip++;
}
else if (IsPointer(g[3]) && IsPointer(g[2])) {
g[3].tag = g[2].tag;
g[3].p = g[2].p;
ip++;
}
else if (IsInt(g[3]) && IsPointer(g[2])) {
g[3].p = g[2].p;
g[3].tag = g[2].tag;
ip++;
}
else if (IsPointer(g[3]) && IsInt(g[2])) {
g[3].i = g[2].i;
g[3].tag = 0;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: mov");
return 1;
}
#ifdef STATS
opcodeCounters[401].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

mov_3_4:
{
if (IsInt(g[3]) && IsInt(g[4])) {
g[3].i = g[4].i;
ip++;
}
else if (IsPointer(g[3]) && IsPointer(g[4])) {
g[3].tag = g[4].tag;
g[3].p = g[4].p;
ip++;
}
else if (IsInt(g[3]) && IsPointer(g[4])) {
g[3].p = g[4].p;
g[3].tag = g[4].tag;
ip++;
}
else if (IsPointer(g[3]) && IsInt(g[4])) {
g[3].i = g[4].i;
g[3].tag = 0;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: mov");
return 1;
}
#ifdef STATS
opcodeCounters[402].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

mov_3_5:
{
if (IsInt(g[3]) && IsInt(g[5])) {
g[3].i = g[5].i;
ip++;
}
else if (IsPointer(g[3]) && IsPointer(g[5])) {
g[3].tag = g[5].tag;
g[3].p = g[5].p;
ip++;
}
else if (IsInt(g[3]) && IsPointer(g[5])) {
g[3].p = g[5].p;
g[3].tag = g[5].tag;
ip++;
}
else if (IsPointer(g[3]) && IsInt(g[5])) {
g[3].i = g[5].i;
g[3].tag = 0;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: mov");
return 1;
}
#ifdef STATS
opcodeCounters[403].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

mov_4_0:
{
if (IsInt(g[4]) && IsInt(g[0])) {
g[4].i = g[0].i;
ip++;
}
else if (IsPointer(g[4]) && IsPointer(g[0])) {
g[4].tag = g[0].tag;
g[4].p = g[0].p;
ip++;
}
else if (IsInt(g[4]) && IsPointer(g[0])) {
g[4].p = g[0].p;
g[4].tag = g[0].tag;
ip++;
}
else if (IsPointer(g[4]) && IsInt(g[0])) {
g[4].i = g[0].i;
g[4].tag = 0;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: mov");
return 1;
}
#ifdef STATS
opcodeCounters[404].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

mov_4_1:
{
if (IsInt(g[4]) && IsInt(g[1])) {
g[4].i = g[1].i;
ip++;
}
else if (IsPointer(g[4]) && IsPointer(g[1])) {
g[4].tag = g[1].tag;
g[4].p = g[1].p;
ip++;
}
else if (IsInt(g[4]) && IsPointer(g[1])) {
g[4].p = g[1].p;
g[4].tag = g[1].tag;
ip++;
}
else if (IsPointer(g[4]) && IsInt(g[1])) {
g[4].i = g[1].i;
g[4].tag = 0;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: mov");
return 1;
}
#ifdef STATS
opcodeCounters[405].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

mov_4_2:
{
if (IsInt(g[4]) && IsInt(g[2])) {
g[4].i = g[2].i;
ip++;
}
else if (IsPointer(g[4]) && IsPointer(g[2])) {
g[4].tag = g[2].tag;
g[4].p = g[2].p;
ip++;
}
else if (IsInt(g[4]) && IsPointer(g[2])) {
g[4].p = g[2].p;
g[4].tag = g[2].tag;
ip++;
}
else if (IsPointer(g[4]) && IsInt(g[2])) {
g[4].i = g[2].i;
g[4].tag = 0;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: mov");
return 1;
}
#ifdef STATS
opcodeCounters[406].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

mov_4_3:
{
if (IsInt(g[4]) && IsInt(g[3])) {
g[4].i = g[3].i;
ip++;
}
else if (IsPointer(g[4]) && IsPointer(g[3])) {
g[4].tag = g[3].tag;
g[4].p = g[3].p;
ip++;
}
else if (IsInt(g[4]) && IsPointer(g[3])) {
g[4].p = g[3].p;
g[4].tag = g[3].tag;
ip++;
}
else if (IsPointer(g[4]) && IsInt(g[3])) {
g[4].i = g[3].i;
g[4].tag = 0;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: mov");
return 1;
}
#ifdef STATS
opcodeCounters[407].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

mov_4_5:
{
if (IsInt(g[4]) && IsInt(g[5])) {
g[4].i = g[5].i;
ip++;
}
else if (IsPointer(g[4]) && IsPointer(g[5])) {
g[4].tag = g[5].tag;
g[4].p = g[5].p;
ip++;
}
else if (IsInt(g[4]) && IsPointer(g[5])) {
g[4].p = g[5].p;
g[4].tag = g[5].tag;
ip++;
}
else if (IsPointer(g[4]) && IsInt(g[5])) {
g[4].i = g[5].i;
g[4].tag = 0;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: mov");
return 1;
}
#ifdef STATS
opcodeCounters[408].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

mov_5_0:
{
if (IsInt(g[5]) && IsInt(g[0])) {
g[5].i = g[0].i;
ip++;
}
else if (IsPointer(g[5]) && IsPointer(g[0])) {
g[5].tag = g[0].tag;
g[5].p = g[0].p;
ip++;
}
else if (IsInt(g[5]) && IsPointer(g[0])) {
g[5].p = g[0].p;
g[5].tag = g[0].tag;
ip++;
}
else if (IsPointer(g[5]) && IsInt(g[0])) {
g[5].i = g[0].i;
g[5].tag = 0;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: mov");
return 1;
}
#ifdef STATS
opcodeCounters[409].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

mov_5_1:
{
if (IsInt(g[5]) && IsInt(g[1])) {
g[5].i = g[1].i;
ip++;
}
else if (IsPointer(g[5]) && IsPointer(g[1])) {
g[5].tag = g[1].tag;
g[5].p = g[1].p;
ip++;
}
else if (IsInt(g[5]) && IsPointer(g[1])) {
g[5].p = g[1].p;
g[5].tag = g[1].tag;
ip++;
}
else if (IsPointer(g[5]) && IsInt(g[1])) {
g[5].i = g[1].i;
g[5].tag = 0;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: mov");
return 1;
}
#ifdef STATS
opcodeCounters[410].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

mov_5_2:
{
if (IsInt(g[5]) && IsInt(g[2])) {
g[5].i = g[2].i;
ip++;
}
else if (IsPointer(g[5]) && IsPointer(g[2])) {
g[5].tag = g[2].tag;
g[5].p = g[2].p;
ip++;
}
else if (IsInt(g[5]) && IsPointer(g[2])) {
g[5].p = g[2].p;
g[5].tag = g[2].tag;
ip++;
}
else if (IsPointer(g[5]) && IsInt(g[2])) {
g[5].i = g[2].i;
g[5].tag = 0;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: mov");
return 1;
}
#ifdef STATS
opcodeCounters[411].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

mov_5_3:
{
if (IsInt(g[5]) && IsInt(g[3])) {
g[5].i = g[3].i;
ip++;
}
else if (IsPointer(g[5]) && IsPointer(g[3])) {
g[5].tag = g[3].tag;
g[5].p = g[3].p;
ip++;
}
else if (IsInt(g[5]) && IsPointer(g[3])) {
g[5].p = g[3].p;
g[5].tag = g[3].tag;
ip++;
}
else if (IsPointer(g[5]) && IsInt(g[3])) {
g[5].i = g[3].i;
g[5].tag = 0;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: mov");
return 1;
}
#ifdef STATS
opcodeCounters[412].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

mov_5_4:
{
if (IsInt(g[5]) && IsInt(g[4])) {
g[5].i = g[4].i;
ip++;
}
else if (IsPointer(g[5]) && IsPointer(g[4])) {
g[5].tag = g[4].tag;
g[5].p = g[4].p;
ip++;
}
else if (IsInt(g[5]) && IsPointer(g[4])) {
g[5].p = g[4].p;
g[5].tag = g[4].tag;
ip++;
}
else if (IsPointer(g[5]) && IsInt(g[4])) {
g[5].i = g[4].i;
g[5].tag = 0;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: mov");
return 1;
}
#ifdef STATS
opcodeCounters[413].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

movc_0:
{
if (IsInt(g[0])) {
int16_t dconstant = *(ip +1);
int64_t constant = *((int64_t*)(ip + dconstant));
g[0].i = constant;
ip += 2;
}
else if (IsPointer(g[0])) {
int16_t dconstant = *(ip +1);
int64_t constant = *((int64_t*)(ip + dconstant));
g[0].i = constant;
g[0].tag = 0;
ip += 2;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: movc");
return 1;
}
#ifdef STATS
opcodeCounters[414].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

movc_1:
{
if (IsInt(g[1])) {
int16_t dconstant = *(ip +1);
int64_t constant = *((int64_t*)(ip + dconstant));
g[1].i = constant;
ip += 2;
}
else if (IsPointer(g[1])) {
int16_t dconstant = *(ip +1);
int64_t constant = *((int64_t*)(ip + dconstant));
g[1].i = constant;
g[1].tag = 0;
ip += 2;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: movc");
return 1;
}
#ifdef STATS
opcodeCounters[415].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

movc_2:
{
if (IsInt(g[2])) {
int16_t dconstant = *(ip +1);
int64_t constant = *((int64_t*)(ip + dconstant));
g[2].i = constant;
ip += 2;
}
else if (IsPointer(g[2])) {
int16_t dconstant = *(ip +1);
int64_t constant = *((int64_t*)(ip + dconstant));
g[2].i = constant;
g[2].tag = 0;
ip += 2;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: movc");
return 1;
}
#ifdef STATS
opcodeCounters[416].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

movc_3:
{
if (IsInt(g[3])) {
int16_t dconstant = *(ip +1);
int64_t constant = *((int64_t*)(ip + dconstant));
g[3].i = constant;
ip += 2;
}
else if (IsPointer(g[3])) {
int16_t dconstant = *(ip +1);
int64_t constant = *((int64_t*)(ip + dconstant));
g[3].i = constant;
g[3].tag = 0;
ip += 2;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: movc");
return 1;
}
#ifdef STATS
opcodeCounters[417].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

movc_4:
{
if (IsInt(g[4])) {
int16_t dconstant = *(ip +1);
int64_t constant = *((int64_t*)(ip + dconstant));
g[4].i = constant;
ip += 2;
}
else if (IsPointer(g[4])) {
int16_t dconstant = *(ip +1);
int64_t constant = *((int64_t*)(ip + dconstant));
g[4].i = constant;
g[4].tag = 0;
ip += 2;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: movc");
return 1;
}
#ifdef STATS
opcodeCounters[418].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

movc_5:
{
if (IsInt(g[5])) {
int16_t dconstant = *(ip +1);
int64_t constant = *((int64_t*)(ip + dconstant));
g[5].i = constant;
ip += 2;
}
else if (IsPointer(g[5])) {
int16_t dconstant = *(ip +1);
int64_t constant = *((int64_t*)(ip + dconstant));
g[5].i = constant;
g[5].tag = 0;
ip += 2;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: movc");
return 1;
}
#ifdef STATS
opcodeCounters[419].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

null_0:
{
if (IsPointer(g[0])) {
g[0].p = NULL;
ip++;
}
else if (IsInt(g[0])) {
g[0].p = NULL;
g[0].tag = 1;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: null");
return 1;
}
#ifdef STATS
opcodeCounters[420].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

null_1:
{
if (IsPointer(g[1])) {
g[1].p = NULL;
ip++;
}
else if (IsInt(g[1])) {
g[1].p = NULL;
g[1].tag = 1;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: null");
return 1;
}
#ifdef STATS
opcodeCounters[421].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

null_2:
{
if (IsPointer(g[2])) {
g[2].p = NULL;
ip++;
}
else if (IsInt(g[2])) {
g[2].p = NULL;
g[2].tag = 1;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: null");
return 1;
}
#ifdef STATS
opcodeCounters[422].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

null_3:
{
if (IsPointer(g[3])) {
g[3].p = NULL;
ip++;
}
else if (IsInt(g[3])) {
g[3].p = NULL;
g[3].tag = 1;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: null");
return 1;
}
#ifdef STATS
opcodeCounters[423].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

null_4:
{
if (IsPointer(g[4])) {
g[4].p = NULL;
ip++;
}
else if (IsInt(g[4])) {
g[4].p = NULL;
g[4].tag = 1;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: null");
return 1;
}
#ifdef STATS
opcodeCounters[424].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

null_5:
{
if (IsPointer(g[5])) {
g[5].p = NULL;
ip++;
}
else if (IsInt(g[5])) {
g[5].p = NULL;
g[5].tag = 1;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: null");
return 1;
}
#ifdef STATS
opcodeCounters[425].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getl_0:
{
if (IsInt(g[0])) {
int16_t constant = *(ip + 1);
value val = fp[constant];
if (val.tag != 0) {
g[0].tag = val.tag;
g[0].p = val.p;
}
else {
g[0].i = val.i;
}
ip += 2;
}
else if (IsPointer(g[0])) {
int16_t constant = *(ip + 1);
value val = fp[constant];
if (val.tag == 0) {
g[0].tag = 0;
g[0].i = val.i;
}
else {g[0].tag = val.tag;
g[0].p = val.p;
}
ip += 2;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getl");
return 1;
}
#ifdef STATS
opcodeCounters[426].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getl_1:
{
if (IsInt(g[1])) {
int16_t constant = *(ip + 1);
value val = fp[constant];
if (val.tag != 0) {
g[1].tag = val.tag;
g[1].p = val.p;
}
else {
g[1].i = val.i;
}
ip += 2;
}
else if (IsPointer(g[1])) {
int16_t constant = *(ip + 1);
value val = fp[constant];
if (val.tag == 0) {
g[1].tag = 0;
g[1].i = val.i;
}
else {g[1].tag = val.tag;
g[1].p = val.p;
}
ip += 2;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getl");
return 1;
}
#ifdef STATS
opcodeCounters[427].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getl_2:
{
if (IsInt(g[2])) {
int16_t constant = *(ip + 1);
value val = fp[constant];
if (val.tag != 0) {
g[2].tag = val.tag;
g[2].p = val.p;
}
else {
g[2].i = val.i;
}
ip += 2;
}
else if (IsPointer(g[2])) {
int16_t constant = *(ip + 1);
value val = fp[constant];
if (val.tag == 0) {
g[2].tag = 0;
g[2].i = val.i;
}
else {g[2].tag = val.tag;
g[2].p = val.p;
}
ip += 2;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getl");
return 1;
}
#ifdef STATS
opcodeCounters[428].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getl_3:
{
if (IsInt(g[3])) {
int16_t constant = *(ip + 1);
value val = fp[constant];
if (val.tag != 0) {
g[3].tag = val.tag;
g[3].p = val.p;
}
else {
g[3].i = val.i;
}
ip += 2;
}
else if (IsPointer(g[3])) {
int16_t constant = *(ip + 1);
value val = fp[constant];
if (val.tag == 0) {
g[3].tag = 0;
g[3].i = val.i;
}
else {g[3].tag = val.tag;
g[3].p = val.p;
}
ip += 2;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getl");
return 1;
}
#ifdef STATS
opcodeCounters[429].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getl_4:
{
if (IsInt(g[4])) {
int16_t constant = *(ip + 1);
value val = fp[constant];
if (val.tag != 0) {
g[4].tag = val.tag;
g[4].p = val.p;
}
else {
g[4].i = val.i;
}
ip += 2;
}
else if (IsPointer(g[4])) {
int16_t constant = *(ip + 1);
value val = fp[constant];
if (val.tag == 0) {
g[4].tag = 0;
g[4].i = val.i;
}
else {g[4].tag = val.tag;
g[4].p = val.p;
}
ip += 2;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getl");
return 1;
}
#ifdef STATS
opcodeCounters[430].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getl_5:
{
if (IsInt(g[5])) {
int16_t constant = *(ip + 1);
value val = fp[constant];
if (val.tag != 0) {
g[5].tag = val.tag;
g[5].p = val.p;
}
else {
g[5].i = val.i;
}
ip += 2;
}
else if (IsPointer(g[5])) {
int16_t constant = *(ip + 1);
value val = fp[constant];
if (val.tag == 0) {
g[5].tag = 0;
g[5].i = val.i;
}
else {g[5].tag = val.tag;
g[5].p = val.p;
}
ip += 2;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getl");
return 1;
}
#ifdef STATS
opcodeCounters[431].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setl_0:
{
if (IsInt(g[0])) {
int16_t constant = *(ip + 1);
value* vp = fp + constant;
(*vp).tag = g[0].tag;
(*vp).i = g[0].i;
ip += 2;
}
else if (IsPointer(g[0])) {
int16_t constant = *(ip + 1);
value* vp = fp + constant;
(*vp).tag = g[0].tag;
(*vp).p = g[0].p;
ip += 2;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setl");
return 1;
}
#ifdef STATS
opcodeCounters[432].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setl_1:
{
if (IsInt(g[1])) {
int16_t constant = *(ip + 1);
value* vp = fp + constant;
(*vp).tag = g[1].tag;
(*vp).i = g[1].i;
ip += 2;
}
else if (IsPointer(g[1])) {
int16_t constant = *(ip + 1);
value* vp = fp + constant;
(*vp).tag = g[1].tag;
(*vp).p = g[1].p;
ip += 2;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setl");
return 1;
}
#ifdef STATS
opcodeCounters[433].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setl_2:
{
if (IsInt(g[2])) {
int16_t constant = *(ip + 1);
value* vp = fp + constant;
(*vp).tag = g[2].tag;
(*vp).i = g[2].i;
ip += 2;
}
else if (IsPointer(g[2])) {
int16_t constant = *(ip + 1);
value* vp = fp + constant;
(*vp).tag = g[2].tag;
(*vp).p = g[2].p;
ip += 2;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setl");
return 1;
}
#ifdef STATS
opcodeCounters[434].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setl_3:
{
if (IsInt(g[3])) {
int16_t constant = *(ip + 1);
value* vp = fp + constant;
(*vp).tag = g[3].tag;
(*vp).i = g[3].i;
ip += 2;
}
else if (IsPointer(g[3])) {
int16_t constant = *(ip + 1);
value* vp = fp + constant;
(*vp).tag = g[3].tag;
(*vp).p = g[3].p;
ip += 2;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setl");
return 1;
}
#ifdef STATS
opcodeCounters[435].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setl_4:
{
if (IsInt(g[4])) {
int16_t constant = *(ip + 1);
value* vp = fp + constant;
(*vp).tag = g[4].tag;
(*vp).i = g[4].i;
ip += 2;
}
else if (IsPointer(g[4])) {
int16_t constant = *(ip + 1);
value* vp = fp + constant;
(*vp).tag = g[4].tag;
(*vp).p = g[4].p;
ip += 2;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setl");
return 1;
}
#ifdef STATS
opcodeCounters[436].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setl_5:
{
if (IsInt(g[5])) {
int16_t constant = *(ip + 1);
value* vp = fp + constant;
(*vp).tag = g[5].tag;
(*vp).i = g[5].i;
ip += 2;
}
else if (IsPointer(g[5])) {
int16_t constant = *(ip + 1);
value* vp = fp + constant;
(*vp).tag = g[5].tag;
(*vp).p = g[5].p;
ip += 2;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setl");
return 1;
}
#ifdef STATS
opcodeCounters[437].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_0_0_1:
{
if (IsInt(g[0]) && IsPointer(g[0]) && IsInt(g[1])) {
value val = ((object *)(g[0].p))->data[g[1].i];
if (val.tag != 0) {
g[0].tag = val.tag;
g[0].p = val.p;
}
else {
g[0].i = val.i;
}
ip++;
}
else if (IsPointer(g[0]) && IsPointer(g[0]) && IsInt(g[1])) {
value val = ((object *)(g[0].p))->data[g[1].i];
if (val.tag == 0) {
g[0].tag = 0;
g[0].i = val.i;
}
g[0].tag = val.tag;
g[0].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[438].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_0_0_2:
{
if (IsInt(g[0]) && IsPointer(g[0]) && IsInt(g[2])) {
value val = ((object *)(g[0].p))->data[g[2].i];
if (val.tag != 0) {
g[0].tag = val.tag;
g[0].p = val.p;
}
else {
g[0].i = val.i;
}
ip++;
}
else if (IsPointer(g[0]) && IsPointer(g[0]) && IsInt(g[2])) {
value val = ((object *)(g[0].p))->data[g[2].i];
if (val.tag == 0) {
g[0].tag = 0;
g[0].i = val.i;
}
g[0].tag = val.tag;
g[0].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[439].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_0_0_3:
{
if (IsInt(g[0]) && IsPointer(g[0]) && IsInt(g[3])) {
value val = ((object *)(g[0].p))->data[g[3].i];
if (val.tag != 0) {
g[0].tag = val.tag;
g[0].p = val.p;
}
else {
g[0].i = val.i;
}
ip++;
}
else if (IsPointer(g[0]) && IsPointer(g[0]) && IsInt(g[3])) {
value val = ((object *)(g[0].p))->data[g[3].i];
if (val.tag == 0) {
g[0].tag = 0;
g[0].i = val.i;
}
g[0].tag = val.tag;
g[0].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[440].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_0_0_4:
{
if (IsInt(g[0]) && IsPointer(g[0]) && IsInt(g[4])) {
value val = ((object *)(g[0].p))->data[g[4].i];
if (val.tag != 0) {
g[0].tag = val.tag;
g[0].p = val.p;
}
else {
g[0].i = val.i;
}
ip++;
}
else if (IsPointer(g[0]) && IsPointer(g[0]) && IsInt(g[4])) {
value val = ((object *)(g[0].p))->data[g[4].i];
if (val.tag == 0) {
g[0].tag = 0;
g[0].i = val.i;
}
g[0].tag = val.tag;
g[0].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[441].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_0_0_5:
{
if (IsInt(g[0]) && IsPointer(g[0]) && IsInt(g[5])) {
value val = ((object *)(g[0].p))->data[g[5].i];
if (val.tag != 0) {
g[0].tag = val.tag;
g[0].p = val.p;
}
else {
g[0].i = val.i;
}
ip++;
}
else if (IsPointer(g[0]) && IsPointer(g[0]) && IsInt(g[5])) {
value val = ((object *)(g[0].p))->data[g[5].i];
if (val.tag == 0) {
g[0].tag = 0;
g[0].i = val.i;
}
g[0].tag = val.tag;
g[0].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[442].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_0_1_0:
{
if (IsInt(g[0]) && IsPointer(g[1]) && IsInt(g[0])) {
value val = ((object *)(g[1].p))->data[g[0].i];
if (val.tag != 0) {
g[0].tag = val.tag;
g[0].p = val.p;
}
else {
g[0].i = val.i;
}
ip++;
}
else if (IsPointer(g[0]) && IsPointer(g[1]) && IsInt(g[0])) {
value val = ((object *)(g[1].p))->data[g[0].i];
if (val.tag == 0) {
g[0].tag = 0;
g[0].i = val.i;
}
g[0].tag = val.tag;
g[0].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[443].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_0_1_2:
{
if (IsInt(g[0]) && IsPointer(g[1]) && IsInt(g[2])) {
value val = ((object *)(g[1].p))->data[g[2].i];
if (val.tag != 0) {
g[0].tag = val.tag;
g[0].p = val.p;
}
else {
g[0].i = val.i;
}
ip++;
}
else if (IsPointer(g[0]) && IsPointer(g[1]) && IsInt(g[2])) {
value val = ((object *)(g[1].p))->data[g[2].i];
if (val.tag == 0) {
g[0].tag = 0;
g[0].i = val.i;
}
g[0].tag = val.tag;
g[0].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[444].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_0_1_3:
{
if (IsInt(g[0]) && IsPointer(g[1]) && IsInt(g[3])) {
value val = ((object *)(g[1].p))->data[g[3].i];
if (val.tag != 0) {
g[0].tag = val.tag;
g[0].p = val.p;
}
else {
g[0].i = val.i;
}
ip++;
}
else if (IsPointer(g[0]) && IsPointer(g[1]) && IsInt(g[3])) {
value val = ((object *)(g[1].p))->data[g[3].i];
if (val.tag == 0) {
g[0].tag = 0;
g[0].i = val.i;
}
g[0].tag = val.tag;
g[0].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[445].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_0_1_4:
{
if (IsInt(g[0]) && IsPointer(g[1]) && IsInt(g[4])) {
value val = ((object *)(g[1].p))->data[g[4].i];
if (val.tag != 0) {
g[0].tag = val.tag;
g[0].p = val.p;
}
else {
g[0].i = val.i;
}
ip++;
}
else if (IsPointer(g[0]) && IsPointer(g[1]) && IsInt(g[4])) {
value val = ((object *)(g[1].p))->data[g[4].i];
if (val.tag == 0) {
g[0].tag = 0;
g[0].i = val.i;
}
g[0].tag = val.tag;
g[0].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[446].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_0_1_5:
{
if (IsInt(g[0]) && IsPointer(g[1]) && IsInt(g[5])) {
value val = ((object *)(g[1].p))->data[g[5].i];
if (val.tag != 0) {
g[0].tag = val.tag;
g[0].p = val.p;
}
else {
g[0].i = val.i;
}
ip++;
}
else if (IsPointer(g[0]) && IsPointer(g[1]) && IsInt(g[5])) {
value val = ((object *)(g[1].p))->data[g[5].i];
if (val.tag == 0) {
g[0].tag = 0;
g[0].i = val.i;
}
g[0].tag = val.tag;
g[0].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[447].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_0_2_0:
{
if (IsInt(g[0]) && IsPointer(g[2]) && IsInt(g[0])) {
value val = ((object *)(g[2].p))->data[g[0].i];
if (val.tag != 0) {
g[0].tag = val.tag;
g[0].p = val.p;
}
else {
g[0].i = val.i;
}
ip++;
}
else if (IsPointer(g[0]) && IsPointer(g[2]) && IsInt(g[0])) {
value val = ((object *)(g[2].p))->data[g[0].i];
if (val.tag == 0) {
g[0].tag = 0;
g[0].i = val.i;
}
g[0].tag = val.tag;
g[0].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[448].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_0_2_1:
{
if (IsInt(g[0]) && IsPointer(g[2]) && IsInt(g[1])) {
value val = ((object *)(g[2].p))->data[g[1].i];
if (val.tag != 0) {
g[0].tag = val.tag;
g[0].p = val.p;
}
else {
g[0].i = val.i;
}
ip++;
}
else if (IsPointer(g[0]) && IsPointer(g[2]) && IsInt(g[1])) {
value val = ((object *)(g[2].p))->data[g[1].i];
if (val.tag == 0) {
g[0].tag = 0;
g[0].i = val.i;
}
g[0].tag = val.tag;
g[0].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[449].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_0_2_3:
{
if (IsInt(g[0]) && IsPointer(g[2]) && IsInt(g[3])) {
value val = ((object *)(g[2].p))->data[g[3].i];
if (val.tag != 0) {
g[0].tag = val.tag;
g[0].p = val.p;
}
else {
g[0].i = val.i;
}
ip++;
}
else if (IsPointer(g[0]) && IsPointer(g[2]) && IsInt(g[3])) {
value val = ((object *)(g[2].p))->data[g[3].i];
if (val.tag == 0) {
g[0].tag = 0;
g[0].i = val.i;
}
g[0].tag = val.tag;
g[0].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[450].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_0_2_4:
{
if (IsInt(g[0]) && IsPointer(g[2]) && IsInt(g[4])) {
value val = ((object *)(g[2].p))->data[g[4].i];
if (val.tag != 0) {
g[0].tag = val.tag;
g[0].p = val.p;
}
else {
g[0].i = val.i;
}
ip++;
}
else if (IsPointer(g[0]) && IsPointer(g[2]) && IsInt(g[4])) {
value val = ((object *)(g[2].p))->data[g[4].i];
if (val.tag == 0) {
g[0].tag = 0;
g[0].i = val.i;
}
g[0].tag = val.tag;
g[0].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[451].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_0_2_5:
{
if (IsInt(g[0]) && IsPointer(g[2]) && IsInt(g[5])) {
value val = ((object *)(g[2].p))->data[g[5].i];
if (val.tag != 0) {
g[0].tag = val.tag;
g[0].p = val.p;
}
else {
g[0].i = val.i;
}
ip++;
}
else if (IsPointer(g[0]) && IsPointer(g[2]) && IsInt(g[5])) {
value val = ((object *)(g[2].p))->data[g[5].i];
if (val.tag == 0) {
g[0].tag = 0;
g[0].i = val.i;
}
g[0].tag = val.tag;
g[0].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[452].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_0_3_0:
{
if (IsInt(g[0]) && IsPointer(g[3]) && IsInt(g[0])) {
value val = ((object *)(g[3].p))->data[g[0].i];
if (val.tag != 0) {
g[0].tag = val.tag;
g[0].p = val.p;
}
else {
g[0].i = val.i;
}
ip++;
}
else if (IsPointer(g[0]) && IsPointer(g[3]) && IsInt(g[0])) {
value val = ((object *)(g[3].p))->data[g[0].i];
if (val.tag == 0) {
g[0].tag = 0;
g[0].i = val.i;
}
g[0].tag = val.tag;
g[0].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[453].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_0_3_1:
{
if (IsInt(g[0]) && IsPointer(g[3]) && IsInt(g[1])) {
value val = ((object *)(g[3].p))->data[g[1].i];
if (val.tag != 0) {
g[0].tag = val.tag;
g[0].p = val.p;
}
else {
g[0].i = val.i;
}
ip++;
}
else if (IsPointer(g[0]) && IsPointer(g[3]) && IsInt(g[1])) {
value val = ((object *)(g[3].p))->data[g[1].i];
if (val.tag == 0) {
g[0].tag = 0;
g[0].i = val.i;
}
g[0].tag = val.tag;
g[0].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[454].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_0_3_2:
{
if (IsInt(g[0]) && IsPointer(g[3]) && IsInt(g[2])) {
value val = ((object *)(g[3].p))->data[g[2].i];
if (val.tag != 0) {
g[0].tag = val.tag;
g[0].p = val.p;
}
else {
g[0].i = val.i;
}
ip++;
}
else if (IsPointer(g[0]) && IsPointer(g[3]) && IsInt(g[2])) {
value val = ((object *)(g[3].p))->data[g[2].i];
if (val.tag == 0) {
g[0].tag = 0;
g[0].i = val.i;
}
g[0].tag = val.tag;
g[0].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[455].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_0_3_4:
{
if (IsInt(g[0]) && IsPointer(g[3]) && IsInt(g[4])) {
value val = ((object *)(g[3].p))->data[g[4].i];
if (val.tag != 0) {
g[0].tag = val.tag;
g[0].p = val.p;
}
else {
g[0].i = val.i;
}
ip++;
}
else if (IsPointer(g[0]) && IsPointer(g[3]) && IsInt(g[4])) {
value val = ((object *)(g[3].p))->data[g[4].i];
if (val.tag == 0) {
g[0].tag = 0;
g[0].i = val.i;
}
g[0].tag = val.tag;
g[0].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[456].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_0_3_5:
{
if (IsInt(g[0]) && IsPointer(g[3]) && IsInt(g[5])) {
value val = ((object *)(g[3].p))->data[g[5].i];
if (val.tag != 0) {
g[0].tag = val.tag;
g[0].p = val.p;
}
else {
g[0].i = val.i;
}
ip++;
}
else if (IsPointer(g[0]) && IsPointer(g[3]) && IsInt(g[5])) {
value val = ((object *)(g[3].p))->data[g[5].i];
if (val.tag == 0) {
g[0].tag = 0;
g[0].i = val.i;
}
g[0].tag = val.tag;
g[0].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[457].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_0_4_0:
{
if (IsInt(g[0]) && IsPointer(g[4]) && IsInt(g[0])) {
value val = ((object *)(g[4].p))->data[g[0].i];
if (val.tag != 0) {
g[0].tag = val.tag;
g[0].p = val.p;
}
else {
g[0].i = val.i;
}
ip++;
}
else if (IsPointer(g[0]) && IsPointer(g[4]) && IsInt(g[0])) {
value val = ((object *)(g[4].p))->data[g[0].i];
if (val.tag == 0) {
g[0].tag = 0;
g[0].i = val.i;
}
g[0].tag = val.tag;
g[0].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[458].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_0_4_1:
{
if (IsInt(g[0]) && IsPointer(g[4]) && IsInt(g[1])) {
value val = ((object *)(g[4].p))->data[g[1].i];
if (val.tag != 0) {
g[0].tag = val.tag;
g[0].p = val.p;
}
else {
g[0].i = val.i;
}
ip++;
}
else if (IsPointer(g[0]) && IsPointer(g[4]) && IsInt(g[1])) {
value val = ((object *)(g[4].p))->data[g[1].i];
if (val.tag == 0) {
g[0].tag = 0;
g[0].i = val.i;
}
g[0].tag = val.tag;
g[0].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[459].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_0_4_2:
{
if (IsInt(g[0]) && IsPointer(g[4]) && IsInt(g[2])) {
value val = ((object *)(g[4].p))->data[g[2].i];
if (val.tag != 0) {
g[0].tag = val.tag;
g[0].p = val.p;
}
else {
g[0].i = val.i;
}
ip++;
}
else if (IsPointer(g[0]) && IsPointer(g[4]) && IsInt(g[2])) {
value val = ((object *)(g[4].p))->data[g[2].i];
if (val.tag == 0) {
g[0].tag = 0;
g[0].i = val.i;
}
g[0].tag = val.tag;
g[0].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[460].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_0_4_3:
{
if (IsInt(g[0]) && IsPointer(g[4]) && IsInt(g[3])) {
value val = ((object *)(g[4].p))->data[g[3].i];
if (val.tag != 0) {
g[0].tag = val.tag;
g[0].p = val.p;
}
else {
g[0].i = val.i;
}
ip++;
}
else if (IsPointer(g[0]) && IsPointer(g[4]) && IsInt(g[3])) {
value val = ((object *)(g[4].p))->data[g[3].i];
if (val.tag == 0) {
g[0].tag = 0;
g[0].i = val.i;
}
g[0].tag = val.tag;
g[0].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[461].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_0_4_5:
{
if (IsInt(g[0]) && IsPointer(g[4]) && IsInt(g[5])) {
value val = ((object *)(g[4].p))->data[g[5].i];
if (val.tag != 0) {
g[0].tag = val.tag;
g[0].p = val.p;
}
else {
g[0].i = val.i;
}
ip++;
}
else if (IsPointer(g[0]) && IsPointer(g[4]) && IsInt(g[5])) {
value val = ((object *)(g[4].p))->data[g[5].i];
if (val.tag == 0) {
g[0].tag = 0;
g[0].i = val.i;
}
g[0].tag = val.tag;
g[0].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[462].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_0_5_0:
{
if (IsInt(g[0]) && IsPointer(g[5]) && IsInt(g[0])) {
value val = ((object *)(g[5].p))->data[g[0].i];
if (val.tag != 0) {
g[0].tag = val.tag;
g[0].p = val.p;
}
else {
g[0].i = val.i;
}
ip++;
}
else if (IsPointer(g[0]) && IsPointer(g[5]) && IsInt(g[0])) {
value val = ((object *)(g[5].p))->data[g[0].i];
if (val.tag == 0) {
g[0].tag = 0;
g[0].i = val.i;
}
g[0].tag = val.tag;
g[0].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[463].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_0_5_1:
{
if (IsInt(g[0]) && IsPointer(g[5]) && IsInt(g[1])) {
value val = ((object *)(g[5].p))->data[g[1].i];
if (val.tag != 0) {
g[0].tag = val.tag;
g[0].p = val.p;
}
else {
g[0].i = val.i;
}
ip++;
}
else if (IsPointer(g[0]) && IsPointer(g[5]) && IsInt(g[1])) {
value val = ((object *)(g[5].p))->data[g[1].i];
if (val.tag == 0) {
g[0].tag = 0;
g[0].i = val.i;
}
g[0].tag = val.tag;
g[0].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[464].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_0_5_2:
{
if (IsInt(g[0]) && IsPointer(g[5]) && IsInt(g[2])) {
value val = ((object *)(g[5].p))->data[g[2].i];
if (val.tag != 0) {
g[0].tag = val.tag;
g[0].p = val.p;
}
else {
g[0].i = val.i;
}
ip++;
}
else if (IsPointer(g[0]) && IsPointer(g[5]) && IsInt(g[2])) {
value val = ((object *)(g[5].p))->data[g[2].i];
if (val.tag == 0) {
g[0].tag = 0;
g[0].i = val.i;
}
g[0].tag = val.tag;
g[0].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[465].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_0_5_3:
{
if (IsInt(g[0]) && IsPointer(g[5]) && IsInt(g[3])) {
value val = ((object *)(g[5].p))->data[g[3].i];
if (val.tag != 0) {
g[0].tag = val.tag;
g[0].p = val.p;
}
else {
g[0].i = val.i;
}
ip++;
}
else if (IsPointer(g[0]) && IsPointer(g[5]) && IsInt(g[3])) {
value val = ((object *)(g[5].p))->data[g[3].i];
if (val.tag == 0) {
g[0].tag = 0;
g[0].i = val.i;
}
g[0].tag = val.tag;
g[0].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[466].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_0_5_4:
{
if (IsInt(g[0]) && IsPointer(g[5]) && IsInt(g[4])) {
value val = ((object *)(g[5].p))->data[g[4].i];
if (val.tag != 0) {
g[0].tag = val.tag;
g[0].p = val.p;
}
else {
g[0].i = val.i;
}
ip++;
}
else if (IsPointer(g[0]) && IsPointer(g[5]) && IsInt(g[4])) {
value val = ((object *)(g[5].p))->data[g[4].i];
if (val.tag == 0) {
g[0].tag = 0;
g[0].i = val.i;
}
g[0].tag = val.tag;
g[0].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[467].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_1_0_1:
{
if (IsInt(g[1]) && IsPointer(g[0]) && IsInt(g[1])) {
value val = ((object *)(g[0].p))->data[g[1].i];
if (val.tag != 0) {
g[1].tag = val.tag;
g[1].p = val.p;
}
else {
g[1].i = val.i;
}
ip++;
}
else if (IsPointer(g[1]) && IsPointer(g[0]) && IsInt(g[1])) {
value val = ((object *)(g[0].p))->data[g[1].i];
if (val.tag == 0) {
g[1].tag = 0;
g[1].i = val.i;
}
g[1].tag = val.tag;
g[1].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[468].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_1_0_2:
{
if (IsInt(g[1]) && IsPointer(g[0]) && IsInt(g[2])) {
value val = ((object *)(g[0].p))->data[g[2].i];
if (val.tag != 0) {
g[1].tag = val.tag;
g[1].p = val.p;
}
else {
g[1].i = val.i;
}
ip++;
}
else if (IsPointer(g[1]) && IsPointer(g[0]) && IsInt(g[2])) {
value val = ((object *)(g[0].p))->data[g[2].i];
if (val.tag == 0) {
g[1].tag = 0;
g[1].i = val.i;
}
g[1].tag = val.tag;
g[1].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[469].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_1_0_3:
{
if (IsInt(g[1]) && IsPointer(g[0]) && IsInt(g[3])) {
value val = ((object *)(g[0].p))->data[g[3].i];
if (val.tag != 0) {
g[1].tag = val.tag;
g[1].p = val.p;
}
else {
g[1].i = val.i;
}
ip++;
}
else if (IsPointer(g[1]) && IsPointer(g[0]) && IsInt(g[3])) {
value val = ((object *)(g[0].p))->data[g[3].i];
if (val.tag == 0) {
g[1].tag = 0;
g[1].i = val.i;
}
g[1].tag = val.tag;
g[1].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[470].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_1_0_4:
{
if (IsInt(g[1]) && IsPointer(g[0]) && IsInt(g[4])) {
value val = ((object *)(g[0].p))->data[g[4].i];
if (val.tag != 0) {
g[1].tag = val.tag;
g[1].p = val.p;
}
else {
g[1].i = val.i;
}
ip++;
}
else if (IsPointer(g[1]) && IsPointer(g[0]) && IsInt(g[4])) {
value val = ((object *)(g[0].p))->data[g[4].i];
if (val.tag == 0) {
g[1].tag = 0;
g[1].i = val.i;
}
g[1].tag = val.tag;
g[1].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[471].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_1_0_5:
{
if (IsInt(g[1]) && IsPointer(g[0]) && IsInt(g[5])) {
value val = ((object *)(g[0].p))->data[g[5].i];
if (val.tag != 0) {
g[1].tag = val.tag;
g[1].p = val.p;
}
else {
g[1].i = val.i;
}
ip++;
}
else if (IsPointer(g[1]) && IsPointer(g[0]) && IsInt(g[5])) {
value val = ((object *)(g[0].p))->data[g[5].i];
if (val.tag == 0) {
g[1].tag = 0;
g[1].i = val.i;
}
g[1].tag = val.tag;
g[1].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[472].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_1_1_0:
{
if (IsInt(g[1]) && IsPointer(g[1]) && IsInt(g[0])) {
value val = ((object *)(g[1].p))->data[g[0].i];
if (val.tag != 0) {
g[1].tag = val.tag;
g[1].p = val.p;
}
else {
g[1].i = val.i;
}
ip++;
}
else if (IsPointer(g[1]) && IsPointer(g[1]) && IsInt(g[0])) {
value val = ((object *)(g[1].p))->data[g[0].i];
if (val.tag == 0) {
g[1].tag = 0;
g[1].i = val.i;
}
g[1].tag = val.tag;
g[1].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[473].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_1_1_2:
{
if (IsInt(g[1]) && IsPointer(g[1]) && IsInt(g[2])) {
value val = ((object *)(g[1].p))->data[g[2].i];
if (val.tag != 0) {
g[1].tag = val.tag;
g[1].p = val.p;
}
else {
g[1].i = val.i;
}
ip++;
}
else if (IsPointer(g[1]) && IsPointer(g[1]) && IsInt(g[2])) {
value val = ((object *)(g[1].p))->data[g[2].i];
if (val.tag == 0) {
g[1].tag = 0;
g[1].i = val.i;
}
g[1].tag = val.tag;
g[1].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[474].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_1_1_3:
{
if (IsInt(g[1]) && IsPointer(g[1]) && IsInt(g[3])) {
value val = ((object *)(g[1].p))->data[g[3].i];
if (val.tag != 0) {
g[1].tag = val.tag;
g[1].p = val.p;
}
else {
g[1].i = val.i;
}
ip++;
}
else if (IsPointer(g[1]) && IsPointer(g[1]) && IsInt(g[3])) {
value val = ((object *)(g[1].p))->data[g[3].i];
if (val.tag == 0) {
g[1].tag = 0;
g[1].i = val.i;
}
g[1].tag = val.tag;
g[1].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[475].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_1_1_4:
{
if (IsInt(g[1]) && IsPointer(g[1]) && IsInt(g[4])) {
value val = ((object *)(g[1].p))->data[g[4].i];
if (val.tag != 0) {
g[1].tag = val.tag;
g[1].p = val.p;
}
else {
g[1].i = val.i;
}
ip++;
}
else if (IsPointer(g[1]) && IsPointer(g[1]) && IsInt(g[4])) {
value val = ((object *)(g[1].p))->data[g[4].i];
if (val.tag == 0) {
g[1].tag = 0;
g[1].i = val.i;
}
g[1].tag = val.tag;
g[1].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[476].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_1_1_5:
{
if (IsInt(g[1]) && IsPointer(g[1]) && IsInt(g[5])) {
value val = ((object *)(g[1].p))->data[g[5].i];
if (val.tag != 0) {
g[1].tag = val.tag;
g[1].p = val.p;
}
else {
g[1].i = val.i;
}
ip++;
}
else if (IsPointer(g[1]) && IsPointer(g[1]) && IsInt(g[5])) {
value val = ((object *)(g[1].p))->data[g[5].i];
if (val.tag == 0) {
g[1].tag = 0;
g[1].i = val.i;
}
g[1].tag = val.tag;
g[1].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[477].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_1_2_0:
{
if (IsInt(g[1]) && IsPointer(g[2]) && IsInt(g[0])) {
value val = ((object *)(g[2].p))->data[g[0].i];
if (val.tag != 0) {
g[1].tag = val.tag;
g[1].p = val.p;
}
else {
g[1].i = val.i;
}
ip++;
}
else if (IsPointer(g[1]) && IsPointer(g[2]) && IsInt(g[0])) {
value val = ((object *)(g[2].p))->data[g[0].i];
if (val.tag == 0) {
g[1].tag = 0;
g[1].i = val.i;
}
g[1].tag = val.tag;
g[1].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[478].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_1_2_1:
{
if (IsInt(g[1]) && IsPointer(g[2]) && IsInt(g[1])) {
value val = ((object *)(g[2].p))->data[g[1].i];
if (val.tag != 0) {
g[1].tag = val.tag;
g[1].p = val.p;
}
else {
g[1].i = val.i;
}
ip++;
}
else if (IsPointer(g[1]) && IsPointer(g[2]) && IsInt(g[1])) {
value val = ((object *)(g[2].p))->data[g[1].i];
if (val.tag == 0) {
g[1].tag = 0;
g[1].i = val.i;
}
g[1].tag = val.tag;
g[1].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[479].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_1_2_3:
{
if (IsInt(g[1]) && IsPointer(g[2]) && IsInt(g[3])) {
value val = ((object *)(g[2].p))->data[g[3].i];
if (val.tag != 0) {
g[1].tag = val.tag;
g[1].p = val.p;
}
else {
g[1].i = val.i;
}
ip++;
}
else if (IsPointer(g[1]) && IsPointer(g[2]) && IsInt(g[3])) {
value val = ((object *)(g[2].p))->data[g[3].i];
if (val.tag == 0) {
g[1].tag = 0;
g[1].i = val.i;
}
g[1].tag = val.tag;
g[1].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[480].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_1_2_4:
{
if (IsInt(g[1]) && IsPointer(g[2]) && IsInt(g[4])) {
value val = ((object *)(g[2].p))->data[g[4].i];
if (val.tag != 0) {
g[1].tag = val.tag;
g[1].p = val.p;
}
else {
g[1].i = val.i;
}
ip++;
}
else if (IsPointer(g[1]) && IsPointer(g[2]) && IsInt(g[4])) {
value val = ((object *)(g[2].p))->data[g[4].i];
if (val.tag == 0) {
g[1].tag = 0;
g[1].i = val.i;
}
g[1].tag = val.tag;
g[1].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[481].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_1_2_5:
{
if (IsInt(g[1]) && IsPointer(g[2]) && IsInt(g[5])) {
value val = ((object *)(g[2].p))->data[g[5].i];
if (val.tag != 0) {
g[1].tag = val.tag;
g[1].p = val.p;
}
else {
g[1].i = val.i;
}
ip++;
}
else if (IsPointer(g[1]) && IsPointer(g[2]) && IsInt(g[5])) {
value val = ((object *)(g[2].p))->data[g[5].i];
if (val.tag == 0) {
g[1].tag = 0;
g[1].i = val.i;
}
g[1].tag = val.tag;
g[1].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[482].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_1_3_0:
{
if (IsInt(g[1]) && IsPointer(g[3]) && IsInt(g[0])) {
value val = ((object *)(g[3].p))->data[g[0].i];
if (val.tag != 0) {
g[1].tag = val.tag;
g[1].p = val.p;
}
else {
g[1].i = val.i;
}
ip++;
}
else if (IsPointer(g[1]) && IsPointer(g[3]) && IsInt(g[0])) {
value val = ((object *)(g[3].p))->data[g[0].i];
if (val.tag == 0) {
g[1].tag = 0;
g[1].i = val.i;
}
g[1].tag = val.tag;
g[1].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[483].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_1_3_1:
{
if (IsInt(g[1]) && IsPointer(g[3]) && IsInt(g[1])) {
value val = ((object *)(g[3].p))->data[g[1].i];
if (val.tag != 0) {
g[1].tag = val.tag;
g[1].p = val.p;
}
else {
g[1].i = val.i;
}
ip++;
}
else if (IsPointer(g[1]) && IsPointer(g[3]) && IsInt(g[1])) {
value val = ((object *)(g[3].p))->data[g[1].i];
if (val.tag == 0) {
g[1].tag = 0;
g[1].i = val.i;
}
g[1].tag = val.tag;
g[1].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[484].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_1_3_2:
{
if (IsInt(g[1]) && IsPointer(g[3]) && IsInt(g[2])) {
value val = ((object *)(g[3].p))->data[g[2].i];
if (val.tag != 0) {
g[1].tag = val.tag;
g[1].p = val.p;
}
else {
g[1].i = val.i;
}
ip++;
}
else if (IsPointer(g[1]) && IsPointer(g[3]) && IsInt(g[2])) {
value val = ((object *)(g[3].p))->data[g[2].i];
if (val.tag == 0) {
g[1].tag = 0;
g[1].i = val.i;
}
g[1].tag = val.tag;
g[1].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[485].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_1_3_4:
{
if (IsInt(g[1]) && IsPointer(g[3]) && IsInt(g[4])) {
value val = ((object *)(g[3].p))->data[g[4].i];
if (val.tag != 0) {
g[1].tag = val.tag;
g[1].p = val.p;
}
else {
g[1].i = val.i;
}
ip++;
}
else if (IsPointer(g[1]) && IsPointer(g[3]) && IsInt(g[4])) {
value val = ((object *)(g[3].p))->data[g[4].i];
if (val.tag == 0) {
g[1].tag = 0;
g[1].i = val.i;
}
g[1].tag = val.tag;
g[1].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[486].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_1_3_5:
{
if (IsInt(g[1]) && IsPointer(g[3]) && IsInt(g[5])) {
value val = ((object *)(g[3].p))->data[g[5].i];
if (val.tag != 0) {
g[1].tag = val.tag;
g[1].p = val.p;
}
else {
g[1].i = val.i;
}
ip++;
}
else if (IsPointer(g[1]) && IsPointer(g[3]) && IsInt(g[5])) {
value val = ((object *)(g[3].p))->data[g[5].i];
if (val.tag == 0) {
g[1].tag = 0;
g[1].i = val.i;
}
g[1].tag = val.tag;
g[1].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[487].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_1_4_0:
{
if (IsInt(g[1]) && IsPointer(g[4]) && IsInt(g[0])) {
value val = ((object *)(g[4].p))->data[g[0].i];
if (val.tag != 0) {
g[1].tag = val.tag;
g[1].p = val.p;
}
else {
g[1].i = val.i;
}
ip++;
}
else if (IsPointer(g[1]) && IsPointer(g[4]) && IsInt(g[0])) {
value val = ((object *)(g[4].p))->data[g[0].i];
if (val.tag == 0) {
g[1].tag = 0;
g[1].i = val.i;
}
g[1].tag = val.tag;
g[1].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[488].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_1_4_1:
{
if (IsInt(g[1]) && IsPointer(g[4]) && IsInt(g[1])) {
value val = ((object *)(g[4].p))->data[g[1].i];
if (val.tag != 0) {
g[1].tag = val.tag;
g[1].p = val.p;
}
else {
g[1].i = val.i;
}
ip++;
}
else if (IsPointer(g[1]) && IsPointer(g[4]) && IsInt(g[1])) {
value val = ((object *)(g[4].p))->data[g[1].i];
if (val.tag == 0) {
g[1].tag = 0;
g[1].i = val.i;
}
g[1].tag = val.tag;
g[1].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[489].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_1_4_2:
{
if (IsInt(g[1]) && IsPointer(g[4]) && IsInt(g[2])) {
value val = ((object *)(g[4].p))->data[g[2].i];
if (val.tag != 0) {
g[1].tag = val.tag;
g[1].p = val.p;
}
else {
g[1].i = val.i;
}
ip++;
}
else if (IsPointer(g[1]) && IsPointer(g[4]) && IsInt(g[2])) {
value val = ((object *)(g[4].p))->data[g[2].i];
if (val.tag == 0) {
g[1].tag = 0;
g[1].i = val.i;
}
g[1].tag = val.tag;
g[1].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[490].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_1_4_3:
{
if (IsInt(g[1]) && IsPointer(g[4]) && IsInt(g[3])) {
value val = ((object *)(g[4].p))->data[g[3].i];
if (val.tag != 0) {
g[1].tag = val.tag;
g[1].p = val.p;
}
else {
g[1].i = val.i;
}
ip++;
}
else if (IsPointer(g[1]) && IsPointer(g[4]) && IsInt(g[3])) {
value val = ((object *)(g[4].p))->data[g[3].i];
if (val.tag == 0) {
g[1].tag = 0;
g[1].i = val.i;
}
g[1].tag = val.tag;
g[1].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[491].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_1_4_5:
{
if (IsInt(g[1]) && IsPointer(g[4]) && IsInt(g[5])) {
value val = ((object *)(g[4].p))->data[g[5].i];
if (val.tag != 0) {
g[1].tag = val.tag;
g[1].p = val.p;
}
else {
g[1].i = val.i;
}
ip++;
}
else if (IsPointer(g[1]) && IsPointer(g[4]) && IsInt(g[5])) {
value val = ((object *)(g[4].p))->data[g[5].i];
if (val.tag == 0) {
g[1].tag = 0;
g[1].i = val.i;
}
g[1].tag = val.tag;
g[1].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[492].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_1_5_0:
{
if (IsInt(g[1]) && IsPointer(g[5]) && IsInt(g[0])) {
value val = ((object *)(g[5].p))->data[g[0].i];
if (val.tag != 0) {
g[1].tag = val.tag;
g[1].p = val.p;
}
else {
g[1].i = val.i;
}
ip++;
}
else if (IsPointer(g[1]) && IsPointer(g[5]) && IsInt(g[0])) {
value val = ((object *)(g[5].p))->data[g[0].i];
if (val.tag == 0) {
g[1].tag = 0;
g[1].i = val.i;
}
g[1].tag = val.tag;
g[1].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[493].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_1_5_1:
{
if (IsInt(g[1]) && IsPointer(g[5]) && IsInt(g[1])) {
value val = ((object *)(g[5].p))->data[g[1].i];
if (val.tag != 0) {
g[1].tag = val.tag;
g[1].p = val.p;
}
else {
g[1].i = val.i;
}
ip++;
}
else if (IsPointer(g[1]) && IsPointer(g[5]) && IsInt(g[1])) {
value val = ((object *)(g[5].p))->data[g[1].i];
if (val.tag == 0) {
g[1].tag = 0;
g[1].i = val.i;
}
g[1].tag = val.tag;
g[1].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[494].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_1_5_2:
{
if (IsInt(g[1]) && IsPointer(g[5]) && IsInt(g[2])) {
value val = ((object *)(g[5].p))->data[g[2].i];
if (val.tag != 0) {
g[1].tag = val.tag;
g[1].p = val.p;
}
else {
g[1].i = val.i;
}
ip++;
}
else if (IsPointer(g[1]) && IsPointer(g[5]) && IsInt(g[2])) {
value val = ((object *)(g[5].p))->data[g[2].i];
if (val.tag == 0) {
g[1].tag = 0;
g[1].i = val.i;
}
g[1].tag = val.tag;
g[1].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[495].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_1_5_3:
{
if (IsInt(g[1]) && IsPointer(g[5]) && IsInt(g[3])) {
value val = ((object *)(g[5].p))->data[g[3].i];
if (val.tag != 0) {
g[1].tag = val.tag;
g[1].p = val.p;
}
else {
g[1].i = val.i;
}
ip++;
}
else if (IsPointer(g[1]) && IsPointer(g[5]) && IsInt(g[3])) {
value val = ((object *)(g[5].p))->data[g[3].i];
if (val.tag == 0) {
g[1].tag = 0;
g[1].i = val.i;
}
g[1].tag = val.tag;
g[1].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[496].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_1_5_4:
{
if (IsInt(g[1]) && IsPointer(g[5]) && IsInt(g[4])) {
value val = ((object *)(g[5].p))->data[g[4].i];
if (val.tag != 0) {
g[1].tag = val.tag;
g[1].p = val.p;
}
else {
g[1].i = val.i;
}
ip++;
}
else if (IsPointer(g[1]) && IsPointer(g[5]) && IsInt(g[4])) {
value val = ((object *)(g[5].p))->data[g[4].i];
if (val.tag == 0) {
g[1].tag = 0;
g[1].i = val.i;
}
g[1].tag = val.tag;
g[1].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[497].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_2_0_1:
{
if (IsInt(g[2]) && IsPointer(g[0]) && IsInt(g[1])) {
value val = ((object *)(g[0].p))->data[g[1].i];
if (val.tag != 0) {
g[2].tag = val.tag;
g[2].p = val.p;
}
else {
g[2].i = val.i;
}
ip++;
}
else if (IsPointer(g[2]) && IsPointer(g[0]) && IsInt(g[1])) {
value val = ((object *)(g[0].p))->data[g[1].i];
if (val.tag == 0) {
g[2].tag = 0;
g[2].i = val.i;
}
g[2].tag = val.tag;
g[2].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[498].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_2_0_2:
{
if (IsInt(g[2]) && IsPointer(g[0]) && IsInt(g[2])) {
value val = ((object *)(g[0].p))->data[g[2].i];
if (val.tag != 0) {
g[2].tag = val.tag;
g[2].p = val.p;
}
else {
g[2].i = val.i;
}
ip++;
}
else if (IsPointer(g[2]) && IsPointer(g[0]) && IsInt(g[2])) {
value val = ((object *)(g[0].p))->data[g[2].i];
if (val.tag == 0) {
g[2].tag = 0;
g[2].i = val.i;
}
g[2].tag = val.tag;
g[2].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[499].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_2_0_3:
{
if (IsInt(g[2]) && IsPointer(g[0]) && IsInt(g[3])) {
value val = ((object *)(g[0].p))->data[g[3].i];
if (val.tag != 0) {
g[2].tag = val.tag;
g[2].p = val.p;
}
else {
g[2].i = val.i;
}
ip++;
}
else if (IsPointer(g[2]) && IsPointer(g[0]) && IsInt(g[3])) {
value val = ((object *)(g[0].p))->data[g[3].i];
if (val.tag == 0) {
g[2].tag = 0;
g[2].i = val.i;
}
g[2].tag = val.tag;
g[2].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[500].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_2_0_4:
{
if (IsInt(g[2]) && IsPointer(g[0]) && IsInt(g[4])) {
value val = ((object *)(g[0].p))->data[g[4].i];
if (val.tag != 0) {
g[2].tag = val.tag;
g[2].p = val.p;
}
else {
g[2].i = val.i;
}
ip++;
}
else if (IsPointer(g[2]) && IsPointer(g[0]) && IsInt(g[4])) {
value val = ((object *)(g[0].p))->data[g[4].i];
if (val.tag == 0) {
g[2].tag = 0;
g[2].i = val.i;
}
g[2].tag = val.tag;
g[2].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[501].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_2_0_5:
{
if (IsInt(g[2]) && IsPointer(g[0]) && IsInt(g[5])) {
value val = ((object *)(g[0].p))->data[g[5].i];
if (val.tag != 0) {
g[2].tag = val.tag;
g[2].p = val.p;
}
else {
g[2].i = val.i;
}
ip++;
}
else if (IsPointer(g[2]) && IsPointer(g[0]) && IsInt(g[5])) {
value val = ((object *)(g[0].p))->data[g[5].i];
if (val.tag == 0) {
g[2].tag = 0;
g[2].i = val.i;
}
g[2].tag = val.tag;
g[2].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[502].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_2_1_0:
{
if (IsInt(g[2]) && IsPointer(g[1]) && IsInt(g[0])) {
value val = ((object *)(g[1].p))->data[g[0].i];
if (val.tag != 0) {
g[2].tag = val.tag;
g[2].p = val.p;
}
else {
g[2].i = val.i;
}
ip++;
}
else if (IsPointer(g[2]) && IsPointer(g[1]) && IsInt(g[0])) {
value val = ((object *)(g[1].p))->data[g[0].i];
if (val.tag == 0) {
g[2].tag = 0;
g[2].i = val.i;
}
g[2].tag = val.tag;
g[2].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[503].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_2_1_2:
{
if (IsInt(g[2]) && IsPointer(g[1]) && IsInt(g[2])) {
value val = ((object *)(g[1].p))->data[g[2].i];
if (val.tag != 0) {
g[2].tag = val.tag;
g[2].p = val.p;
}
else {
g[2].i = val.i;
}
ip++;
}
else if (IsPointer(g[2]) && IsPointer(g[1]) && IsInt(g[2])) {
value val = ((object *)(g[1].p))->data[g[2].i];
if (val.tag == 0) {
g[2].tag = 0;
g[2].i = val.i;
}
g[2].tag = val.tag;
g[2].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[504].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_2_1_3:
{
if (IsInt(g[2]) && IsPointer(g[1]) && IsInt(g[3])) {
value val = ((object *)(g[1].p))->data[g[3].i];
if (val.tag != 0) {
g[2].tag = val.tag;
g[2].p = val.p;
}
else {
g[2].i = val.i;
}
ip++;
}
else if (IsPointer(g[2]) && IsPointer(g[1]) && IsInt(g[3])) {
value val = ((object *)(g[1].p))->data[g[3].i];
if (val.tag == 0) {
g[2].tag = 0;
g[2].i = val.i;
}
g[2].tag = val.tag;
g[2].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[505].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_2_1_4:
{
if (IsInt(g[2]) && IsPointer(g[1]) && IsInt(g[4])) {
value val = ((object *)(g[1].p))->data[g[4].i];
if (val.tag != 0) {
g[2].tag = val.tag;
g[2].p = val.p;
}
else {
g[2].i = val.i;
}
ip++;
}
else if (IsPointer(g[2]) && IsPointer(g[1]) && IsInt(g[4])) {
value val = ((object *)(g[1].p))->data[g[4].i];
if (val.tag == 0) {
g[2].tag = 0;
g[2].i = val.i;
}
g[2].tag = val.tag;
g[2].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[506].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_2_1_5:
{
if (IsInt(g[2]) && IsPointer(g[1]) && IsInt(g[5])) {
value val = ((object *)(g[1].p))->data[g[5].i];
if (val.tag != 0) {
g[2].tag = val.tag;
g[2].p = val.p;
}
else {
g[2].i = val.i;
}
ip++;
}
else if (IsPointer(g[2]) && IsPointer(g[1]) && IsInt(g[5])) {
value val = ((object *)(g[1].p))->data[g[5].i];
if (val.tag == 0) {
g[2].tag = 0;
g[2].i = val.i;
}
g[2].tag = val.tag;
g[2].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[507].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_2_2_0:
{
if (IsInt(g[2]) && IsPointer(g[2]) && IsInt(g[0])) {
value val = ((object *)(g[2].p))->data[g[0].i];
if (val.tag != 0) {
g[2].tag = val.tag;
g[2].p = val.p;
}
else {
g[2].i = val.i;
}
ip++;
}
else if (IsPointer(g[2]) && IsPointer(g[2]) && IsInt(g[0])) {
value val = ((object *)(g[2].p))->data[g[0].i];
if (val.tag == 0) {
g[2].tag = 0;
g[2].i = val.i;
}
g[2].tag = val.tag;
g[2].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[508].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_2_2_1:
{
if (IsInt(g[2]) && IsPointer(g[2]) && IsInt(g[1])) {
value val = ((object *)(g[2].p))->data[g[1].i];
if (val.tag != 0) {
g[2].tag = val.tag;
g[2].p = val.p;
}
else {
g[2].i = val.i;
}
ip++;
}
else if (IsPointer(g[2]) && IsPointer(g[2]) && IsInt(g[1])) {
value val = ((object *)(g[2].p))->data[g[1].i];
if (val.tag == 0) {
g[2].tag = 0;
g[2].i = val.i;
}
g[2].tag = val.tag;
g[2].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[509].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_2_2_3:
{
if (IsInt(g[2]) && IsPointer(g[2]) && IsInt(g[3])) {
value val = ((object *)(g[2].p))->data[g[3].i];
if (val.tag != 0) {
g[2].tag = val.tag;
g[2].p = val.p;
}
else {
g[2].i = val.i;
}
ip++;
}
else if (IsPointer(g[2]) && IsPointer(g[2]) && IsInt(g[3])) {
value val = ((object *)(g[2].p))->data[g[3].i];
if (val.tag == 0) {
g[2].tag = 0;
g[2].i = val.i;
}
g[2].tag = val.tag;
g[2].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[510].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_2_2_4:
{
if (IsInt(g[2]) && IsPointer(g[2]) && IsInt(g[4])) {
value val = ((object *)(g[2].p))->data[g[4].i];
if (val.tag != 0) {
g[2].tag = val.tag;
g[2].p = val.p;
}
else {
g[2].i = val.i;
}
ip++;
}
else if (IsPointer(g[2]) && IsPointer(g[2]) && IsInt(g[4])) {
value val = ((object *)(g[2].p))->data[g[4].i];
if (val.tag == 0) {
g[2].tag = 0;
g[2].i = val.i;
}
g[2].tag = val.tag;
g[2].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[511].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_2_2_5:
{
if (IsInt(g[2]) && IsPointer(g[2]) && IsInt(g[5])) {
value val = ((object *)(g[2].p))->data[g[5].i];
if (val.tag != 0) {
g[2].tag = val.tag;
g[2].p = val.p;
}
else {
g[2].i = val.i;
}
ip++;
}
else if (IsPointer(g[2]) && IsPointer(g[2]) && IsInt(g[5])) {
value val = ((object *)(g[2].p))->data[g[5].i];
if (val.tag == 0) {
g[2].tag = 0;
g[2].i = val.i;
}
g[2].tag = val.tag;
g[2].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[512].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_2_3_0:
{
if (IsInt(g[2]) && IsPointer(g[3]) && IsInt(g[0])) {
value val = ((object *)(g[3].p))->data[g[0].i];
if (val.tag != 0) {
g[2].tag = val.tag;
g[2].p = val.p;
}
else {
g[2].i = val.i;
}
ip++;
}
else if (IsPointer(g[2]) && IsPointer(g[3]) && IsInt(g[0])) {
value val = ((object *)(g[3].p))->data[g[0].i];
if (val.tag == 0) {
g[2].tag = 0;
g[2].i = val.i;
}
g[2].tag = val.tag;
g[2].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[513].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_2_3_1:
{
if (IsInt(g[2]) && IsPointer(g[3]) && IsInt(g[1])) {
value val = ((object *)(g[3].p))->data[g[1].i];
if (val.tag != 0) {
g[2].tag = val.tag;
g[2].p = val.p;
}
else {
g[2].i = val.i;
}
ip++;
}
else if (IsPointer(g[2]) && IsPointer(g[3]) && IsInt(g[1])) {
value val = ((object *)(g[3].p))->data[g[1].i];
if (val.tag == 0) {
g[2].tag = 0;
g[2].i = val.i;
}
g[2].tag = val.tag;
g[2].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[514].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_2_3_2:
{
if (IsInt(g[2]) && IsPointer(g[3]) && IsInt(g[2])) {
value val = ((object *)(g[3].p))->data[g[2].i];
if (val.tag != 0) {
g[2].tag = val.tag;
g[2].p = val.p;
}
else {
g[2].i = val.i;
}
ip++;
}
else if (IsPointer(g[2]) && IsPointer(g[3]) && IsInt(g[2])) {
value val = ((object *)(g[3].p))->data[g[2].i];
if (val.tag == 0) {
g[2].tag = 0;
g[2].i = val.i;
}
g[2].tag = val.tag;
g[2].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[515].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_2_3_4:
{
if (IsInt(g[2]) && IsPointer(g[3]) && IsInt(g[4])) {
value val = ((object *)(g[3].p))->data[g[4].i];
if (val.tag != 0) {
g[2].tag = val.tag;
g[2].p = val.p;
}
else {
g[2].i = val.i;
}
ip++;
}
else if (IsPointer(g[2]) && IsPointer(g[3]) && IsInt(g[4])) {
value val = ((object *)(g[3].p))->data[g[4].i];
if (val.tag == 0) {
g[2].tag = 0;
g[2].i = val.i;
}
g[2].tag = val.tag;
g[2].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[516].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_2_3_5:
{
if (IsInt(g[2]) && IsPointer(g[3]) && IsInt(g[5])) {
value val = ((object *)(g[3].p))->data[g[5].i];
if (val.tag != 0) {
g[2].tag = val.tag;
g[2].p = val.p;
}
else {
g[2].i = val.i;
}
ip++;
}
else if (IsPointer(g[2]) && IsPointer(g[3]) && IsInt(g[5])) {
value val = ((object *)(g[3].p))->data[g[5].i];
if (val.tag == 0) {
g[2].tag = 0;
g[2].i = val.i;
}
g[2].tag = val.tag;
g[2].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[517].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_2_4_0:
{
if (IsInt(g[2]) && IsPointer(g[4]) && IsInt(g[0])) {
value val = ((object *)(g[4].p))->data[g[0].i];
if (val.tag != 0) {
g[2].tag = val.tag;
g[2].p = val.p;
}
else {
g[2].i = val.i;
}
ip++;
}
else if (IsPointer(g[2]) && IsPointer(g[4]) && IsInt(g[0])) {
value val = ((object *)(g[4].p))->data[g[0].i];
if (val.tag == 0) {
g[2].tag = 0;
g[2].i = val.i;
}
g[2].tag = val.tag;
g[2].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[518].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_2_4_1:
{
if (IsInt(g[2]) && IsPointer(g[4]) && IsInt(g[1])) {
value val = ((object *)(g[4].p))->data[g[1].i];
if (val.tag != 0) {
g[2].tag = val.tag;
g[2].p = val.p;
}
else {
g[2].i = val.i;
}
ip++;
}
else if (IsPointer(g[2]) && IsPointer(g[4]) && IsInt(g[1])) {
value val = ((object *)(g[4].p))->data[g[1].i];
if (val.tag == 0) {
g[2].tag = 0;
g[2].i = val.i;
}
g[2].tag = val.tag;
g[2].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[519].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_2_4_2:
{
if (IsInt(g[2]) && IsPointer(g[4]) && IsInt(g[2])) {
value val = ((object *)(g[4].p))->data[g[2].i];
if (val.tag != 0) {
g[2].tag = val.tag;
g[2].p = val.p;
}
else {
g[2].i = val.i;
}
ip++;
}
else if (IsPointer(g[2]) && IsPointer(g[4]) && IsInt(g[2])) {
value val = ((object *)(g[4].p))->data[g[2].i];
if (val.tag == 0) {
g[2].tag = 0;
g[2].i = val.i;
}
g[2].tag = val.tag;
g[2].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[520].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_2_4_3:
{
if (IsInt(g[2]) && IsPointer(g[4]) && IsInt(g[3])) {
value val = ((object *)(g[4].p))->data[g[3].i];
if (val.tag != 0) {
g[2].tag = val.tag;
g[2].p = val.p;
}
else {
g[2].i = val.i;
}
ip++;
}
else if (IsPointer(g[2]) && IsPointer(g[4]) && IsInt(g[3])) {
value val = ((object *)(g[4].p))->data[g[3].i];
if (val.tag == 0) {
g[2].tag = 0;
g[2].i = val.i;
}
g[2].tag = val.tag;
g[2].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[521].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_2_4_5:
{
if (IsInt(g[2]) && IsPointer(g[4]) && IsInt(g[5])) {
value val = ((object *)(g[4].p))->data[g[5].i];
if (val.tag != 0) {
g[2].tag = val.tag;
g[2].p = val.p;
}
else {
g[2].i = val.i;
}
ip++;
}
else if (IsPointer(g[2]) && IsPointer(g[4]) && IsInt(g[5])) {
value val = ((object *)(g[4].p))->data[g[5].i];
if (val.tag == 0) {
g[2].tag = 0;
g[2].i = val.i;
}
g[2].tag = val.tag;
g[2].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[522].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_2_5_0:
{
if (IsInt(g[2]) && IsPointer(g[5]) && IsInt(g[0])) {
value val = ((object *)(g[5].p))->data[g[0].i];
if (val.tag != 0) {
g[2].tag = val.tag;
g[2].p = val.p;
}
else {
g[2].i = val.i;
}
ip++;
}
else if (IsPointer(g[2]) && IsPointer(g[5]) && IsInt(g[0])) {
value val = ((object *)(g[5].p))->data[g[0].i];
if (val.tag == 0) {
g[2].tag = 0;
g[2].i = val.i;
}
g[2].tag = val.tag;
g[2].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[523].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_2_5_1:
{
if (IsInt(g[2]) && IsPointer(g[5]) && IsInt(g[1])) {
value val = ((object *)(g[5].p))->data[g[1].i];
if (val.tag != 0) {
g[2].tag = val.tag;
g[2].p = val.p;
}
else {
g[2].i = val.i;
}
ip++;
}
else if (IsPointer(g[2]) && IsPointer(g[5]) && IsInt(g[1])) {
value val = ((object *)(g[5].p))->data[g[1].i];
if (val.tag == 0) {
g[2].tag = 0;
g[2].i = val.i;
}
g[2].tag = val.tag;
g[2].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[524].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_2_5_2:
{
if (IsInt(g[2]) && IsPointer(g[5]) && IsInt(g[2])) {
value val = ((object *)(g[5].p))->data[g[2].i];
if (val.tag != 0) {
g[2].tag = val.tag;
g[2].p = val.p;
}
else {
g[2].i = val.i;
}
ip++;
}
else if (IsPointer(g[2]) && IsPointer(g[5]) && IsInt(g[2])) {
value val = ((object *)(g[5].p))->data[g[2].i];
if (val.tag == 0) {
g[2].tag = 0;
g[2].i = val.i;
}
g[2].tag = val.tag;
g[2].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[525].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_2_5_3:
{
if (IsInt(g[2]) && IsPointer(g[5]) && IsInt(g[3])) {
value val = ((object *)(g[5].p))->data[g[3].i];
if (val.tag != 0) {
g[2].tag = val.tag;
g[2].p = val.p;
}
else {
g[2].i = val.i;
}
ip++;
}
else if (IsPointer(g[2]) && IsPointer(g[5]) && IsInt(g[3])) {
value val = ((object *)(g[5].p))->data[g[3].i];
if (val.tag == 0) {
g[2].tag = 0;
g[2].i = val.i;
}
g[2].tag = val.tag;
g[2].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[526].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_2_5_4:
{
if (IsInt(g[2]) && IsPointer(g[5]) && IsInt(g[4])) {
value val = ((object *)(g[5].p))->data[g[4].i];
if (val.tag != 0) {
g[2].tag = val.tag;
g[2].p = val.p;
}
else {
g[2].i = val.i;
}
ip++;
}
else if (IsPointer(g[2]) && IsPointer(g[5]) && IsInt(g[4])) {
value val = ((object *)(g[5].p))->data[g[4].i];
if (val.tag == 0) {
g[2].tag = 0;
g[2].i = val.i;
}
g[2].tag = val.tag;
g[2].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[527].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_3_0_1:
{
if (IsInt(g[3]) && IsPointer(g[0]) && IsInt(g[1])) {
value val = ((object *)(g[0].p))->data[g[1].i];
if (val.tag != 0) {
g[3].tag = val.tag;
g[3].p = val.p;
}
else {
g[3].i = val.i;
}
ip++;
}
else if (IsPointer(g[3]) && IsPointer(g[0]) && IsInt(g[1])) {
value val = ((object *)(g[0].p))->data[g[1].i];
if (val.tag == 0) {
g[3].tag = 0;
g[3].i = val.i;
}
g[3].tag = val.tag;
g[3].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[528].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_3_0_2:
{
if (IsInt(g[3]) && IsPointer(g[0]) && IsInt(g[2])) {
value val = ((object *)(g[0].p))->data[g[2].i];
if (val.tag != 0) {
g[3].tag = val.tag;
g[3].p = val.p;
}
else {
g[3].i = val.i;
}
ip++;
}
else if (IsPointer(g[3]) && IsPointer(g[0]) && IsInt(g[2])) {
value val = ((object *)(g[0].p))->data[g[2].i];
if (val.tag == 0) {
g[3].tag = 0;
g[3].i = val.i;
}
g[3].tag = val.tag;
g[3].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[529].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_3_0_3:
{
if (IsInt(g[3]) && IsPointer(g[0]) && IsInt(g[3])) {
value val = ((object *)(g[0].p))->data[g[3].i];
if (val.tag != 0) {
g[3].tag = val.tag;
g[3].p = val.p;
}
else {
g[3].i = val.i;
}
ip++;
}
else if (IsPointer(g[3]) && IsPointer(g[0]) && IsInt(g[3])) {
value val = ((object *)(g[0].p))->data[g[3].i];
if (val.tag == 0) {
g[3].tag = 0;
g[3].i = val.i;
}
g[3].tag = val.tag;
g[3].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[530].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_3_0_4:
{
if (IsInt(g[3]) && IsPointer(g[0]) && IsInt(g[4])) {
value val = ((object *)(g[0].p))->data[g[4].i];
if (val.tag != 0) {
g[3].tag = val.tag;
g[3].p = val.p;
}
else {
g[3].i = val.i;
}
ip++;
}
else if (IsPointer(g[3]) && IsPointer(g[0]) && IsInt(g[4])) {
value val = ((object *)(g[0].p))->data[g[4].i];
if (val.tag == 0) {
g[3].tag = 0;
g[3].i = val.i;
}
g[3].tag = val.tag;
g[3].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[531].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_3_0_5:
{
if (IsInt(g[3]) && IsPointer(g[0]) && IsInt(g[5])) {
value val = ((object *)(g[0].p))->data[g[5].i];
if (val.tag != 0) {
g[3].tag = val.tag;
g[3].p = val.p;
}
else {
g[3].i = val.i;
}
ip++;
}
else if (IsPointer(g[3]) && IsPointer(g[0]) && IsInt(g[5])) {
value val = ((object *)(g[0].p))->data[g[5].i];
if (val.tag == 0) {
g[3].tag = 0;
g[3].i = val.i;
}
g[3].tag = val.tag;
g[3].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[532].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_3_1_0:
{
if (IsInt(g[3]) && IsPointer(g[1]) && IsInt(g[0])) {
value val = ((object *)(g[1].p))->data[g[0].i];
if (val.tag != 0) {
g[3].tag = val.tag;
g[3].p = val.p;
}
else {
g[3].i = val.i;
}
ip++;
}
else if (IsPointer(g[3]) && IsPointer(g[1]) && IsInt(g[0])) {
value val = ((object *)(g[1].p))->data[g[0].i];
if (val.tag == 0) {
g[3].tag = 0;
g[3].i = val.i;
}
g[3].tag = val.tag;
g[3].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[533].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_3_1_2:
{
if (IsInt(g[3]) && IsPointer(g[1]) && IsInt(g[2])) {
value val = ((object *)(g[1].p))->data[g[2].i];
if (val.tag != 0) {
g[3].tag = val.tag;
g[3].p = val.p;
}
else {
g[3].i = val.i;
}
ip++;
}
else if (IsPointer(g[3]) && IsPointer(g[1]) && IsInt(g[2])) {
value val = ((object *)(g[1].p))->data[g[2].i];
if (val.tag == 0) {
g[3].tag = 0;
g[3].i = val.i;
}
g[3].tag = val.tag;
g[3].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[534].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_3_1_3:
{
if (IsInt(g[3]) && IsPointer(g[1]) && IsInt(g[3])) {
value val = ((object *)(g[1].p))->data[g[3].i];
if (val.tag != 0) {
g[3].tag = val.tag;
g[3].p = val.p;
}
else {
g[3].i = val.i;
}
ip++;
}
else if (IsPointer(g[3]) && IsPointer(g[1]) && IsInt(g[3])) {
value val = ((object *)(g[1].p))->data[g[3].i];
if (val.tag == 0) {
g[3].tag = 0;
g[3].i = val.i;
}
g[3].tag = val.tag;
g[3].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[535].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_3_1_4:
{
if (IsInt(g[3]) && IsPointer(g[1]) && IsInt(g[4])) {
value val = ((object *)(g[1].p))->data[g[4].i];
if (val.tag != 0) {
g[3].tag = val.tag;
g[3].p = val.p;
}
else {
g[3].i = val.i;
}
ip++;
}
else if (IsPointer(g[3]) && IsPointer(g[1]) && IsInt(g[4])) {
value val = ((object *)(g[1].p))->data[g[4].i];
if (val.tag == 0) {
g[3].tag = 0;
g[3].i = val.i;
}
g[3].tag = val.tag;
g[3].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[536].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_3_1_5:
{
if (IsInt(g[3]) && IsPointer(g[1]) && IsInt(g[5])) {
value val = ((object *)(g[1].p))->data[g[5].i];
if (val.tag != 0) {
g[3].tag = val.tag;
g[3].p = val.p;
}
else {
g[3].i = val.i;
}
ip++;
}
else if (IsPointer(g[3]) && IsPointer(g[1]) && IsInt(g[5])) {
value val = ((object *)(g[1].p))->data[g[5].i];
if (val.tag == 0) {
g[3].tag = 0;
g[3].i = val.i;
}
g[3].tag = val.tag;
g[3].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[537].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_3_2_0:
{
if (IsInt(g[3]) && IsPointer(g[2]) && IsInt(g[0])) {
value val = ((object *)(g[2].p))->data[g[0].i];
if (val.tag != 0) {
g[3].tag = val.tag;
g[3].p = val.p;
}
else {
g[3].i = val.i;
}
ip++;
}
else if (IsPointer(g[3]) && IsPointer(g[2]) && IsInt(g[0])) {
value val = ((object *)(g[2].p))->data[g[0].i];
if (val.tag == 0) {
g[3].tag = 0;
g[3].i = val.i;
}
g[3].tag = val.tag;
g[3].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[538].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_3_2_1:
{
if (IsInt(g[3]) && IsPointer(g[2]) && IsInt(g[1])) {
value val = ((object *)(g[2].p))->data[g[1].i];
if (val.tag != 0) {
g[3].tag = val.tag;
g[3].p = val.p;
}
else {
g[3].i = val.i;
}
ip++;
}
else if (IsPointer(g[3]) && IsPointer(g[2]) && IsInt(g[1])) {
value val = ((object *)(g[2].p))->data[g[1].i];
if (val.tag == 0) {
g[3].tag = 0;
g[3].i = val.i;
}
g[3].tag = val.tag;
g[3].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[539].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_3_2_3:
{
if (IsInt(g[3]) && IsPointer(g[2]) && IsInt(g[3])) {
value val = ((object *)(g[2].p))->data[g[3].i];
if (val.tag != 0) {
g[3].tag = val.tag;
g[3].p = val.p;
}
else {
g[3].i = val.i;
}
ip++;
}
else if (IsPointer(g[3]) && IsPointer(g[2]) && IsInt(g[3])) {
value val = ((object *)(g[2].p))->data[g[3].i];
if (val.tag == 0) {
g[3].tag = 0;
g[3].i = val.i;
}
g[3].tag = val.tag;
g[3].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[540].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_3_2_4:
{
if (IsInt(g[3]) && IsPointer(g[2]) && IsInt(g[4])) {
value val = ((object *)(g[2].p))->data[g[4].i];
if (val.tag != 0) {
g[3].tag = val.tag;
g[3].p = val.p;
}
else {
g[3].i = val.i;
}
ip++;
}
else if (IsPointer(g[3]) && IsPointer(g[2]) && IsInt(g[4])) {
value val = ((object *)(g[2].p))->data[g[4].i];
if (val.tag == 0) {
g[3].tag = 0;
g[3].i = val.i;
}
g[3].tag = val.tag;
g[3].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[541].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_3_2_5:
{
if (IsInt(g[3]) && IsPointer(g[2]) && IsInt(g[5])) {
value val = ((object *)(g[2].p))->data[g[5].i];
if (val.tag != 0) {
g[3].tag = val.tag;
g[3].p = val.p;
}
else {
g[3].i = val.i;
}
ip++;
}
else if (IsPointer(g[3]) && IsPointer(g[2]) && IsInt(g[5])) {
value val = ((object *)(g[2].p))->data[g[5].i];
if (val.tag == 0) {
g[3].tag = 0;
g[3].i = val.i;
}
g[3].tag = val.tag;
g[3].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[542].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_3_3_0:
{
if (IsInt(g[3]) && IsPointer(g[3]) && IsInt(g[0])) {
value val = ((object *)(g[3].p))->data[g[0].i];
if (val.tag != 0) {
g[3].tag = val.tag;
g[3].p = val.p;
}
else {
g[3].i = val.i;
}
ip++;
}
else if (IsPointer(g[3]) && IsPointer(g[3]) && IsInt(g[0])) {
value val = ((object *)(g[3].p))->data[g[0].i];
if (val.tag == 0) {
g[3].tag = 0;
g[3].i = val.i;
}
g[3].tag = val.tag;
g[3].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[543].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_3_3_1:
{
if (IsInt(g[3]) && IsPointer(g[3]) && IsInt(g[1])) {
value val = ((object *)(g[3].p))->data[g[1].i];
if (val.tag != 0) {
g[3].tag = val.tag;
g[3].p = val.p;
}
else {
g[3].i = val.i;
}
ip++;
}
else if (IsPointer(g[3]) && IsPointer(g[3]) && IsInt(g[1])) {
value val = ((object *)(g[3].p))->data[g[1].i];
if (val.tag == 0) {
g[3].tag = 0;
g[3].i = val.i;
}
g[3].tag = val.tag;
g[3].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[544].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_3_3_2:
{
if (IsInt(g[3]) && IsPointer(g[3]) && IsInt(g[2])) {
value val = ((object *)(g[3].p))->data[g[2].i];
if (val.tag != 0) {
g[3].tag = val.tag;
g[3].p = val.p;
}
else {
g[3].i = val.i;
}
ip++;
}
else if (IsPointer(g[3]) && IsPointer(g[3]) && IsInt(g[2])) {
value val = ((object *)(g[3].p))->data[g[2].i];
if (val.tag == 0) {
g[3].tag = 0;
g[3].i = val.i;
}
g[3].tag = val.tag;
g[3].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[545].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_3_3_4:
{
if (IsInt(g[3]) && IsPointer(g[3]) && IsInt(g[4])) {
value val = ((object *)(g[3].p))->data[g[4].i];
if (val.tag != 0) {
g[3].tag = val.tag;
g[3].p = val.p;
}
else {
g[3].i = val.i;
}
ip++;
}
else if (IsPointer(g[3]) && IsPointer(g[3]) && IsInt(g[4])) {
value val = ((object *)(g[3].p))->data[g[4].i];
if (val.tag == 0) {
g[3].tag = 0;
g[3].i = val.i;
}
g[3].tag = val.tag;
g[3].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[546].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_3_3_5:
{
if (IsInt(g[3]) && IsPointer(g[3]) && IsInt(g[5])) {
value val = ((object *)(g[3].p))->data[g[5].i];
if (val.tag != 0) {
g[3].tag = val.tag;
g[3].p = val.p;
}
else {
g[3].i = val.i;
}
ip++;
}
else if (IsPointer(g[3]) && IsPointer(g[3]) && IsInt(g[5])) {
value val = ((object *)(g[3].p))->data[g[5].i];
if (val.tag == 0) {
g[3].tag = 0;
g[3].i = val.i;
}
g[3].tag = val.tag;
g[3].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[547].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_3_4_0:
{
if (IsInt(g[3]) && IsPointer(g[4]) && IsInt(g[0])) {
value val = ((object *)(g[4].p))->data[g[0].i];
if (val.tag != 0) {
g[3].tag = val.tag;
g[3].p = val.p;
}
else {
g[3].i = val.i;
}
ip++;
}
else if (IsPointer(g[3]) && IsPointer(g[4]) && IsInt(g[0])) {
value val = ((object *)(g[4].p))->data[g[0].i];
if (val.tag == 0) {
g[3].tag = 0;
g[3].i = val.i;
}
g[3].tag = val.tag;
g[3].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[548].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_3_4_1:
{
if (IsInt(g[3]) && IsPointer(g[4]) && IsInt(g[1])) {
value val = ((object *)(g[4].p))->data[g[1].i];
if (val.tag != 0) {
g[3].tag = val.tag;
g[3].p = val.p;
}
else {
g[3].i = val.i;
}
ip++;
}
else if (IsPointer(g[3]) && IsPointer(g[4]) && IsInt(g[1])) {
value val = ((object *)(g[4].p))->data[g[1].i];
if (val.tag == 0) {
g[3].tag = 0;
g[3].i = val.i;
}
g[3].tag = val.tag;
g[3].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[549].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_3_4_2:
{
if (IsInt(g[3]) && IsPointer(g[4]) && IsInt(g[2])) {
value val = ((object *)(g[4].p))->data[g[2].i];
if (val.tag != 0) {
g[3].tag = val.tag;
g[3].p = val.p;
}
else {
g[3].i = val.i;
}
ip++;
}
else if (IsPointer(g[3]) && IsPointer(g[4]) && IsInt(g[2])) {
value val = ((object *)(g[4].p))->data[g[2].i];
if (val.tag == 0) {
g[3].tag = 0;
g[3].i = val.i;
}
g[3].tag = val.tag;
g[3].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[550].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_3_4_3:
{
if (IsInt(g[3]) && IsPointer(g[4]) && IsInt(g[3])) {
value val = ((object *)(g[4].p))->data[g[3].i];
if (val.tag != 0) {
g[3].tag = val.tag;
g[3].p = val.p;
}
else {
g[3].i = val.i;
}
ip++;
}
else if (IsPointer(g[3]) && IsPointer(g[4]) && IsInt(g[3])) {
value val = ((object *)(g[4].p))->data[g[3].i];
if (val.tag == 0) {
g[3].tag = 0;
g[3].i = val.i;
}
g[3].tag = val.tag;
g[3].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[551].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_3_4_5:
{
if (IsInt(g[3]) && IsPointer(g[4]) && IsInt(g[5])) {
value val = ((object *)(g[4].p))->data[g[5].i];
if (val.tag != 0) {
g[3].tag = val.tag;
g[3].p = val.p;
}
else {
g[3].i = val.i;
}
ip++;
}
else if (IsPointer(g[3]) && IsPointer(g[4]) && IsInt(g[5])) {
value val = ((object *)(g[4].p))->data[g[5].i];
if (val.tag == 0) {
g[3].tag = 0;
g[3].i = val.i;
}
g[3].tag = val.tag;
g[3].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[552].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_3_5_0:
{
if (IsInt(g[3]) && IsPointer(g[5]) && IsInt(g[0])) {
value val = ((object *)(g[5].p))->data[g[0].i];
if (val.tag != 0) {
g[3].tag = val.tag;
g[3].p = val.p;
}
else {
g[3].i = val.i;
}
ip++;
}
else if (IsPointer(g[3]) && IsPointer(g[5]) && IsInt(g[0])) {
value val = ((object *)(g[5].p))->data[g[0].i];
if (val.tag == 0) {
g[3].tag = 0;
g[3].i = val.i;
}
g[3].tag = val.tag;
g[3].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[553].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_3_5_1:
{
if (IsInt(g[3]) && IsPointer(g[5]) && IsInt(g[1])) {
value val = ((object *)(g[5].p))->data[g[1].i];
if (val.tag != 0) {
g[3].tag = val.tag;
g[3].p = val.p;
}
else {
g[3].i = val.i;
}
ip++;
}
else if (IsPointer(g[3]) && IsPointer(g[5]) && IsInt(g[1])) {
value val = ((object *)(g[5].p))->data[g[1].i];
if (val.tag == 0) {
g[3].tag = 0;
g[3].i = val.i;
}
g[3].tag = val.tag;
g[3].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[554].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_3_5_2:
{
if (IsInt(g[3]) && IsPointer(g[5]) && IsInt(g[2])) {
value val = ((object *)(g[5].p))->data[g[2].i];
if (val.tag != 0) {
g[3].tag = val.tag;
g[3].p = val.p;
}
else {
g[3].i = val.i;
}
ip++;
}
else if (IsPointer(g[3]) && IsPointer(g[5]) && IsInt(g[2])) {
value val = ((object *)(g[5].p))->data[g[2].i];
if (val.tag == 0) {
g[3].tag = 0;
g[3].i = val.i;
}
g[3].tag = val.tag;
g[3].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[555].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_3_5_3:
{
if (IsInt(g[3]) && IsPointer(g[5]) && IsInt(g[3])) {
value val = ((object *)(g[5].p))->data[g[3].i];
if (val.tag != 0) {
g[3].tag = val.tag;
g[3].p = val.p;
}
else {
g[3].i = val.i;
}
ip++;
}
else if (IsPointer(g[3]) && IsPointer(g[5]) && IsInt(g[3])) {
value val = ((object *)(g[5].p))->data[g[3].i];
if (val.tag == 0) {
g[3].tag = 0;
g[3].i = val.i;
}
g[3].tag = val.tag;
g[3].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[556].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_3_5_4:
{
if (IsInt(g[3]) && IsPointer(g[5]) && IsInt(g[4])) {
value val = ((object *)(g[5].p))->data[g[4].i];
if (val.tag != 0) {
g[3].tag = val.tag;
g[3].p = val.p;
}
else {
g[3].i = val.i;
}
ip++;
}
else if (IsPointer(g[3]) && IsPointer(g[5]) && IsInt(g[4])) {
value val = ((object *)(g[5].p))->data[g[4].i];
if (val.tag == 0) {
g[3].tag = 0;
g[3].i = val.i;
}
g[3].tag = val.tag;
g[3].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[557].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_4_0_1:
{
if (IsInt(g[4]) && IsPointer(g[0]) && IsInt(g[1])) {
value val = ((object *)(g[0].p))->data[g[1].i];
if (val.tag != 0) {
g[4].tag = val.tag;
g[4].p = val.p;
}
else {
g[4].i = val.i;
}
ip++;
}
else if (IsPointer(g[4]) && IsPointer(g[0]) && IsInt(g[1])) {
value val = ((object *)(g[0].p))->data[g[1].i];
if (val.tag == 0) {
g[4].tag = 0;
g[4].i = val.i;
}
g[4].tag = val.tag;
g[4].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[558].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_4_0_2:
{
if (IsInt(g[4]) && IsPointer(g[0]) && IsInt(g[2])) {
value val = ((object *)(g[0].p))->data[g[2].i];
if (val.tag != 0) {
g[4].tag = val.tag;
g[4].p = val.p;
}
else {
g[4].i = val.i;
}
ip++;
}
else if (IsPointer(g[4]) && IsPointer(g[0]) && IsInt(g[2])) {
value val = ((object *)(g[0].p))->data[g[2].i];
if (val.tag == 0) {
g[4].tag = 0;
g[4].i = val.i;
}
g[4].tag = val.tag;
g[4].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[559].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_4_0_3:
{
if (IsInt(g[4]) && IsPointer(g[0]) && IsInt(g[3])) {
value val = ((object *)(g[0].p))->data[g[3].i];
if (val.tag != 0) {
g[4].tag = val.tag;
g[4].p = val.p;
}
else {
g[4].i = val.i;
}
ip++;
}
else if (IsPointer(g[4]) && IsPointer(g[0]) && IsInt(g[3])) {
value val = ((object *)(g[0].p))->data[g[3].i];
if (val.tag == 0) {
g[4].tag = 0;
g[4].i = val.i;
}
g[4].tag = val.tag;
g[4].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[560].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_4_0_4:
{
if (IsInt(g[4]) && IsPointer(g[0]) && IsInt(g[4])) {
value val = ((object *)(g[0].p))->data[g[4].i];
if (val.tag != 0) {
g[4].tag = val.tag;
g[4].p = val.p;
}
else {
g[4].i = val.i;
}
ip++;
}
else if (IsPointer(g[4]) && IsPointer(g[0]) && IsInt(g[4])) {
value val = ((object *)(g[0].p))->data[g[4].i];
if (val.tag == 0) {
g[4].tag = 0;
g[4].i = val.i;
}
g[4].tag = val.tag;
g[4].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[561].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_4_0_5:
{
if (IsInt(g[4]) && IsPointer(g[0]) && IsInt(g[5])) {
value val = ((object *)(g[0].p))->data[g[5].i];
if (val.tag != 0) {
g[4].tag = val.tag;
g[4].p = val.p;
}
else {
g[4].i = val.i;
}
ip++;
}
else if (IsPointer(g[4]) && IsPointer(g[0]) && IsInt(g[5])) {
value val = ((object *)(g[0].p))->data[g[5].i];
if (val.tag == 0) {
g[4].tag = 0;
g[4].i = val.i;
}
g[4].tag = val.tag;
g[4].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[562].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_4_1_0:
{
if (IsInt(g[4]) && IsPointer(g[1]) && IsInt(g[0])) {
value val = ((object *)(g[1].p))->data[g[0].i];
if (val.tag != 0) {
g[4].tag = val.tag;
g[4].p = val.p;
}
else {
g[4].i = val.i;
}
ip++;
}
else if (IsPointer(g[4]) && IsPointer(g[1]) && IsInt(g[0])) {
value val = ((object *)(g[1].p))->data[g[0].i];
if (val.tag == 0) {
g[4].tag = 0;
g[4].i = val.i;
}
g[4].tag = val.tag;
g[4].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[563].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_4_1_2:
{
if (IsInt(g[4]) && IsPointer(g[1]) && IsInt(g[2])) {
value val = ((object *)(g[1].p))->data[g[2].i];
if (val.tag != 0) {
g[4].tag = val.tag;
g[4].p = val.p;
}
else {
g[4].i = val.i;
}
ip++;
}
else if (IsPointer(g[4]) && IsPointer(g[1]) && IsInt(g[2])) {
value val = ((object *)(g[1].p))->data[g[2].i];
if (val.tag == 0) {
g[4].tag = 0;
g[4].i = val.i;
}
g[4].tag = val.tag;
g[4].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[564].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_4_1_3:
{
if (IsInt(g[4]) && IsPointer(g[1]) && IsInt(g[3])) {
value val = ((object *)(g[1].p))->data[g[3].i];
if (val.tag != 0) {
g[4].tag = val.tag;
g[4].p = val.p;
}
else {
g[4].i = val.i;
}
ip++;
}
else if (IsPointer(g[4]) && IsPointer(g[1]) && IsInt(g[3])) {
value val = ((object *)(g[1].p))->data[g[3].i];
if (val.tag == 0) {
g[4].tag = 0;
g[4].i = val.i;
}
g[4].tag = val.tag;
g[4].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[565].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_4_1_4:
{
if (IsInt(g[4]) && IsPointer(g[1]) && IsInt(g[4])) {
value val = ((object *)(g[1].p))->data[g[4].i];
if (val.tag != 0) {
g[4].tag = val.tag;
g[4].p = val.p;
}
else {
g[4].i = val.i;
}
ip++;
}
else if (IsPointer(g[4]) && IsPointer(g[1]) && IsInt(g[4])) {
value val = ((object *)(g[1].p))->data[g[4].i];
if (val.tag == 0) {
g[4].tag = 0;
g[4].i = val.i;
}
g[4].tag = val.tag;
g[4].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[566].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_4_1_5:
{
if (IsInt(g[4]) && IsPointer(g[1]) && IsInt(g[5])) {
value val = ((object *)(g[1].p))->data[g[5].i];
if (val.tag != 0) {
g[4].tag = val.tag;
g[4].p = val.p;
}
else {
g[4].i = val.i;
}
ip++;
}
else if (IsPointer(g[4]) && IsPointer(g[1]) && IsInt(g[5])) {
value val = ((object *)(g[1].p))->data[g[5].i];
if (val.tag == 0) {
g[4].tag = 0;
g[4].i = val.i;
}
g[4].tag = val.tag;
g[4].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[567].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_4_2_0:
{
if (IsInt(g[4]) && IsPointer(g[2]) && IsInt(g[0])) {
value val = ((object *)(g[2].p))->data[g[0].i];
if (val.tag != 0) {
g[4].tag = val.tag;
g[4].p = val.p;
}
else {
g[4].i = val.i;
}
ip++;
}
else if (IsPointer(g[4]) && IsPointer(g[2]) && IsInt(g[0])) {
value val = ((object *)(g[2].p))->data[g[0].i];
if (val.tag == 0) {
g[4].tag = 0;
g[4].i = val.i;
}
g[4].tag = val.tag;
g[4].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[568].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_4_2_1:
{
if (IsInt(g[4]) && IsPointer(g[2]) && IsInt(g[1])) {
value val = ((object *)(g[2].p))->data[g[1].i];
if (val.tag != 0) {
g[4].tag = val.tag;
g[4].p = val.p;
}
else {
g[4].i = val.i;
}
ip++;
}
else if (IsPointer(g[4]) && IsPointer(g[2]) && IsInt(g[1])) {
value val = ((object *)(g[2].p))->data[g[1].i];
if (val.tag == 0) {
g[4].tag = 0;
g[4].i = val.i;
}
g[4].tag = val.tag;
g[4].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[569].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_4_2_3:
{
if (IsInt(g[4]) && IsPointer(g[2]) && IsInt(g[3])) {
value val = ((object *)(g[2].p))->data[g[3].i];
if (val.tag != 0) {
g[4].tag = val.tag;
g[4].p = val.p;
}
else {
g[4].i = val.i;
}
ip++;
}
else if (IsPointer(g[4]) && IsPointer(g[2]) && IsInt(g[3])) {
value val = ((object *)(g[2].p))->data[g[3].i];
if (val.tag == 0) {
g[4].tag = 0;
g[4].i = val.i;
}
g[4].tag = val.tag;
g[4].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[570].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_4_2_4:
{
if (IsInt(g[4]) && IsPointer(g[2]) && IsInt(g[4])) {
value val = ((object *)(g[2].p))->data[g[4].i];
if (val.tag != 0) {
g[4].tag = val.tag;
g[4].p = val.p;
}
else {
g[4].i = val.i;
}
ip++;
}
else if (IsPointer(g[4]) && IsPointer(g[2]) && IsInt(g[4])) {
value val = ((object *)(g[2].p))->data[g[4].i];
if (val.tag == 0) {
g[4].tag = 0;
g[4].i = val.i;
}
g[4].tag = val.tag;
g[4].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[571].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_4_2_5:
{
if (IsInt(g[4]) && IsPointer(g[2]) && IsInt(g[5])) {
value val = ((object *)(g[2].p))->data[g[5].i];
if (val.tag != 0) {
g[4].tag = val.tag;
g[4].p = val.p;
}
else {
g[4].i = val.i;
}
ip++;
}
else if (IsPointer(g[4]) && IsPointer(g[2]) && IsInt(g[5])) {
value val = ((object *)(g[2].p))->data[g[5].i];
if (val.tag == 0) {
g[4].tag = 0;
g[4].i = val.i;
}
g[4].tag = val.tag;
g[4].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[572].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_4_3_0:
{
if (IsInt(g[4]) && IsPointer(g[3]) && IsInt(g[0])) {
value val = ((object *)(g[3].p))->data[g[0].i];
if (val.tag != 0) {
g[4].tag = val.tag;
g[4].p = val.p;
}
else {
g[4].i = val.i;
}
ip++;
}
else if (IsPointer(g[4]) && IsPointer(g[3]) && IsInt(g[0])) {
value val = ((object *)(g[3].p))->data[g[0].i];
if (val.tag == 0) {
g[4].tag = 0;
g[4].i = val.i;
}
g[4].tag = val.tag;
g[4].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[573].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_4_3_1:
{
if (IsInt(g[4]) && IsPointer(g[3]) && IsInt(g[1])) {
value val = ((object *)(g[3].p))->data[g[1].i];
if (val.tag != 0) {
g[4].tag = val.tag;
g[4].p = val.p;
}
else {
g[4].i = val.i;
}
ip++;
}
else if (IsPointer(g[4]) && IsPointer(g[3]) && IsInt(g[1])) {
value val = ((object *)(g[3].p))->data[g[1].i];
if (val.tag == 0) {
g[4].tag = 0;
g[4].i = val.i;
}
g[4].tag = val.tag;
g[4].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[574].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_4_3_2:
{
if (IsInt(g[4]) && IsPointer(g[3]) && IsInt(g[2])) {
value val = ((object *)(g[3].p))->data[g[2].i];
if (val.tag != 0) {
g[4].tag = val.tag;
g[4].p = val.p;
}
else {
g[4].i = val.i;
}
ip++;
}
else if (IsPointer(g[4]) && IsPointer(g[3]) && IsInt(g[2])) {
value val = ((object *)(g[3].p))->data[g[2].i];
if (val.tag == 0) {
g[4].tag = 0;
g[4].i = val.i;
}
g[4].tag = val.tag;
g[4].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[575].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_4_3_4:
{
if (IsInt(g[4]) && IsPointer(g[3]) && IsInt(g[4])) {
value val = ((object *)(g[3].p))->data[g[4].i];
if (val.tag != 0) {
g[4].tag = val.tag;
g[4].p = val.p;
}
else {
g[4].i = val.i;
}
ip++;
}
else if (IsPointer(g[4]) && IsPointer(g[3]) && IsInt(g[4])) {
value val = ((object *)(g[3].p))->data[g[4].i];
if (val.tag == 0) {
g[4].tag = 0;
g[4].i = val.i;
}
g[4].tag = val.tag;
g[4].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[576].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_4_3_5:
{
if (IsInt(g[4]) && IsPointer(g[3]) && IsInt(g[5])) {
value val = ((object *)(g[3].p))->data[g[5].i];
if (val.tag != 0) {
g[4].tag = val.tag;
g[4].p = val.p;
}
else {
g[4].i = val.i;
}
ip++;
}
else if (IsPointer(g[4]) && IsPointer(g[3]) && IsInt(g[5])) {
value val = ((object *)(g[3].p))->data[g[5].i];
if (val.tag == 0) {
g[4].tag = 0;
g[4].i = val.i;
}
g[4].tag = val.tag;
g[4].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[577].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_4_4_0:
{
if (IsInt(g[4]) && IsPointer(g[4]) && IsInt(g[0])) {
value val = ((object *)(g[4].p))->data[g[0].i];
if (val.tag != 0) {
g[4].tag = val.tag;
g[4].p = val.p;
}
else {
g[4].i = val.i;
}
ip++;
}
else if (IsPointer(g[4]) && IsPointer(g[4]) && IsInt(g[0])) {
value val = ((object *)(g[4].p))->data[g[0].i];
if (val.tag == 0) {
g[4].tag = 0;
g[4].i = val.i;
}
g[4].tag = val.tag;
g[4].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[578].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_4_4_1:
{
if (IsInt(g[4]) && IsPointer(g[4]) && IsInt(g[1])) {
value val = ((object *)(g[4].p))->data[g[1].i];
if (val.tag != 0) {
g[4].tag = val.tag;
g[4].p = val.p;
}
else {
g[4].i = val.i;
}
ip++;
}
else if (IsPointer(g[4]) && IsPointer(g[4]) && IsInt(g[1])) {
value val = ((object *)(g[4].p))->data[g[1].i];
if (val.tag == 0) {
g[4].tag = 0;
g[4].i = val.i;
}
g[4].tag = val.tag;
g[4].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[579].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_4_4_2:
{
if (IsInt(g[4]) && IsPointer(g[4]) && IsInt(g[2])) {
value val = ((object *)(g[4].p))->data[g[2].i];
if (val.tag != 0) {
g[4].tag = val.tag;
g[4].p = val.p;
}
else {
g[4].i = val.i;
}
ip++;
}
else if (IsPointer(g[4]) && IsPointer(g[4]) && IsInt(g[2])) {
value val = ((object *)(g[4].p))->data[g[2].i];
if (val.tag == 0) {
g[4].tag = 0;
g[4].i = val.i;
}
g[4].tag = val.tag;
g[4].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[580].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_4_4_3:
{
if (IsInt(g[4]) && IsPointer(g[4]) && IsInt(g[3])) {
value val = ((object *)(g[4].p))->data[g[3].i];
if (val.tag != 0) {
g[4].tag = val.tag;
g[4].p = val.p;
}
else {
g[4].i = val.i;
}
ip++;
}
else if (IsPointer(g[4]) && IsPointer(g[4]) && IsInt(g[3])) {
value val = ((object *)(g[4].p))->data[g[3].i];
if (val.tag == 0) {
g[4].tag = 0;
g[4].i = val.i;
}
g[4].tag = val.tag;
g[4].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[581].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_4_4_5:
{
if (IsInt(g[4]) && IsPointer(g[4]) && IsInt(g[5])) {
value val = ((object *)(g[4].p))->data[g[5].i];
if (val.tag != 0) {
g[4].tag = val.tag;
g[4].p = val.p;
}
else {
g[4].i = val.i;
}
ip++;
}
else if (IsPointer(g[4]) && IsPointer(g[4]) && IsInt(g[5])) {
value val = ((object *)(g[4].p))->data[g[5].i];
if (val.tag == 0) {
g[4].tag = 0;
g[4].i = val.i;
}
g[4].tag = val.tag;
g[4].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[582].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_4_5_0:
{
if (IsInt(g[4]) && IsPointer(g[5]) && IsInt(g[0])) {
value val = ((object *)(g[5].p))->data[g[0].i];
if (val.tag != 0) {
g[4].tag = val.tag;
g[4].p = val.p;
}
else {
g[4].i = val.i;
}
ip++;
}
else if (IsPointer(g[4]) && IsPointer(g[5]) && IsInt(g[0])) {
value val = ((object *)(g[5].p))->data[g[0].i];
if (val.tag == 0) {
g[4].tag = 0;
g[4].i = val.i;
}
g[4].tag = val.tag;
g[4].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[583].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_4_5_1:
{
if (IsInt(g[4]) && IsPointer(g[5]) && IsInt(g[1])) {
value val = ((object *)(g[5].p))->data[g[1].i];
if (val.tag != 0) {
g[4].tag = val.tag;
g[4].p = val.p;
}
else {
g[4].i = val.i;
}
ip++;
}
else if (IsPointer(g[4]) && IsPointer(g[5]) && IsInt(g[1])) {
value val = ((object *)(g[5].p))->data[g[1].i];
if (val.tag == 0) {
g[4].tag = 0;
g[4].i = val.i;
}
g[4].tag = val.tag;
g[4].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[584].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_4_5_2:
{
if (IsInt(g[4]) && IsPointer(g[5]) && IsInt(g[2])) {
value val = ((object *)(g[5].p))->data[g[2].i];
if (val.tag != 0) {
g[4].tag = val.tag;
g[4].p = val.p;
}
else {
g[4].i = val.i;
}
ip++;
}
else if (IsPointer(g[4]) && IsPointer(g[5]) && IsInt(g[2])) {
value val = ((object *)(g[5].p))->data[g[2].i];
if (val.tag == 0) {
g[4].tag = 0;
g[4].i = val.i;
}
g[4].tag = val.tag;
g[4].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[585].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_4_5_3:
{
if (IsInt(g[4]) && IsPointer(g[5]) && IsInt(g[3])) {
value val = ((object *)(g[5].p))->data[g[3].i];
if (val.tag != 0) {
g[4].tag = val.tag;
g[4].p = val.p;
}
else {
g[4].i = val.i;
}
ip++;
}
else if (IsPointer(g[4]) && IsPointer(g[5]) && IsInt(g[3])) {
value val = ((object *)(g[5].p))->data[g[3].i];
if (val.tag == 0) {
g[4].tag = 0;
g[4].i = val.i;
}
g[4].tag = val.tag;
g[4].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[586].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_4_5_4:
{
if (IsInt(g[4]) && IsPointer(g[5]) && IsInt(g[4])) {
value val = ((object *)(g[5].p))->data[g[4].i];
if (val.tag != 0) {
g[4].tag = val.tag;
g[4].p = val.p;
}
else {
g[4].i = val.i;
}
ip++;
}
else if (IsPointer(g[4]) && IsPointer(g[5]) && IsInt(g[4])) {
value val = ((object *)(g[5].p))->data[g[4].i];
if (val.tag == 0) {
g[4].tag = 0;
g[4].i = val.i;
}
g[4].tag = val.tag;
g[4].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[587].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_5_0_1:
{
if (IsInt(g[5]) && IsPointer(g[0]) && IsInt(g[1])) {
value val = ((object *)(g[0].p))->data[g[1].i];
if (val.tag != 0) {
g[5].tag = val.tag;
g[5].p = val.p;
}
else {
g[5].i = val.i;
}
ip++;
}
else if (IsPointer(g[5]) && IsPointer(g[0]) && IsInt(g[1])) {
value val = ((object *)(g[0].p))->data[g[1].i];
if (val.tag == 0) {
g[5].tag = 0;
g[5].i = val.i;
}
g[5].tag = val.tag;
g[5].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[588].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_5_0_2:
{
if (IsInt(g[5]) && IsPointer(g[0]) && IsInt(g[2])) {
value val = ((object *)(g[0].p))->data[g[2].i];
if (val.tag != 0) {
g[5].tag = val.tag;
g[5].p = val.p;
}
else {
g[5].i = val.i;
}
ip++;
}
else if (IsPointer(g[5]) && IsPointer(g[0]) && IsInt(g[2])) {
value val = ((object *)(g[0].p))->data[g[2].i];
if (val.tag == 0) {
g[5].tag = 0;
g[5].i = val.i;
}
g[5].tag = val.tag;
g[5].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[589].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_5_0_3:
{
if (IsInt(g[5]) && IsPointer(g[0]) && IsInt(g[3])) {
value val = ((object *)(g[0].p))->data[g[3].i];
if (val.tag != 0) {
g[5].tag = val.tag;
g[5].p = val.p;
}
else {
g[5].i = val.i;
}
ip++;
}
else if (IsPointer(g[5]) && IsPointer(g[0]) && IsInt(g[3])) {
value val = ((object *)(g[0].p))->data[g[3].i];
if (val.tag == 0) {
g[5].tag = 0;
g[5].i = val.i;
}
g[5].tag = val.tag;
g[5].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[590].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_5_0_4:
{
if (IsInt(g[5]) && IsPointer(g[0]) && IsInt(g[4])) {
value val = ((object *)(g[0].p))->data[g[4].i];
if (val.tag != 0) {
g[5].tag = val.tag;
g[5].p = val.p;
}
else {
g[5].i = val.i;
}
ip++;
}
else if (IsPointer(g[5]) && IsPointer(g[0]) && IsInt(g[4])) {
value val = ((object *)(g[0].p))->data[g[4].i];
if (val.tag == 0) {
g[5].tag = 0;
g[5].i = val.i;
}
g[5].tag = val.tag;
g[5].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[591].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_5_0_5:
{
if (IsInt(g[5]) && IsPointer(g[0]) && IsInt(g[5])) {
value val = ((object *)(g[0].p))->data[g[5].i];
if (val.tag != 0) {
g[5].tag = val.tag;
g[5].p = val.p;
}
else {
g[5].i = val.i;
}
ip++;
}
else if (IsPointer(g[5]) && IsPointer(g[0]) && IsInt(g[5])) {
value val = ((object *)(g[0].p))->data[g[5].i];
if (val.tag == 0) {
g[5].tag = 0;
g[5].i = val.i;
}
g[5].tag = val.tag;
g[5].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[592].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_5_1_0:
{
if (IsInt(g[5]) && IsPointer(g[1]) && IsInt(g[0])) {
value val = ((object *)(g[1].p))->data[g[0].i];
if (val.tag != 0) {
g[5].tag = val.tag;
g[5].p = val.p;
}
else {
g[5].i = val.i;
}
ip++;
}
else if (IsPointer(g[5]) && IsPointer(g[1]) && IsInt(g[0])) {
value val = ((object *)(g[1].p))->data[g[0].i];
if (val.tag == 0) {
g[5].tag = 0;
g[5].i = val.i;
}
g[5].tag = val.tag;
g[5].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[593].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_5_1_2:
{
if (IsInt(g[5]) && IsPointer(g[1]) && IsInt(g[2])) {
value val = ((object *)(g[1].p))->data[g[2].i];
if (val.tag != 0) {
g[5].tag = val.tag;
g[5].p = val.p;
}
else {
g[5].i = val.i;
}
ip++;
}
else if (IsPointer(g[5]) && IsPointer(g[1]) && IsInt(g[2])) {
value val = ((object *)(g[1].p))->data[g[2].i];
if (val.tag == 0) {
g[5].tag = 0;
g[5].i = val.i;
}
g[5].tag = val.tag;
g[5].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[594].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_5_1_3:
{
if (IsInt(g[5]) && IsPointer(g[1]) && IsInt(g[3])) {
value val = ((object *)(g[1].p))->data[g[3].i];
if (val.tag != 0) {
g[5].tag = val.tag;
g[5].p = val.p;
}
else {
g[5].i = val.i;
}
ip++;
}
else if (IsPointer(g[5]) && IsPointer(g[1]) && IsInt(g[3])) {
value val = ((object *)(g[1].p))->data[g[3].i];
if (val.tag == 0) {
g[5].tag = 0;
g[5].i = val.i;
}
g[5].tag = val.tag;
g[5].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[595].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_5_1_4:
{
if (IsInt(g[5]) && IsPointer(g[1]) && IsInt(g[4])) {
value val = ((object *)(g[1].p))->data[g[4].i];
if (val.tag != 0) {
g[5].tag = val.tag;
g[5].p = val.p;
}
else {
g[5].i = val.i;
}
ip++;
}
else if (IsPointer(g[5]) && IsPointer(g[1]) && IsInt(g[4])) {
value val = ((object *)(g[1].p))->data[g[4].i];
if (val.tag == 0) {
g[5].tag = 0;
g[5].i = val.i;
}
g[5].tag = val.tag;
g[5].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[596].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_5_1_5:
{
if (IsInt(g[5]) && IsPointer(g[1]) && IsInt(g[5])) {
value val = ((object *)(g[1].p))->data[g[5].i];
if (val.tag != 0) {
g[5].tag = val.tag;
g[5].p = val.p;
}
else {
g[5].i = val.i;
}
ip++;
}
else if (IsPointer(g[5]) && IsPointer(g[1]) && IsInt(g[5])) {
value val = ((object *)(g[1].p))->data[g[5].i];
if (val.tag == 0) {
g[5].tag = 0;
g[5].i = val.i;
}
g[5].tag = val.tag;
g[5].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[597].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_5_2_0:
{
if (IsInt(g[5]) && IsPointer(g[2]) && IsInt(g[0])) {
value val = ((object *)(g[2].p))->data[g[0].i];
if (val.tag != 0) {
g[5].tag = val.tag;
g[5].p = val.p;
}
else {
g[5].i = val.i;
}
ip++;
}
else if (IsPointer(g[5]) && IsPointer(g[2]) && IsInt(g[0])) {
value val = ((object *)(g[2].p))->data[g[0].i];
if (val.tag == 0) {
g[5].tag = 0;
g[5].i = val.i;
}
g[5].tag = val.tag;
g[5].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[598].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_5_2_1:
{
if (IsInt(g[5]) && IsPointer(g[2]) && IsInt(g[1])) {
value val = ((object *)(g[2].p))->data[g[1].i];
if (val.tag != 0) {
g[5].tag = val.tag;
g[5].p = val.p;
}
else {
g[5].i = val.i;
}
ip++;
}
else if (IsPointer(g[5]) && IsPointer(g[2]) && IsInt(g[1])) {
value val = ((object *)(g[2].p))->data[g[1].i];
if (val.tag == 0) {
g[5].tag = 0;
g[5].i = val.i;
}
g[5].tag = val.tag;
g[5].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[599].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_5_2_3:
{
if (IsInt(g[5]) && IsPointer(g[2]) && IsInt(g[3])) {
value val = ((object *)(g[2].p))->data[g[3].i];
if (val.tag != 0) {
g[5].tag = val.tag;
g[5].p = val.p;
}
else {
g[5].i = val.i;
}
ip++;
}
else if (IsPointer(g[5]) && IsPointer(g[2]) && IsInt(g[3])) {
value val = ((object *)(g[2].p))->data[g[3].i];
if (val.tag == 0) {
g[5].tag = 0;
g[5].i = val.i;
}
g[5].tag = val.tag;
g[5].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[600].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_5_2_4:
{
if (IsInt(g[5]) && IsPointer(g[2]) && IsInt(g[4])) {
value val = ((object *)(g[2].p))->data[g[4].i];
if (val.tag != 0) {
g[5].tag = val.tag;
g[5].p = val.p;
}
else {
g[5].i = val.i;
}
ip++;
}
else if (IsPointer(g[5]) && IsPointer(g[2]) && IsInt(g[4])) {
value val = ((object *)(g[2].p))->data[g[4].i];
if (val.tag == 0) {
g[5].tag = 0;
g[5].i = val.i;
}
g[5].tag = val.tag;
g[5].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[601].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_5_2_5:
{
if (IsInt(g[5]) && IsPointer(g[2]) && IsInt(g[5])) {
value val = ((object *)(g[2].p))->data[g[5].i];
if (val.tag != 0) {
g[5].tag = val.tag;
g[5].p = val.p;
}
else {
g[5].i = val.i;
}
ip++;
}
else if (IsPointer(g[5]) && IsPointer(g[2]) && IsInt(g[5])) {
value val = ((object *)(g[2].p))->data[g[5].i];
if (val.tag == 0) {
g[5].tag = 0;
g[5].i = val.i;
}
g[5].tag = val.tag;
g[5].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[602].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_5_3_0:
{
if (IsInt(g[5]) && IsPointer(g[3]) && IsInt(g[0])) {
value val = ((object *)(g[3].p))->data[g[0].i];
if (val.tag != 0) {
g[5].tag = val.tag;
g[5].p = val.p;
}
else {
g[5].i = val.i;
}
ip++;
}
else if (IsPointer(g[5]) && IsPointer(g[3]) && IsInt(g[0])) {
value val = ((object *)(g[3].p))->data[g[0].i];
if (val.tag == 0) {
g[5].tag = 0;
g[5].i = val.i;
}
g[5].tag = val.tag;
g[5].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[603].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_5_3_1:
{
if (IsInt(g[5]) && IsPointer(g[3]) && IsInt(g[1])) {
value val = ((object *)(g[3].p))->data[g[1].i];
if (val.tag != 0) {
g[5].tag = val.tag;
g[5].p = val.p;
}
else {
g[5].i = val.i;
}
ip++;
}
else if (IsPointer(g[5]) && IsPointer(g[3]) && IsInt(g[1])) {
value val = ((object *)(g[3].p))->data[g[1].i];
if (val.tag == 0) {
g[5].tag = 0;
g[5].i = val.i;
}
g[5].tag = val.tag;
g[5].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[604].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_5_3_2:
{
if (IsInt(g[5]) && IsPointer(g[3]) && IsInt(g[2])) {
value val = ((object *)(g[3].p))->data[g[2].i];
if (val.tag != 0) {
g[5].tag = val.tag;
g[5].p = val.p;
}
else {
g[5].i = val.i;
}
ip++;
}
else if (IsPointer(g[5]) && IsPointer(g[3]) && IsInt(g[2])) {
value val = ((object *)(g[3].p))->data[g[2].i];
if (val.tag == 0) {
g[5].tag = 0;
g[5].i = val.i;
}
g[5].tag = val.tag;
g[5].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[605].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_5_3_4:
{
if (IsInt(g[5]) && IsPointer(g[3]) && IsInt(g[4])) {
value val = ((object *)(g[3].p))->data[g[4].i];
if (val.tag != 0) {
g[5].tag = val.tag;
g[5].p = val.p;
}
else {
g[5].i = val.i;
}
ip++;
}
else if (IsPointer(g[5]) && IsPointer(g[3]) && IsInt(g[4])) {
value val = ((object *)(g[3].p))->data[g[4].i];
if (val.tag == 0) {
g[5].tag = 0;
g[5].i = val.i;
}
g[5].tag = val.tag;
g[5].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[606].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_5_3_5:
{
if (IsInt(g[5]) && IsPointer(g[3]) && IsInt(g[5])) {
value val = ((object *)(g[3].p))->data[g[5].i];
if (val.tag != 0) {
g[5].tag = val.tag;
g[5].p = val.p;
}
else {
g[5].i = val.i;
}
ip++;
}
else if (IsPointer(g[5]) && IsPointer(g[3]) && IsInt(g[5])) {
value val = ((object *)(g[3].p))->data[g[5].i];
if (val.tag == 0) {
g[5].tag = 0;
g[5].i = val.i;
}
g[5].tag = val.tag;
g[5].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[607].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_5_4_0:
{
if (IsInt(g[5]) && IsPointer(g[4]) && IsInt(g[0])) {
value val = ((object *)(g[4].p))->data[g[0].i];
if (val.tag != 0) {
g[5].tag = val.tag;
g[5].p = val.p;
}
else {
g[5].i = val.i;
}
ip++;
}
else if (IsPointer(g[5]) && IsPointer(g[4]) && IsInt(g[0])) {
value val = ((object *)(g[4].p))->data[g[0].i];
if (val.tag == 0) {
g[5].tag = 0;
g[5].i = val.i;
}
g[5].tag = val.tag;
g[5].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[608].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_5_4_1:
{
if (IsInt(g[5]) && IsPointer(g[4]) && IsInt(g[1])) {
value val = ((object *)(g[4].p))->data[g[1].i];
if (val.tag != 0) {
g[5].tag = val.tag;
g[5].p = val.p;
}
else {
g[5].i = val.i;
}
ip++;
}
else if (IsPointer(g[5]) && IsPointer(g[4]) && IsInt(g[1])) {
value val = ((object *)(g[4].p))->data[g[1].i];
if (val.tag == 0) {
g[5].tag = 0;
g[5].i = val.i;
}
g[5].tag = val.tag;
g[5].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[609].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_5_4_2:
{
if (IsInt(g[5]) && IsPointer(g[4]) && IsInt(g[2])) {
value val = ((object *)(g[4].p))->data[g[2].i];
if (val.tag != 0) {
g[5].tag = val.tag;
g[5].p = val.p;
}
else {
g[5].i = val.i;
}
ip++;
}
else if (IsPointer(g[5]) && IsPointer(g[4]) && IsInt(g[2])) {
value val = ((object *)(g[4].p))->data[g[2].i];
if (val.tag == 0) {
g[5].tag = 0;
g[5].i = val.i;
}
g[5].tag = val.tag;
g[5].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[610].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_5_4_3:
{
if (IsInt(g[5]) && IsPointer(g[4]) && IsInt(g[3])) {
value val = ((object *)(g[4].p))->data[g[3].i];
if (val.tag != 0) {
g[5].tag = val.tag;
g[5].p = val.p;
}
else {
g[5].i = val.i;
}
ip++;
}
else if (IsPointer(g[5]) && IsPointer(g[4]) && IsInt(g[3])) {
value val = ((object *)(g[4].p))->data[g[3].i];
if (val.tag == 0) {
g[5].tag = 0;
g[5].i = val.i;
}
g[5].tag = val.tag;
g[5].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[611].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_5_4_5:
{
if (IsInt(g[5]) && IsPointer(g[4]) && IsInt(g[5])) {
value val = ((object *)(g[4].p))->data[g[5].i];
if (val.tag != 0) {
g[5].tag = val.tag;
g[5].p = val.p;
}
else {
g[5].i = val.i;
}
ip++;
}
else if (IsPointer(g[5]) && IsPointer(g[4]) && IsInt(g[5])) {
value val = ((object *)(g[4].p))->data[g[5].i];
if (val.tag == 0) {
g[5].tag = 0;
g[5].i = val.i;
}
g[5].tag = val.tag;
g[5].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[612].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_5_5_0:
{
if (IsInt(g[5]) && IsPointer(g[5]) && IsInt(g[0])) {
value val = ((object *)(g[5].p))->data[g[0].i];
if (val.tag != 0) {
g[5].tag = val.tag;
g[5].p = val.p;
}
else {
g[5].i = val.i;
}
ip++;
}
else if (IsPointer(g[5]) && IsPointer(g[5]) && IsInt(g[0])) {
value val = ((object *)(g[5].p))->data[g[0].i];
if (val.tag == 0) {
g[5].tag = 0;
g[5].i = val.i;
}
g[5].tag = val.tag;
g[5].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[613].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_5_5_1:
{
if (IsInt(g[5]) && IsPointer(g[5]) && IsInt(g[1])) {
value val = ((object *)(g[5].p))->data[g[1].i];
if (val.tag != 0) {
g[5].tag = val.tag;
g[5].p = val.p;
}
else {
g[5].i = val.i;
}
ip++;
}
else if (IsPointer(g[5]) && IsPointer(g[5]) && IsInt(g[1])) {
value val = ((object *)(g[5].p))->data[g[1].i];
if (val.tag == 0) {
g[5].tag = 0;
g[5].i = val.i;
}
g[5].tag = val.tag;
g[5].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[614].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_5_5_2:
{
if (IsInt(g[5]) && IsPointer(g[5]) && IsInt(g[2])) {
value val = ((object *)(g[5].p))->data[g[2].i];
if (val.tag != 0) {
g[5].tag = val.tag;
g[5].p = val.p;
}
else {
g[5].i = val.i;
}
ip++;
}
else if (IsPointer(g[5]) && IsPointer(g[5]) && IsInt(g[2])) {
value val = ((object *)(g[5].p))->data[g[2].i];
if (val.tag == 0) {
g[5].tag = 0;
g[5].i = val.i;
}
g[5].tag = val.tag;
g[5].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[615].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_5_5_3:
{
if (IsInt(g[5]) && IsPointer(g[5]) && IsInt(g[3])) {
value val = ((object *)(g[5].p))->data[g[3].i];
if (val.tag != 0) {
g[5].tag = val.tag;
g[5].p = val.p;
}
else {
g[5].i = val.i;
}
ip++;
}
else if (IsPointer(g[5]) && IsPointer(g[5]) && IsInt(g[3])) {
value val = ((object *)(g[5].p))->data[g[3].i];
if (val.tag == 0) {
g[5].tag = 0;
g[5].i = val.i;
}
g[5].tag = val.tag;
g[5].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[616].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

geto_5_5_4:
{
if (IsInt(g[5]) && IsPointer(g[5]) && IsInt(g[4])) {
value val = ((object *)(g[5].p))->data[g[4].i];
if (val.tag != 0) {
g[5].tag = val.tag;
g[5].p = val.p;
}
else {
g[5].i = val.i;
}
ip++;
}
else if (IsPointer(g[5]) && IsPointer(g[5]) && IsInt(g[4])) {
value val = ((object *)(g[5].p))->data[g[4].i];
if (val.tag == 0) {
g[5].tag = 0;
g[5].i = val.i;
}
g[5].tag = val.tag;
g[5].p = val.p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: geto");
return 1;
}
#ifdef STATS
opcodeCounters[617].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_0_1_0:
{
if (IsPointer(g[0]) && IsInt(g[1]) && IsInt(g[0])) {
value *vp = &(((object *)(g[0].p))->data[g[1].i]);
vp->tag =0;
vp->i = g[0].i;
ip++;
}
else if (IsPointer(g[0]) && IsInt(g[1]) && IsPointer(g[0])) {
value *vp = &(((object *)(g[0].p))->data[g[1].i]);
vp->tag = g[0].tag;
vp->p = g[0].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[618].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_0_1_1:
{
if (IsPointer(g[0]) && IsInt(g[1]) && IsInt(g[1])) {
value *vp = &(((object *)(g[0].p))->data[g[1].i]);
vp->tag =0;
vp->i = g[1].i;
ip++;
}
else if (IsPointer(g[0]) && IsInt(g[1]) && IsPointer(g[1])) {
value *vp = &(((object *)(g[0].p))->data[g[1].i]);
vp->tag = g[1].tag;
vp->p = g[1].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[619].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_0_1_2:
{
if (IsPointer(g[0]) && IsInt(g[1]) && IsInt(g[2])) {
value *vp = &(((object *)(g[0].p))->data[g[1].i]);
vp->tag =0;
vp->i = g[2].i;
ip++;
}
else if (IsPointer(g[0]) && IsInt(g[1]) && IsPointer(g[2])) {
value *vp = &(((object *)(g[0].p))->data[g[1].i]);
vp->tag = g[2].tag;
vp->p = g[2].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[620].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_0_1_3:
{
if (IsPointer(g[0]) && IsInt(g[1]) && IsInt(g[3])) {
value *vp = &(((object *)(g[0].p))->data[g[1].i]);
vp->tag =0;
vp->i = g[3].i;
ip++;
}
else if (IsPointer(g[0]) && IsInt(g[1]) && IsPointer(g[3])) {
value *vp = &(((object *)(g[0].p))->data[g[1].i]);
vp->tag = g[3].tag;
vp->p = g[3].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[621].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_0_1_4:
{
if (IsPointer(g[0]) && IsInt(g[1]) && IsInt(g[4])) {
value *vp = &(((object *)(g[0].p))->data[g[1].i]);
vp->tag =0;
vp->i = g[4].i;
ip++;
}
else if (IsPointer(g[0]) && IsInt(g[1]) && IsPointer(g[4])) {
value *vp = &(((object *)(g[0].p))->data[g[1].i]);
vp->tag = g[4].tag;
vp->p = g[4].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[622].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_0_1_5:
{
if (IsPointer(g[0]) && IsInt(g[1]) && IsInt(g[5])) {
value *vp = &(((object *)(g[0].p))->data[g[1].i]);
vp->tag =0;
vp->i = g[5].i;
ip++;
}
else if (IsPointer(g[0]) && IsInt(g[1]) && IsPointer(g[5])) {
value *vp = &(((object *)(g[0].p))->data[g[1].i]);
vp->tag = g[5].tag;
vp->p = g[5].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[623].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_0_2_0:
{
if (IsPointer(g[0]) && IsInt(g[2]) && IsInt(g[0])) {
value *vp = &(((object *)(g[0].p))->data[g[2].i]);
vp->tag =0;
vp->i = g[0].i;
ip++;
}
else if (IsPointer(g[0]) && IsInt(g[2]) && IsPointer(g[0])) {
value *vp = &(((object *)(g[0].p))->data[g[2].i]);
vp->tag = g[0].tag;
vp->p = g[0].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[624].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_0_2_1:
{
if (IsPointer(g[0]) && IsInt(g[2]) && IsInt(g[1])) {
value *vp = &(((object *)(g[0].p))->data[g[2].i]);
vp->tag =0;
vp->i = g[1].i;
ip++;
}
else if (IsPointer(g[0]) && IsInt(g[2]) && IsPointer(g[1])) {
value *vp = &(((object *)(g[0].p))->data[g[2].i]);
vp->tag = g[1].tag;
vp->p = g[1].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[625].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_0_2_2:
{
if (IsPointer(g[0]) && IsInt(g[2]) && IsInt(g[2])) {
value *vp = &(((object *)(g[0].p))->data[g[2].i]);
vp->tag =0;
vp->i = g[2].i;
ip++;
}
else if (IsPointer(g[0]) && IsInt(g[2]) && IsPointer(g[2])) {
value *vp = &(((object *)(g[0].p))->data[g[2].i]);
vp->tag = g[2].tag;
vp->p = g[2].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[626].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_0_2_3:
{
if (IsPointer(g[0]) && IsInt(g[2]) && IsInt(g[3])) {
value *vp = &(((object *)(g[0].p))->data[g[2].i]);
vp->tag =0;
vp->i = g[3].i;
ip++;
}
else if (IsPointer(g[0]) && IsInt(g[2]) && IsPointer(g[3])) {
value *vp = &(((object *)(g[0].p))->data[g[2].i]);
vp->tag = g[3].tag;
vp->p = g[3].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[627].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_0_2_4:
{
if (IsPointer(g[0]) && IsInt(g[2]) && IsInt(g[4])) {
value *vp = &(((object *)(g[0].p))->data[g[2].i]);
vp->tag =0;
vp->i = g[4].i;
ip++;
}
else if (IsPointer(g[0]) && IsInt(g[2]) && IsPointer(g[4])) {
value *vp = &(((object *)(g[0].p))->data[g[2].i]);
vp->tag = g[4].tag;
vp->p = g[4].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[628].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_0_2_5:
{
if (IsPointer(g[0]) && IsInt(g[2]) && IsInt(g[5])) {
value *vp = &(((object *)(g[0].p))->data[g[2].i]);
vp->tag =0;
vp->i = g[5].i;
ip++;
}
else if (IsPointer(g[0]) && IsInt(g[2]) && IsPointer(g[5])) {
value *vp = &(((object *)(g[0].p))->data[g[2].i]);
vp->tag = g[5].tag;
vp->p = g[5].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[629].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_0_3_0:
{
if (IsPointer(g[0]) && IsInt(g[3]) && IsInt(g[0])) {
value *vp = &(((object *)(g[0].p))->data[g[3].i]);
vp->tag =0;
vp->i = g[0].i;
ip++;
}
else if (IsPointer(g[0]) && IsInt(g[3]) && IsPointer(g[0])) {
value *vp = &(((object *)(g[0].p))->data[g[3].i]);
vp->tag = g[0].tag;
vp->p = g[0].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[630].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_0_3_1:
{
if (IsPointer(g[0]) && IsInt(g[3]) && IsInt(g[1])) {
value *vp = &(((object *)(g[0].p))->data[g[3].i]);
vp->tag =0;
vp->i = g[1].i;
ip++;
}
else if (IsPointer(g[0]) && IsInt(g[3]) && IsPointer(g[1])) {
value *vp = &(((object *)(g[0].p))->data[g[3].i]);
vp->tag = g[1].tag;
vp->p = g[1].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[631].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_0_3_2:
{
if (IsPointer(g[0]) && IsInt(g[3]) && IsInt(g[2])) {
value *vp = &(((object *)(g[0].p))->data[g[3].i]);
vp->tag =0;
vp->i = g[2].i;
ip++;
}
else if (IsPointer(g[0]) && IsInt(g[3]) && IsPointer(g[2])) {
value *vp = &(((object *)(g[0].p))->data[g[3].i]);
vp->tag = g[2].tag;
vp->p = g[2].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[632].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_0_3_3:
{
if (IsPointer(g[0]) && IsInt(g[3]) && IsInt(g[3])) {
value *vp = &(((object *)(g[0].p))->data[g[3].i]);
vp->tag =0;
vp->i = g[3].i;
ip++;
}
else if (IsPointer(g[0]) && IsInt(g[3]) && IsPointer(g[3])) {
value *vp = &(((object *)(g[0].p))->data[g[3].i]);
vp->tag = g[3].tag;
vp->p = g[3].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[633].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_0_3_4:
{
if (IsPointer(g[0]) && IsInt(g[3]) && IsInt(g[4])) {
value *vp = &(((object *)(g[0].p))->data[g[3].i]);
vp->tag =0;
vp->i = g[4].i;
ip++;
}
else if (IsPointer(g[0]) && IsInt(g[3]) && IsPointer(g[4])) {
value *vp = &(((object *)(g[0].p))->data[g[3].i]);
vp->tag = g[4].tag;
vp->p = g[4].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[634].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_0_3_5:
{
if (IsPointer(g[0]) && IsInt(g[3]) && IsInt(g[5])) {
value *vp = &(((object *)(g[0].p))->data[g[3].i]);
vp->tag =0;
vp->i = g[5].i;
ip++;
}
else if (IsPointer(g[0]) && IsInt(g[3]) && IsPointer(g[5])) {
value *vp = &(((object *)(g[0].p))->data[g[3].i]);
vp->tag = g[5].tag;
vp->p = g[5].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[635].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_0_4_0:
{
if (IsPointer(g[0]) && IsInt(g[4]) && IsInt(g[0])) {
value *vp = &(((object *)(g[0].p))->data[g[4].i]);
vp->tag =0;
vp->i = g[0].i;
ip++;
}
else if (IsPointer(g[0]) && IsInt(g[4]) && IsPointer(g[0])) {
value *vp = &(((object *)(g[0].p))->data[g[4].i]);
vp->tag = g[0].tag;
vp->p = g[0].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[636].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_0_4_1:
{
if (IsPointer(g[0]) && IsInt(g[4]) && IsInt(g[1])) {
value *vp = &(((object *)(g[0].p))->data[g[4].i]);
vp->tag =0;
vp->i = g[1].i;
ip++;
}
else if (IsPointer(g[0]) && IsInt(g[4]) && IsPointer(g[1])) {
value *vp = &(((object *)(g[0].p))->data[g[4].i]);
vp->tag = g[1].tag;
vp->p = g[1].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[637].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_0_4_2:
{
if (IsPointer(g[0]) && IsInt(g[4]) && IsInt(g[2])) {
value *vp = &(((object *)(g[0].p))->data[g[4].i]);
vp->tag =0;
vp->i = g[2].i;
ip++;
}
else if (IsPointer(g[0]) && IsInt(g[4]) && IsPointer(g[2])) {
value *vp = &(((object *)(g[0].p))->data[g[4].i]);
vp->tag = g[2].tag;
vp->p = g[2].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[638].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_0_4_3:
{
if (IsPointer(g[0]) && IsInt(g[4]) && IsInt(g[3])) {
value *vp = &(((object *)(g[0].p))->data[g[4].i]);
vp->tag =0;
vp->i = g[3].i;
ip++;
}
else if (IsPointer(g[0]) && IsInt(g[4]) && IsPointer(g[3])) {
value *vp = &(((object *)(g[0].p))->data[g[4].i]);
vp->tag = g[3].tag;
vp->p = g[3].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[639].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_0_4_4:
{
if (IsPointer(g[0]) && IsInt(g[4]) && IsInt(g[4])) {
value *vp = &(((object *)(g[0].p))->data[g[4].i]);
vp->tag =0;
vp->i = g[4].i;
ip++;
}
else if (IsPointer(g[0]) && IsInt(g[4]) && IsPointer(g[4])) {
value *vp = &(((object *)(g[0].p))->data[g[4].i]);
vp->tag = g[4].tag;
vp->p = g[4].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[640].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_0_4_5:
{
if (IsPointer(g[0]) && IsInt(g[4]) && IsInt(g[5])) {
value *vp = &(((object *)(g[0].p))->data[g[4].i]);
vp->tag =0;
vp->i = g[5].i;
ip++;
}
else if (IsPointer(g[0]) && IsInt(g[4]) && IsPointer(g[5])) {
value *vp = &(((object *)(g[0].p))->data[g[4].i]);
vp->tag = g[5].tag;
vp->p = g[5].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[641].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_0_5_0:
{
if (IsPointer(g[0]) && IsInt(g[5]) && IsInt(g[0])) {
value *vp = &(((object *)(g[0].p))->data[g[5].i]);
vp->tag =0;
vp->i = g[0].i;
ip++;
}
else if (IsPointer(g[0]) && IsInt(g[5]) && IsPointer(g[0])) {
value *vp = &(((object *)(g[0].p))->data[g[5].i]);
vp->tag = g[0].tag;
vp->p = g[0].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[642].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_0_5_1:
{
if (IsPointer(g[0]) && IsInt(g[5]) && IsInt(g[1])) {
value *vp = &(((object *)(g[0].p))->data[g[5].i]);
vp->tag =0;
vp->i = g[1].i;
ip++;
}
else if (IsPointer(g[0]) && IsInt(g[5]) && IsPointer(g[1])) {
value *vp = &(((object *)(g[0].p))->data[g[5].i]);
vp->tag = g[1].tag;
vp->p = g[1].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[643].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_0_5_2:
{
if (IsPointer(g[0]) && IsInt(g[5]) && IsInt(g[2])) {
value *vp = &(((object *)(g[0].p))->data[g[5].i]);
vp->tag =0;
vp->i = g[2].i;
ip++;
}
else if (IsPointer(g[0]) && IsInt(g[5]) && IsPointer(g[2])) {
value *vp = &(((object *)(g[0].p))->data[g[5].i]);
vp->tag = g[2].tag;
vp->p = g[2].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[644].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_0_5_3:
{
if (IsPointer(g[0]) && IsInt(g[5]) && IsInt(g[3])) {
value *vp = &(((object *)(g[0].p))->data[g[5].i]);
vp->tag =0;
vp->i = g[3].i;
ip++;
}
else if (IsPointer(g[0]) && IsInt(g[5]) && IsPointer(g[3])) {
value *vp = &(((object *)(g[0].p))->data[g[5].i]);
vp->tag = g[3].tag;
vp->p = g[3].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[645].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_0_5_4:
{
if (IsPointer(g[0]) && IsInt(g[5]) && IsInt(g[4])) {
value *vp = &(((object *)(g[0].p))->data[g[5].i]);
vp->tag =0;
vp->i = g[4].i;
ip++;
}
else if (IsPointer(g[0]) && IsInt(g[5]) && IsPointer(g[4])) {
value *vp = &(((object *)(g[0].p))->data[g[5].i]);
vp->tag = g[4].tag;
vp->p = g[4].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[646].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_0_5_5:
{
if (IsPointer(g[0]) && IsInt(g[5]) && IsInt(g[5])) {
value *vp = &(((object *)(g[0].p))->data[g[5].i]);
vp->tag =0;
vp->i = g[5].i;
ip++;
}
else if (IsPointer(g[0]) && IsInt(g[5]) && IsPointer(g[5])) {
value *vp = &(((object *)(g[0].p))->data[g[5].i]);
vp->tag = g[5].tag;
vp->p = g[5].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[647].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_1_0_0:
{
if (IsPointer(g[1]) && IsInt(g[0]) && IsInt(g[0])) {
value *vp = &(((object *)(g[1].p))->data[g[0].i]);
vp->tag =0;
vp->i = g[0].i;
ip++;
}
else if (IsPointer(g[1]) && IsInt(g[0]) && IsPointer(g[0])) {
value *vp = &(((object *)(g[1].p))->data[g[0].i]);
vp->tag = g[0].tag;
vp->p = g[0].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[648].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_1_0_1:
{
if (IsPointer(g[1]) && IsInt(g[0]) && IsInt(g[1])) {
value *vp = &(((object *)(g[1].p))->data[g[0].i]);
vp->tag =0;
vp->i = g[1].i;
ip++;
}
else if (IsPointer(g[1]) && IsInt(g[0]) && IsPointer(g[1])) {
value *vp = &(((object *)(g[1].p))->data[g[0].i]);
vp->tag = g[1].tag;
vp->p = g[1].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[649].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_1_0_2:
{
if (IsPointer(g[1]) && IsInt(g[0]) && IsInt(g[2])) {
value *vp = &(((object *)(g[1].p))->data[g[0].i]);
vp->tag =0;
vp->i = g[2].i;
ip++;
}
else if (IsPointer(g[1]) && IsInt(g[0]) && IsPointer(g[2])) {
value *vp = &(((object *)(g[1].p))->data[g[0].i]);
vp->tag = g[2].tag;
vp->p = g[2].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[650].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_1_0_3:
{
if (IsPointer(g[1]) && IsInt(g[0]) && IsInt(g[3])) {
value *vp = &(((object *)(g[1].p))->data[g[0].i]);
vp->tag =0;
vp->i = g[3].i;
ip++;
}
else if (IsPointer(g[1]) && IsInt(g[0]) && IsPointer(g[3])) {
value *vp = &(((object *)(g[1].p))->data[g[0].i]);
vp->tag = g[3].tag;
vp->p = g[3].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[651].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_1_0_4:
{
if (IsPointer(g[1]) && IsInt(g[0]) && IsInt(g[4])) {
value *vp = &(((object *)(g[1].p))->data[g[0].i]);
vp->tag =0;
vp->i = g[4].i;
ip++;
}
else if (IsPointer(g[1]) && IsInt(g[0]) && IsPointer(g[4])) {
value *vp = &(((object *)(g[1].p))->data[g[0].i]);
vp->tag = g[4].tag;
vp->p = g[4].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[652].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_1_0_5:
{
if (IsPointer(g[1]) && IsInt(g[0]) && IsInt(g[5])) {
value *vp = &(((object *)(g[1].p))->data[g[0].i]);
vp->tag =0;
vp->i = g[5].i;
ip++;
}
else if (IsPointer(g[1]) && IsInt(g[0]) && IsPointer(g[5])) {
value *vp = &(((object *)(g[1].p))->data[g[0].i]);
vp->tag = g[5].tag;
vp->p = g[5].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[653].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_1_2_0:
{
if (IsPointer(g[1]) && IsInt(g[2]) && IsInt(g[0])) {
value *vp = &(((object *)(g[1].p))->data[g[2].i]);
vp->tag =0;
vp->i = g[0].i;
ip++;
}
else if (IsPointer(g[1]) && IsInt(g[2]) && IsPointer(g[0])) {
value *vp = &(((object *)(g[1].p))->data[g[2].i]);
vp->tag = g[0].tag;
vp->p = g[0].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[654].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_1_2_1:
{
if (IsPointer(g[1]) && IsInt(g[2]) && IsInt(g[1])) {
value *vp = &(((object *)(g[1].p))->data[g[2].i]);
vp->tag =0;
vp->i = g[1].i;
ip++;
}
else if (IsPointer(g[1]) && IsInt(g[2]) && IsPointer(g[1])) {
value *vp = &(((object *)(g[1].p))->data[g[2].i]);
vp->tag = g[1].tag;
vp->p = g[1].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[655].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_1_2_2:
{
if (IsPointer(g[1]) && IsInt(g[2]) && IsInt(g[2])) {
value *vp = &(((object *)(g[1].p))->data[g[2].i]);
vp->tag =0;
vp->i = g[2].i;
ip++;
}
else if (IsPointer(g[1]) && IsInt(g[2]) && IsPointer(g[2])) {
value *vp = &(((object *)(g[1].p))->data[g[2].i]);
vp->tag = g[2].tag;
vp->p = g[2].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[656].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_1_2_3:
{
if (IsPointer(g[1]) && IsInt(g[2]) && IsInt(g[3])) {
value *vp = &(((object *)(g[1].p))->data[g[2].i]);
vp->tag =0;
vp->i = g[3].i;
ip++;
}
else if (IsPointer(g[1]) && IsInt(g[2]) && IsPointer(g[3])) {
value *vp = &(((object *)(g[1].p))->data[g[2].i]);
vp->tag = g[3].tag;
vp->p = g[3].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[657].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_1_2_4:
{
if (IsPointer(g[1]) && IsInt(g[2]) && IsInt(g[4])) {
value *vp = &(((object *)(g[1].p))->data[g[2].i]);
vp->tag =0;
vp->i = g[4].i;
ip++;
}
else if (IsPointer(g[1]) && IsInt(g[2]) && IsPointer(g[4])) {
value *vp = &(((object *)(g[1].p))->data[g[2].i]);
vp->tag = g[4].tag;
vp->p = g[4].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[658].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_1_2_5:
{
if (IsPointer(g[1]) && IsInt(g[2]) && IsInt(g[5])) {
value *vp = &(((object *)(g[1].p))->data[g[2].i]);
vp->tag =0;
vp->i = g[5].i;
ip++;
}
else if (IsPointer(g[1]) && IsInt(g[2]) && IsPointer(g[5])) {
value *vp = &(((object *)(g[1].p))->data[g[2].i]);
vp->tag = g[5].tag;
vp->p = g[5].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[659].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_1_3_0:
{
if (IsPointer(g[1]) && IsInt(g[3]) && IsInt(g[0])) {
value *vp = &(((object *)(g[1].p))->data[g[3].i]);
vp->tag =0;
vp->i = g[0].i;
ip++;
}
else if (IsPointer(g[1]) && IsInt(g[3]) && IsPointer(g[0])) {
value *vp = &(((object *)(g[1].p))->data[g[3].i]);
vp->tag = g[0].tag;
vp->p = g[0].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[660].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_1_3_1:
{
if (IsPointer(g[1]) && IsInt(g[3]) && IsInt(g[1])) {
value *vp = &(((object *)(g[1].p))->data[g[3].i]);
vp->tag =0;
vp->i = g[1].i;
ip++;
}
else if (IsPointer(g[1]) && IsInt(g[3]) && IsPointer(g[1])) {
value *vp = &(((object *)(g[1].p))->data[g[3].i]);
vp->tag = g[1].tag;
vp->p = g[1].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[661].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_1_3_2:
{
if (IsPointer(g[1]) && IsInt(g[3]) && IsInt(g[2])) {
value *vp = &(((object *)(g[1].p))->data[g[3].i]);
vp->tag =0;
vp->i = g[2].i;
ip++;
}
else if (IsPointer(g[1]) && IsInt(g[3]) && IsPointer(g[2])) {
value *vp = &(((object *)(g[1].p))->data[g[3].i]);
vp->tag = g[2].tag;
vp->p = g[2].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[662].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_1_3_3:
{
if (IsPointer(g[1]) && IsInt(g[3]) && IsInt(g[3])) {
value *vp = &(((object *)(g[1].p))->data[g[3].i]);
vp->tag =0;
vp->i = g[3].i;
ip++;
}
else if (IsPointer(g[1]) && IsInt(g[3]) && IsPointer(g[3])) {
value *vp = &(((object *)(g[1].p))->data[g[3].i]);
vp->tag = g[3].tag;
vp->p = g[3].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[663].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_1_3_4:
{
if (IsPointer(g[1]) && IsInt(g[3]) && IsInt(g[4])) {
value *vp = &(((object *)(g[1].p))->data[g[3].i]);
vp->tag =0;
vp->i = g[4].i;
ip++;
}
else if (IsPointer(g[1]) && IsInt(g[3]) && IsPointer(g[4])) {
value *vp = &(((object *)(g[1].p))->data[g[3].i]);
vp->tag = g[4].tag;
vp->p = g[4].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[664].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_1_3_5:
{
if (IsPointer(g[1]) && IsInt(g[3]) && IsInt(g[5])) {
value *vp = &(((object *)(g[1].p))->data[g[3].i]);
vp->tag =0;
vp->i = g[5].i;
ip++;
}
else if (IsPointer(g[1]) && IsInt(g[3]) && IsPointer(g[5])) {
value *vp = &(((object *)(g[1].p))->data[g[3].i]);
vp->tag = g[5].tag;
vp->p = g[5].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[665].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_1_4_0:
{
if (IsPointer(g[1]) && IsInt(g[4]) && IsInt(g[0])) {
value *vp = &(((object *)(g[1].p))->data[g[4].i]);
vp->tag =0;
vp->i = g[0].i;
ip++;
}
else if (IsPointer(g[1]) && IsInt(g[4]) && IsPointer(g[0])) {
value *vp = &(((object *)(g[1].p))->data[g[4].i]);
vp->tag = g[0].tag;
vp->p = g[0].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[666].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_1_4_1:
{
if (IsPointer(g[1]) && IsInt(g[4]) && IsInt(g[1])) {
value *vp = &(((object *)(g[1].p))->data[g[4].i]);
vp->tag =0;
vp->i = g[1].i;
ip++;
}
else if (IsPointer(g[1]) && IsInt(g[4]) && IsPointer(g[1])) {
value *vp = &(((object *)(g[1].p))->data[g[4].i]);
vp->tag = g[1].tag;
vp->p = g[1].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[667].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_1_4_2:
{
if (IsPointer(g[1]) && IsInt(g[4]) && IsInt(g[2])) {
value *vp = &(((object *)(g[1].p))->data[g[4].i]);
vp->tag =0;
vp->i = g[2].i;
ip++;
}
else if (IsPointer(g[1]) && IsInt(g[4]) && IsPointer(g[2])) {
value *vp = &(((object *)(g[1].p))->data[g[4].i]);
vp->tag = g[2].tag;
vp->p = g[2].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[668].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_1_4_3:
{
if (IsPointer(g[1]) && IsInt(g[4]) && IsInt(g[3])) {
value *vp = &(((object *)(g[1].p))->data[g[4].i]);
vp->tag =0;
vp->i = g[3].i;
ip++;
}
else if (IsPointer(g[1]) && IsInt(g[4]) && IsPointer(g[3])) {
value *vp = &(((object *)(g[1].p))->data[g[4].i]);
vp->tag = g[3].tag;
vp->p = g[3].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[669].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_1_4_4:
{
if (IsPointer(g[1]) && IsInt(g[4]) && IsInt(g[4])) {
value *vp = &(((object *)(g[1].p))->data[g[4].i]);
vp->tag =0;
vp->i = g[4].i;
ip++;
}
else if (IsPointer(g[1]) && IsInt(g[4]) && IsPointer(g[4])) {
value *vp = &(((object *)(g[1].p))->data[g[4].i]);
vp->tag = g[4].tag;
vp->p = g[4].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[670].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_1_4_5:
{
if (IsPointer(g[1]) && IsInt(g[4]) && IsInt(g[5])) {
value *vp = &(((object *)(g[1].p))->data[g[4].i]);
vp->tag =0;
vp->i = g[5].i;
ip++;
}
else if (IsPointer(g[1]) && IsInt(g[4]) && IsPointer(g[5])) {
value *vp = &(((object *)(g[1].p))->data[g[4].i]);
vp->tag = g[5].tag;
vp->p = g[5].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[671].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_1_5_0:
{
if (IsPointer(g[1]) && IsInt(g[5]) && IsInt(g[0])) {
value *vp = &(((object *)(g[1].p))->data[g[5].i]);
vp->tag =0;
vp->i = g[0].i;
ip++;
}
else if (IsPointer(g[1]) && IsInt(g[5]) && IsPointer(g[0])) {
value *vp = &(((object *)(g[1].p))->data[g[5].i]);
vp->tag = g[0].tag;
vp->p = g[0].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[672].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_1_5_1:
{
if (IsPointer(g[1]) && IsInt(g[5]) && IsInt(g[1])) {
value *vp = &(((object *)(g[1].p))->data[g[5].i]);
vp->tag =0;
vp->i = g[1].i;
ip++;
}
else if (IsPointer(g[1]) && IsInt(g[5]) && IsPointer(g[1])) {
value *vp = &(((object *)(g[1].p))->data[g[5].i]);
vp->tag = g[1].tag;
vp->p = g[1].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[673].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_1_5_2:
{
if (IsPointer(g[1]) && IsInt(g[5]) && IsInt(g[2])) {
value *vp = &(((object *)(g[1].p))->data[g[5].i]);
vp->tag =0;
vp->i = g[2].i;
ip++;
}
else if (IsPointer(g[1]) && IsInt(g[5]) && IsPointer(g[2])) {
value *vp = &(((object *)(g[1].p))->data[g[5].i]);
vp->tag = g[2].tag;
vp->p = g[2].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[674].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_1_5_3:
{
if (IsPointer(g[1]) && IsInt(g[5]) && IsInt(g[3])) {
value *vp = &(((object *)(g[1].p))->data[g[5].i]);
vp->tag =0;
vp->i = g[3].i;
ip++;
}
else if (IsPointer(g[1]) && IsInt(g[5]) && IsPointer(g[3])) {
value *vp = &(((object *)(g[1].p))->data[g[5].i]);
vp->tag = g[3].tag;
vp->p = g[3].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[675].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_1_5_4:
{
if (IsPointer(g[1]) && IsInt(g[5]) && IsInt(g[4])) {
value *vp = &(((object *)(g[1].p))->data[g[5].i]);
vp->tag =0;
vp->i = g[4].i;
ip++;
}
else if (IsPointer(g[1]) && IsInt(g[5]) && IsPointer(g[4])) {
value *vp = &(((object *)(g[1].p))->data[g[5].i]);
vp->tag = g[4].tag;
vp->p = g[4].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[676].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_1_5_5:
{
if (IsPointer(g[1]) && IsInt(g[5]) && IsInt(g[5])) {
value *vp = &(((object *)(g[1].p))->data[g[5].i]);
vp->tag =0;
vp->i = g[5].i;
ip++;
}
else if (IsPointer(g[1]) && IsInt(g[5]) && IsPointer(g[5])) {
value *vp = &(((object *)(g[1].p))->data[g[5].i]);
vp->tag = g[5].tag;
vp->p = g[5].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[677].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_2_0_0:
{
if (IsPointer(g[2]) && IsInt(g[0]) && IsInt(g[0])) {
value *vp = &(((object *)(g[2].p))->data[g[0].i]);
vp->tag =0;
vp->i = g[0].i;
ip++;
}
else if (IsPointer(g[2]) && IsInt(g[0]) && IsPointer(g[0])) {
value *vp = &(((object *)(g[2].p))->data[g[0].i]);
vp->tag = g[0].tag;
vp->p = g[0].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[678].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_2_0_1:
{
if (IsPointer(g[2]) && IsInt(g[0]) && IsInt(g[1])) {
value *vp = &(((object *)(g[2].p))->data[g[0].i]);
vp->tag =0;
vp->i = g[1].i;
ip++;
}
else if (IsPointer(g[2]) && IsInt(g[0]) && IsPointer(g[1])) {
value *vp = &(((object *)(g[2].p))->data[g[0].i]);
vp->tag = g[1].tag;
vp->p = g[1].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[679].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_2_0_2:
{
if (IsPointer(g[2]) && IsInt(g[0]) && IsInt(g[2])) {
value *vp = &(((object *)(g[2].p))->data[g[0].i]);
vp->tag =0;
vp->i = g[2].i;
ip++;
}
else if (IsPointer(g[2]) && IsInt(g[0]) && IsPointer(g[2])) {
value *vp = &(((object *)(g[2].p))->data[g[0].i]);
vp->tag = g[2].tag;
vp->p = g[2].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[680].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_2_0_3:
{
if (IsPointer(g[2]) && IsInt(g[0]) && IsInt(g[3])) {
value *vp = &(((object *)(g[2].p))->data[g[0].i]);
vp->tag =0;
vp->i = g[3].i;
ip++;
}
else if (IsPointer(g[2]) && IsInt(g[0]) && IsPointer(g[3])) {
value *vp = &(((object *)(g[2].p))->data[g[0].i]);
vp->tag = g[3].tag;
vp->p = g[3].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[681].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_2_0_4:
{
if (IsPointer(g[2]) && IsInt(g[0]) && IsInt(g[4])) {
value *vp = &(((object *)(g[2].p))->data[g[0].i]);
vp->tag =0;
vp->i = g[4].i;
ip++;
}
else if (IsPointer(g[2]) && IsInt(g[0]) && IsPointer(g[4])) {
value *vp = &(((object *)(g[2].p))->data[g[0].i]);
vp->tag = g[4].tag;
vp->p = g[4].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[682].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_2_0_5:
{
if (IsPointer(g[2]) && IsInt(g[0]) && IsInt(g[5])) {
value *vp = &(((object *)(g[2].p))->data[g[0].i]);
vp->tag =0;
vp->i = g[5].i;
ip++;
}
else if (IsPointer(g[2]) && IsInt(g[0]) && IsPointer(g[5])) {
value *vp = &(((object *)(g[2].p))->data[g[0].i]);
vp->tag = g[5].tag;
vp->p = g[5].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[683].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_2_1_0:
{
if (IsPointer(g[2]) && IsInt(g[1]) && IsInt(g[0])) {
value *vp = &(((object *)(g[2].p))->data[g[1].i]);
vp->tag =0;
vp->i = g[0].i;
ip++;
}
else if (IsPointer(g[2]) && IsInt(g[1]) && IsPointer(g[0])) {
value *vp = &(((object *)(g[2].p))->data[g[1].i]);
vp->tag = g[0].tag;
vp->p = g[0].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[684].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_2_1_1:
{
if (IsPointer(g[2]) && IsInt(g[1]) && IsInt(g[1])) {
value *vp = &(((object *)(g[2].p))->data[g[1].i]);
vp->tag =0;
vp->i = g[1].i;
ip++;
}
else if (IsPointer(g[2]) && IsInt(g[1]) && IsPointer(g[1])) {
value *vp = &(((object *)(g[2].p))->data[g[1].i]);
vp->tag = g[1].tag;
vp->p = g[1].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[685].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_2_1_2:
{
if (IsPointer(g[2]) && IsInt(g[1]) && IsInt(g[2])) {
value *vp = &(((object *)(g[2].p))->data[g[1].i]);
vp->tag =0;
vp->i = g[2].i;
ip++;
}
else if (IsPointer(g[2]) && IsInt(g[1]) && IsPointer(g[2])) {
value *vp = &(((object *)(g[2].p))->data[g[1].i]);
vp->tag = g[2].tag;
vp->p = g[2].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[686].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_2_1_3:
{
if (IsPointer(g[2]) && IsInt(g[1]) && IsInt(g[3])) {
value *vp = &(((object *)(g[2].p))->data[g[1].i]);
vp->tag =0;
vp->i = g[3].i;
ip++;
}
else if (IsPointer(g[2]) && IsInt(g[1]) && IsPointer(g[3])) {
value *vp = &(((object *)(g[2].p))->data[g[1].i]);
vp->tag = g[3].tag;
vp->p = g[3].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[687].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_2_1_4:
{
if (IsPointer(g[2]) && IsInt(g[1]) && IsInt(g[4])) {
value *vp = &(((object *)(g[2].p))->data[g[1].i]);
vp->tag =0;
vp->i = g[4].i;
ip++;
}
else if (IsPointer(g[2]) && IsInt(g[1]) && IsPointer(g[4])) {
value *vp = &(((object *)(g[2].p))->data[g[1].i]);
vp->tag = g[4].tag;
vp->p = g[4].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[688].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_2_1_5:
{
if (IsPointer(g[2]) && IsInt(g[1]) && IsInt(g[5])) {
value *vp = &(((object *)(g[2].p))->data[g[1].i]);
vp->tag =0;
vp->i = g[5].i;
ip++;
}
else if (IsPointer(g[2]) && IsInt(g[1]) && IsPointer(g[5])) {
value *vp = &(((object *)(g[2].p))->data[g[1].i]);
vp->tag = g[5].tag;
vp->p = g[5].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[689].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_2_3_0:
{
if (IsPointer(g[2]) && IsInt(g[3]) && IsInt(g[0])) {
value *vp = &(((object *)(g[2].p))->data[g[3].i]);
vp->tag =0;
vp->i = g[0].i;
ip++;
}
else if (IsPointer(g[2]) && IsInt(g[3]) && IsPointer(g[0])) {
value *vp = &(((object *)(g[2].p))->data[g[3].i]);
vp->tag = g[0].tag;
vp->p = g[0].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[690].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_2_3_1:
{
if (IsPointer(g[2]) && IsInt(g[3]) && IsInt(g[1])) {
value *vp = &(((object *)(g[2].p))->data[g[3].i]);
vp->tag =0;
vp->i = g[1].i;
ip++;
}
else if (IsPointer(g[2]) && IsInt(g[3]) && IsPointer(g[1])) {
value *vp = &(((object *)(g[2].p))->data[g[3].i]);
vp->tag = g[1].tag;
vp->p = g[1].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[691].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_2_3_2:
{
if (IsPointer(g[2]) && IsInt(g[3]) && IsInt(g[2])) {
value *vp = &(((object *)(g[2].p))->data[g[3].i]);
vp->tag =0;
vp->i = g[2].i;
ip++;
}
else if (IsPointer(g[2]) && IsInt(g[3]) && IsPointer(g[2])) {
value *vp = &(((object *)(g[2].p))->data[g[3].i]);
vp->tag = g[2].tag;
vp->p = g[2].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[692].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_2_3_3:
{
if (IsPointer(g[2]) && IsInt(g[3]) && IsInt(g[3])) {
value *vp = &(((object *)(g[2].p))->data[g[3].i]);
vp->tag =0;
vp->i = g[3].i;
ip++;
}
else if (IsPointer(g[2]) && IsInt(g[3]) && IsPointer(g[3])) {
value *vp = &(((object *)(g[2].p))->data[g[3].i]);
vp->tag = g[3].tag;
vp->p = g[3].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[693].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_2_3_4:
{
if (IsPointer(g[2]) && IsInt(g[3]) && IsInt(g[4])) {
value *vp = &(((object *)(g[2].p))->data[g[3].i]);
vp->tag =0;
vp->i = g[4].i;
ip++;
}
else if (IsPointer(g[2]) && IsInt(g[3]) && IsPointer(g[4])) {
value *vp = &(((object *)(g[2].p))->data[g[3].i]);
vp->tag = g[4].tag;
vp->p = g[4].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[694].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_2_3_5:
{
if (IsPointer(g[2]) && IsInt(g[3]) && IsInt(g[5])) {
value *vp = &(((object *)(g[2].p))->data[g[3].i]);
vp->tag =0;
vp->i = g[5].i;
ip++;
}
else if (IsPointer(g[2]) && IsInt(g[3]) && IsPointer(g[5])) {
value *vp = &(((object *)(g[2].p))->data[g[3].i]);
vp->tag = g[5].tag;
vp->p = g[5].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[695].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_2_4_0:
{
if (IsPointer(g[2]) && IsInt(g[4]) && IsInt(g[0])) {
value *vp = &(((object *)(g[2].p))->data[g[4].i]);
vp->tag =0;
vp->i = g[0].i;
ip++;
}
else if (IsPointer(g[2]) && IsInt(g[4]) && IsPointer(g[0])) {
value *vp = &(((object *)(g[2].p))->data[g[4].i]);
vp->tag = g[0].tag;
vp->p = g[0].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[696].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_2_4_1:
{
if (IsPointer(g[2]) && IsInt(g[4]) && IsInt(g[1])) {
value *vp = &(((object *)(g[2].p))->data[g[4].i]);
vp->tag =0;
vp->i = g[1].i;
ip++;
}
else if (IsPointer(g[2]) && IsInt(g[4]) && IsPointer(g[1])) {
value *vp = &(((object *)(g[2].p))->data[g[4].i]);
vp->tag = g[1].tag;
vp->p = g[1].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[697].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_2_4_2:
{
if (IsPointer(g[2]) && IsInt(g[4]) && IsInt(g[2])) {
value *vp = &(((object *)(g[2].p))->data[g[4].i]);
vp->tag =0;
vp->i = g[2].i;
ip++;
}
else if (IsPointer(g[2]) && IsInt(g[4]) && IsPointer(g[2])) {
value *vp = &(((object *)(g[2].p))->data[g[4].i]);
vp->tag = g[2].tag;
vp->p = g[2].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[698].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_2_4_3:
{
if (IsPointer(g[2]) && IsInt(g[4]) && IsInt(g[3])) {
value *vp = &(((object *)(g[2].p))->data[g[4].i]);
vp->tag =0;
vp->i = g[3].i;
ip++;
}
else if (IsPointer(g[2]) && IsInt(g[4]) && IsPointer(g[3])) {
value *vp = &(((object *)(g[2].p))->data[g[4].i]);
vp->tag = g[3].tag;
vp->p = g[3].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[699].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_2_4_4:
{
if (IsPointer(g[2]) && IsInt(g[4]) && IsInt(g[4])) {
value *vp = &(((object *)(g[2].p))->data[g[4].i]);
vp->tag =0;
vp->i = g[4].i;
ip++;
}
else if (IsPointer(g[2]) && IsInt(g[4]) && IsPointer(g[4])) {
value *vp = &(((object *)(g[2].p))->data[g[4].i]);
vp->tag = g[4].tag;
vp->p = g[4].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[700].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_2_4_5:
{
if (IsPointer(g[2]) && IsInt(g[4]) && IsInt(g[5])) {
value *vp = &(((object *)(g[2].p))->data[g[4].i]);
vp->tag =0;
vp->i = g[5].i;
ip++;
}
else if (IsPointer(g[2]) && IsInt(g[4]) && IsPointer(g[5])) {
value *vp = &(((object *)(g[2].p))->data[g[4].i]);
vp->tag = g[5].tag;
vp->p = g[5].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[701].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_2_5_0:
{
if (IsPointer(g[2]) && IsInt(g[5]) && IsInt(g[0])) {
value *vp = &(((object *)(g[2].p))->data[g[5].i]);
vp->tag =0;
vp->i = g[0].i;
ip++;
}
else if (IsPointer(g[2]) && IsInt(g[5]) && IsPointer(g[0])) {
value *vp = &(((object *)(g[2].p))->data[g[5].i]);
vp->tag = g[0].tag;
vp->p = g[0].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[702].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_2_5_1:
{
if (IsPointer(g[2]) && IsInt(g[5]) && IsInt(g[1])) {
value *vp = &(((object *)(g[2].p))->data[g[5].i]);
vp->tag =0;
vp->i = g[1].i;
ip++;
}
else if (IsPointer(g[2]) && IsInt(g[5]) && IsPointer(g[1])) {
value *vp = &(((object *)(g[2].p))->data[g[5].i]);
vp->tag = g[1].tag;
vp->p = g[1].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[703].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_2_5_2:
{
if (IsPointer(g[2]) && IsInt(g[5]) && IsInt(g[2])) {
value *vp = &(((object *)(g[2].p))->data[g[5].i]);
vp->tag =0;
vp->i = g[2].i;
ip++;
}
else if (IsPointer(g[2]) && IsInt(g[5]) && IsPointer(g[2])) {
value *vp = &(((object *)(g[2].p))->data[g[5].i]);
vp->tag = g[2].tag;
vp->p = g[2].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[704].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_2_5_3:
{
if (IsPointer(g[2]) && IsInt(g[5]) && IsInt(g[3])) {
value *vp = &(((object *)(g[2].p))->data[g[5].i]);
vp->tag =0;
vp->i = g[3].i;
ip++;
}
else if (IsPointer(g[2]) && IsInt(g[5]) && IsPointer(g[3])) {
value *vp = &(((object *)(g[2].p))->data[g[5].i]);
vp->tag = g[3].tag;
vp->p = g[3].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[705].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_2_5_4:
{
if (IsPointer(g[2]) && IsInt(g[5]) && IsInt(g[4])) {
value *vp = &(((object *)(g[2].p))->data[g[5].i]);
vp->tag =0;
vp->i = g[4].i;
ip++;
}
else if (IsPointer(g[2]) && IsInt(g[5]) && IsPointer(g[4])) {
value *vp = &(((object *)(g[2].p))->data[g[5].i]);
vp->tag = g[4].tag;
vp->p = g[4].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[706].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_2_5_5:
{
if (IsPointer(g[2]) && IsInt(g[5]) && IsInt(g[5])) {
value *vp = &(((object *)(g[2].p))->data[g[5].i]);
vp->tag =0;
vp->i = g[5].i;
ip++;
}
else if (IsPointer(g[2]) && IsInt(g[5]) && IsPointer(g[5])) {
value *vp = &(((object *)(g[2].p))->data[g[5].i]);
vp->tag = g[5].tag;
vp->p = g[5].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[707].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_3_0_0:
{
if (IsPointer(g[3]) && IsInt(g[0]) && IsInt(g[0])) {
value *vp = &(((object *)(g[3].p))->data[g[0].i]);
vp->tag =0;
vp->i = g[0].i;
ip++;
}
else if (IsPointer(g[3]) && IsInt(g[0]) && IsPointer(g[0])) {
value *vp = &(((object *)(g[3].p))->data[g[0].i]);
vp->tag = g[0].tag;
vp->p = g[0].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[708].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_3_0_1:
{
if (IsPointer(g[3]) && IsInt(g[0]) && IsInt(g[1])) {
value *vp = &(((object *)(g[3].p))->data[g[0].i]);
vp->tag =0;
vp->i = g[1].i;
ip++;
}
else if (IsPointer(g[3]) && IsInt(g[0]) && IsPointer(g[1])) {
value *vp = &(((object *)(g[3].p))->data[g[0].i]);
vp->tag = g[1].tag;
vp->p = g[1].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[709].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_3_0_2:
{
if (IsPointer(g[3]) && IsInt(g[0]) && IsInt(g[2])) {
value *vp = &(((object *)(g[3].p))->data[g[0].i]);
vp->tag =0;
vp->i = g[2].i;
ip++;
}
else if (IsPointer(g[3]) && IsInt(g[0]) && IsPointer(g[2])) {
value *vp = &(((object *)(g[3].p))->data[g[0].i]);
vp->tag = g[2].tag;
vp->p = g[2].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[710].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_3_0_3:
{
if (IsPointer(g[3]) && IsInt(g[0]) && IsInt(g[3])) {
value *vp = &(((object *)(g[3].p))->data[g[0].i]);
vp->tag =0;
vp->i = g[3].i;
ip++;
}
else if (IsPointer(g[3]) && IsInt(g[0]) && IsPointer(g[3])) {
value *vp = &(((object *)(g[3].p))->data[g[0].i]);
vp->tag = g[3].tag;
vp->p = g[3].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[711].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_3_0_4:
{
if (IsPointer(g[3]) && IsInt(g[0]) && IsInt(g[4])) {
value *vp = &(((object *)(g[3].p))->data[g[0].i]);
vp->tag =0;
vp->i = g[4].i;
ip++;
}
else if (IsPointer(g[3]) && IsInt(g[0]) && IsPointer(g[4])) {
value *vp = &(((object *)(g[3].p))->data[g[0].i]);
vp->tag = g[4].tag;
vp->p = g[4].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[712].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_3_0_5:
{
if (IsPointer(g[3]) && IsInt(g[0]) && IsInt(g[5])) {
value *vp = &(((object *)(g[3].p))->data[g[0].i]);
vp->tag =0;
vp->i = g[5].i;
ip++;
}
else if (IsPointer(g[3]) && IsInt(g[0]) && IsPointer(g[5])) {
value *vp = &(((object *)(g[3].p))->data[g[0].i]);
vp->tag = g[5].tag;
vp->p = g[5].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[713].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_3_1_0:
{
if (IsPointer(g[3]) && IsInt(g[1]) && IsInt(g[0])) {
value *vp = &(((object *)(g[3].p))->data[g[1].i]);
vp->tag =0;
vp->i = g[0].i;
ip++;
}
else if (IsPointer(g[3]) && IsInt(g[1]) && IsPointer(g[0])) {
value *vp = &(((object *)(g[3].p))->data[g[1].i]);
vp->tag = g[0].tag;
vp->p = g[0].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[714].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_3_1_1:
{
if (IsPointer(g[3]) && IsInt(g[1]) && IsInt(g[1])) {
value *vp = &(((object *)(g[3].p))->data[g[1].i]);
vp->tag =0;
vp->i = g[1].i;
ip++;
}
else if (IsPointer(g[3]) && IsInt(g[1]) && IsPointer(g[1])) {
value *vp = &(((object *)(g[3].p))->data[g[1].i]);
vp->tag = g[1].tag;
vp->p = g[1].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[715].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_3_1_2:
{
if (IsPointer(g[3]) && IsInt(g[1]) && IsInt(g[2])) {
value *vp = &(((object *)(g[3].p))->data[g[1].i]);
vp->tag =0;
vp->i = g[2].i;
ip++;
}
else if (IsPointer(g[3]) && IsInt(g[1]) && IsPointer(g[2])) {
value *vp = &(((object *)(g[3].p))->data[g[1].i]);
vp->tag = g[2].tag;
vp->p = g[2].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[716].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_3_1_3:
{
if (IsPointer(g[3]) && IsInt(g[1]) && IsInt(g[3])) {
value *vp = &(((object *)(g[3].p))->data[g[1].i]);
vp->tag =0;
vp->i = g[3].i;
ip++;
}
else if (IsPointer(g[3]) && IsInt(g[1]) && IsPointer(g[3])) {
value *vp = &(((object *)(g[3].p))->data[g[1].i]);
vp->tag = g[3].tag;
vp->p = g[3].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[717].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_3_1_4:
{
if (IsPointer(g[3]) && IsInt(g[1]) && IsInt(g[4])) {
value *vp = &(((object *)(g[3].p))->data[g[1].i]);
vp->tag =0;
vp->i = g[4].i;
ip++;
}
else if (IsPointer(g[3]) && IsInt(g[1]) && IsPointer(g[4])) {
value *vp = &(((object *)(g[3].p))->data[g[1].i]);
vp->tag = g[4].tag;
vp->p = g[4].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[718].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_3_1_5:
{
if (IsPointer(g[3]) && IsInt(g[1]) && IsInt(g[5])) {
value *vp = &(((object *)(g[3].p))->data[g[1].i]);
vp->tag =0;
vp->i = g[5].i;
ip++;
}
else if (IsPointer(g[3]) && IsInt(g[1]) && IsPointer(g[5])) {
value *vp = &(((object *)(g[3].p))->data[g[1].i]);
vp->tag = g[5].tag;
vp->p = g[5].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[719].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_3_2_0:
{
if (IsPointer(g[3]) && IsInt(g[2]) && IsInt(g[0])) {
value *vp = &(((object *)(g[3].p))->data[g[2].i]);
vp->tag =0;
vp->i = g[0].i;
ip++;
}
else if (IsPointer(g[3]) && IsInt(g[2]) && IsPointer(g[0])) {
value *vp = &(((object *)(g[3].p))->data[g[2].i]);
vp->tag = g[0].tag;
vp->p = g[0].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[720].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_3_2_1:
{
if (IsPointer(g[3]) && IsInt(g[2]) && IsInt(g[1])) {
value *vp = &(((object *)(g[3].p))->data[g[2].i]);
vp->tag =0;
vp->i = g[1].i;
ip++;
}
else if (IsPointer(g[3]) && IsInt(g[2]) && IsPointer(g[1])) {
value *vp = &(((object *)(g[3].p))->data[g[2].i]);
vp->tag = g[1].tag;
vp->p = g[1].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[721].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_3_2_2:
{
if (IsPointer(g[3]) && IsInt(g[2]) && IsInt(g[2])) {
value *vp = &(((object *)(g[3].p))->data[g[2].i]);
vp->tag =0;
vp->i = g[2].i;
ip++;
}
else if (IsPointer(g[3]) && IsInt(g[2]) && IsPointer(g[2])) {
value *vp = &(((object *)(g[3].p))->data[g[2].i]);
vp->tag = g[2].tag;
vp->p = g[2].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[722].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_3_2_3:
{
if (IsPointer(g[3]) && IsInt(g[2]) && IsInt(g[3])) {
value *vp = &(((object *)(g[3].p))->data[g[2].i]);
vp->tag =0;
vp->i = g[3].i;
ip++;
}
else if (IsPointer(g[3]) && IsInt(g[2]) && IsPointer(g[3])) {
value *vp = &(((object *)(g[3].p))->data[g[2].i]);
vp->tag = g[3].tag;
vp->p = g[3].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[723].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_3_2_4:
{
if (IsPointer(g[3]) && IsInt(g[2]) && IsInt(g[4])) {
value *vp = &(((object *)(g[3].p))->data[g[2].i]);
vp->tag =0;
vp->i = g[4].i;
ip++;
}
else if (IsPointer(g[3]) && IsInt(g[2]) && IsPointer(g[4])) {
value *vp = &(((object *)(g[3].p))->data[g[2].i]);
vp->tag = g[4].tag;
vp->p = g[4].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[724].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_3_2_5:
{
if (IsPointer(g[3]) && IsInt(g[2]) && IsInt(g[5])) {
value *vp = &(((object *)(g[3].p))->data[g[2].i]);
vp->tag =0;
vp->i = g[5].i;
ip++;
}
else if (IsPointer(g[3]) && IsInt(g[2]) && IsPointer(g[5])) {
value *vp = &(((object *)(g[3].p))->data[g[2].i]);
vp->tag = g[5].tag;
vp->p = g[5].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[725].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_3_4_0:
{
if (IsPointer(g[3]) && IsInt(g[4]) && IsInt(g[0])) {
value *vp = &(((object *)(g[3].p))->data[g[4].i]);
vp->tag =0;
vp->i = g[0].i;
ip++;
}
else if (IsPointer(g[3]) && IsInt(g[4]) && IsPointer(g[0])) {
value *vp = &(((object *)(g[3].p))->data[g[4].i]);
vp->tag = g[0].tag;
vp->p = g[0].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[726].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_3_4_1:
{
if (IsPointer(g[3]) && IsInt(g[4]) && IsInt(g[1])) {
value *vp = &(((object *)(g[3].p))->data[g[4].i]);
vp->tag =0;
vp->i = g[1].i;
ip++;
}
else if (IsPointer(g[3]) && IsInt(g[4]) && IsPointer(g[1])) {
value *vp = &(((object *)(g[3].p))->data[g[4].i]);
vp->tag = g[1].tag;
vp->p = g[1].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[727].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_3_4_2:
{
if (IsPointer(g[3]) && IsInt(g[4]) && IsInt(g[2])) {
value *vp = &(((object *)(g[3].p))->data[g[4].i]);
vp->tag =0;
vp->i = g[2].i;
ip++;
}
else if (IsPointer(g[3]) && IsInt(g[4]) && IsPointer(g[2])) {
value *vp = &(((object *)(g[3].p))->data[g[4].i]);
vp->tag = g[2].tag;
vp->p = g[2].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[728].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_3_4_3:
{
if (IsPointer(g[3]) && IsInt(g[4]) && IsInt(g[3])) {
value *vp = &(((object *)(g[3].p))->data[g[4].i]);
vp->tag =0;
vp->i = g[3].i;
ip++;
}
else if (IsPointer(g[3]) && IsInt(g[4]) && IsPointer(g[3])) {
value *vp = &(((object *)(g[3].p))->data[g[4].i]);
vp->tag = g[3].tag;
vp->p = g[3].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[729].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_3_4_4:
{
if (IsPointer(g[3]) && IsInt(g[4]) && IsInt(g[4])) {
value *vp = &(((object *)(g[3].p))->data[g[4].i]);
vp->tag =0;
vp->i = g[4].i;
ip++;
}
else if (IsPointer(g[3]) && IsInt(g[4]) && IsPointer(g[4])) {
value *vp = &(((object *)(g[3].p))->data[g[4].i]);
vp->tag = g[4].tag;
vp->p = g[4].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[730].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_3_4_5:
{
if (IsPointer(g[3]) && IsInt(g[4]) && IsInt(g[5])) {
value *vp = &(((object *)(g[3].p))->data[g[4].i]);
vp->tag =0;
vp->i = g[5].i;
ip++;
}
else if (IsPointer(g[3]) && IsInt(g[4]) && IsPointer(g[5])) {
value *vp = &(((object *)(g[3].p))->data[g[4].i]);
vp->tag = g[5].tag;
vp->p = g[5].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[731].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_3_5_0:
{
if (IsPointer(g[3]) && IsInt(g[5]) && IsInt(g[0])) {
value *vp = &(((object *)(g[3].p))->data[g[5].i]);
vp->tag =0;
vp->i = g[0].i;
ip++;
}
else if (IsPointer(g[3]) && IsInt(g[5]) && IsPointer(g[0])) {
value *vp = &(((object *)(g[3].p))->data[g[5].i]);
vp->tag = g[0].tag;
vp->p = g[0].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[732].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_3_5_1:
{
if (IsPointer(g[3]) && IsInt(g[5]) && IsInt(g[1])) {
value *vp = &(((object *)(g[3].p))->data[g[5].i]);
vp->tag =0;
vp->i = g[1].i;
ip++;
}
else if (IsPointer(g[3]) && IsInt(g[5]) && IsPointer(g[1])) {
value *vp = &(((object *)(g[3].p))->data[g[5].i]);
vp->tag = g[1].tag;
vp->p = g[1].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[733].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_3_5_2:
{
if (IsPointer(g[3]) && IsInt(g[5]) && IsInt(g[2])) {
value *vp = &(((object *)(g[3].p))->data[g[5].i]);
vp->tag =0;
vp->i = g[2].i;
ip++;
}
else if (IsPointer(g[3]) && IsInt(g[5]) && IsPointer(g[2])) {
value *vp = &(((object *)(g[3].p))->data[g[5].i]);
vp->tag = g[2].tag;
vp->p = g[2].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[734].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_3_5_3:
{
if (IsPointer(g[3]) && IsInt(g[5]) && IsInt(g[3])) {
value *vp = &(((object *)(g[3].p))->data[g[5].i]);
vp->tag =0;
vp->i = g[3].i;
ip++;
}
else if (IsPointer(g[3]) && IsInt(g[5]) && IsPointer(g[3])) {
value *vp = &(((object *)(g[3].p))->data[g[5].i]);
vp->tag = g[3].tag;
vp->p = g[3].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[735].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_3_5_4:
{
if (IsPointer(g[3]) && IsInt(g[5]) && IsInt(g[4])) {
value *vp = &(((object *)(g[3].p))->data[g[5].i]);
vp->tag =0;
vp->i = g[4].i;
ip++;
}
else if (IsPointer(g[3]) && IsInt(g[5]) && IsPointer(g[4])) {
value *vp = &(((object *)(g[3].p))->data[g[5].i]);
vp->tag = g[4].tag;
vp->p = g[4].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[736].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_3_5_5:
{
if (IsPointer(g[3]) && IsInt(g[5]) && IsInt(g[5])) {
value *vp = &(((object *)(g[3].p))->data[g[5].i]);
vp->tag =0;
vp->i = g[5].i;
ip++;
}
else if (IsPointer(g[3]) && IsInt(g[5]) && IsPointer(g[5])) {
value *vp = &(((object *)(g[3].p))->data[g[5].i]);
vp->tag = g[5].tag;
vp->p = g[5].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[737].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_4_0_0:
{
if (IsPointer(g[4]) && IsInt(g[0]) && IsInt(g[0])) {
value *vp = &(((object *)(g[4].p))->data[g[0].i]);
vp->tag =0;
vp->i = g[0].i;
ip++;
}
else if (IsPointer(g[4]) && IsInt(g[0]) && IsPointer(g[0])) {
value *vp = &(((object *)(g[4].p))->data[g[0].i]);
vp->tag = g[0].tag;
vp->p = g[0].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[738].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_4_0_1:
{
if (IsPointer(g[4]) && IsInt(g[0]) && IsInt(g[1])) {
value *vp = &(((object *)(g[4].p))->data[g[0].i]);
vp->tag =0;
vp->i = g[1].i;
ip++;
}
else if (IsPointer(g[4]) && IsInt(g[0]) && IsPointer(g[1])) {
value *vp = &(((object *)(g[4].p))->data[g[0].i]);
vp->tag = g[1].tag;
vp->p = g[1].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[739].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_4_0_2:
{
if (IsPointer(g[4]) && IsInt(g[0]) && IsInt(g[2])) {
value *vp = &(((object *)(g[4].p))->data[g[0].i]);
vp->tag =0;
vp->i = g[2].i;
ip++;
}
else if (IsPointer(g[4]) && IsInt(g[0]) && IsPointer(g[2])) {
value *vp = &(((object *)(g[4].p))->data[g[0].i]);
vp->tag = g[2].tag;
vp->p = g[2].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[740].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_4_0_3:
{
if (IsPointer(g[4]) && IsInt(g[0]) && IsInt(g[3])) {
value *vp = &(((object *)(g[4].p))->data[g[0].i]);
vp->tag =0;
vp->i = g[3].i;
ip++;
}
else if (IsPointer(g[4]) && IsInt(g[0]) && IsPointer(g[3])) {
value *vp = &(((object *)(g[4].p))->data[g[0].i]);
vp->tag = g[3].tag;
vp->p = g[3].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[741].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_4_0_4:
{
if (IsPointer(g[4]) && IsInt(g[0]) && IsInt(g[4])) {
value *vp = &(((object *)(g[4].p))->data[g[0].i]);
vp->tag =0;
vp->i = g[4].i;
ip++;
}
else if (IsPointer(g[4]) && IsInt(g[0]) && IsPointer(g[4])) {
value *vp = &(((object *)(g[4].p))->data[g[0].i]);
vp->tag = g[4].tag;
vp->p = g[4].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[742].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_4_0_5:
{
if (IsPointer(g[4]) && IsInt(g[0]) && IsInt(g[5])) {
value *vp = &(((object *)(g[4].p))->data[g[0].i]);
vp->tag =0;
vp->i = g[5].i;
ip++;
}
else if (IsPointer(g[4]) && IsInt(g[0]) && IsPointer(g[5])) {
value *vp = &(((object *)(g[4].p))->data[g[0].i]);
vp->tag = g[5].tag;
vp->p = g[5].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[743].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_4_1_0:
{
if (IsPointer(g[4]) && IsInt(g[1]) && IsInt(g[0])) {
value *vp = &(((object *)(g[4].p))->data[g[1].i]);
vp->tag =0;
vp->i = g[0].i;
ip++;
}
else if (IsPointer(g[4]) && IsInt(g[1]) && IsPointer(g[0])) {
value *vp = &(((object *)(g[4].p))->data[g[1].i]);
vp->tag = g[0].tag;
vp->p = g[0].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[744].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_4_1_1:
{
if (IsPointer(g[4]) && IsInt(g[1]) && IsInt(g[1])) {
value *vp = &(((object *)(g[4].p))->data[g[1].i]);
vp->tag =0;
vp->i = g[1].i;
ip++;
}
else if (IsPointer(g[4]) && IsInt(g[1]) && IsPointer(g[1])) {
value *vp = &(((object *)(g[4].p))->data[g[1].i]);
vp->tag = g[1].tag;
vp->p = g[1].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[745].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_4_1_2:
{
if (IsPointer(g[4]) && IsInt(g[1]) && IsInt(g[2])) {
value *vp = &(((object *)(g[4].p))->data[g[1].i]);
vp->tag =0;
vp->i = g[2].i;
ip++;
}
else if (IsPointer(g[4]) && IsInt(g[1]) && IsPointer(g[2])) {
value *vp = &(((object *)(g[4].p))->data[g[1].i]);
vp->tag = g[2].tag;
vp->p = g[2].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[746].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_4_1_3:
{
if (IsPointer(g[4]) && IsInt(g[1]) && IsInt(g[3])) {
value *vp = &(((object *)(g[4].p))->data[g[1].i]);
vp->tag =0;
vp->i = g[3].i;
ip++;
}
else if (IsPointer(g[4]) && IsInt(g[1]) && IsPointer(g[3])) {
value *vp = &(((object *)(g[4].p))->data[g[1].i]);
vp->tag = g[3].tag;
vp->p = g[3].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[747].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_4_1_4:
{
if (IsPointer(g[4]) && IsInt(g[1]) && IsInt(g[4])) {
value *vp = &(((object *)(g[4].p))->data[g[1].i]);
vp->tag =0;
vp->i = g[4].i;
ip++;
}
else if (IsPointer(g[4]) && IsInt(g[1]) && IsPointer(g[4])) {
value *vp = &(((object *)(g[4].p))->data[g[1].i]);
vp->tag = g[4].tag;
vp->p = g[4].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[748].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_4_1_5:
{
if (IsPointer(g[4]) && IsInt(g[1]) && IsInt(g[5])) {
value *vp = &(((object *)(g[4].p))->data[g[1].i]);
vp->tag =0;
vp->i = g[5].i;
ip++;
}
else if (IsPointer(g[4]) && IsInt(g[1]) && IsPointer(g[5])) {
value *vp = &(((object *)(g[4].p))->data[g[1].i]);
vp->tag = g[5].tag;
vp->p = g[5].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[749].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_4_2_0:
{
if (IsPointer(g[4]) && IsInt(g[2]) && IsInt(g[0])) {
value *vp = &(((object *)(g[4].p))->data[g[2].i]);
vp->tag =0;
vp->i = g[0].i;
ip++;
}
else if (IsPointer(g[4]) && IsInt(g[2]) && IsPointer(g[0])) {
value *vp = &(((object *)(g[4].p))->data[g[2].i]);
vp->tag = g[0].tag;
vp->p = g[0].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[750].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_4_2_1:
{
if (IsPointer(g[4]) && IsInt(g[2]) && IsInt(g[1])) {
value *vp = &(((object *)(g[4].p))->data[g[2].i]);
vp->tag =0;
vp->i = g[1].i;
ip++;
}
else if (IsPointer(g[4]) && IsInt(g[2]) && IsPointer(g[1])) {
value *vp = &(((object *)(g[4].p))->data[g[2].i]);
vp->tag = g[1].tag;
vp->p = g[1].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[751].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_4_2_2:
{
if (IsPointer(g[4]) && IsInt(g[2]) && IsInt(g[2])) {
value *vp = &(((object *)(g[4].p))->data[g[2].i]);
vp->tag =0;
vp->i = g[2].i;
ip++;
}
else if (IsPointer(g[4]) && IsInt(g[2]) && IsPointer(g[2])) {
value *vp = &(((object *)(g[4].p))->data[g[2].i]);
vp->tag = g[2].tag;
vp->p = g[2].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[752].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_4_2_3:
{
if (IsPointer(g[4]) && IsInt(g[2]) && IsInt(g[3])) {
value *vp = &(((object *)(g[4].p))->data[g[2].i]);
vp->tag =0;
vp->i = g[3].i;
ip++;
}
else if (IsPointer(g[4]) && IsInt(g[2]) && IsPointer(g[3])) {
value *vp = &(((object *)(g[4].p))->data[g[2].i]);
vp->tag = g[3].tag;
vp->p = g[3].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[753].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_4_2_4:
{
if (IsPointer(g[4]) && IsInt(g[2]) && IsInt(g[4])) {
value *vp = &(((object *)(g[4].p))->data[g[2].i]);
vp->tag =0;
vp->i = g[4].i;
ip++;
}
else if (IsPointer(g[4]) && IsInt(g[2]) && IsPointer(g[4])) {
value *vp = &(((object *)(g[4].p))->data[g[2].i]);
vp->tag = g[4].tag;
vp->p = g[4].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[754].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_4_2_5:
{
if (IsPointer(g[4]) && IsInt(g[2]) && IsInt(g[5])) {
value *vp = &(((object *)(g[4].p))->data[g[2].i]);
vp->tag =0;
vp->i = g[5].i;
ip++;
}
else if (IsPointer(g[4]) && IsInt(g[2]) && IsPointer(g[5])) {
value *vp = &(((object *)(g[4].p))->data[g[2].i]);
vp->tag = g[5].tag;
vp->p = g[5].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[755].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_4_3_0:
{
if (IsPointer(g[4]) && IsInt(g[3]) && IsInt(g[0])) {
value *vp = &(((object *)(g[4].p))->data[g[3].i]);
vp->tag =0;
vp->i = g[0].i;
ip++;
}
else if (IsPointer(g[4]) && IsInt(g[3]) && IsPointer(g[0])) {
value *vp = &(((object *)(g[4].p))->data[g[3].i]);
vp->tag = g[0].tag;
vp->p = g[0].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[756].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_4_3_1:
{
if (IsPointer(g[4]) && IsInt(g[3]) && IsInt(g[1])) {
value *vp = &(((object *)(g[4].p))->data[g[3].i]);
vp->tag =0;
vp->i = g[1].i;
ip++;
}
else if (IsPointer(g[4]) && IsInt(g[3]) && IsPointer(g[1])) {
value *vp = &(((object *)(g[4].p))->data[g[3].i]);
vp->tag = g[1].tag;
vp->p = g[1].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[757].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_4_3_2:
{
if (IsPointer(g[4]) && IsInt(g[3]) && IsInt(g[2])) {
value *vp = &(((object *)(g[4].p))->data[g[3].i]);
vp->tag =0;
vp->i = g[2].i;
ip++;
}
else if (IsPointer(g[4]) && IsInt(g[3]) && IsPointer(g[2])) {
value *vp = &(((object *)(g[4].p))->data[g[3].i]);
vp->tag = g[2].tag;
vp->p = g[2].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[758].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_4_3_3:
{
if (IsPointer(g[4]) && IsInt(g[3]) && IsInt(g[3])) {
value *vp = &(((object *)(g[4].p))->data[g[3].i]);
vp->tag =0;
vp->i = g[3].i;
ip++;
}
else if (IsPointer(g[4]) && IsInt(g[3]) && IsPointer(g[3])) {
value *vp = &(((object *)(g[4].p))->data[g[3].i]);
vp->tag = g[3].tag;
vp->p = g[3].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[759].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_4_3_4:
{
if (IsPointer(g[4]) && IsInt(g[3]) && IsInt(g[4])) {
value *vp = &(((object *)(g[4].p))->data[g[3].i]);
vp->tag =0;
vp->i = g[4].i;
ip++;
}
else if (IsPointer(g[4]) && IsInt(g[3]) && IsPointer(g[4])) {
value *vp = &(((object *)(g[4].p))->data[g[3].i]);
vp->tag = g[4].tag;
vp->p = g[4].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[760].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_4_3_5:
{
if (IsPointer(g[4]) && IsInt(g[3]) && IsInt(g[5])) {
value *vp = &(((object *)(g[4].p))->data[g[3].i]);
vp->tag =0;
vp->i = g[5].i;
ip++;
}
else if (IsPointer(g[4]) && IsInt(g[3]) && IsPointer(g[5])) {
value *vp = &(((object *)(g[4].p))->data[g[3].i]);
vp->tag = g[5].tag;
vp->p = g[5].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[761].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_4_5_0:
{
if (IsPointer(g[4]) && IsInt(g[5]) && IsInt(g[0])) {
value *vp = &(((object *)(g[4].p))->data[g[5].i]);
vp->tag =0;
vp->i = g[0].i;
ip++;
}
else if (IsPointer(g[4]) && IsInt(g[5]) && IsPointer(g[0])) {
value *vp = &(((object *)(g[4].p))->data[g[5].i]);
vp->tag = g[0].tag;
vp->p = g[0].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[762].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_4_5_1:
{
if (IsPointer(g[4]) && IsInt(g[5]) && IsInt(g[1])) {
value *vp = &(((object *)(g[4].p))->data[g[5].i]);
vp->tag =0;
vp->i = g[1].i;
ip++;
}
else if (IsPointer(g[4]) && IsInt(g[5]) && IsPointer(g[1])) {
value *vp = &(((object *)(g[4].p))->data[g[5].i]);
vp->tag = g[1].tag;
vp->p = g[1].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[763].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_4_5_2:
{
if (IsPointer(g[4]) && IsInt(g[5]) && IsInt(g[2])) {
value *vp = &(((object *)(g[4].p))->data[g[5].i]);
vp->tag =0;
vp->i = g[2].i;
ip++;
}
else if (IsPointer(g[4]) && IsInt(g[5]) && IsPointer(g[2])) {
value *vp = &(((object *)(g[4].p))->data[g[5].i]);
vp->tag = g[2].tag;
vp->p = g[2].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[764].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_4_5_3:
{
if (IsPointer(g[4]) && IsInt(g[5]) && IsInt(g[3])) {
value *vp = &(((object *)(g[4].p))->data[g[5].i]);
vp->tag =0;
vp->i = g[3].i;
ip++;
}
else if (IsPointer(g[4]) && IsInt(g[5]) && IsPointer(g[3])) {
value *vp = &(((object *)(g[4].p))->data[g[5].i]);
vp->tag = g[3].tag;
vp->p = g[3].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[765].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_4_5_4:
{
if (IsPointer(g[4]) && IsInt(g[5]) && IsInt(g[4])) {
value *vp = &(((object *)(g[4].p))->data[g[5].i]);
vp->tag =0;
vp->i = g[4].i;
ip++;
}
else if (IsPointer(g[4]) && IsInt(g[5]) && IsPointer(g[4])) {
value *vp = &(((object *)(g[4].p))->data[g[5].i]);
vp->tag = g[4].tag;
vp->p = g[4].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[766].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_4_5_5:
{
if (IsPointer(g[4]) && IsInt(g[5]) && IsInt(g[5])) {
value *vp = &(((object *)(g[4].p))->data[g[5].i]);
vp->tag =0;
vp->i = g[5].i;
ip++;
}
else if (IsPointer(g[4]) && IsInt(g[5]) && IsPointer(g[5])) {
value *vp = &(((object *)(g[4].p))->data[g[5].i]);
vp->tag = g[5].tag;
vp->p = g[5].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[767].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_5_0_0:
{
if (IsPointer(g[5]) && IsInt(g[0]) && IsInt(g[0])) {
value *vp = &(((object *)(g[5].p))->data[g[0].i]);
vp->tag =0;
vp->i = g[0].i;
ip++;
}
else if (IsPointer(g[5]) && IsInt(g[0]) && IsPointer(g[0])) {
value *vp = &(((object *)(g[5].p))->data[g[0].i]);
vp->tag = g[0].tag;
vp->p = g[0].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[768].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_5_0_1:
{
if (IsPointer(g[5]) && IsInt(g[0]) && IsInt(g[1])) {
value *vp = &(((object *)(g[5].p))->data[g[0].i]);
vp->tag =0;
vp->i = g[1].i;
ip++;
}
else if (IsPointer(g[5]) && IsInt(g[0]) && IsPointer(g[1])) {
value *vp = &(((object *)(g[5].p))->data[g[0].i]);
vp->tag = g[1].tag;
vp->p = g[1].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[769].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_5_0_2:
{
if (IsPointer(g[5]) && IsInt(g[0]) && IsInt(g[2])) {
value *vp = &(((object *)(g[5].p))->data[g[0].i]);
vp->tag =0;
vp->i = g[2].i;
ip++;
}
else if (IsPointer(g[5]) && IsInt(g[0]) && IsPointer(g[2])) {
value *vp = &(((object *)(g[5].p))->data[g[0].i]);
vp->tag = g[2].tag;
vp->p = g[2].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[770].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_5_0_3:
{
if (IsPointer(g[5]) && IsInt(g[0]) && IsInt(g[3])) {
value *vp = &(((object *)(g[5].p))->data[g[0].i]);
vp->tag =0;
vp->i = g[3].i;
ip++;
}
else if (IsPointer(g[5]) && IsInt(g[0]) && IsPointer(g[3])) {
value *vp = &(((object *)(g[5].p))->data[g[0].i]);
vp->tag = g[3].tag;
vp->p = g[3].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[771].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_5_0_4:
{
if (IsPointer(g[5]) && IsInt(g[0]) && IsInt(g[4])) {
value *vp = &(((object *)(g[5].p))->data[g[0].i]);
vp->tag =0;
vp->i = g[4].i;
ip++;
}
else if (IsPointer(g[5]) && IsInt(g[0]) && IsPointer(g[4])) {
value *vp = &(((object *)(g[5].p))->data[g[0].i]);
vp->tag = g[4].tag;
vp->p = g[4].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[772].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_5_0_5:
{
if (IsPointer(g[5]) && IsInt(g[0]) && IsInt(g[5])) {
value *vp = &(((object *)(g[5].p))->data[g[0].i]);
vp->tag =0;
vp->i = g[5].i;
ip++;
}
else if (IsPointer(g[5]) && IsInt(g[0]) && IsPointer(g[5])) {
value *vp = &(((object *)(g[5].p))->data[g[0].i]);
vp->tag = g[5].tag;
vp->p = g[5].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[773].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_5_1_0:
{
if (IsPointer(g[5]) && IsInt(g[1]) && IsInt(g[0])) {
value *vp = &(((object *)(g[5].p))->data[g[1].i]);
vp->tag =0;
vp->i = g[0].i;
ip++;
}
else if (IsPointer(g[5]) && IsInt(g[1]) && IsPointer(g[0])) {
value *vp = &(((object *)(g[5].p))->data[g[1].i]);
vp->tag = g[0].tag;
vp->p = g[0].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[774].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_5_1_1:
{
if (IsPointer(g[5]) && IsInt(g[1]) && IsInt(g[1])) {
value *vp = &(((object *)(g[5].p))->data[g[1].i]);
vp->tag =0;
vp->i = g[1].i;
ip++;
}
else if (IsPointer(g[5]) && IsInt(g[1]) && IsPointer(g[1])) {
value *vp = &(((object *)(g[5].p))->data[g[1].i]);
vp->tag = g[1].tag;
vp->p = g[1].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[775].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_5_1_2:
{
if (IsPointer(g[5]) && IsInt(g[1]) && IsInt(g[2])) {
value *vp = &(((object *)(g[5].p))->data[g[1].i]);
vp->tag =0;
vp->i = g[2].i;
ip++;
}
else if (IsPointer(g[5]) && IsInt(g[1]) && IsPointer(g[2])) {
value *vp = &(((object *)(g[5].p))->data[g[1].i]);
vp->tag = g[2].tag;
vp->p = g[2].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[776].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_5_1_3:
{
if (IsPointer(g[5]) && IsInt(g[1]) && IsInt(g[3])) {
value *vp = &(((object *)(g[5].p))->data[g[1].i]);
vp->tag =0;
vp->i = g[3].i;
ip++;
}
else if (IsPointer(g[5]) && IsInt(g[1]) && IsPointer(g[3])) {
value *vp = &(((object *)(g[5].p))->data[g[1].i]);
vp->tag = g[3].tag;
vp->p = g[3].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[777].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_5_1_4:
{
if (IsPointer(g[5]) && IsInt(g[1]) && IsInt(g[4])) {
value *vp = &(((object *)(g[5].p))->data[g[1].i]);
vp->tag =0;
vp->i = g[4].i;
ip++;
}
else if (IsPointer(g[5]) && IsInt(g[1]) && IsPointer(g[4])) {
value *vp = &(((object *)(g[5].p))->data[g[1].i]);
vp->tag = g[4].tag;
vp->p = g[4].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[778].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_5_1_5:
{
if (IsPointer(g[5]) && IsInt(g[1]) && IsInt(g[5])) {
value *vp = &(((object *)(g[5].p))->data[g[1].i]);
vp->tag =0;
vp->i = g[5].i;
ip++;
}
else if (IsPointer(g[5]) && IsInt(g[1]) && IsPointer(g[5])) {
value *vp = &(((object *)(g[5].p))->data[g[1].i]);
vp->tag = g[5].tag;
vp->p = g[5].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[779].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_5_2_0:
{
if (IsPointer(g[5]) && IsInt(g[2]) && IsInt(g[0])) {
value *vp = &(((object *)(g[5].p))->data[g[2].i]);
vp->tag =0;
vp->i = g[0].i;
ip++;
}
else if (IsPointer(g[5]) && IsInt(g[2]) && IsPointer(g[0])) {
value *vp = &(((object *)(g[5].p))->data[g[2].i]);
vp->tag = g[0].tag;
vp->p = g[0].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[780].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_5_2_1:
{
if (IsPointer(g[5]) && IsInt(g[2]) && IsInt(g[1])) {
value *vp = &(((object *)(g[5].p))->data[g[2].i]);
vp->tag =0;
vp->i = g[1].i;
ip++;
}
else if (IsPointer(g[5]) && IsInt(g[2]) && IsPointer(g[1])) {
value *vp = &(((object *)(g[5].p))->data[g[2].i]);
vp->tag = g[1].tag;
vp->p = g[1].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[781].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_5_2_2:
{
if (IsPointer(g[5]) && IsInt(g[2]) && IsInt(g[2])) {
value *vp = &(((object *)(g[5].p))->data[g[2].i]);
vp->tag =0;
vp->i = g[2].i;
ip++;
}
else if (IsPointer(g[5]) && IsInt(g[2]) && IsPointer(g[2])) {
value *vp = &(((object *)(g[5].p))->data[g[2].i]);
vp->tag = g[2].tag;
vp->p = g[2].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[782].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_5_2_3:
{
if (IsPointer(g[5]) && IsInt(g[2]) && IsInt(g[3])) {
value *vp = &(((object *)(g[5].p))->data[g[2].i]);
vp->tag =0;
vp->i = g[3].i;
ip++;
}
else if (IsPointer(g[5]) && IsInt(g[2]) && IsPointer(g[3])) {
value *vp = &(((object *)(g[5].p))->data[g[2].i]);
vp->tag = g[3].tag;
vp->p = g[3].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[783].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_5_2_4:
{
if (IsPointer(g[5]) && IsInt(g[2]) && IsInt(g[4])) {
value *vp = &(((object *)(g[5].p))->data[g[2].i]);
vp->tag =0;
vp->i = g[4].i;
ip++;
}
else if (IsPointer(g[5]) && IsInt(g[2]) && IsPointer(g[4])) {
value *vp = &(((object *)(g[5].p))->data[g[2].i]);
vp->tag = g[4].tag;
vp->p = g[4].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[784].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_5_2_5:
{
if (IsPointer(g[5]) && IsInt(g[2]) && IsInt(g[5])) {
value *vp = &(((object *)(g[5].p))->data[g[2].i]);
vp->tag =0;
vp->i = g[5].i;
ip++;
}
else if (IsPointer(g[5]) && IsInt(g[2]) && IsPointer(g[5])) {
value *vp = &(((object *)(g[5].p))->data[g[2].i]);
vp->tag = g[5].tag;
vp->p = g[5].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[785].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_5_3_0:
{
if (IsPointer(g[5]) && IsInt(g[3]) && IsInt(g[0])) {
value *vp = &(((object *)(g[5].p))->data[g[3].i]);
vp->tag =0;
vp->i = g[0].i;
ip++;
}
else if (IsPointer(g[5]) && IsInt(g[3]) && IsPointer(g[0])) {
value *vp = &(((object *)(g[5].p))->data[g[3].i]);
vp->tag = g[0].tag;
vp->p = g[0].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[786].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_5_3_1:
{
if (IsPointer(g[5]) && IsInt(g[3]) && IsInt(g[1])) {
value *vp = &(((object *)(g[5].p))->data[g[3].i]);
vp->tag =0;
vp->i = g[1].i;
ip++;
}
else if (IsPointer(g[5]) && IsInt(g[3]) && IsPointer(g[1])) {
value *vp = &(((object *)(g[5].p))->data[g[3].i]);
vp->tag = g[1].tag;
vp->p = g[1].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[787].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_5_3_2:
{
if (IsPointer(g[5]) && IsInt(g[3]) && IsInt(g[2])) {
value *vp = &(((object *)(g[5].p))->data[g[3].i]);
vp->tag =0;
vp->i = g[2].i;
ip++;
}
else if (IsPointer(g[5]) && IsInt(g[3]) && IsPointer(g[2])) {
value *vp = &(((object *)(g[5].p))->data[g[3].i]);
vp->tag = g[2].tag;
vp->p = g[2].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[788].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_5_3_3:
{
if (IsPointer(g[5]) && IsInt(g[3]) && IsInt(g[3])) {
value *vp = &(((object *)(g[5].p))->data[g[3].i]);
vp->tag =0;
vp->i = g[3].i;
ip++;
}
else if (IsPointer(g[5]) && IsInt(g[3]) && IsPointer(g[3])) {
value *vp = &(((object *)(g[5].p))->data[g[3].i]);
vp->tag = g[3].tag;
vp->p = g[3].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[789].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_5_3_4:
{
if (IsPointer(g[5]) && IsInt(g[3]) && IsInt(g[4])) {
value *vp = &(((object *)(g[5].p))->data[g[3].i]);
vp->tag =0;
vp->i = g[4].i;
ip++;
}
else if (IsPointer(g[5]) && IsInt(g[3]) && IsPointer(g[4])) {
value *vp = &(((object *)(g[5].p))->data[g[3].i]);
vp->tag = g[4].tag;
vp->p = g[4].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[790].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_5_3_5:
{
if (IsPointer(g[5]) && IsInt(g[3]) && IsInt(g[5])) {
value *vp = &(((object *)(g[5].p))->data[g[3].i]);
vp->tag =0;
vp->i = g[5].i;
ip++;
}
else if (IsPointer(g[5]) && IsInt(g[3]) && IsPointer(g[5])) {
value *vp = &(((object *)(g[5].p))->data[g[3].i]);
vp->tag = g[5].tag;
vp->p = g[5].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[791].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_5_4_0:
{
if (IsPointer(g[5]) && IsInt(g[4]) && IsInt(g[0])) {
value *vp = &(((object *)(g[5].p))->data[g[4].i]);
vp->tag =0;
vp->i = g[0].i;
ip++;
}
else if (IsPointer(g[5]) && IsInt(g[4]) && IsPointer(g[0])) {
value *vp = &(((object *)(g[5].p))->data[g[4].i]);
vp->tag = g[0].tag;
vp->p = g[0].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[792].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_5_4_1:
{
if (IsPointer(g[5]) && IsInt(g[4]) && IsInt(g[1])) {
value *vp = &(((object *)(g[5].p))->data[g[4].i]);
vp->tag =0;
vp->i = g[1].i;
ip++;
}
else if (IsPointer(g[5]) && IsInt(g[4]) && IsPointer(g[1])) {
value *vp = &(((object *)(g[5].p))->data[g[4].i]);
vp->tag = g[1].tag;
vp->p = g[1].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[793].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_5_4_2:
{
if (IsPointer(g[5]) && IsInt(g[4]) && IsInt(g[2])) {
value *vp = &(((object *)(g[5].p))->data[g[4].i]);
vp->tag =0;
vp->i = g[2].i;
ip++;
}
else if (IsPointer(g[5]) && IsInt(g[4]) && IsPointer(g[2])) {
value *vp = &(((object *)(g[5].p))->data[g[4].i]);
vp->tag = g[2].tag;
vp->p = g[2].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[794].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_5_4_3:
{
if (IsPointer(g[5]) && IsInt(g[4]) && IsInt(g[3])) {
value *vp = &(((object *)(g[5].p))->data[g[4].i]);
vp->tag =0;
vp->i = g[3].i;
ip++;
}
else if (IsPointer(g[5]) && IsInt(g[4]) && IsPointer(g[3])) {
value *vp = &(((object *)(g[5].p))->data[g[4].i]);
vp->tag = g[3].tag;
vp->p = g[3].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[795].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_5_4_4:
{
if (IsPointer(g[5]) && IsInt(g[4]) && IsInt(g[4])) {
value *vp = &(((object *)(g[5].p))->data[g[4].i]);
vp->tag =0;
vp->i = g[4].i;
ip++;
}
else if (IsPointer(g[5]) && IsInt(g[4]) && IsPointer(g[4])) {
value *vp = &(((object *)(g[5].p))->data[g[4].i]);
vp->tag = g[4].tag;
vp->p = g[4].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[796].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

seto_5_4_5:
{
if (IsPointer(g[5]) && IsInt(g[4]) && IsInt(g[5])) {
value *vp = &(((object *)(g[5].p))->data[g[4].i]);
vp->tag =0;
vp->i = g[5].i;
ip++;
}
else if (IsPointer(g[5]) && IsInt(g[4]) && IsPointer(g[5])) {
value *vp = &(((object *)(g[5].p))->data[g[4].i]);
vp->tag = g[5].tag;
vp->p = g[5].p;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: seto");
return 1;
}
#ifdef STATS
opcodeCounters[797].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_0_0_1:
{
if (IsInt(g[0]) && IsPointer(g[0]) && IsInt(g[1])) {
uint8_t val = ((buffer *)(g[0].p))->data[g[1].i];
g[0].i = val;
ip++;
}
else if (IsPointer(g[0]) && IsPointer(g[0]) && IsInt(g[1])) {
uint8_t val = ((buffer *)(g[0].p))->data[g[1].i];
g[0].tag = 0;
g[0].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[798].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_0_0_2:
{
if (IsInt(g[0]) && IsPointer(g[0]) && IsInt(g[2])) {
uint8_t val = ((buffer *)(g[0].p))->data[g[2].i];
g[0].i = val;
ip++;
}
else if (IsPointer(g[0]) && IsPointer(g[0]) && IsInt(g[2])) {
uint8_t val = ((buffer *)(g[0].p))->data[g[2].i];
g[0].tag = 0;
g[0].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[799].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_0_0_3:
{
if (IsInt(g[0]) && IsPointer(g[0]) && IsInt(g[3])) {
uint8_t val = ((buffer *)(g[0].p))->data[g[3].i];
g[0].i = val;
ip++;
}
else if (IsPointer(g[0]) && IsPointer(g[0]) && IsInt(g[3])) {
uint8_t val = ((buffer *)(g[0].p))->data[g[3].i];
g[0].tag = 0;
g[0].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[800].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_0_0_4:
{
if (IsInt(g[0]) && IsPointer(g[0]) && IsInt(g[4])) {
uint8_t val = ((buffer *)(g[0].p))->data[g[4].i];
g[0].i = val;
ip++;
}
else if (IsPointer(g[0]) && IsPointer(g[0]) && IsInt(g[4])) {
uint8_t val = ((buffer *)(g[0].p))->data[g[4].i];
g[0].tag = 0;
g[0].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[801].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_0_0_5:
{
if (IsInt(g[0]) && IsPointer(g[0]) && IsInt(g[5])) {
uint8_t val = ((buffer *)(g[0].p))->data[g[5].i];
g[0].i = val;
ip++;
}
else if (IsPointer(g[0]) && IsPointer(g[0]) && IsInt(g[5])) {
uint8_t val = ((buffer *)(g[0].p))->data[g[5].i];
g[0].tag = 0;
g[0].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[802].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_0_1_0:
{
if (IsInt(g[0]) && IsPointer(g[1]) && IsInt(g[0])) {
uint8_t val = ((buffer *)(g[1].p))->data[g[0].i];
g[0].i = val;
ip++;
}
else if (IsPointer(g[0]) && IsPointer(g[1]) && IsInt(g[0])) {
uint8_t val = ((buffer *)(g[1].p))->data[g[0].i];
g[0].tag = 0;
g[0].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[803].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_0_1_2:
{
if (IsInt(g[0]) && IsPointer(g[1]) && IsInt(g[2])) {
uint8_t val = ((buffer *)(g[1].p))->data[g[2].i];
g[0].i = val;
ip++;
}
else if (IsPointer(g[0]) && IsPointer(g[1]) && IsInt(g[2])) {
uint8_t val = ((buffer *)(g[1].p))->data[g[2].i];
g[0].tag = 0;
g[0].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[804].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_0_1_3:
{
if (IsInt(g[0]) && IsPointer(g[1]) && IsInt(g[3])) {
uint8_t val = ((buffer *)(g[1].p))->data[g[3].i];
g[0].i = val;
ip++;
}
else if (IsPointer(g[0]) && IsPointer(g[1]) && IsInt(g[3])) {
uint8_t val = ((buffer *)(g[1].p))->data[g[3].i];
g[0].tag = 0;
g[0].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[805].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_0_1_4:
{
if (IsInt(g[0]) && IsPointer(g[1]) && IsInt(g[4])) {
uint8_t val = ((buffer *)(g[1].p))->data[g[4].i];
g[0].i = val;
ip++;
}
else if (IsPointer(g[0]) && IsPointer(g[1]) && IsInt(g[4])) {
uint8_t val = ((buffer *)(g[1].p))->data[g[4].i];
g[0].tag = 0;
g[0].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[806].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_0_1_5:
{
if (IsInt(g[0]) && IsPointer(g[1]) && IsInt(g[5])) {
uint8_t val = ((buffer *)(g[1].p))->data[g[5].i];
g[0].i = val;
ip++;
}
else if (IsPointer(g[0]) && IsPointer(g[1]) && IsInt(g[5])) {
uint8_t val = ((buffer *)(g[1].p))->data[g[5].i];
g[0].tag = 0;
g[0].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[807].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_0_2_0:
{
if (IsInt(g[0]) && IsPointer(g[2]) && IsInt(g[0])) {
uint8_t val = ((buffer *)(g[2].p))->data[g[0].i];
g[0].i = val;
ip++;
}
else if (IsPointer(g[0]) && IsPointer(g[2]) && IsInt(g[0])) {
uint8_t val = ((buffer *)(g[2].p))->data[g[0].i];
g[0].tag = 0;
g[0].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[808].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_0_2_1:
{
if (IsInt(g[0]) && IsPointer(g[2]) && IsInt(g[1])) {
uint8_t val = ((buffer *)(g[2].p))->data[g[1].i];
g[0].i = val;
ip++;
}
else if (IsPointer(g[0]) && IsPointer(g[2]) && IsInt(g[1])) {
uint8_t val = ((buffer *)(g[2].p))->data[g[1].i];
g[0].tag = 0;
g[0].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[809].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_0_2_3:
{
if (IsInt(g[0]) && IsPointer(g[2]) && IsInt(g[3])) {
uint8_t val = ((buffer *)(g[2].p))->data[g[3].i];
g[0].i = val;
ip++;
}
else if (IsPointer(g[0]) && IsPointer(g[2]) && IsInt(g[3])) {
uint8_t val = ((buffer *)(g[2].p))->data[g[3].i];
g[0].tag = 0;
g[0].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[810].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_0_2_4:
{
if (IsInt(g[0]) && IsPointer(g[2]) && IsInt(g[4])) {
uint8_t val = ((buffer *)(g[2].p))->data[g[4].i];
g[0].i = val;
ip++;
}
else if (IsPointer(g[0]) && IsPointer(g[2]) && IsInt(g[4])) {
uint8_t val = ((buffer *)(g[2].p))->data[g[4].i];
g[0].tag = 0;
g[0].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[811].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_0_2_5:
{
if (IsInt(g[0]) && IsPointer(g[2]) && IsInt(g[5])) {
uint8_t val = ((buffer *)(g[2].p))->data[g[5].i];
g[0].i = val;
ip++;
}
else if (IsPointer(g[0]) && IsPointer(g[2]) && IsInt(g[5])) {
uint8_t val = ((buffer *)(g[2].p))->data[g[5].i];
g[0].tag = 0;
g[0].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[812].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_0_3_0:
{
if (IsInt(g[0]) && IsPointer(g[3]) && IsInt(g[0])) {
uint8_t val = ((buffer *)(g[3].p))->data[g[0].i];
g[0].i = val;
ip++;
}
else if (IsPointer(g[0]) && IsPointer(g[3]) && IsInt(g[0])) {
uint8_t val = ((buffer *)(g[3].p))->data[g[0].i];
g[0].tag = 0;
g[0].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[813].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_0_3_1:
{
if (IsInt(g[0]) && IsPointer(g[3]) && IsInt(g[1])) {
uint8_t val = ((buffer *)(g[3].p))->data[g[1].i];
g[0].i = val;
ip++;
}
else if (IsPointer(g[0]) && IsPointer(g[3]) && IsInt(g[1])) {
uint8_t val = ((buffer *)(g[3].p))->data[g[1].i];
g[0].tag = 0;
g[0].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[814].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_0_3_2:
{
if (IsInt(g[0]) && IsPointer(g[3]) && IsInt(g[2])) {
uint8_t val = ((buffer *)(g[3].p))->data[g[2].i];
g[0].i = val;
ip++;
}
else if (IsPointer(g[0]) && IsPointer(g[3]) && IsInt(g[2])) {
uint8_t val = ((buffer *)(g[3].p))->data[g[2].i];
g[0].tag = 0;
g[0].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[815].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_0_3_4:
{
if (IsInt(g[0]) && IsPointer(g[3]) && IsInt(g[4])) {
uint8_t val = ((buffer *)(g[3].p))->data[g[4].i];
g[0].i = val;
ip++;
}
else if (IsPointer(g[0]) && IsPointer(g[3]) && IsInt(g[4])) {
uint8_t val = ((buffer *)(g[3].p))->data[g[4].i];
g[0].tag = 0;
g[0].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[816].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_0_3_5:
{
if (IsInt(g[0]) && IsPointer(g[3]) && IsInt(g[5])) {
uint8_t val = ((buffer *)(g[3].p))->data[g[5].i];
g[0].i = val;
ip++;
}
else if (IsPointer(g[0]) && IsPointer(g[3]) && IsInt(g[5])) {
uint8_t val = ((buffer *)(g[3].p))->data[g[5].i];
g[0].tag = 0;
g[0].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[817].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_0_4_0:
{
if (IsInt(g[0]) && IsPointer(g[4]) && IsInt(g[0])) {
uint8_t val = ((buffer *)(g[4].p))->data[g[0].i];
g[0].i = val;
ip++;
}
else if (IsPointer(g[0]) && IsPointer(g[4]) && IsInt(g[0])) {
uint8_t val = ((buffer *)(g[4].p))->data[g[0].i];
g[0].tag = 0;
g[0].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[818].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_0_4_1:
{
if (IsInt(g[0]) && IsPointer(g[4]) && IsInt(g[1])) {
uint8_t val = ((buffer *)(g[4].p))->data[g[1].i];
g[0].i = val;
ip++;
}
else if (IsPointer(g[0]) && IsPointer(g[4]) && IsInt(g[1])) {
uint8_t val = ((buffer *)(g[4].p))->data[g[1].i];
g[0].tag = 0;
g[0].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[819].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_0_4_2:
{
if (IsInt(g[0]) && IsPointer(g[4]) && IsInt(g[2])) {
uint8_t val = ((buffer *)(g[4].p))->data[g[2].i];
g[0].i = val;
ip++;
}
else if (IsPointer(g[0]) && IsPointer(g[4]) && IsInt(g[2])) {
uint8_t val = ((buffer *)(g[4].p))->data[g[2].i];
g[0].tag = 0;
g[0].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[820].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_0_4_3:
{
if (IsInt(g[0]) && IsPointer(g[4]) && IsInt(g[3])) {
uint8_t val = ((buffer *)(g[4].p))->data[g[3].i];
g[0].i = val;
ip++;
}
else if (IsPointer(g[0]) && IsPointer(g[4]) && IsInt(g[3])) {
uint8_t val = ((buffer *)(g[4].p))->data[g[3].i];
g[0].tag = 0;
g[0].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[821].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_0_4_5:
{
if (IsInt(g[0]) && IsPointer(g[4]) && IsInt(g[5])) {
uint8_t val = ((buffer *)(g[4].p))->data[g[5].i];
g[0].i = val;
ip++;
}
else if (IsPointer(g[0]) && IsPointer(g[4]) && IsInt(g[5])) {
uint8_t val = ((buffer *)(g[4].p))->data[g[5].i];
g[0].tag = 0;
g[0].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[822].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_0_5_0:
{
if (IsInt(g[0]) && IsPointer(g[5]) && IsInt(g[0])) {
uint8_t val = ((buffer *)(g[5].p))->data[g[0].i];
g[0].i = val;
ip++;
}
else if (IsPointer(g[0]) && IsPointer(g[5]) && IsInt(g[0])) {
uint8_t val = ((buffer *)(g[5].p))->data[g[0].i];
g[0].tag = 0;
g[0].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[823].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_0_5_1:
{
if (IsInt(g[0]) && IsPointer(g[5]) && IsInt(g[1])) {
uint8_t val = ((buffer *)(g[5].p))->data[g[1].i];
g[0].i = val;
ip++;
}
else if (IsPointer(g[0]) && IsPointer(g[5]) && IsInt(g[1])) {
uint8_t val = ((buffer *)(g[5].p))->data[g[1].i];
g[0].tag = 0;
g[0].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[824].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_0_5_2:
{
if (IsInt(g[0]) && IsPointer(g[5]) && IsInt(g[2])) {
uint8_t val = ((buffer *)(g[5].p))->data[g[2].i];
g[0].i = val;
ip++;
}
else if (IsPointer(g[0]) && IsPointer(g[5]) && IsInt(g[2])) {
uint8_t val = ((buffer *)(g[5].p))->data[g[2].i];
g[0].tag = 0;
g[0].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[825].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_0_5_3:
{
if (IsInt(g[0]) && IsPointer(g[5]) && IsInt(g[3])) {
uint8_t val = ((buffer *)(g[5].p))->data[g[3].i];
g[0].i = val;
ip++;
}
else if (IsPointer(g[0]) && IsPointer(g[5]) && IsInt(g[3])) {
uint8_t val = ((buffer *)(g[5].p))->data[g[3].i];
g[0].tag = 0;
g[0].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[826].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_0_5_4:
{
if (IsInt(g[0]) && IsPointer(g[5]) && IsInt(g[4])) {
uint8_t val = ((buffer *)(g[5].p))->data[g[4].i];
g[0].i = val;
ip++;
}
else if (IsPointer(g[0]) && IsPointer(g[5]) && IsInt(g[4])) {
uint8_t val = ((buffer *)(g[5].p))->data[g[4].i];
g[0].tag = 0;
g[0].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[827].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_1_0_1:
{
if (IsInt(g[1]) && IsPointer(g[0]) && IsInt(g[1])) {
uint8_t val = ((buffer *)(g[0].p))->data[g[1].i];
g[1].i = val;
ip++;
}
else if (IsPointer(g[1]) && IsPointer(g[0]) && IsInt(g[1])) {
uint8_t val = ((buffer *)(g[0].p))->data[g[1].i];
g[1].tag = 0;
g[1].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[828].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_1_0_2:
{
if (IsInt(g[1]) && IsPointer(g[0]) && IsInt(g[2])) {
uint8_t val = ((buffer *)(g[0].p))->data[g[2].i];
g[1].i = val;
ip++;
}
else if (IsPointer(g[1]) && IsPointer(g[0]) && IsInt(g[2])) {
uint8_t val = ((buffer *)(g[0].p))->data[g[2].i];
g[1].tag = 0;
g[1].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[829].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_1_0_3:
{
if (IsInt(g[1]) && IsPointer(g[0]) && IsInt(g[3])) {
uint8_t val = ((buffer *)(g[0].p))->data[g[3].i];
g[1].i = val;
ip++;
}
else if (IsPointer(g[1]) && IsPointer(g[0]) && IsInt(g[3])) {
uint8_t val = ((buffer *)(g[0].p))->data[g[3].i];
g[1].tag = 0;
g[1].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[830].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_1_0_4:
{
if (IsInt(g[1]) && IsPointer(g[0]) && IsInt(g[4])) {
uint8_t val = ((buffer *)(g[0].p))->data[g[4].i];
g[1].i = val;
ip++;
}
else if (IsPointer(g[1]) && IsPointer(g[0]) && IsInt(g[4])) {
uint8_t val = ((buffer *)(g[0].p))->data[g[4].i];
g[1].tag = 0;
g[1].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[831].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_1_0_5:
{
if (IsInt(g[1]) && IsPointer(g[0]) && IsInt(g[5])) {
uint8_t val = ((buffer *)(g[0].p))->data[g[5].i];
g[1].i = val;
ip++;
}
else if (IsPointer(g[1]) && IsPointer(g[0]) && IsInt(g[5])) {
uint8_t val = ((buffer *)(g[0].p))->data[g[5].i];
g[1].tag = 0;
g[1].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[832].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_1_1_0:
{
if (IsInt(g[1]) && IsPointer(g[1]) && IsInt(g[0])) {
uint8_t val = ((buffer *)(g[1].p))->data[g[0].i];
g[1].i = val;
ip++;
}
else if (IsPointer(g[1]) && IsPointer(g[1]) && IsInt(g[0])) {
uint8_t val = ((buffer *)(g[1].p))->data[g[0].i];
g[1].tag = 0;
g[1].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[833].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_1_1_2:
{
if (IsInt(g[1]) && IsPointer(g[1]) && IsInt(g[2])) {
uint8_t val = ((buffer *)(g[1].p))->data[g[2].i];
g[1].i = val;
ip++;
}
else if (IsPointer(g[1]) && IsPointer(g[1]) && IsInt(g[2])) {
uint8_t val = ((buffer *)(g[1].p))->data[g[2].i];
g[1].tag = 0;
g[1].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[834].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_1_1_3:
{
if (IsInt(g[1]) && IsPointer(g[1]) && IsInt(g[3])) {
uint8_t val = ((buffer *)(g[1].p))->data[g[3].i];
g[1].i = val;
ip++;
}
else if (IsPointer(g[1]) && IsPointer(g[1]) && IsInt(g[3])) {
uint8_t val = ((buffer *)(g[1].p))->data[g[3].i];
g[1].tag = 0;
g[1].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[835].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_1_1_4:
{
if (IsInt(g[1]) && IsPointer(g[1]) && IsInt(g[4])) {
uint8_t val = ((buffer *)(g[1].p))->data[g[4].i];
g[1].i = val;
ip++;
}
else if (IsPointer(g[1]) && IsPointer(g[1]) && IsInt(g[4])) {
uint8_t val = ((buffer *)(g[1].p))->data[g[4].i];
g[1].tag = 0;
g[1].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[836].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_1_1_5:
{
if (IsInt(g[1]) && IsPointer(g[1]) && IsInt(g[5])) {
uint8_t val = ((buffer *)(g[1].p))->data[g[5].i];
g[1].i = val;
ip++;
}
else if (IsPointer(g[1]) && IsPointer(g[1]) && IsInt(g[5])) {
uint8_t val = ((buffer *)(g[1].p))->data[g[5].i];
g[1].tag = 0;
g[1].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[837].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_1_2_0:
{
if (IsInt(g[1]) && IsPointer(g[2]) && IsInt(g[0])) {
uint8_t val = ((buffer *)(g[2].p))->data[g[0].i];
g[1].i = val;
ip++;
}
else if (IsPointer(g[1]) && IsPointer(g[2]) && IsInt(g[0])) {
uint8_t val = ((buffer *)(g[2].p))->data[g[0].i];
g[1].tag = 0;
g[1].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[838].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_1_2_1:
{
if (IsInt(g[1]) && IsPointer(g[2]) && IsInt(g[1])) {
uint8_t val = ((buffer *)(g[2].p))->data[g[1].i];
g[1].i = val;
ip++;
}
else if (IsPointer(g[1]) && IsPointer(g[2]) && IsInt(g[1])) {
uint8_t val = ((buffer *)(g[2].p))->data[g[1].i];
g[1].tag = 0;
g[1].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[839].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_1_2_3:
{
if (IsInt(g[1]) && IsPointer(g[2]) && IsInt(g[3])) {
uint8_t val = ((buffer *)(g[2].p))->data[g[3].i];
g[1].i = val;
ip++;
}
else if (IsPointer(g[1]) && IsPointer(g[2]) && IsInt(g[3])) {
uint8_t val = ((buffer *)(g[2].p))->data[g[3].i];
g[1].tag = 0;
g[1].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[840].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_1_2_4:
{
if (IsInt(g[1]) && IsPointer(g[2]) && IsInt(g[4])) {
uint8_t val = ((buffer *)(g[2].p))->data[g[4].i];
g[1].i = val;
ip++;
}
else if (IsPointer(g[1]) && IsPointer(g[2]) && IsInt(g[4])) {
uint8_t val = ((buffer *)(g[2].p))->data[g[4].i];
g[1].tag = 0;
g[1].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[841].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_1_2_5:
{
if (IsInt(g[1]) && IsPointer(g[2]) && IsInt(g[5])) {
uint8_t val = ((buffer *)(g[2].p))->data[g[5].i];
g[1].i = val;
ip++;
}
else if (IsPointer(g[1]) && IsPointer(g[2]) && IsInt(g[5])) {
uint8_t val = ((buffer *)(g[2].p))->data[g[5].i];
g[1].tag = 0;
g[1].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[842].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_1_3_0:
{
if (IsInt(g[1]) && IsPointer(g[3]) && IsInt(g[0])) {
uint8_t val = ((buffer *)(g[3].p))->data[g[0].i];
g[1].i = val;
ip++;
}
else if (IsPointer(g[1]) && IsPointer(g[3]) && IsInt(g[0])) {
uint8_t val = ((buffer *)(g[3].p))->data[g[0].i];
g[1].tag = 0;
g[1].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[843].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_1_3_1:
{
if (IsInt(g[1]) && IsPointer(g[3]) && IsInt(g[1])) {
uint8_t val = ((buffer *)(g[3].p))->data[g[1].i];
g[1].i = val;
ip++;
}
else if (IsPointer(g[1]) && IsPointer(g[3]) && IsInt(g[1])) {
uint8_t val = ((buffer *)(g[3].p))->data[g[1].i];
g[1].tag = 0;
g[1].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[844].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_1_3_2:
{
if (IsInt(g[1]) && IsPointer(g[3]) && IsInt(g[2])) {
uint8_t val = ((buffer *)(g[3].p))->data[g[2].i];
g[1].i = val;
ip++;
}
else if (IsPointer(g[1]) && IsPointer(g[3]) && IsInt(g[2])) {
uint8_t val = ((buffer *)(g[3].p))->data[g[2].i];
g[1].tag = 0;
g[1].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[845].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_1_3_4:
{
if (IsInt(g[1]) && IsPointer(g[3]) && IsInt(g[4])) {
uint8_t val = ((buffer *)(g[3].p))->data[g[4].i];
g[1].i = val;
ip++;
}
else if (IsPointer(g[1]) && IsPointer(g[3]) && IsInt(g[4])) {
uint8_t val = ((buffer *)(g[3].p))->data[g[4].i];
g[1].tag = 0;
g[1].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[846].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_1_3_5:
{
if (IsInt(g[1]) && IsPointer(g[3]) && IsInt(g[5])) {
uint8_t val = ((buffer *)(g[3].p))->data[g[5].i];
g[1].i = val;
ip++;
}
else if (IsPointer(g[1]) && IsPointer(g[3]) && IsInt(g[5])) {
uint8_t val = ((buffer *)(g[3].p))->data[g[5].i];
g[1].tag = 0;
g[1].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[847].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_1_4_0:
{
if (IsInt(g[1]) && IsPointer(g[4]) && IsInt(g[0])) {
uint8_t val = ((buffer *)(g[4].p))->data[g[0].i];
g[1].i = val;
ip++;
}
else if (IsPointer(g[1]) && IsPointer(g[4]) && IsInt(g[0])) {
uint8_t val = ((buffer *)(g[4].p))->data[g[0].i];
g[1].tag = 0;
g[1].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[848].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_1_4_1:
{
if (IsInt(g[1]) && IsPointer(g[4]) && IsInt(g[1])) {
uint8_t val = ((buffer *)(g[4].p))->data[g[1].i];
g[1].i = val;
ip++;
}
else if (IsPointer(g[1]) && IsPointer(g[4]) && IsInt(g[1])) {
uint8_t val = ((buffer *)(g[4].p))->data[g[1].i];
g[1].tag = 0;
g[1].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[849].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_1_4_2:
{
if (IsInt(g[1]) && IsPointer(g[4]) && IsInt(g[2])) {
uint8_t val = ((buffer *)(g[4].p))->data[g[2].i];
g[1].i = val;
ip++;
}
else if (IsPointer(g[1]) && IsPointer(g[4]) && IsInt(g[2])) {
uint8_t val = ((buffer *)(g[4].p))->data[g[2].i];
g[1].tag = 0;
g[1].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[850].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_1_4_3:
{
if (IsInt(g[1]) && IsPointer(g[4]) && IsInt(g[3])) {
uint8_t val = ((buffer *)(g[4].p))->data[g[3].i];
g[1].i = val;
ip++;
}
else if (IsPointer(g[1]) && IsPointer(g[4]) && IsInt(g[3])) {
uint8_t val = ((buffer *)(g[4].p))->data[g[3].i];
g[1].tag = 0;
g[1].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[851].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_1_4_5:
{
if (IsInt(g[1]) && IsPointer(g[4]) && IsInt(g[5])) {
uint8_t val = ((buffer *)(g[4].p))->data[g[5].i];
g[1].i = val;
ip++;
}
else if (IsPointer(g[1]) && IsPointer(g[4]) && IsInt(g[5])) {
uint8_t val = ((buffer *)(g[4].p))->data[g[5].i];
g[1].tag = 0;
g[1].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[852].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_1_5_0:
{
if (IsInt(g[1]) && IsPointer(g[5]) && IsInt(g[0])) {
uint8_t val = ((buffer *)(g[5].p))->data[g[0].i];
g[1].i = val;
ip++;
}
else if (IsPointer(g[1]) && IsPointer(g[5]) && IsInt(g[0])) {
uint8_t val = ((buffer *)(g[5].p))->data[g[0].i];
g[1].tag = 0;
g[1].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[853].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_1_5_1:
{
if (IsInt(g[1]) && IsPointer(g[5]) && IsInt(g[1])) {
uint8_t val = ((buffer *)(g[5].p))->data[g[1].i];
g[1].i = val;
ip++;
}
else if (IsPointer(g[1]) && IsPointer(g[5]) && IsInt(g[1])) {
uint8_t val = ((buffer *)(g[5].p))->data[g[1].i];
g[1].tag = 0;
g[1].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[854].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_1_5_2:
{
if (IsInt(g[1]) && IsPointer(g[5]) && IsInt(g[2])) {
uint8_t val = ((buffer *)(g[5].p))->data[g[2].i];
g[1].i = val;
ip++;
}
else if (IsPointer(g[1]) && IsPointer(g[5]) && IsInt(g[2])) {
uint8_t val = ((buffer *)(g[5].p))->data[g[2].i];
g[1].tag = 0;
g[1].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[855].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_1_5_3:
{
if (IsInt(g[1]) && IsPointer(g[5]) && IsInt(g[3])) {
uint8_t val = ((buffer *)(g[5].p))->data[g[3].i];
g[1].i = val;
ip++;
}
else if (IsPointer(g[1]) && IsPointer(g[5]) && IsInt(g[3])) {
uint8_t val = ((buffer *)(g[5].p))->data[g[3].i];
g[1].tag = 0;
g[1].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[856].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_1_5_4:
{
if (IsInt(g[1]) && IsPointer(g[5]) && IsInt(g[4])) {
uint8_t val = ((buffer *)(g[5].p))->data[g[4].i];
g[1].i = val;
ip++;
}
else if (IsPointer(g[1]) && IsPointer(g[5]) && IsInt(g[4])) {
uint8_t val = ((buffer *)(g[5].p))->data[g[4].i];
g[1].tag = 0;
g[1].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[857].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_2_0_1:
{
if (IsInt(g[2]) && IsPointer(g[0]) && IsInt(g[1])) {
uint8_t val = ((buffer *)(g[0].p))->data[g[1].i];
g[2].i = val;
ip++;
}
else if (IsPointer(g[2]) && IsPointer(g[0]) && IsInt(g[1])) {
uint8_t val = ((buffer *)(g[0].p))->data[g[1].i];
g[2].tag = 0;
g[2].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[858].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_2_0_2:
{
if (IsInt(g[2]) && IsPointer(g[0]) && IsInt(g[2])) {
uint8_t val = ((buffer *)(g[0].p))->data[g[2].i];
g[2].i = val;
ip++;
}
else if (IsPointer(g[2]) && IsPointer(g[0]) && IsInt(g[2])) {
uint8_t val = ((buffer *)(g[0].p))->data[g[2].i];
g[2].tag = 0;
g[2].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[859].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_2_0_3:
{
if (IsInt(g[2]) && IsPointer(g[0]) && IsInt(g[3])) {
uint8_t val = ((buffer *)(g[0].p))->data[g[3].i];
g[2].i = val;
ip++;
}
else if (IsPointer(g[2]) && IsPointer(g[0]) && IsInt(g[3])) {
uint8_t val = ((buffer *)(g[0].p))->data[g[3].i];
g[2].tag = 0;
g[2].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[860].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_2_0_4:
{
if (IsInt(g[2]) && IsPointer(g[0]) && IsInt(g[4])) {
uint8_t val = ((buffer *)(g[0].p))->data[g[4].i];
g[2].i = val;
ip++;
}
else if (IsPointer(g[2]) && IsPointer(g[0]) && IsInt(g[4])) {
uint8_t val = ((buffer *)(g[0].p))->data[g[4].i];
g[2].tag = 0;
g[2].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[861].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_2_0_5:
{
if (IsInt(g[2]) && IsPointer(g[0]) && IsInt(g[5])) {
uint8_t val = ((buffer *)(g[0].p))->data[g[5].i];
g[2].i = val;
ip++;
}
else if (IsPointer(g[2]) && IsPointer(g[0]) && IsInt(g[5])) {
uint8_t val = ((buffer *)(g[0].p))->data[g[5].i];
g[2].tag = 0;
g[2].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[862].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_2_1_0:
{
if (IsInt(g[2]) && IsPointer(g[1]) && IsInt(g[0])) {
uint8_t val = ((buffer *)(g[1].p))->data[g[0].i];
g[2].i = val;
ip++;
}
else if (IsPointer(g[2]) && IsPointer(g[1]) && IsInt(g[0])) {
uint8_t val = ((buffer *)(g[1].p))->data[g[0].i];
g[2].tag = 0;
g[2].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[863].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_2_1_2:
{
if (IsInt(g[2]) && IsPointer(g[1]) && IsInt(g[2])) {
uint8_t val = ((buffer *)(g[1].p))->data[g[2].i];
g[2].i = val;
ip++;
}
else if (IsPointer(g[2]) && IsPointer(g[1]) && IsInt(g[2])) {
uint8_t val = ((buffer *)(g[1].p))->data[g[2].i];
g[2].tag = 0;
g[2].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[864].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_2_1_3:
{
if (IsInt(g[2]) && IsPointer(g[1]) && IsInt(g[3])) {
uint8_t val = ((buffer *)(g[1].p))->data[g[3].i];
g[2].i = val;
ip++;
}
else if (IsPointer(g[2]) && IsPointer(g[1]) && IsInt(g[3])) {
uint8_t val = ((buffer *)(g[1].p))->data[g[3].i];
g[2].tag = 0;
g[2].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[865].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_2_1_4:
{
if (IsInt(g[2]) && IsPointer(g[1]) && IsInt(g[4])) {
uint8_t val = ((buffer *)(g[1].p))->data[g[4].i];
g[2].i = val;
ip++;
}
else if (IsPointer(g[2]) && IsPointer(g[1]) && IsInt(g[4])) {
uint8_t val = ((buffer *)(g[1].p))->data[g[4].i];
g[2].tag = 0;
g[2].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[866].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_2_1_5:
{
if (IsInt(g[2]) && IsPointer(g[1]) && IsInt(g[5])) {
uint8_t val = ((buffer *)(g[1].p))->data[g[5].i];
g[2].i = val;
ip++;
}
else if (IsPointer(g[2]) && IsPointer(g[1]) && IsInt(g[5])) {
uint8_t val = ((buffer *)(g[1].p))->data[g[5].i];
g[2].tag = 0;
g[2].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[867].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_2_2_0:
{
if (IsInt(g[2]) && IsPointer(g[2]) && IsInt(g[0])) {
uint8_t val = ((buffer *)(g[2].p))->data[g[0].i];
g[2].i = val;
ip++;
}
else if (IsPointer(g[2]) && IsPointer(g[2]) && IsInt(g[0])) {
uint8_t val = ((buffer *)(g[2].p))->data[g[0].i];
g[2].tag = 0;
g[2].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[868].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_2_2_1:
{
if (IsInt(g[2]) && IsPointer(g[2]) && IsInt(g[1])) {
uint8_t val = ((buffer *)(g[2].p))->data[g[1].i];
g[2].i = val;
ip++;
}
else if (IsPointer(g[2]) && IsPointer(g[2]) && IsInt(g[1])) {
uint8_t val = ((buffer *)(g[2].p))->data[g[1].i];
g[2].tag = 0;
g[2].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[869].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_2_2_3:
{
if (IsInt(g[2]) && IsPointer(g[2]) && IsInt(g[3])) {
uint8_t val = ((buffer *)(g[2].p))->data[g[3].i];
g[2].i = val;
ip++;
}
else if (IsPointer(g[2]) && IsPointer(g[2]) && IsInt(g[3])) {
uint8_t val = ((buffer *)(g[2].p))->data[g[3].i];
g[2].tag = 0;
g[2].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[870].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_2_2_4:
{
if (IsInt(g[2]) && IsPointer(g[2]) && IsInt(g[4])) {
uint8_t val = ((buffer *)(g[2].p))->data[g[4].i];
g[2].i = val;
ip++;
}
else if (IsPointer(g[2]) && IsPointer(g[2]) && IsInt(g[4])) {
uint8_t val = ((buffer *)(g[2].p))->data[g[4].i];
g[2].tag = 0;
g[2].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[871].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_2_2_5:
{
if (IsInt(g[2]) && IsPointer(g[2]) && IsInt(g[5])) {
uint8_t val = ((buffer *)(g[2].p))->data[g[5].i];
g[2].i = val;
ip++;
}
else if (IsPointer(g[2]) && IsPointer(g[2]) && IsInt(g[5])) {
uint8_t val = ((buffer *)(g[2].p))->data[g[5].i];
g[2].tag = 0;
g[2].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[872].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_2_3_0:
{
if (IsInt(g[2]) && IsPointer(g[3]) && IsInt(g[0])) {
uint8_t val = ((buffer *)(g[3].p))->data[g[0].i];
g[2].i = val;
ip++;
}
else if (IsPointer(g[2]) && IsPointer(g[3]) && IsInt(g[0])) {
uint8_t val = ((buffer *)(g[3].p))->data[g[0].i];
g[2].tag = 0;
g[2].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[873].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_2_3_1:
{
if (IsInt(g[2]) && IsPointer(g[3]) && IsInt(g[1])) {
uint8_t val = ((buffer *)(g[3].p))->data[g[1].i];
g[2].i = val;
ip++;
}
else if (IsPointer(g[2]) && IsPointer(g[3]) && IsInt(g[1])) {
uint8_t val = ((buffer *)(g[3].p))->data[g[1].i];
g[2].tag = 0;
g[2].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[874].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_2_3_2:
{
if (IsInt(g[2]) && IsPointer(g[3]) && IsInt(g[2])) {
uint8_t val = ((buffer *)(g[3].p))->data[g[2].i];
g[2].i = val;
ip++;
}
else if (IsPointer(g[2]) && IsPointer(g[3]) && IsInt(g[2])) {
uint8_t val = ((buffer *)(g[3].p))->data[g[2].i];
g[2].tag = 0;
g[2].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[875].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_2_3_4:
{
if (IsInt(g[2]) && IsPointer(g[3]) && IsInt(g[4])) {
uint8_t val = ((buffer *)(g[3].p))->data[g[4].i];
g[2].i = val;
ip++;
}
else if (IsPointer(g[2]) && IsPointer(g[3]) && IsInt(g[4])) {
uint8_t val = ((buffer *)(g[3].p))->data[g[4].i];
g[2].tag = 0;
g[2].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[876].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_2_3_5:
{
if (IsInt(g[2]) && IsPointer(g[3]) && IsInt(g[5])) {
uint8_t val = ((buffer *)(g[3].p))->data[g[5].i];
g[2].i = val;
ip++;
}
else if (IsPointer(g[2]) && IsPointer(g[3]) && IsInt(g[5])) {
uint8_t val = ((buffer *)(g[3].p))->data[g[5].i];
g[2].tag = 0;
g[2].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[877].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_2_4_0:
{
if (IsInt(g[2]) && IsPointer(g[4]) && IsInt(g[0])) {
uint8_t val = ((buffer *)(g[4].p))->data[g[0].i];
g[2].i = val;
ip++;
}
else if (IsPointer(g[2]) && IsPointer(g[4]) && IsInt(g[0])) {
uint8_t val = ((buffer *)(g[4].p))->data[g[0].i];
g[2].tag = 0;
g[2].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[878].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_2_4_1:
{
if (IsInt(g[2]) && IsPointer(g[4]) && IsInt(g[1])) {
uint8_t val = ((buffer *)(g[4].p))->data[g[1].i];
g[2].i = val;
ip++;
}
else if (IsPointer(g[2]) && IsPointer(g[4]) && IsInt(g[1])) {
uint8_t val = ((buffer *)(g[4].p))->data[g[1].i];
g[2].tag = 0;
g[2].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[879].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_2_4_2:
{
if (IsInt(g[2]) && IsPointer(g[4]) && IsInt(g[2])) {
uint8_t val = ((buffer *)(g[4].p))->data[g[2].i];
g[2].i = val;
ip++;
}
else if (IsPointer(g[2]) && IsPointer(g[4]) && IsInt(g[2])) {
uint8_t val = ((buffer *)(g[4].p))->data[g[2].i];
g[2].tag = 0;
g[2].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[880].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_2_4_3:
{
if (IsInt(g[2]) && IsPointer(g[4]) && IsInt(g[3])) {
uint8_t val = ((buffer *)(g[4].p))->data[g[3].i];
g[2].i = val;
ip++;
}
else if (IsPointer(g[2]) && IsPointer(g[4]) && IsInt(g[3])) {
uint8_t val = ((buffer *)(g[4].p))->data[g[3].i];
g[2].tag = 0;
g[2].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[881].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_2_4_5:
{
if (IsInt(g[2]) && IsPointer(g[4]) && IsInt(g[5])) {
uint8_t val = ((buffer *)(g[4].p))->data[g[5].i];
g[2].i = val;
ip++;
}
else if (IsPointer(g[2]) && IsPointer(g[4]) && IsInt(g[5])) {
uint8_t val = ((buffer *)(g[4].p))->data[g[5].i];
g[2].tag = 0;
g[2].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[882].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_2_5_0:
{
if (IsInt(g[2]) && IsPointer(g[5]) && IsInt(g[0])) {
uint8_t val = ((buffer *)(g[5].p))->data[g[0].i];
g[2].i = val;
ip++;
}
else if (IsPointer(g[2]) && IsPointer(g[5]) && IsInt(g[0])) {
uint8_t val = ((buffer *)(g[5].p))->data[g[0].i];
g[2].tag = 0;
g[2].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[883].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_2_5_1:
{
if (IsInt(g[2]) && IsPointer(g[5]) && IsInt(g[1])) {
uint8_t val = ((buffer *)(g[5].p))->data[g[1].i];
g[2].i = val;
ip++;
}
else if (IsPointer(g[2]) && IsPointer(g[5]) && IsInt(g[1])) {
uint8_t val = ((buffer *)(g[5].p))->data[g[1].i];
g[2].tag = 0;
g[2].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[884].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_2_5_2:
{
if (IsInt(g[2]) && IsPointer(g[5]) && IsInt(g[2])) {
uint8_t val = ((buffer *)(g[5].p))->data[g[2].i];
g[2].i = val;
ip++;
}
else if (IsPointer(g[2]) && IsPointer(g[5]) && IsInt(g[2])) {
uint8_t val = ((buffer *)(g[5].p))->data[g[2].i];
g[2].tag = 0;
g[2].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[885].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_2_5_3:
{
if (IsInt(g[2]) && IsPointer(g[5]) && IsInt(g[3])) {
uint8_t val = ((buffer *)(g[5].p))->data[g[3].i];
g[2].i = val;
ip++;
}
else if (IsPointer(g[2]) && IsPointer(g[5]) && IsInt(g[3])) {
uint8_t val = ((buffer *)(g[5].p))->data[g[3].i];
g[2].tag = 0;
g[2].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[886].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_2_5_4:
{
if (IsInt(g[2]) && IsPointer(g[5]) && IsInt(g[4])) {
uint8_t val = ((buffer *)(g[5].p))->data[g[4].i];
g[2].i = val;
ip++;
}
else if (IsPointer(g[2]) && IsPointer(g[5]) && IsInt(g[4])) {
uint8_t val = ((buffer *)(g[5].p))->data[g[4].i];
g[2].tag = 0;
g[2].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[887].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_3_0_1:
{
if (IsInt(g[3]) && IsPointer(g[0]) && IsInt(g[1])) {
uint8_t val = ((buffer *)(g[0].p))->data[g[1].i];
g[3].i = val;
ip++;
}
else if (IsPointer(g[3]) && IsPointer(g[0]) && IsInt(g[1])) {
uint8_t val = ((buffer *)(g[0].p))->data[g[1].i];
g[3].tag = 0;
g[3].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[888].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_3_0_2:
{
if (IsInt(g[3]) && IsPointer(g[0]) && IsInt(g[2])) {
uint8_t val = ((buffer *)(g[0].p))->data[g[2].i];
g[3].i = val;
ip++;
}
else if (IsPointer(g[3]) && IsPointer(g[0]) && IsInt(g[2])) {
uint8_t val = ((buffer *)(g[0].p))->data[g[2].i];
g[3].tag = 0;
g[3].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[889].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_3_0_3:
{
if (IsInt(g[3]) && IsPointer(g[0]) && IsInt(g[3])) {
uint8_t val = ((buffer *)(g[0].p))->data[g[3].i];
g[3].i = val;
ip++;
}
else if (IsPointer(g[3]) && IsPointer(g[0]) && IsInt(g[3])) {
uint8_t val = ((buffer *)(g[0].p))->data[g[3].i];
g[3].tag = 0;
g[3].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[890].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_3_0_4:
{
if (IsInt(g[3]) && IsPointer(g[0]) && IsInt(g[4])) {
uint8_t val = ((buffer *)(g[0].p))->data[g[4].i];
g[3].i = val;
ip++;
}
else if (IsPointer(g[3]) && IsPointer(g[0]) && IsInt(g[4])) {
uint8_t val = ((buffer *)(g[0].p))->data[g[4].i];
g[3].tag = 0;
g[3].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[891].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_3_0_5:
{
if (IsInt(g[3]) && IsPointer(g[0]) && IsInt(g[5])) {
uint8_t val = ((buffer *)(g[0].p))->data[g[5].i];
g[3].i = val;
ip++;
}
else if (IsPointer(g[3]) && IsPointer(g[0]) && IsInt(g[5])) {
uint8_t val = ((buffer *)(g[0].p))->data[g[5].i];
g[3].tag = 0;
g[3].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[892].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_3_1_0:
{
if (IsInt(g[3]) && IsPointer(g[1]) && IsInt(g[0])) {
uint8_t val = ((buffer *)(g[1].p))->data[g[0].i];
g[3].i = val;
ip++;
}
else if (IsPointer(g[3]) && IsPointer(g[1]) && IsInt(g[0])) {
uint8_t val = ((buffer *)(g[1].p))->data[g[0].i];
g[3].tag = 0;
g[3].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[893].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_3_1_2:
{
if (IsInt(g[3]) && IsPointer(g[1]) && IsInt(g[2])) {
uint8_t val = ((buffer *)(g[1].p))->data[g[2].i];
g[3].i = val;
ip++;
}
else if (IsPointer(g[3]) && IsPointer(g[1]) && IsInt(g[2])) {
uint8_t val = ((buffer *)(g[1].p))->data[g[2].i];
g[3].tag = 0;
g[3].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[894].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_3_1_3:
{
if (IsInt(g[3]) && IsPointer(g[1]) && IsInt(g[3])) {
uint8_t val = ((buffer *)(g[1].p))->data[g[3].i];
g[3].i = val;
ip++;
}
else if (IsPointer(g[3]) && IsPointer(g[1]) && IsInt(g[3])) {
uint8_t val = ((buffer *)(g[1].p))->data[g[3].i];
g[3].tag = 0;
g[3].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[895].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_3_1_4:
{
if (IsInt(g[3]) && IsPointer(g[1]) && IsInt(g[4])) {
uint8_t val = ((buffer *)(g[1].p))->data[g[4].i];
g[3].i = val;
ip++;
}
else if (IsPointer(g[3]) && IsPointer(g[1]) && IsInt(g[4])) {
uint8_t val = ((buffer *)(g[1].p))->data[g[4].i];
g[3].tag = 0;
g[3].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[896].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_3_1_5:
{
if (IsInt(g[3]) && IsPointer(g[1]) && IsInt(g[5])) {
uint8_t val = ((buffer *)(g[1].p))->data[g[5].i];
g[3].i = val;
ip++;
}
else if (IsPointer(g[3]) && IsPointer(g[1]) && IsInt(g[5])) {
uint8_t val = ((buffer *)(g[1].p))->data[g[5].i];
g[3].tag = 0;
g[3].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[897].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_3_2_0:
{
if (IsInt(g[3]) && IsPointer(g[2]) && IsInt(g[0])) {
uint8_t val = ((buffer *)(g[2].p))->data[g[0].i];
g[3].i = val;
ip++;
}
else if (IsPointer(g[3]) && IsPointer(g[2]) && IsInt(g[0])) {
uint8_t val = ((buffer *)(g[2].p))->data[g[0].i];
g[3].tag = 0;
g[3].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[898].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_3_2_1:
{
if (IsInt(g[3]) && IsPointer(g[2]) && IsInt(g[1])) {
uint8_t val = ((buffer *)(g[2].p))->data[g[1].i];
g[3].i = val;
ip++;
}
else if (IsPointer(g[3]) && IsPointer(g[2]) && IsInt(g[1])) {
uint8_t val = ((buffer *)(g[2].p))->data[g[1].i];
g[3].tag = 0;
g[3].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[899].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_3_2_3:
{
if (IsInt(g[3]) && IsPointer(g[2]) && IsInt(g[3])) {
uint8_t val = ((buffer *)(g[2].p))->data[g[3].i];
g[3].i = val;
ip++;
}
else if (IsPointer(g[3]) && IsPointer(g[2]) && IsInt(g[3])) {
uint8_t val = ((buffer *)(g[2].p))->data[g[3].i];
g[3].tag = 0;
g[3].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[900].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_3_2_4:
{
if (IsInt(g[3]) && IsPointer(g[2]) && IsInt(g[4])) {
uint8_t val = ((buffer *)(g[2].p))->data[g[4].i];
g[3].i = val;
ip++;
}
else if (IsPointer(g[3]) && IsPointer(g[2]) && IsInt(g[4])) {
uint8_t val = ((buffer *)(g[2].p))->data[g[4].i];
g[3].tag = 0;
g[3].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[901].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_3_2_5:
{
if (IsInt(g[3]) && IsPointer(g[2]) && IsInt(g[5])) {
uint8_t val = ((buffer *)(g[2].p))->data[g[5].i];
g[3].i = val;
ip++;
}
else if (IsPointer(g[3]) && IsPointer(g[2]) && IsInt(g[5])) {
uint8_t val = ((buffer *)(g[2].p))->data[g[5].i];
g[3].tag = 0;
g[3].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[902].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_3_3_0:
{
if (IsInt(g[3]) && IsPointer(g[3]) && IsInt(g[0])) {
uint8_t val = ((buffer *)(g[3].p))->data[g[0].i];
g[3].i = val;
ip++;
}
else if (IsPointer(g[3]) && IsPointer(g[3]) && IsInt(g[0])) {
uint8_t val = ((buffer *)(g[3].p))->data[g[0].i];
g[3].tag = 0;
g[3].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[903].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_3_3_1:
{
if (IsInt(g[3]) && IsPointer(g[3]) && IsInt(g[1])) {
uint8_t val = ((buffer *)(g[3].p))->data[g[1].i];
g[3].i = val;
ip++;
}
else if (IsPointer(g[3]) && IsPointer(g[3]) && IsInt(g[1])) {
uint8_t val = ((buffer *)(g[3].p))->data[g[1].i];
g[3].tag = 0;
g[3].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[904].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_3_3_2:
{
if (IsInt(g[3]) && IsPointer(g[3]) && IsInt(g[2])) {
uint8_t val = ((buffer *)(g[3].p))->data[g[2].i];
g[3].i = val;
ip++;
}
else if (IsPointer(g[3]) && IsPointer(g[3]) && IsInt(g[2])) {
uint8_t val = ((buffer *)(g[3].p))->data[g[2].i];
g[3].tag = 0;
g[3].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[905].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_3_3_4:
{
if (IsInt(g[3]) && IsPointer(g[3]) && IsInt(g[4])) {
uint8_t val = ((buffer *)(g[3].p))->data[g[4].i];
g[3].i = val;
ip++;
}
else if (IsPointer(g[3]) && IsPointer(g[3]) && IsInt(g[4])) {
uint8_t val = ((buffer *)(g[3].p))->data[g[4].i];
g[3].tag = 0;
g[3].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[906].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_3_3_5:
{
if (IsInt(g[3]) && IsPointer(g[3]) && IsInt(g[5])) {
uint8_t val = ((buffer *)(g[3].p))->data[g[5].i];
g[3].i = val;
ip++;
}
else if (IsPointer(g[3]) && IsPointer(g[3]) && IsInt(g[5])) {
uint8_t val = ((buffer *)(g[3].p))->data[g[5].i];
g[3].tag = 0;
g[3].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[907].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_3_4_0:
{
if (IsInt(g[3]) && IsPointer(g[4]) && IsInt(g[0])) {
uint8_t val = ((buffer *)(g[4].p))->data[g[0].i];
g[3].i = val;
ip++;
}
else if (IsPointer(g[3]) && IsPointer(g[4]) && IsInt(g[0])) {
uint8_t val = ((buffer *)(g[4].p))->data[g[0].i];
g[3].tag = 0;
g[3].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[908].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_3_4_1:
{
if (IsInt(g[3]) && IsPointer(g[4]) && IsInt(g[1])) {
uint8_t val = ((buffer *)(g[4].p))->data[g[1].i];
g[3].i = val;
ip++;
}
else if (IsPointer(g[3]) && IsPointer(g[4]) && IsInt(g[1])) {
uint8_t val = ((buffer *)(g[4].p))->data[g[1].i];
g[3].tag = 0;
g[3].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[909].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_3_4_2:
{
if (IsInt(g[3]) && IsPointer(g[4]) && IsInt(g[2])) {
uint8_t val = ((buffer *)(g[4].p))->data[g[2].i];
g[3].i = val;
ip++;
}
else if (IsPointer(g[3]) && IsPointer(g[4]) && IsInt(g[2])) {
uint8_t val = ((buffer *)(g[4].p))->data[g[2].i];
g[3].tag = 0;
g[3].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[910].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_3_4_3:
{
if (IsInt(g[3]) && IsPointer(g[4]) && IsInt(g[3])) {
uint8_t val = ((buffer *)(g[4].p))->data[g[3].i];
g[3].i = val;
ip++;
}
else if (IsPointer(g[3]) && IsPointer(g[4]) && IsInt(g[3])) {
uint8_t val = ((buffer *)(g[4].p))->data[g[3].i];
g[3].tag = 0;
g[3].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[911].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_3_4_5:
{
if (IsInt(g[3]) && IsPointer(g[4]) && IsInt(g[5])) {
uint8_t val = ((buffer *)(g[4].p))->data[g[5].i];
g[3].i = val;
ip++;
}
else if (IsPointer(g[3]) && IsPointer(g[4]) && IsInt(g[5])) {
uint8_t val = ((buffer *)(g[4].p))->data[g[5].i];
g[3].tag = 0;
g[3].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[912].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_3_5_0:
{
if (IsInt(g[3]) && IsPointer(g[5]) && IsInt(g[0])) {
uint8_t val = ((buffer *)(g[5].p))->data[g[0].i];
g[3].i = val;
ip++;
}
else if (IsPointer(g[3]) && IsPointer(g[5]) && IsInt(g[0])) {
uint8_t val = ((buffer *)(g[5].p))->data[g[0].i];
g[3].tag = 0;
g[3].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[913].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_3_5_1:
{
if (IsInt(g[3]) && IsPointer(g[5]) && IsInt(g[1])) {
uint8_t val = ((buffer *)(g[5].p))->data[g[1].i];
g[3].i = val;
ip++;
}
else if (IsPointer(g[3]) && IsPointer(g[5]) && IsInt(g[1])) {
uint8_t val = ((buffer *)(g[5].p))->data[g[1].i];
g[3].tag = 0;
g[3].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[914].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_3_5_2:
{
if (IsInt(g[3]) && IsPointer(g[5]) && IsInt(g[2])) {
uint8_t val = ((buffer *)(g[5].p))->data[g[2].i];
g[3].i = val;
ip++;
}
else if (IsPointer(g[3]) && IsPointer(g[5]) && IsInt(g[2])) {
uint8_t val = ((buffer *)(g[5].p))->data[g[2].i];
g[3].tag = 0;
g[3].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[915].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_3_5_3:
{
if (IsInt(g[3]) && IsPointer(g[5]) && IsInt(g[3])) {
uint8_t val = ((buffer *)(g[5].p))->data[g[3].i];
g[3].i = val;
ip++;
}
else if (IsPointer(g[3]) && IsPointer(g[5]) && IsInt(g[3])) {
uint8_t val = ((buffer *)(g[5].p))->data[g[3].i];
g[3].tag = 0;
g[3].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[916].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_3_5_4:
{
if (IsInt(g[3]) && IsPointer(g[5]) && IsInt(g[4])) {
uint8_t val = ((buffer *)(g[5].p))->data[g[4].i];
g[3].i = val;
ip++;
}
else if (IsPointer(g[3]) && IsPointer(g[5]) && IsInt(g[4])) {
uint8_t val = ((buffer *)(g[5].p))->data[g[4].i];
g[3].tag = 0;
g[3].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[917].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_4_0_1:
{
if (IsInt(g[4]) && IsPointer(g[0]) && IsInt(g[1])) {
uint8_t val = ((buffer *)(g[0].p))->data[g[1].i];
g[4].i = val;
ip++;
}
else if (IsPointer(g[4]) && IsPointer(g[0]) && IsInt(g[1])) {
uint8_t val = ((buffer *)(g[0].p))->data[g[1].i];
g[4].tag = 0;
g[4].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[918].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_4_0_2:
{
if (IsInt(g[4]) && IsPointer(g[0]) && IsInt(g[2])) {
uint8_t val = ((buffer *)(g[0].p))->data[g[2].i];
g[4].i = val;
ip++;
}
else if (IsPointer(g[4]) && IsPointer(g[0]) && IsInt(g[2])) {
uint8_t val = ((buffer *)(g[0].p))->data[g[2].i];
g[4].tag = 0;
g[4].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[919].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_4_0_3:
{
if (IsInt(g[4]) && IsPointer(g[0]) && IsInt(g[3])) {
uint8_t val = ((buffer *)(g[0].p))->data[g[3].i];
g[4].i = val;
ip++;
}
else if (IsPointer(g[4]) && IsPointer(g[0]) && IsInt(g[3])) {
uint8_t val = ((buffer *)(g[0].p))->data[g[3].i];
g[4].tag = 0;
g[4].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[920].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_4_0_4:
{
if (IsInt(g[4]) && IsPointer(g[0]) && IsInt(g[4])) {
uint8_t val = ((buffer *)(g[0].p))->data[g[4].i];
g[4].i = val;
ip++;
}
else if (IsPointer(g[4]) && IsPointer(g[0]) && IsInt(g[4])) {
uint8_t val = ((buffer *)(g[0].p))->data[g[4].i];
g[4].tag = 0;
g[4].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[921].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_4_0_5:
{
if (IsInt(g[4]) && IsPointer(g[0]) && IsInt(g[5])) {
uint8_t val = ((buffer *)(g[0].p))->data[g[5].i];
g[4].i = val;
ip++;
}
else if (IsPointer(g[4]) && IsPointer(g[0]) && IsInt(g[5])) {
uint8_t val = ((buffer *)(g[0].p))->data[g[5].i];
g[4].tag = 0;
g[4].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[922].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_4_1_0:
{
if (IsInt(g[4]) && IsPointer(g[1]) && IsInt(g[0])) {
uint8_t val = ((buffer *)(g[1].p))->data[g[0].i];
g[4].i = val;
ip++;
}
else if (IsPointer(g[4]) && IsPointer(g[1]) && IsInt(g[0])) {
uint8_t val = ((buffer *)(g[1].p))->data[g[0].i];
g[4].tag = 0;
g[4].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[923].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_4_1_2:
{
if (IsInt(g[4]) && IsPointer(g[1]) && IsInt(g[2])) {
uint8_t val = ((buffer *)(g[1].p))->data[g[2].i];
g[4].i = val;
ip++;
}
else if (IsPointer(g[4]) && IsPointer(g[1]) && IsInt(g[2])) {
uint8_t val = ((buffer *)(g[1].p))->data[g[2].i];
g[4].tag = 0;
g[4].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[924].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_4_1_3:
{
if (IsInt(g[4]) && IsPointer(g[1]) && IsInt(g[3])) {
uint8_t val = ((buffer *)(g[1].p))->data[g[3].i];
g[4].i = val;
ip++;
}
else if (IsPointer(g[4]) && IsPointer(g[1]) && IsInt(g[3])) {
uint8_t val = ((buffer *)(g[1].p))->data[g[3].i];
g[4].tag = 0;
g[4].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[925].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_4_1_4:
{
if (IsInt(g[4]) && IsPointer(g[1]) && IsInt(g[4])) {
uint8_t val = ((buffer *)(g[1].p))->data[g[4].i];
g[4].i = val;
ip++;
}
else if (IsPointer(g[4]) && IsPointer(g[1]) && IsInt(g[4])) {
uint8_t val = ((buffer *)(g[1].p))->data[g[4].i];
g[4].tag = 0;
g[4].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[926].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_4_1_5:
{
if (IsInt(g[4]) && IsPointer(g[1]) && IsInt(g[5])) {
uint8_t val = ((buffer *)(g[1].p))->data[g[5].i];
g[4].i = val;
ip++;
}
else if (IsPointer(g[4]) && IsPointer(g[1]) && IsInt(g[5])) {
uint8_t val = ((buffer *)(g[1].p))->data[g[5].i];
g[4].tag = 0;
g[4].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[927].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_4_2_0:
{
if (IsInt(g[4]) && IsPointer(g[2]) && IsInt(g[0])) {
uint8_t val = ((buffer *)(g[2].p))->data[g[0].i];
g[4].i = val;
ip++;
}
else if (IsPointer(g[4]) && IsPointer(g[2]) && IsInt(g[0])) {
uint8_t val = ((buffer *)(g[2].p))->data[g[0].i];
g[4].tag = 0;
g[4].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[928].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_4_2_1:
{
if (IsInt(g[4]) && IsPointer(g[2]) && IsInt(g[1])) {
uint8_t val = ((buffer *)(g[2].p))->data[g[1].i];
g[4].i = val;
ip++;
}
else if (IsPointer(g[4]) && IsPointer(g[2]) && IsInt(g[1])) {
uint8_t val = ((buffer *)(g[2].p))->data[g[1].i];
g[4].tag = 0;
g[4].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[929].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_4_2_3:
{
if (IsInt(g[4]) && IsPointer(g[2]) && IsInt(g[3])) {
uint8_t val = ((buffer *)(g[2].p))->data[g[3].i];
g[4].i = val;
ip++;
}
else if (IsPointer(g[4]) && IsPointer(g[2]) && IsInt(g[3])) {
uint8_t val = ((buffer *)(g[2].p))->data[g[3].i];
g[4].tag = 0;
g[4].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[930].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_4_2_4:
{
if (IsInt(g[4]) && IsPointer(g[2]) && IsInt(g[4])) {
uint8_t val = ((buffer *)(g[2].p))->data[g[4].i];
g[4].i = val;
ip++;
}
else if (IsPointer(g[4]) && IsPointer(g[2]) && IsInt(g[4])) {
uint8_t val = ((buffer *)(g[2].p))->data[g[4].i];
g[4].tag = 0;
g[4].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[931].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_4_2_5:
{
if (IsInt(g[4]) && IsPointer(g[2]) && IsInt(g[5])) {
uint8_t val = ((buffer *)(g[2].p))->data[g[5].i];
g[4].i = val;
ip++;
}
else if (IsPointer(g[4]) && IsPointer(g[2]) && IsInt(g[5])) {
uint8_t val = ((buffer *)(g[2].p))->data[g[5].i];
g[4].tag = 0;
g[4].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[932].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_4_3_0:
{
if (IsInt(g[4]) && IsPointer(g[3]) && IsInt(g[0])) {
uint8_t val = ((buffer *)(g[3].p))->data[g[0].i];
g[4].i = val;
ip++;
}
else if (IsPointer(g[4]) && IsPointer(g[3]) && IsInt(g[0])) {
uint8_t val = ((buffer *)(g[3].p))->data[g[0].i];
g[4].tag = 0;
g[4].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[933].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_4_3_1:
{
if (IsInt(g[4]) && IsPointer(g[3]) && IsInt(g[1])) {
uint8_t val = ((buffer *)(g[3].p))->data[g[1].i];
g[4].i = val;
ip++;
}
else if (IsPointer(g[4]) && IsPointer(g[3]) && IsInt(g[1])) {
uint8_t val = ((buffer *)(g[3].p))->data[g[1].i];
g[4].tag = 0;
g[4].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[934].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_4_3_2:
{
if (IsInt(g[4]) && IsPointer(g[3]) && IsInt(g[2])) {
uint8_t val = ((buffer *)(g[3].p))->data[g[2].i];
g[4].i = val;
ip++;
}
else if (IsPointer(g[4]) && IsPointer(g[3]) && IsInt(g[2])) {
uint8_t val = ((buffer *)(g[3].p))->data[g[2].i];
g[4].tag = 0;
g[4].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[935].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_4_3_4:
{
if (IsInt(g[4]) && IsPointer(g[3]) && IsInt(g[4])) {
uint8_t val = ((buffer *)(g[3].p))->data[g[4].i];
g[4].i = val;
ip++;
}
else if (IsPointer(g[4]) && IsPointer(g[3]) && IsInt(g[4])) {
uint8_t val = ((buffer *)(g[3].p))->data[g[4].i];
g[4].tag = 0;
g[4].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[936].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_4_3_5:
{
if (IsInt(g[4]) && IsPointer(g[3]) && IsInt(g[5])) {
uint8_t val = ((buffer *)(g[3].p))->data[g[5].i];
g[4].i = val;
ip++;
}
else if (IsPointer(g[4]) && IsPointer(g[3]) && IsInt(g[5])) {
uint8_t val = ((buffer *)(g[3].p))->data[g[5].i];
g[4].tag = 0;
g[4].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[937].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_4_4_0:
{
if (IsInt(g[4]) && IsPointer(g[4]) && IsInt(g[0])) {
uint8_t val = ((buffer *)(g[4].p))->data[g[0].i];
g[4].i = val;
ip++;
}
else if (IsPointer(g[4]) && IsPointer(g[4]) && IsInt(g[0])) {
uint8_t val = ((buffer *)(g[4].p))->data[g[0].i];
g[4].tag = 0;
g[4].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[938].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_4_4_1:
{
if (IsInt(g[4]) && IsPointer(g[4]) && IsInt(g[1])) {
uint8_t val = ((buffer *)(g[4].p))->data[g[1].i];
g[4].i = val;
ip++;
}
else if (IsPointer(g[4]) && IsPointer(g[4]) && IsInt(g[1])) {
uint8_t val = ((buffer *)(g[4].p))->data[g[1].i];
g[4].tag = 0;
g[4].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[939].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_4_4_2:
{
if (IsInt(g[4]) && IsPointer(g[4]) && IsInt(g[2])) {
uint8_t val = ((buffer *)(g[4].p))->data[g[2].i];
g[4].i = val;
ip++;
}
else if (IsPointer(g[4]) && IsPointer(g[4]) && IsInt(g[2])) {
uint8_t val = ((buffer *)(g[4].p))->data[g[2].i];
g[4].tag = 0;
g[4].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[940].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_4_4_3:
{
if (IsInt(g[4]) && IsPointer(g[4]) && IsInt(g[3])) {
uint8_t val = ((buffer *)(g[4].p))->data[g[3].i];
g[4].i = val;
ip++;
}
else if (IsPointer(g[4]) && IsPointer(g[4]) && IsInt(g[3])) {
uint8_t val = ((buffer *)(g[4].p))->data[g[3].i];
g[4].tag = 0;
g[4].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[941].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_4_4_5:
{
if (IsInt(g[4]) && IsPointer(g[4]) && IsInt(g[5])) {
uint8_t val = ((buffer *)(g[4].p))->data[g[5].i];
g[4].i = val;
ip++;
}
else if (IsPointer(g[4]) && IsPointer(g[4]) && IsInt(g[5])) {
uint8_t val = ((buffer *)(g[4].p))->data[g[5].i];
g[4].tag = 0;
g[4].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[942].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_4_5_0:
{
if (IsInt(g[4]) && IsPointer(g[5]) && IsInt(g[0])) {
uint8_t val = ((buffer *)(g[5].p))->data[g[0].i];
g[4].i = val;
ip++;
}
else if (IsPointer(g[4]) && IsPointer(g[5]) && IsInt(g[0])) {
uint8_t val = ((buffer *)(g[5].p))->data[g[0].i];
g[4].tag = 0;
g[4].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[943].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_4_5_1:
{
if (IsInt(g[4]) && IsPointer(g[5]) && IsInt(g[1])) {
uint8_t val = ((buffer *)(g[5].p))->data[g[1].i];
g[4].i = val;
ip++;
}
else if (IsPointer(g[4]) && IsPointer(g[5]) && IsInt(g[1])) {
uint8_t val = ((buffer *)(g[5].p))->data[g[1].i];
g[4].tag = 0;
g[4].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[944].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_4_5_2:
{
if (IsInt(g[4]) && IsPointer(g[5]) && IsInt(g[2])) {
uint8_t val = ((buffer *)(g[5].p))->data[g[2].i];
g[4].i = val;
ip++;
}
else if (IsPointer(g[4]) && IsPointer(g[5]) && IsInt(g[2])) {
uint8_t val = ((buffer *)(g[5].p))->data[g[2].i];
g[4].tag = 0;
g[4].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[945].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_4_5_3:
{
if (IsInt(g[4]) && IsPointer(g[5]) && IsInt(g[3])) {
uint8_t val = ((buffer *)(g[5].p))->data[g[3].i];
g[4].i = val;
ip++;
}
else if (IsPointer(g[4]) && IsPointer(g[5]) && IsInt(g[3])) {
uint8_t val = ((buffer *)(g[5].p))->data[g[3].i];
g[4].tag = 0;
g[4].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[946].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_4_5_4:
{
if (IsInt(g[4]) && IsPointer(g[5]) && IsInt(g[4])) {
uint8_t val = ((buffer *)(g[5].p))->data[g[4].i];
g[4].i = val;
ip++;
}
else if (IsPointer(g[4]) && IsPointer(g[5]) && IsInt(g[4])) {
uint8_t val = ((buffer *)(g[5].p))->data[g[4].i];
g[4].tag = 0;
g[4].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[947].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_5_0_1:
{
if (IsInt(g[5]) && IsPointer(g[0]) && IsInt(g[1])) {
uint8_t val = ((buffer *)(g[0].p))->data[g[1].i];
g[5].i = val;
ip++;
}
else if (IsPointer(g[5]) && IsPointer(g[0]) && IsInt(g[1])) {
uint8_t val = ((buffer *)(g[0].p))->data[g[1].i];
g[5].tag = 0;
g[5].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[948].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_5_0_2:
{
if (IsInt(g[5]) && IsPointer(g[0]) && IsInt(g[2])) {
uint8_t val = ((buffer *)(g[0].p))->data[g[2].i];
g[5].i = val;
ip++;
}
else if (IsPointer(g[5]) && IsPointer(g[0]) && IsInt(g[2])) {
uint8_t val = ((buffer *)(g[0].p))->data[g[2].i];
g[5].tag = 0;
g[5].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[949].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_5_0_3:
{
if (IsInt(g[5]) && IsPointer(g[0]) && IsInt(g[3])) {
uint8_t val = ((buffer *)(g[0].p))->data[g[3].i];
g[5].i = val;
ip++;
}
else if (IsPointer(g[5]) && IsPointer(g[0]) && IsInt(g[3])) {
uint8_t val = ((buffer *)(g[0].p))->data[g[3].i];
g[5].tag = 0;
g[5].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[950].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_5_0_4:
{
if (IsInt(g[5]) && IsPointer(g[0]) && IsInt(g[4])) {
uint8_t val = ((buffer *)(g[0].p))->data[g[4].i];
g[5].i = val;
ip++;
}
else if (IsPointer(g[5]) && IsPointer(g[0]) && IsInt(g[4])) {
uint8_t val = ((buffer *)(g[0].p))->data[g[4].i];
g[5].tag = 0;
g[5].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[951].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_5_0_5:
{
if (IsInt(g[5]) && IsPointer(g[0]) && IsInt(g[5])) {
uint8_t val = ((buffer *)(g[0].p))->data[g[5].i];
g[5].i = val;
ip++;
}
else if (IsPointer(g[5]) && IsPointer(g[0]) && IsInt(g[5])) {
uint8_t val = ((buffer *)(g[0].p))->data[g[5].i];
g[5].tag = 0;
g[5].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[952].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_5_1_0:
{
if (IsInt(g[5]) && IsPointer(g[1]) && IsInt(g[0])) {
uint8_t val = ((buffer *)(g[1].p))->data[g[0].i];
g[5].i = val;
ip++;
}
else if (IsPointer(g[5]) && IsPointer(g[1]) && IsInt(g[0])) {
uint8_t val = ((buffer *)(g[1].p))->data[g[0].i];
g[5].tag = 0;
g[5].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[953].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_5_1_2:
{
if (IsInt(g[5]) && IsPointer(g[1]) && IsInt(g[2])) {
uint8_t val = ((buffer *)(g[1].p))->data[g[2].i];
g[5].i = val;
ip++;
}
else if (IsPointer(g[5]) && IsPointer(g[1]) && IsInt(g[2])) {
uint8_t val = ((buffer *)(g[1].p))->data[g[2].i];
g[5].tag = 0;
g[5].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[954].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_5_1_3:
{
if (IsInt(g[5]) && IsPointer(g[1]) && IsInt(g[3])) {
uint8_t val = ((buffer *)(g[1].p))->data[g[3].i];
g[5].i = val;
ip++;
}
else if (IsPointer(g[5]) && IsPointer(g[1]) && IsInt(g[3])) {
uint8_t val = ((buffer *)(g[1].p))->data[g[3].i];
g[5].tag = 0;
g[5].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[955].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_5_1_4:
{
if (IsInt(g[5]) && IsPointer(g[1]) && IsInt(g[4])) {
uint8_t val = ((buffer *)(g[1].p))->data[g[4].i];
g[5].i = val;
ip++;
}
else if (IsPointer(g[5]) && IsPointer(g[1]) && IsInt(g[4])) {
uint8_t val = ((buffer *)(g[1].p))->data[g[4].i];
g[5].tag = 0;
g[5].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[956].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_5_1_5:
{
if (IsInt(g[5]) && IsPointer(g[1]) && IsInt(g[5])) {
uint8_t val = ((buffer *)(g[1].p))->data[g[5].i];
g[5].i = val;
ip++;
}
else if (IsPointer(g[5]) && IsPointer(g[1]) && IsInt(g[5])) {
uint8_t val = ((buffer *)(g[1].p))->data[g[5].i];
g[5].tag = 0;
g[5].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[957].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_5_2_0:
{
if (IsInt(g[5]) && IsPointer(g[2]) && IsInt(g[0])) {
uint8_t val = ((buffer *)(g[2].p))->data[g[0].i];
g[5].i = val;
ip++;
}
else if (IsPointer(g[5]) && IsPointer(g[2]) && IsInt(g[0])) {
uint8_t val = ((buffer *)(g[2].p))->data[g[0].i];
g[5].tag = 0;
g[5].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[958].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_5_2_1:
{
if (IsInt(g[5]) && IsPointer(g[2]) && IsInt(g[1])) {
uint8_t val = ((buffer *)(g[2].p))->data[g[1].i];
g[5].i = val;
ip++;
}
else if (IsPointer(g[5]) && IsPointer(g[2]) && IsInt(g[1])) {
uint8_t val = ((buffer *)(g[2].p))->data[g[1].i];
g[5].tag = 0;
g[5].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[959].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_5_2_3:
{
if (IsInt(g[5]) && IsPointer(g[2]) && IsInt(g[3])) {
uint8_t val = ((buffer *)(g[2].p))->data[g[3].i];
g[5].i = val;
ip++;
}
else if (IsPointer(g[5]) && IsPointer(g[2]) && IsInt(g[3])) {
uint8_t val = ((buffer *)(g[2].p))->data[g[3].i];
g[5].tag = 0;
g[5].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[960].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_5_2_4:
{
if (IsInt(g[5]) && IsPointer(g[2]) && IsInt(g[4])) {
uint8_t val = ((buffer *)(g[2].p))->data[g[4].i];
g[5].i = val;
ip++;
}
else if (IsPointer(g[5]) && IsPointer(g[2]) && IsInt(g[4])) {
uint8_t val = ((buffer *)(g[2].p))->data[g[4].i];
g[5].tag = 0;
g[5].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[961].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_5_2_5:
{
if (IsInt(g[5]) && IsPointer(g[2]) && IsInt(g[5])) {
uint8_t val = ((buffer *)(g[2].p))->data[g[5].i];
g[5].i = val;
ip++;
}
else if (IsPointer(g[5]) && IsPointer(g[2]) && IsInt(g[5])) {
uint8_t val = ((buffer *)(g[2].p))->data[g[5].i];
g[5].tag = 0;
g[5].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[962].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_5_3_0:
{
if (IsInt(g[5]) && IsPointer(g[3]) && IsInt(g[0])) {
uint8_t val = ((buffer *)(g[3].p))->data[g[0].i];
g[5].i = val;
ip++;
}
else if (IsPointer(g[5]) && IsPointer(g[3]) && IsInt(g[0])) {
uint8_t val = ((buffer *)(g[3].p))->data[g[0].i];
g[5].tag = 0;
g[5].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[963].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_5_3_1:
{
if (IsInt(g[5]) && IsPointer(g[3]) && IsInt(g[1])) {
uint8_t val = ((buffer *)(g[3].p))->data[g[1].i];
g[5].i = val;
ip++;
}
else if (IsPointer(g[5]) && IsPointer(g[3]) && IsInt(g[1])) {
uint8_t val = ((buffer *)(g[3].p))->data[g[1].i];
g[5].tag = 0;
g[5].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[964].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_5_3_2:
{
if (IsInt(g[5]) && IsPointer(g[3]) && IsInt(g[2])) {
uint8_t val = ((buffer *)(g[3].p))->data[g[2].i];
g[5].i = val;
ip++;
}
else if (IsPointer(g[5]) && IsPointer(g[3]) && IsInt(g[2])) {
uint8_t val = ((buffer *)(g[3].p))->data[g[2].i];
g[5].tag = 0;
g[5].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[965].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_5_3_4:
{
if (IsInt(g[5]) && IsPointer(g[3]) && IsInt(g[4])) {
uint8_t val = ((buffer *)(g[3].p))->data[g[4].i];
g[5].i = val;
ip++;
}
else if (IsPointer(g[5]) && IsPointer(g[3]) && IsInt(g[4])) {
uint8_t val = ((buffer *)(g[3].p))->data[g[4].i];
g[5].tag = 0;
g[5].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[966].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_5_3_5:
{
if (IsInt(g[5]) && IsPointer(g[3]) && IsInt(g[5])) {
uint8_t val = ((buffer *)(g[3].p))->data[g[5].i];
g[5].i = val;
ip++;
}
else if (IsPointer(g[5]) && IsPointer(g[3]) && IsInt(g[5])) {
uint8_t val = ((buffer *)(g[3].p))->data[g[5].i];
g[5].tag = 0;
g[5].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[967].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_5_4_0:
{
if (IsInt(g[5]) && IsPointer(g[4]) && IsInt(g[0])) {
uint8_t val = ((buffer *)(g[4].p))->data[g[0].i];
g[5].i = val;
ip++;
}
else if (IsPointer(g[5]) && IsPointer(g[4]) && IsInt(g[0])) {
uint8_t val = ((buffer *)(g[4].p))->data[g[0].i];
g[5].tag = 0;
g[5].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[968].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_5_4_1:
{
if (IsInt(g[5]) && IsPointer(g[4]) && IsInt(g[1])) {
uint8_t val = ((buffer *)(g[4].p))->data[g[1].i];
g[5].i = val;
ip++;
}
else if (IsPointer(g[5]) && IsPointer(g[4]) && IsInt(g[1])) {
uint8_t val = ((buffer *)(g[4].p))->data[g[1].i];
g[5].tag = 0;
g[5].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[969].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_5_4_2:
{
if (IsInt(g[5]) && IsPointer(g[4]) && IsInt(g[2])) {
uint8_t val = ((buffer *)(g[4].p))->data[g[2].i];
g[5].i = val;
ip++;
}
else if (IsPointer(g[5]) && IsPointer(g[4]) && IsInt(g[2])) {
uint8_t val = ((buffer *)(g[4].p))->data[g[2].i];
g[5].tag = 0;
g[5].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[970].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_5_4_3:
{
if (IsInt(g[5]) && IsPointer(g[4]) && IsInt(g[3])) {
uint8_t val = ((buffer *)(g[4].p))->data[g[3].i];
g[5].i = val;
ip++;
}
else if (IsPointer(g[5]) && IsPointer(g[4]) && IsInt(g[3])) {
uint8_t val = ((buffer *)(g[4].p))->data[g[3].i];
g[5].tag = 0;
g[5].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[971].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_5_4_5:
{
if (IsInt(g[5]) && IsPointer(g[4]) && IsInt(g[5])) {
uint8_t val = ((buffer *)(g[4].p))->data[g[5].i];
g[5].i = val;
ip++;
}
else if (IsPointer(g[5]) && IsPointer(g[4]) && IsInt(g[5])) {
uint8_t val = ((buffer *)(g[4].p))->data[g[5].i];
g[5].tag = 0;
g[5].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[972].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_5_5_0:
{
if (IsInt(g[5]) && IsPointer(g[5]) && IsInt(g[0])) {
uint8_t val = ((buffer *)(g[5].p))->data[g[0].i];
g[5].i = val;
ip++;
}
else if (IsPointer(g[5]) && IsPointer(g[5]) && IsInt(g[0])) {
uint8_t val = ((buffer *)(g[5].p))->data[g[0].i];
g[5].tag = 0;
g[5].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[973].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_5_5_1:
{
if (IsInt(g[5]) && IsPointer(g[5]) && IsInt(g[1])) {
uint8_t val = ((buffer *)(g[5].p))->data[g[1].i];
g[5].i = val;
ip++;
}
else if (IsPointer(g[5]) && IsPointer(g[5]) && IsInt(g[1])) {
uint8_t val = ((buffer *)(g[5].p))->data[g[1].i];
g[5].tag = 0;
g[5].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[974].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_5_5_2:
{
if (IsInt(g[5]) && IsPointer(g[5]) && IsInt(g[2])) {
uint8_t val = ((buffer *)(g[5].p))->data[g[2].i];
g[5].i = val;
ip++;
}
else if (IsPointer(g[5]) && IsPointer(g[5]) && IsInt(g[2])) {
uint8_t val = ((buffer *)(g[5].p))->data[g[2].i];
g[5].tag = 0;
g[5].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[975].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_5_5_3:
{
if (IsInt(g[5]) && IsPointer(g[5]) && IsInt(g[3])) {
uint8_t val = ((buffer *)(g[5].p))->data[g[3].i];
g[5].i = val;
ip++;
}
else if (IsPointer(g[5]) && IsPointer(g[5]) && IsInt(g[3])) {
uint8_t val = ((buffer *)(g[5].p))->data[g[3].i];
g[5].tag = 0;
g[5].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[976].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

getb_5_5_4:
{
if (IsInt(g[5]) && IsPointer(g[5]) && IsInt(g[4])) {
uint8_t val = ((buffer *)(g[5].p))->data[g[4].i];
g[5].i = val;
ip++;
}
else if (IsPointer(g[5]) && IsPointer(g[5]) && IsInt(g[4])) {
uint8_t val = ((buffer *)(g[5].p))->data[g[4].i];
g[5].tag = 0;
g[5].i = val;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: getb");
return 1;
}
#ifdef STATS
opcodeCounters[977].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_0_1_0:
{
if (IsPointer(g[0]) && IsInt(g[1]) && IsInt(g[0])) {
buffer *base = (buffer *)(g[0].p);
base->data[g[1].i] = g[0].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[978].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_0_1_1:
{
if (IsPointer(g[0]) && IsInt(g[1]) && IsInt(g[1])) {
buffer *base = (buffer *)(g[0].p);
base->data[g[1].i] = g[1].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[979].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_0_1_2:
{
if (IsPointer(g[0]) && IsInt(g[1]) && IsInt(g[2])) {
buffer *base = (buffer *)(g[0].p);
base->data[g[1].i] = g[2].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[980].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_0_1_3:
{
if (IsPointer(g[0]) && IsInt(g[1]) && IsInt(g[3])) {
buffer *base = (buffer *)(g[0].p);
base->data[g[1].i] = g[3].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[981].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_0_1_4:
{
if (IsPointer(g[0]) && IsInt(g[1]) && IsInt(g[4])) {
buffer *base = (buffer *)(g[0].p);
base->data[g[1].i] = g[4].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[982].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_0_1_5:
{
if (IsPointer(g[0]) && IsInt(g[1]) && IsInt(g[5])) {
buffer *base = (buffer *)(g[0].p);
base->data[g[1].i] = g[5].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[983].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_0_2_0:
{
if (IsPointer(g[0]) && IsInt(g[2]) && IsInt(g[0])) {
buffer *base = (buffer *)(g[0].p);
base->data[g[2].i] = g[0].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[984].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_0_2_1:
{
if (IsPointer(g[0]) && IsInt(g[2]) && IsInt(g[1])) {
buffer *base = (buffer *)(g[0].p);
base->data[g[2].i] = g[1].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[985].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_0_2_2:
{
if (IsPointer(g[0]) && IsInt(g[2]) && IsInt(g[2])) {
buffer *base = (buffer *)(g[0].p);
base->data[g[2].i] = g[2].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[986].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_0_2_3:
{
if (IsPointer(g[0]) && IsInt(g[2]) && IsInt(g[3])) {
buffer *base = (buffer *)(g[0].p);
base->data[g[2].i] = g[3].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[987].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_0_2_4:
{
if (IsPointer(g[0]) && IsInt(g[2]) && IsInt(g[4])) {
buffer *base = (buffer *)(g[0].p);
base->data[g[2].i] = g[4].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[988].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_0_2_5:
{
if (IsPointer(g[0]) && IsInt(g[2]) && IsInt(g[5])) {
buffer *base = (buffer *)(g[0].p);
base->data[g[2].i] = g[5].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[989].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_0_3_0:
{
if (IsPointer(g[0]) && IsInt(g[3]) && IsInt(g[0])) {
buffer *base = (buffer *)(g[0].p);
base->data[g[3].i] = g[0].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[990].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_0_3_1:
{
if (IsPointer(g[0]) && IsInt(g[3]) && IsInt(g[1])) {
buffer *base = (buffer *)(g[0].p);
base->data[g[3].i] = g[1].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[991].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_0_3_2:
{
if (IsPointer(g[0]) && IsInt(g[3]) && IsInt(g[2])) {
buffer *base = (buffer *)(g[0].p);
base->data[g[3].i] = g[2].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[992].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_0_3_3:
{
if (IsPointer(g[0]) && IsInt(g[3]) && IsInt(g[3])) {
buffer *base = (buffer *)(g[0].p);
base->data[g[3].i] = g[3].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[993].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_0_3_4:
{
if (IsPointer(g[0]) && IsInt(g[3]) && IsInt(g[4])) {
buffer *base = (buffer *)(g[0].p);
base->data[g[3].i] = g[4].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[994].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_0_3_5:
{
if (IsPointer(g[0]) && IsInt(g[3]) && IsInt(g[5])) {
buffer *base = (buffer *)(g[0].p);
base->data[g[3].i] = g[5].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[995].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_0_4_0:
{
if (IsPointer(g[0]) && IsInt(g[4]) && IsInt(g[0])) {
buffer *base = (buffer *)(g[0].p);
base->data[g[4].i] = g[0].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[996].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_0_4_1:
{
if (IsPointer(g[0]) && IsInt(g[4]) && IsInt(g[1])) {
buffer *base = (buffer *)(g[0].p);
base->data[g[4].i] = g[1].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[997].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_0_4_2:
{
if (IsPointer(g[0]) && IsInt(g[4]) && IsInt(g[2])) {
buffer *base = (buffer *)(g[0].p);
base->data[g[4].i] = g[2].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[998].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_0_4_3:
{
if (IsPointer(g[0]) && IsInt(g[4]) && IsInt(g[3])) {
buffer *base = (buffer *)(g[0].p);
base->data[g[4].i] = g[3].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[999].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_0_4_4:
{
if (IsPointer(g[0]) && IsInt(g[4]) && IsInt(g[4])) {
buffer *base = (buffer *)(g[0].p);
base->data[g[4].i] = g[4].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1000].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_0_4_5:
{
if (IsPointer(g[0]) && IsInt(g[4]) && IsInt(g[5])) {
buffer *base = (buffer *)(g[0].p);
base->data[g[4].i] = g[5].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1001].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_0_5_0:
{
if (IsPointer(g[0]) && IsInt(g[5]) && IsInt(g[0])) {
buffer *base = (buffer *)(g[0].p);
base->data[g[5].i] = g[0].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1002].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_0_5_1:
{
if (IsPointer(g[0]) && IsInt(g[5]) && IsInt(g[1])) {
buffer *base = (buffer *)(g[0].p);
base->data[g[5].i] = g[1].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1003].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_0_5_2:
{
if (IsPointer(g[0]) && IsInt(g[5]) && IsInt(g[2])) {
buffer *base = (buffer *)(g[0].p);
base->data[g[5].i] = g[2].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1004].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_0_5_3:
{
if (IsPointer(g[0]) && IsInt(g[5]) && IsInt(g[3])) {
buffer *base = (buffer *)(g[0].p);
base->data[g[5].i] = g[3].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1005].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_0_5_4:
{
if (IsPointer(g[0]) && IsInt(g[5]) && IsInt(g[4])) {
buffer *base = (buffer *)(g[0].p);
base->data[g[5].i] = g[4].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1006].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_0_5_5:
{
if (IsPointer(g[0]) && IsInt(g[5]) && IsInt(g[5])) {
buffer *base = (buffer *)(g[0].p);
base->data[g[5].i] = g[5].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1007].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_1_0_0:
{
if (IsPointer(g[1]) && IsInt(g[0]) && IsInt(g[0])) {
buffer *base = (buffer *)(g[1].p);
base->data[g[0].i] = g[0].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1008].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_1_0_1:
{
if (IsPointer(g[1]) && IsInt(g[0]) && IsInt(g[1])) {
buffer *base = (buffer *)(g[1].p);
base->data[g[0].i] = g[1].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1009].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_1_0_2:
{
if (IsPointer(g[1]) && IsInt(g[0]) && IsInt(g[2])) {
buffer *base = (buffer *)(g[1].p);
base->data[g[0].i] = g[2].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1010].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_1_0_3:
{
if (IsPointer(g[1]) && IsInt(g[0]) && IsInt(g[3])) {
buffer *base = (buffer *)(g[1].p);
base->data[g[0].i] = g[3].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1011].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_1_0_4:
{
if (IsPointer(g[1]) && IsInt(g[0]) && IsInt(g[4])) {
buffer *base = (buffer *)(g[1].p);
base->data[g[0].i] = g[4].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1012].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_1_0_5:
{
if (IsPointer(g[1]) && IsInt(g[0]) && IsInt(g[5])) {
buffer *base = (buffer *)(g[1].p);
base->data[g[0].i] = g[5].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1013].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_1_2_0:
{
if (IsPointer(g[1]) && IsInt(g[2]) && IsInt(g[0])) {
buffer *base = (buffer *)(g[1].p);
base->data[g[2].i] = g[0].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1014].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_1_2_1:
{
if (IsPointer(g[1]) && IsInt(g[2]) && IsInt(g[1])) {
buffer *base = (buffer *)(g[1].p);
base->data[g[2].i] = g[1].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1015].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_1_2_2:
{
if (IsPointer(g[1]) && IsInt(g[2]) && IsInt(g[2])) {
buffer *base = (buffer *)(g[1].p);
base->data[g[2].i] = g[2].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1016].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_1_2_3:
{
if (IsPointer(g[1]) && IsInt(g[2]) && IsInt(g[3])) {
buffer *base = (buffer *)(g[1].p);
base->data[g[2].i] = g[3].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1017].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_1_2_4:
{
if (IsPointer(g[1]) && IsInt(g[2]) && IsInt(g[4])) {
buffer *base = (buffer *)(g[1].p);
base->data[g[2].i] = g[4].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1018].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_1_2_5:
{
if (IsPointer(g[1]) && IsInt(g[2]) && IsInt(g[5])) {
buffer *base = (buffer *)(g[1].p);
base->data[g[2].i] = g[5].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1019].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_1_3_0:
{
if (IsPointer(g[1]) && IsInt(g[3]) && IsInt(g[0])) {
buffer *base = (buffer *)(g[1].p);
base->data[g[3].i] = g[0].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1020].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_1_3_1:
{
if (IsPointer(g[1]) && IsInt(g[3]) && IsInt(g[1])) {
buffer *base = (buffer *)(g[1].p);
base->data[g[3].i] = g[1].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1021].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_1_3_2:
{
if (IsPointer(g[1]) && IsInt(g[3]) && IsInt(g[2])) {
buffer *base = (buffer *)(g[1].p);
base->data[g[3].i] = g[2].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1022].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_1_3_3:
{
if (IsPointer(g[1]) && IsInt(g[3]) && IsInt(g[3])) {
buffer *base = (buffer *)(g[1].p);
base->data[g[3].i] = g[3].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1023].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_1_3_4:
{
if (IsPointer(g[1]) && IsInt(g[3]) && IsInt(g[4])) {
buffer *base = (buffer *)(g[1].p);
base->data[g[3].i] = g[4].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1024].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_1_3_5:
{
if (IsPointer(g[1]) && IsInt(g[3]) && IsInt(g[5])) {
buffer *base = (buffer *)(g[1].p);
base->data[g[3].i] = g[5].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1025].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_1_4_0:
{
if (IsPointer(g[1]) && IsInt(g[4]) && IsInt(g[0])) {
buffer *base = (buffer *)(g[1].p);
base->data[g[4].i] = g[0].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1026].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_1_4_1:
{
if (IsPointer(g[1]) && IsInt(g[4]) && IsInt(g[1])) {
buffer *base = (buffer *)(g[1].p);
base->data[g[4].i] = g[1].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1027].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_1_4_2:
{
if (IsPointer(g[1]) && IsInt(g[4]) && IsInt(g[2])) {
buffer *base = (buffer *)(g[1].p);
base->data[g[4].i] = g[2].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1028].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_1_4_3:
{
if (IsPointer(g[1]) && IsInt(g[4]) && IsInt(g[3])) {
buffer *base = (buffer *)(g[1].p);
base->data[g[4].i] = g[3].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1029].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_1_4_4:
{
if (IsPointer(g[1]) && IsInt(g[4]) && IsInt(g[4])) {
buffer *base = (buffer *)(g[1].p);
base->data[g[4].i] = g[4].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1030].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_1_4_5:
{
if (IsPointer(g[1]) && IsInt(g[4]) && IsInt(g[5])) {
buffer *base = (buffer *)(g[1].p);
base->data[g[4].i] = g[5].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1031].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_1_5_0:
{
if (IsPointer(g[1]) && IsInt(g[5]) && IsInt(g[0])) {
buffer *base = (buffer *)(g[1].p);
base->data[g[5].i] = g[0].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1032].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_1_5_1:
{
if (IsPointer(g[1]) && IsInt(g[5]) && IsInt(g[1])) {
buffer *base = (buffer *)(g[1].p);
base->data[g[5].i] = g[1].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1033].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_1_5_2:
{
if (IsPointer(g[1]) && IsInt(g[5]) && IsInt(g[2])) {
buffer *base = (buffer *)(g[1].p);
base->data[g[5].i] = g[2].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1034].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_1_5_3:
{
if (IsPointer(g[1]) && IsInt(g[5]) && IsInt(g[3])) {
buffer *base = (buffer *)(g[1].p);
base->data[g[5].i] = g[3].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1035].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_1_5_4:
{
if (IsPointer(g[1]) && IsInt(g[5]) && IsInt(g[4])) {
buffer *base = (buffer *)(g[1].p);
base->data[g[5].i] = g[4].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1036].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_1_5_5:
{
if (IsPointer(g[1]) && IsInt(g[5]) && IsInt(g[5])) {
buffer *base = (buffer *)(g[1].p);
base->data[g[5].i] = g[5].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1037].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_2_0_0:
{
if (IsPointer(g[2]) && IsInt(g[0]) && IsInt(g[0])) {
buffer *base = (buffer *)(g[2].p);
base->data[g[0].i] = g[0].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1038].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_2_0_1:
{
if (IsPointer(g[2]) && IsInt(g[0]) && IsInt(g[1])) {
buffer *base = (buffer *)(g[2].p);
base->data[g[0].i] = g[1].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1039].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_2_0_2:
{
if (IsPointer(g[2]) && IsInt(g[0]) && IsInt(g[2])) {
buffer *base = (buffer *)(g[2].p);
base->data[g[0].i] = g[2].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1040].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_2_0_3:
{
if (IsPointer(g[2]) && IsInt(g[0]) && IsInt(g[3])) {
buffer *base = (buffer *)(g[2].p);
base->data[g[0].i] = g[3].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1041].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_2_0_4:
{
if (IsPointer(g[2]) && IsInt(g[0]) && IsInt(g[4])) {
buffer *base = (buffer *)(g[2].p);
base->data[g[0].i] = g[4].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1042].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_2_0_5:
{
if (IsPointer(g[2]) && IsInt(g[0]) && IsInt(g[5])) {
buffer *base = (buffer *)(g[2].p);
base->data[g[0].i] = g[5].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1043].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_2_1_0:
{
if (IsPointer(g[2]) && IsInt(g[1]) && IsInt(g[0])) {
buffer *base = (buffer *)(g[2].p);
base->data[g[1].i] = g[0].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1044].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_2_1_1:
{
if (IsPointer(g[2]) && IsInt(g[1]) && IsInt(g[1])) {
buffer *base = (buffer *)(g[2].p);
base->data[g[1].i] = g[1].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1045].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_2_1_2:
{
if (IsPointer(g[2]) && IsInt(g[1]) && IsInt(g[2])) {
buffer *base = (buffer *)(g[2].p);
base->data[g[1].i] = g[2].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1046].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_2_1_3:
{
if (IsPointer(g[2]) && IsInt(g[1]) && IsInt(g[3])) {
buffer *base = (buffer *)(g[2].p);
base->data[g[1].i] = g[3].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1047].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_2_1_4:
{
if (IsPointer(g[2]) && IsInt(g[1]) && IsInt(g[4])) {
buffer *base = (buffer *)(g[2].p);
base->data[g[1].i] = g[4].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1048].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_2_1_5:
{
if (IsPointer(g[2]) && IsInt(g[1]) && IsInt(g[5])) {
buffer *base = (buffer *)(g[2].p);
base->data[g[1].i] = g[5].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1049].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_2_3_0:
{
if (IsPointer(g[2]) && IsInt(g[3]) && IsInt(g[0])) {
buffer *base = (buffer *)(g[2].p);
base->data[g[3].i] = g[0].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1050].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_2_3_1:
{
if (IsPointer(g[2]) && IsInt(g[3]) && IsInt(g[1])) {
buffer *base = (buffer *)(g[2].p);
base->data[g[3].i] = g[1].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1051].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_2_3_2:
{
if (IsPointer(g[2]) && IsInt(g[3]) && IsInt(g[2])) {
buffer *base = (buffer *)(g[2].p);
base->data[g[3].i] = g[2].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1052].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_2_3_3:
{
if (IsPointer(g[2]) && IsInt(g[3]) && IsInt(g[3])) {
buffer *base = (buffer *)(g[2].p);
base->data[g[3].i] = g[3].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1053].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_2_3_4:
{
if (IsPointer(g[2]) && IsInt(g[3]) && IsInt(g[4])) {
buffer *base = (buffer *)(g[2].p);
base->data[g[3].i] = g[4].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1054].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_2_3_5:
{
if (IsPointer(g[2]) && IsInt(g[3]) && IsInt(g[5])) {
buffer *base = (buffer *)(g[2].p);
base->data[g[3].i] = g[5].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1055].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_2_4_0:
{
if (IsPointer(g[2]) && IsInt(g[4]) && IsInt(g[0])) {
buffer *base = (buffer *)(g[2].p);
base->data[g[4].i] = g[0].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1056].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_2_4_1:
{
if (IsPointer(g[2]) && IsInt(g[4]) && IsInt(g[1])) {
buffer *base = (buffer *)(g[2].p);
base->data[g[4].i] = g[1].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1057].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_2_4_2:
{
if (IsPointer(g[2]) && IsInt(g[4]) && IsInt(g[2])) {
buffer *base = (buffer *)(g[2].p);
base->data[g[4].i] = g[2].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1058].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_2_4_3:
{
if (IsPointer(g[2]) && IsInt(g[4]) && IsInt(g[3])) {
buffer *base = (buffer *)(g[2].p);
base->data[g[4].i] = g[3].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1059].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_2_4_4:
{
if (IsPointer(g[2]) && IsInt(g[4]) && IsInt(g[4])) {
buffer *base = (buffer *)(g[2].p);
base->data[g[4].i] = g[4].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1060].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_2_4_5:
{
if (IsPointer(g[2]) && IsInt(g[4]) && IsInt(g[5])) {
buffer *base = (buffer *)(g[2].p);
base->data[g[4].i] = g[5].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1061].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_2_5_0:
{
if (IsPointer(g[2]) && IsInt(g[5]) && IsInt(g[0])) {
buffer *base = (buffer *)(g[2].p);
base->data[g[5].i] = g[0].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1062].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_2_5_1:
{
if (IsPointer(g[2]) && IsInt(g[5]) && IsInt(g[1])) {
buffer *base = (buffer *)(g[2].p);
base->data[g[5].i] = g[1].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1063].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_2_5_2:
{
if (IsPointer(g[2]) && IsInt(g[5]) && IsInt(g[2])) {
buffer *base = (buffer *)(g[2].p);
base->data[g[5].i] = g[2].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1064].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_2_5_3:
{
if (IsPointer(g[2]) && IsInt(g[5]) && IsInt(g[3])) {
buffer *base = (buffer *)(g[2].p);
base->data[g[5].i] = g[3].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1065].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_2_5_4:
{
if (IsPointer(g[2]) && IsInt(g[5]) && IsInt(g[4])) {
buffer *base = (buffer *)(g[2].p);
base->data[g[5].i] = g[4].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1066].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_2_5_5:
{
if (IsPointer(g[2]) && IsInt(g[5]) && IsInt(g[5])) {
buffer *base = (buffer *)(g[2].p);
base->data[g[5].i] = g[5].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1067].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_3_0_0:
{
if (IsPointer(g[3]) && IsInt(g[0]) && IsInt(g[0])) {
buffer *base = (buffer *)(g[3].p);
base->data[g[0].i] = g[0].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1068].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_3_0_1:
{
if (IsPointer(g[3]) && IsInt(g[0]) && IsInt(g[1])) {
buffer *base = (buffer *)(g[3].p);
base->data[g[0].i] = g[1].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1069].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_3_0_2:
{
if (IsPointer(g[3]) && IsInt(g[0]) && IsInt(g[2])) {
buffer *base = (buffer *)(g[3].p);
base->data[g[0].i] = g[2].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1070].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_3_0_3:
{
if (IsPointer(g[3]) && IsInt(g[0]) && IsInt(g[3])) {
buffer *base = (buffer *)(g[3].p);
base->data[g[0].i] = g[3].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1071].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_3_0_4:
{
if (IsPointer(g[3]) && IsInt(g[0]) && IsInt(g[4])) {
buffer *base = (buffer *)(g[3].p);
base->data[g[0].i] = g[4].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1072].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_3_0_5:
{
if (IsPointer(g[3]) && IsInt(g[0]) && IsInt(g[5])) {
buffer *base = (buffer *)(g[3].p);
base->data[g[0].i] = g[5].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1073].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_3_1_0:
{
if (IsPointer(g[3]) && IsInt(g[1]) && IsInt(g[0])) {
buffer *base = (buffer *)(g[3].p);
base->data[g[1].i] = g[0].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1074].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_3_1_1:
{
if (IsPointer(g[3]) && IsInt(g[1]) && IsInt(g[1])) {
buffer *base = (buffer *)(g[3].p);
base->data[g[1].i] = g[1].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1075].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_3_1_2:
{
if (IsPointer(g[3]) && IsInt(g[1]) && IsInt(g[2])) {
buffer *base = (buffer *)(g[3].p);
base->data[g[1].i] = g[2].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1076].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_3_1_3:
{
if (IsPointer(g[3]) && IsInt(g[1]) && IsInt(g[3])) {
buffer *base = (buffer *)(g[3].p);
base->data[g[1].i] = g[3].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1077].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_3_1_4:
{
if (IsPointer(g[3]) && IsInt(g[1]) && IsInt(g[4])) {
buffer *base = (buffer *)(g[3].p);
base->data[g[1].i] = g[4].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1078].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_3_1_5:
{
if (IsPointer(g[3]) && IsInt(g[1]) && IsInt(g[5])) {
buffer *base = (buffer *)(g[3].p);
base->data[g[1].i] = g[5].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1079].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_3_2_0:
{
if (IsPointer(g[3]) && IsInt(g[2]) && IsInt(g[0])) {
buffer *base = (buffer *)(g[3].p);
base->data[g[2].i] = g[0].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1080].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_3_2_1:
{
if (IsPointer(g[3]) && IsInt(g[2]) && IsInt(g[1])) {
buffer *base = (buffer *)(g[3].p);
base->data[g[2].i] = g[1].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1081].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_3_2_2:
{
if (IsPointer(g[3]) && IsInt(g[2]) && IsInt(g[2])) {
buffer *base = (buffer *)(g[3].p);
base->data[g[2].i] = g[2].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1082].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_3_2_3:
{
if (IsPointer(g[3]) && IsInt(g[2]) && IsInt(g[3])) {
buffer *base = (buffer *)(g[3].p);
base->data[g[2].i] = g[3].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1083].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_3_2_4:
{
if (IsPointer(g[3]) && IsInt(g[2]) && IsInt(g[4])) {
buffer *base = (buffer *)(g[3].p);
base->data[g[2].i] = g[4].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1084].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_3_2_5:
{
if (IsPointer(g[3]) && IsInt(g[2]) && IsInt(g[5])) {
buffer *base = (buffer *)(g[3].p);
base->data[g[2].i] = g[5].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1085].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_3_4_0:
{
if (IsPointer(g[3]) && IsInt(g[4]) && IsInt(g[0])) {
buffer *base = (buffer *)(g[3].p);
base->data[g[4].i] = g[0].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1086].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_3_4_1:
{
if (IsPointer(g[3]) && IsInt(g[4]) && IsInt(g[1])) {
buffer *base = (buffer *)(g[3].p);
base->data[g[4].i] = g[1].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1087].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_3_4_2:
{
if (IsPointer(g[3]) && IsInt(g[4]) && IsInt(g[2])) {
buffer *base = (buffer *)(g[3].p);
base->data[g[4].i] = g[2].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1088].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_3_4_3:
{
if (IsPointer(g[3]) && IsInt(g[4]) && IsInt(g[3])) {
buffer *base = (buffer *)(g[3].p);
base->data[g[4].i] = g[3].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1089].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_3_4_4:
{
if (IsPointer(g[3]) && IsInt(g[4]) && IsInt(g[4])) {
buffer *base = (buffer *)(g[3].p);
base->data[g[4].i] = g[4].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1090].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_3_4_5:
{
if (IsPointer(g[3]) && IsInt(g[4]) && IsInt(g[5])) {
buffer *base = (buffer *)(g[3].p);
base->data[g[4].i] = g[5].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1091].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_3_5_0:
{
if (IsPointer(g[3]) && IsInt(g[5]) && IsInt(g[0])) {
buffer *base = (buffer *)(g[3].p);
base->data[g[5].i] = g[0].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1092].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_3_5_1:
{
if (IsPointer(g[3]) && IsInt(g[5]) && IsInt(g[1])) {
buffer *base = (buffer *)(g[3].p);
base->data[g[5].i] = g[1].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1093].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_3_5_2:
{
if (IsPointer(g[3]) && IsInt(g[5]) && IsInt(g[2])) {
buffer *base = (buffer *)(g[3].p);
base->data[g[5].i] = g[2].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1094].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_3_5_3:
{
if (IsPointer(g[3]) && IsInt(g[5]) && IsInt(g[3])) {
buffer *base = (buffer *)(g[3].p);
base->data[g[5].i] = g[3].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1095].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_3_5_4:
{
if (IsPointer(g[3]) && IsInt(g[5]) && IsInt(g[4])) {
buffer *base = (buffer *)(g[3].p);
base->data[g[5].i] = g[4].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1096].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_3_5_5:
{
if (IsPointer(g[3]) && IsInt(g[5]) && IsInt(g[5])) {
buffer *base = (buffer *)(g[3].p);
base->data[g[5].i] = g[5].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1097].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_4_0_0:
{
if (IsPointer(g[4]) && IsInt(g[0]) && IsInt(g[0])) {
buffer *base = (buffer *)(g[4].p);
base->data[g[0].i] = g[0].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1098].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_4_0_1:
{
if (IsPointer(g[4]) && IsInt(g[0]) && IsInt(g[1])) {
buffer *base = (buffer *)(g[4].p);
base->data[g[0].i] = g[1].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1099].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_4_0_2:
{
if (IsPointer(g[4]) && IsInt(g[0]) && IsInt(g[2])) {
buffer *base = (buffer *)(g[4].p);
base->data[g[0].i] = g[2].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1100].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_4_0_3:
{
if (IsPointer(g[4]) && IsInt(g[0]) && IsInt(g[3])) {
buffer *base = (buffer *)(g[4].p);
base->data[g[0].i] = g[3].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1101].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_4_0_4:
{
if (IsPointer(g[4]) && IsInt(g[0]) && IsInt(g[4])) {
buffer *base = (buffer *)(g[4].p);
base->data[g[0].i] = g[4].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1102].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_4_0_5:
{
if (IsPointer(g[4]) && IsInt(g[0]) && IsInt(g[5])) {
buffer *base = (buffer *)(g[4].p);
base->data[g[0].i] = g[5].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1103].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_4_1_0:
{
if (IsPointer(g[4]) && IsInt(g[1]) && IsInt(g[0])) {
buffer *base = (buffer *)(g[4].p);
base->data[g[1].i] = g[0].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1104].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_4_1_1:
{
if (IsPointer(g[4]) && IsInt(g[1]) && IsInt(g[1])) {
buffer *base = (buffer *)(g[4].p);
base->data[g[1].i] = g[1].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1105].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_4_1_2:
{
if (IsPointer(g[4]) && IsInt(g[1]) && IsInt(g[2])) {
buffer *base = (buffer *)(g[4].p);
base->data[g[1].i] = g[2].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1106].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_4_1_3:
{
if (IsPointer(g[4]) && IsInt(g[1]) && IsInt(g[3])) {
buffer *base = (buffer *)(g[4].p);
base->data[g[1].i] = g[3].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1107].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_4_1_4:
{
if (IsPointer(g[4]) && IsInt(g[1]) && IsInt(g[4])) {
buffer *base = (buffer *)(g[4].p);
base->data[g[1].i] = g[4].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1108].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_4_1_5:
{
if (IsPointer(g[4]) && IsInt(g[1]) && IsInt(g[5])) {
buffer *base = (buffer *)(g[4].p);
base->data[g[1].i] = g[5].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1109].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_4_2_0:
{
if (IsPointer(g[4]) && IsInt(g[2]) && IsInt(g[0])) {
buffer *base = (buffer *)(g[4].p);
base->data[g[2].i] = g[0].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1110].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_4_2_1:
{
if (IsPointer(g[4]) && IsInt(g[2]) && IsInt(g[1])) {
buffer *base = (buffer *)(g[4].p);
base->data[g[2].i] = g[1].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1111].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_4_2_2:
{
if (IsPointer(g[4]) && IsInt(g[2]) && IsInt(g[2])) {
buffer *base = (buffer *)(g[4].p);
base->data[g[2].i] = g[2].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1112].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_4_2_3:
{
if (IsPointer(g[4]) && IsInt(g[2]) && IsInt(g[3])) {
buffer *base = (buffer *)(g[4].p);
base->data[g[2].i] = g[3].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1113].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_4_2_4:
{
if (IsPointer(g[4]) && IsInt(g[2]) && IsInt(g[4])) {
buffer *base = (buffer *)(g[4].p);
base->data[g[2].i] = g[4].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1114].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_4_2_5:
{
if (IsPointer(g[4]) && IsInt(g[2]) && IsInt(g[5])) {
buffer *base = (buffer *)(g[4].p);
base->data[g[2].i] = g[5].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1115].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_4_3_0:
{
if (IsPointer(g[4]) && IsInt(g[3]) && IsInt(g[0])) {
buffer *base = (buffer *)(g[4].p);
base->data[g[3].i] = g[0].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1116].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_4_3_1:
{
if (IsPointer(g[4]) && IsInt(g[3]) && IsInt(g[1])) {
buffer *base = (buffer *)(g[4].p);
base->data[g[3].i] = g[1].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1117].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_4_3_2:
{
if (IsPointer(g[4]) && IsInt(g[3]) && IsInt(g[2])) {
buffer *base = (buffer *)(g[4].p);
base->data[g[3].i] = g[2].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1118].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_4_3_3:
{
if (IsPointer(g[4]) && IsInt(g[3]) && IsInt(g[3])) {
buffer *base = (buffer *)(g[4].p);
base->data[g[3].i] = g[3].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1119].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_4_3_4:
{
if (IsPointer(g[4]) && IsInt(g[3]) && IsInt(g[4])) {
buffer *base = (buffer *)(g[4].p);
base->data[g[3].i] = g[4].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1120].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_4_3_5:
{
if (IsPointer(g[4]) && IsInt(g[3]) && IsInt(g[5])) {
buffer *base = (buffer *)(g[4].p);
base->data[g[3].i] = g[5].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1121].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_4_5_0:
{
if (IsPointer(g[4]) && IsInt(g[5]) && IsInt(g[0])) {
buffer *base = (buffer *)(g[4].p);
base->data[g[5].i] = g[0].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1122].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_4_5_1:
{
if (IsPointer(g[4]) && IsInt(g[5]) && IsInt(g[1])) {
buffer *base = (buffer *)(g[4].p);
base->data[g[5].i] = g[1].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1123].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_4_5_2:
{
if (IsPointer(g[4]) && IsInt(g[5]) && IsInt(g[2])) {
buffer *base = (buffer *)(g[4].p);
base->data[g[5].i] = g[2].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1124].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_4_5_3:
{
if (IsPointer(g[4]) && IsInt(g[5]) && IsInt(g[3])) {
buffer *base = (buffer *)(g[4].p);
base->data[g[5].i] = g[3].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1125].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_4_5_4:
{
if (IsPointer(g[4]) && IsInt(g[5]) && IsInt(g[4])) {
buffer *base = (buffer *)(g[4].p);
base->data[g[5].i] = g[4].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1126].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_4_5_5:
{
if (IsPointer(g[4]) && IsInt(g[5]) && IsInt(g[5])) {
buffer *base = (buffer *)(g[4].p);
base->data[g[5].i] = g[5].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1127].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_5_0_0:
{
if (IsPointer(g[5]) && IsInt(g[0]) && IsInt(g[0])) {
buffer *base = (buffer *)(g[5].p);
base->data[g[0].i] = g[0].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1128].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_5_0_1:
{
if (IsPointer(g[5]) && IsInt(g[0]) && IsInt(g[1])) {
buffer *base = (buffer *)(g[5].p);
base->data[g[0].i] = g[1].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1129].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_5_0_2:
{
if (IsPointer(g[5]) && IsInt(g[0]) && IsInt(g[2])) {
buffer *base = (buffer *)(g[5].p);
base->data[g[0].i] = g[2].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1130].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_5_0_3:
{
if (IsPointer(g[5]) && IsInt(g[0]) && IsInt(g[3])) {
buffer *base = (buffer *)(g[5].p);
base->data[g[0].i] = g[3].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1131].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_5_0_4:
{
if (IsPointer(g[5]) && IsInt(g[0]) && IsInt(g[4])) {
buffer *base = (buffer *)(g[5].p);
base->data[g[0].i] = g[4].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1132].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_5_0_5:
{
if (IsPointer(g[5]) && IsInt(g[0]) && IsInt(g[5])) {
buffer *base = (buffer *)(g[5].p);
base->data[g[0].i] = g[5].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1133].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_5_1_0:
{
if (IsPointer(g[5]) && IsInt(g[1]) && IsInt(g[0])) {
buffer *base = (buffer *)(g[5].p);
base->data[g[1].i] = g[0].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1134].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_5_1_1:
{
if (IsPointer(g[5]) && IsInt(g[1]) && IsInt(g[1])) {
buffer *base = (buffer *)(g[5].p);
base->data[g[1].i] = g[1].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1135].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_5_1_2:
{
if (IsPointer(g[5]) && IsInt(g[1]) && IsInt(g[2])) {
buffer *base = (buffer *)(g[5].p);
base->data[g[1].i] = g[2].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1136].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_5_1_3:
{
if (IsPointer(g[5]) && IsInt(g[1]) && IsInt(g[3])) {
buffer *base = (buffer *)(g[5].p);
base->data[g[1].i] = g[3].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1137].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_5_1_4:
{
if (IsPointer(g[5]) && IsInt(g[1]) && IsInt(g[4])) {
buffer *base = (buffer *)(g[5].p);
base->data[g[1].i] = g[4].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1138].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_5_1_5:
{
if (IsPointer(g[5]) && IsInt(g[1]) && IsInt(g[5])) {
buffer *base = (buffer *)(g[5].p);
base->data[g[1].i] = g[5].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1139].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_5_2_0:
{
if (IsPointer(g[5]) && IsInt(g[2]) && IsInt(g[0])) {
buffer *base = (buffer *)(g[5].p);
base->data[g[2].i] = g[0].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1140].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_5_2_1:
{
if (IsPointer(g[5]) && IsInt(g[2]) && IsInt(g[1])) {
buffer *base = (buffer *)(g[5].p);
base->data[g[2].i] = g[1].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1141].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_5_2_2:
{
if (IsPointer(g[5]) && IsInt(g[2]) && IsInt(g[2])) {
buffer *base = (buffer *)(g[5].p);
base->data[g[2].i] = g[2].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1142].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_5_2_3:
{
if (IsPointer(g[5]) && IsInt(g[2]) && IsInt(g[3])) {
buffer *base = (buffer *)(g[5].p);
base->data[g[2].i] = g[3].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1143].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_5_2_4:
{
if (IsPointer(g[5]) && IsInt(g[2]) && IsInt(g[4])) {
buffer *base = (buffer *)(g[5].p);
base->data[g[2].i] = g[4].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1144].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_5_2_5:
{
if (IsPointer(g[5]) && IsInt(g[2]) && IsInt(g[5])) {
buffer *base = (buffer *)(g[5].p);
base->data[g[2].i] = g[5].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1145].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_5_3_0:
{
if (IsPointer(g[5]) && IsInt(g[3]) && IsInt(g[0])) {
buffer *base = (buffer *)(g[5].p);
base->data[g[3].i] = g[0].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1146].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_5_3_1:
{
if (IsPointer(g[5]) && IsInt(g[3]) && IsInt(g[1])) {
buffer *base = (buffer *)(g[5].p);
base->data[g[3].i] = g[1].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1147].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_5_3_2:
{
if (IsPointer(g[5]) && IsInt(g[3]) && IsInt(g[2])) {
buffer *base = (buffer *)(g[5].p);
base->data[g[3].i] = g[2].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1148].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_5_3_3:
{
if (IsPointer(g[5]) && IsInt(g[3]) && IsInt(g[3])) {
buffer *base = (buffer *)(g[5].p);
base->data[g[3].i] = g[3].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1149].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_5_3_4:
{
if (IsPointer(g[5]) && IsInt(g[3]) && IsInt(g[4])) {
buffer *base = (buffer *)(g[5].p);
base->data[g[3].i] = g[4].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1150].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_5_3_5:
{
if (IsPointer(g[5]) && IsInt(g[3]) && IsInt(g[5])) {
buffer *base = (buffer *)(g[5].p);
base->data[g[3].i] = g[5].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1151].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_5_4_0:
{
if (IsPointer(g[5]) && IsInt(g[4]) && IsInt(g[0])) {
buffer *base = (buffer *)(g[5].p);
base->data[g[4].i] = g[0].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1152].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_5_4_1:
{
if (IsPointer(g[5]) && IsInt(g[4]) && IsInt(g[1])) {
buffer *base = (buffer *)(g[5].p);
base->data[g[4].i] = g[1].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1153].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_5_4_2:
{
if (IsPointer(g[5]) && IsInt(g[4]) && IsInt(g[2])) {
buffer *base = (buffer *)(g[5].p);
base->data[g[4].i] = g[2].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1154].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_5_4_3:
{
if (IsPointer(g[5]) && IsInt(g[4]) && IsInt(g[3])) {
buffer *base = (buffer *)(g[5].p);
base->data[g[4].i] = g[3].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1155].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_5_4_4:
{
if (IsPointer(g[5]) && IsInt(g[4]) && IsInt(g[4])) {
buffer *base = (buffer *)(g[5].p);
base->data[g[4].i] = g[4].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1156].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

setb_5_4_5:
{
if (IsPointer(g[5]) && IsInt(g[4]) && IsInt(g[5])) {
buffer *base = (buffer *)(g[5].p);
base->data[g[4].i] = g[5].i;
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: setb");
return 1;
}
#ifdef STATS
opcodeCounters[1157].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

jmp:
{
ip += *(ip+1);
#ifdef STATS
opcodeCounters[1158].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

jmpf:
{
int16_t dconstant = *(ip +1);
int64_t constant = *((int64_t*)(ip + dconstant));
ip += constant;
#ifdef STATS
opcodeCounters[1159].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

swtch_0:
{
if (IsInt(g[0])) {
int16_t tableSize = *(ip + 1);
if(g[0].i < 0 || g[0].i >= tableSize) {
int16_t defaultJump = *(ip + tableSize + 2);
ip += defaultJump;
}
else {
int16_t jump = *(ip + g[0].i + 2);
ip += jump;
 }
}
else {
fprintf(stderr, "type error, illegal types used for instruction: swtch");
return 1;
}
#ifdef STATS
opcodeCounters[1160].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

swtch_1:
{
if (IsInt(g[1])) {
int16_t tableSize = *(ip + 1);
if(g[1].i < 0 || g[1].i >= tableSize) {
int16_t defaultJump = *(ip + tableSize + 2);
ip += defaultJump;
}
else {
int16_t jump = *(ip + g[1].i + 2);
ip += jump;
 }
}
else {
fprintf(stderr, "type error, illegal types used for instruction: swtch");
return 1;
}
#ifdef STATS
opcodeCounters[1161].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

swtch_2:
{
if (IsInt(g[2])) {
int16_t tableSize = *(ip + 1);
if(g[2].i < 0 || g[2].i >= tableSize) {
int16_t defaultJump = *(ip + tableSize + 2);
ip += defaultJump;
}
else {
int16_t jump = *(ip + g[2].i + 2);
ip += jump;
 }
}
else {
fprintf(stderr, "type error, illegal types used for instruction: swtch");
return 1;
}
#ifdef STATS
opcodeCounters[1162].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

swtch_3:
{
if (IsInt(g[3])) {
int16_t tableSize = *(ip + 1);
if(g[3].i < 0 || g[3].i >= tableSize) {
int16_t defaultJump = *(ip + tableSize + 2);
ip += defaultJump;
}
else {
int16_t jump = *(ip + g[3].i + 2);
ip += jump;
 }
}
else {
fprintf(stderr, "type error, illegal types used for instruction: swtch");
return 1;
}
#ifdef STATS
opcodeCounters[1163].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

swtch_4:
{
if (IsInt(g[4])) {
int16_t tableSize = *(ip + 1);
if(g[4].i < 0 || g[4].i >= tableSize) {
int16_t defaultJump = *(ip + tableSize + 2);
ip += defaultJump;
}
else {
int16_t jump = *(ip + g[4].i + 2);
ip += jump;
 }
}
else {
fprintf(stderr, "type error, illegal types used for instruction: swtch");
return 1;
}
#ifdef STATS
opcodeCounters[1164].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

swtch_5:
{
if (IsInt(g[5])) {
int16_t tableSize = *(ip + 1);
if(g[5].i < 0 || g[5].i >= tableSize) {
int16_t defaultJump = *(ip + tableSize + 2);
ip += defaultJump;
}
else {
int16_t jump = *(ip + g[5].i + 2);
ip += jump;
 }
}
else {
fprintf(stderr, "type error, illegal types used for instruction: swtch");
return 1;
}
#ifdef STATS
opcodeCounters[1165].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

jcmp_0_1:
{
if (IsInt(g[0]) && IsInt(g[1])) {
if (g[0].i < g[1].i)
ip += *(ip + 1);
else if(g[0].i == g[1].i)
ip += *(ip + 2);
else
ip += *(ip + 3);
}
else if (IsPointer(g[0]) && IsPointer(g[1])) {
if (g[0].p == g[1].p)
ip += *(ip + 1);
else
ip += *(ip + 2);
}
else if (IsPointer(g[0]) && IsInt(g[1])) {
ip += 4;
}
else if (IsInt(g[0]) && IsPointer(g[1])) {
ip += 4;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: jcmp");
return 1;
}
#ifdef STATS
opcodeCounters[1166].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

jcmp_0_2:
{
if (IsInt(g[0]) && IsInt(g[2])) {
if (g[0].i < g[2].i)
ip += *(ip + 1);
else if(g[0].i == g[2].i)
ip += *(ip + 2);
else
ip += *(ip + 3);
}
else if (IsPointer(g[0]) && IsPointer(g[2])) {
if (g[0].p == g[2].p)
ip += *(ip + 1);
else
ip += *(ip + 2);
}
else if (IsPointer(g[0]) && IsInt(g[2])) {
ip += 4;
}
else if (IsInt(g[0]) && IsPointer(g[2])) {
ip += 4;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: jcmp");
return 1;
}
#ifdef STATS
opcodeCounters[1167].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

jcmp_0_3:
{
if (IsInt(g[0]) && IsInt(g[3])) {
if (g[0].i < g[3].i)
ip += *(ip + 1);
else if(g[0].i == g[3].i)
ip += *(ip + 2);
else
ip += *(ip + 3);
}
else if (IsPointer(g[0]) && IsPointer(g[3])) {
if (g[0].p == g[3].p)
ip += *(ip + 1);
else
ip += *(ip + 2);
}
else if (IsPointer(g[0]) && IsInt(g[3])) {
ip += 4;
}
else if (IsInt(g[0]) && IsPointer(g[3])) {
ip += 4;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: jcmp");
return 1;
}
#ifdef STATS
opcodeCounters[1168].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

jcmp_0_4:
{
if (IsInt(g[0]) && IsInt(g[4])) {
if (g[0].i < g[4].i)
ip += *(ip + 1);
else if(g[0].i == g[4].i)
ip += *(ip + 2);
else
ip += *(ip + 3);
}
else if (IsPointer(g[0]) && IsPointer(g[4])) {
if (g[0].p == g[4].p)
ip += *(ip + 1);
else
ip += *(ip + 2);
}
else if (IsPointer(g[0]) && IsInt(g[4])) {
ip += 4;
}
else if (IsInt(g[0]) && IsPointer(g[4])) {
ip += 4;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: jcmp");
return 1;
}
#ifdef STATS
opcodeCounters[1169].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

jcmp_0_5:
{
if (IsInt(g[0]) && IsInt(g[5])) {
if (g[0].i < g[5].i)
ip += *(ip + 1);
else if(g[0].i == g[5].i)
ip += *(ip + 2);
else
ip += *(ip + 3);
}
else if (IsPointer(g[0]) && IsPointer(g[5])) {
if (g[0].p == g[5].p)
ip += *(ip + 1);
else
ip += *(ip + 2);
}
else if (IsPointer(g[0]) && IsInt(g[5])) {
ip += 4;
}
else if (IsInt(g[0]) && IsPointer(g[5])) {
ip += 4;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: jcmp");
return 1;
}
#ifdef STATS
opcodeCounters[1170].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

jcmp_1_0:
{
if (IsInt(g[1]) && IsInt(g[0])) {
if (g[1].i < g[0].i)
ip += *(ip + 1);
else if(g[1].i == g[0].i)
ip += *(ip + 2);
else
ip += *(ip + 3);
}
else if (IsPointer(g[1]) && IsPointer(g[0])) {
if (g[1].p == g[0].p)
ip += *(ip + 1);
else
ip += *(ip + 2);
}
else if (IsPointer(g[1]) && IsInt(g[0])) {
ip += 4;
}
else if (IsInt(g[1]) && IsPointer(g[0])) {
ip += 4;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: jcmp");
return 1;
}
#ifdef STATS
opcodeCounters[1171].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

jcmp_1_2:
{
if (IsInt(g[1]) && IsInt(g[2])) {
if (g[1].i < g[2].i)
ip += *(ip + 1);
else if(g[1].i == g[2].i)
ip += *(ip + 2);
else
ip += *(ip + 3);
}
else if (IsPointer(g[1]) && IsPointer(g[2])) {
if (g[1].p == g[2].p)
ip += *(ip + 1);
else
ip += *(ip + 2);
}
else if (IsPointer(g[1]) && IsInt(g[2])) {
ip += 4;
}
else if (IsInt(g[1]) && IsPointer(g[2])) {
ip += 4;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: jcmp");
return 1;
}
#ifdef STATS
opcodeCounters[1172].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

jcmp_1_3:
{
if (IsInt(g[1]) && IsInt(g[3])) {
if (g[1].i < g[3].i)
ip += *(ip + 1);
else if(g[1].i == g[3].i)
ip += *(ip + 2);
else
ip += *(ip + 3);
}
else if (IsPointer(g[1]) && IsPointer(g[3])) {
if (g[1].p == g[3].p)
ip += *(ip + 1);
else
ip += *(ip + 2);
}
else if (IsPointer(g[1]) && IsInt(g[3])) {
ip += 4;
}
else if (IsInt(g[1]) && IsPointer(g[3])) {
ip += 4;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: jcmp");
return 1;
}
#ifdef STATS
opcodeCounters[1173].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

jcmp_1_4:
{
if (IsInt(g[1]) && IsInt(g[4])) {
if (g[1].i < g[4].i)
ip += *(ip + 1);
else if(g[1].i == g[4].i)
ip += *(ip + 2);
else
ip += *(ip + 3);
}
else if (IsPointer(g[1]) && IsPointer(g[4])) {
if (g[1].p == g[4].p)
ip += *(ip + 1);
else
ip += *(ip + 2);
}
else if (IsPointer(g[1]) && IsInt(g[4])) {
ip += 4;
}
else if (IsInt(g[1]) && IsPointer(g[4])) {
ip += 4;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: jcmp");
return 1;
}
#ifdef STATS
opcodeCounters[1174].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

jcmp_1_5:
{
if (IsInt(g[1]) && IsInt(g[5])) {
if (g[1].i < g[5].i)
ip += *(ip + 1);
else if(g[1].i == g[5].i)
ip += *(ip + 2);
else
ip += *(ip + 3);
}
else if (IsPointer(g[1]) && IsPointer(g[5])) {
if (g[1].p == g[5].p)
ip += *(ip + 1);
else
ip += *(ip + 2);
}
else if (IsPointer(g[1]) && IsInt(g[5])) {
ip += 4;
}
else if (IsInt(g[1]) && IsPointer(g[5])) {
ip += 4;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: jcmp");
return 1;
}
#ifdef STATS
opcodeCounters[1175].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

jcmp_2_0:
{
if (IsInt(g[2]) && IsInt(g[0])) {
if (g[2].i < g[0].i)
ip += *(ip + 1);
else if(g[2].i == g[0].i)
ip += *(ip + 2);
else
ip += *(ip + 3);
}
else if (IsPointer(g[2]) && IsPointer(g[0])) {
if (g[2].p == g[0].p)
ip += *(ip + 1);
else
ip += *(ip + 2);
}
else if (IsPointer(g[2]) && IsInt(g[0])) {
ip += 4;
}
else if (IsInt(g[2]) && IsPointer(g[0])) {
ip += 4;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: jcmp");
return 1;
}
#ifdef STATS
opcodeCounters[1176].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

jcmp_2_1:
{
if (IsInt(g[2]) && IsInt(g[1])) {
if (g[2].i < g[1].i)
ip += *(ip + 1);
else if(g[2].i == g[1].i)
ip += *(ip + 2);
else
ip += *(ip + 3);
}
else if (IsPointer(g[2]) && IsPointer(g[1])) {
if (g[2].p == g[1].p)
ip += *(ip + 1);
else
ip += *(ip + 2);
}
else if (IsPointer(g[2]) && IsInt(g[1])) {
ip += 4;
}
else if (IsInt(g[2]) && IsPointer(g[1])) {
ip += 4;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: jcmp");
return 1;
}
#ifdef STATS
opcodeCounters[1177].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

jcmp_2_3:
{
if (IsInt(g[2]) && IsInt(g[3])) {
if (g[2].i < g[3].i)
ip += *(ip + 1);
else if(g[2].i == g[3].i)
ip += *(ip + 2);
else
ip += *(ip + 3);
}
else if (IsPointer(g[2]) && IsPointer(g[3])) {
if (g[2].p == g[3].p)
ip += *(ip + 1);
else
ip += *(ip + 2);
}
else if (IsPointer(g[2]) && IsInt(g[3])) {
ip += 4;
}
else if (IsInt(g[2]) && IsPointer(g[3])) {
ip += 4;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: jcmp");
return 1;
}
#ifdef STATS
opcodeCounters[1178].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

jcmp_2_4:
{
if (IsInt(g[2]) && IsInt(g[4])) {
if (g[2].i < g[4].i)
ip += *(ip + 1);
else if(g[2].i == g[4].i)
ip += *(ip + 2);
else
ip += *(ip + 3);
}
else if (IsPointer(g[2]) && IsPointer(g[4])) {
if (g[2].p == g[4].p)
ip += *(ip + 1);
else
ip += *(ip + 2);
}
else if (IsPointer(g[2]) && IsInt(g[4])) {
ip += 4;
}
else if (IsInt(g[2]) && IsPointer(g[4])) {
ip += 4;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: jcmp");
return 1;
}
#ifdef STATS
opcodeCounters[1179].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

jcmp_2_5:
{
if (IsInt(g[2]) && IsInt(g[5])) {
if (g[2].i < g[5].i)
ip += *(ip + 1);
else if(g[2].i == g[5].i)
ip += *(ip + 2);
else
ip += *(ip + 3);
}
else if (IsPointer(g[2]) && IsPointer(g[5])) {
if (g[2].p == g[5].p)
ip += *(ip + 1);
else
ip += *(ip + 2);
}
else if (IsPointer(g[2]) && IsInt(g[5])) {
ip += 4;
}
else if (IsInt(g[2]) && IsPointer(g[5])) {
ip += 4;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: jcmp");
return 1;
}
#ifdef STATS
opcodeCounters[1180].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

jcmp_3_0:
{
if (IsInt(g[3]) && IsInt(g[0])) {
if (g[3].i < g[0].i)
ip += *(ip + 1);
else if(g[3].i == g[0].i)
ip += *(ip + 2);
else
ip += *(ip + 3);
}
else if (IsPointer(g[3]) && IsPointer(g[0])) {
if (g[3].p == g[0].p)
ip += *(ip + 1);
else
ip += *(ip + 2);
}
else if (IsPointer(g[3]) && IsInt(g[0])) {
ip += 4;
}
else if (IsInt(g[3]) && IsPointer(g[0])) {
ip += 4;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: jcmp");
return 1;
}
#ifdef STATS
opcodeCounters[1181].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

jcmp_3_1:
{
if (IsInt(g[3]) && IsInt(g[1])) {
if (g[3].i < g[1].i)
ip += *(ip + 1);
else if(g[3].i == g[1].i)
ip += *(ip + 2);
else
ip += *(ip + 3);
}
else if (IsPointer(g[3]) && IsPointer(g[1])) {
if (g[3].p == g[1].p)
ip += *(ip + 1);
else
ip += *(ip + 2);
}
else if (IsPointer(g[3]) && IsInt(g[1])) {
ip += 4;
}
else if (IsInt(g[3]) && IsPointer(g[1])) {
ip += 4;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: jcmp");
return 1;
}
#ifdef STATS
opcodeCounters[1182].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

jcmp_3_2:
{
if (IsInt(g[3]) && IsInt(g[2])) {
if (g[3].i < g[2].i)
ip += *(ip + 1);
else if(g[3].i == g[2].i)
ip += *(ip + 2);
else
ip += *(ip + 3);
}
else if (IsPointer(g[3]) && IsPointer(g[2])) {
if (g[3].p == g[2].p)
ip += *(ip + 1);
else
ip += *(ip + 2);
}
else if (IsPointer(g[3]) && IsInt(g[2])) {
ip += 4;
}
else if (IsInt(g[3]) && IsPointer(g[2])) {
ip += 4;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: jcmp");
return 1;
}
#ifdef STATS
opcodeCounters[1183].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

jcmp_3_4:
{
if (IsInt(g[3]) && IsInt(g[4])) {
if (g[3].i < g[4].i)
ip += *(ip + 1);
else if(g[3].i == g[4].i)
ip += *(ip + 2);
else
ip += *(ip + 3);
}
else if (IsPointer(g[3]) && IsPointer(g[4])) {
if (g[3].p == g[4].p)
ip += *(ip + 1);
else
ip += *(ip + 2);
}
else if (IsPointer(g[3]) && IsInt(g[4])) {
ip += 4;
}
else if (IsInt(g[3]) && IsPointer(g[4])) {
ip += 4;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: jcmp");
return 1;
}
#ifdef STATS
opcodeCounters[1184].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

jcmp_3_5:
{
if (IsInt(g[3]) && IsInt(g[5])) {
if (g[3].i < g[5].i)
ip += *(ip + 1);
else if(g[3].i == g[5].i)
ip += *(ip + 2);
else
ip += *(ip + 3);
}
else if (IsPointer(g[3]) && IsPointer(g[5])) {
if (g[3].p == g[5].p)
ip += *(ip + 1);
else
ip += *(ip + 2);
}
else if (IsPointer(g[3]) && IsInt(g[5])) {
ip += 4;
}
else if (IsInt(g[3]) && IsPointer(g[5])) {
ip += 4;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: jcmp");
return 1;
}
#ifdef STATS
opcodeCounters[1185].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

jcmp_4_0:
{
if (IsInt(g[4]) && IsInt(g[0])) {
if (g[4].i < g[0].i)
ip += *(ip + 1);
else if(g[4].i == g[0].i)
ip += *(ip + 2);
else
ip += *(ip + 3);
}
else if (IsPointer(g[4]) && IsPointer(g[0])) {
if (g[4].p == g[0].p)
ip += *(ip + 1);
else
ip += *(ip + 2);
}
else if (IsPointer(g[4]) && IsInt(g[0])) {
ip += 4;
}
else if (IsInt(g[4]) && IsPointer(g[0])) {
ip += 4;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: jcmp");
return 1;
}
#ifdef STATS
opcodeCounters[1186].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

jcmp_4_1:
{
if (IsInt(g[4]) && IsInt(g[1])) {
if (g[4].i < g[1].i)
ip += *(ip + 1);
else if(g[4].i == g[1].i)
ip += *(ip + 2);
else
ip += *(ip + 3);
}
else if (IsPointer(g[4]) && IsPointer(g[1])) {
if (g[4].p == g[1].p)
ip += *(ip + 1);
else
ip += *(ip + 2);
}
else if (IsPointer(g[4]) && IsInt(g[1])) {
ip += 4;
}
else if (IsInt(g[4]) && IsPointer(g[1])) {
ip += 4;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: jcmp");
return 1;
}
#ifdef STATS
opcodeCounters[1187].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

jcmp_4_2:
{
if (IsInt(g[4]) && IsInt(g[2])) {
if (g[4].i < g[2].i)
ip += *(ip + 1);
else if(g[4].i == g[2].i)
ip += *(ip + 2);
else
ip += *(ip + 3);
}
else if (IsPointer(g[4]) && IsPointer(g[2])) {
if (g[4].p == g[2].p)
ip += *(ip + 1);
else
ip += *(ip + 2);
}
else if (IsPointer(g[4]) && IsInt(g[2])) {
ip += 4;
}
else if (IsInt(g[4]) && IsPointer(g[2])) {
ip += 4;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: jcmp");
return 1;
}
#ifdef STATS
opcodeCounters[1188].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

jcmp_4_3:
{
if (IsInt(g[4]) && IsInt(g[3])) {
if (g[4].i < g[3].i)
ip += *(ip + 1);
else if(g[4].i == g[3].i)
ip += *(ip + 2);
else
ip += *(ip + 3);
}
else if (IsPointer(g[4]) && IsPointer(g[3])) {
if (g[4].p == g[3].p)
ip += *(ip + 1);
else
ip += *(ip + 2);
}
else if (IsPointer(g[4]) && IsInt(g[3])) {
ip += 4;
}
else if (IsInt(g[4]) && IsPointer(g[3])) {
ip += 4;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: jcmp");
return 1;
}
#ifdef STATS
opcodeCounters[1189].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

jcmp_4_5:
{
if (IsInt(g[4]) && IsInt(g[5])) {
if (g[4].i < g[5].i)
ip += *(ip + 1);
else if(g[4].i == g[5].i)
ip += *(ip + 2);
else
ip += *(ip + 3);
}
else if (IsPointer(g[4]) && IsPointer(g[5])) {
if (g[4].p == g[5].p)
ip += *(ip + 1);
else
ip += *(ip + 2);
}
else if (IsPointer(g[4]) && IsInt(g[5])) {
ip += 4;
}
else if (IsInt(g[4]) && IsPointer(g[5])) {
ip += 4;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: jcmp");
return 1;
}
#ifdef STATS
opcodeCounters[1190].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

jcmp_5_0:
{
if (IsInt(g[5]) && IsInt(g[0])) {
if (g[5].i < g[0].i)
ip += *(ip + 1);
else if(g[5].i == g[0].i)
ip += *(ip + 2);
else
ip += *(ip + 3);
}
else if (IsPointer(g[5]) && IsPointer(g[0])) {
if (g[5].p == g[0].p)
ip += *(ip + 1);
else
ip += *(ip + 2);
}
else if (IsPointer(g[5]) && IsInt(g[0])) {
ip += 4;
}
else if (IsInt(g[5]) && IsPointer(g[0])) {
ip += 4;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: jcmp");
return 1;
}
#ifdef STATS
opcodeCounters[1191].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

jcmp_5_1:
{
if (IsInt(g[5]) && IsInt(g[1])) {
if (g[5].i < g[1].i)
ip += *(ip + 1);
else if(g[5].i == g[1].i)
ip += *(ip + 2);
else
ip += *(ip + 3);
}
else if (IsPointer(g[5]) && IsPointer(g[1])) {
if (g[5].p == g[1].p)
ip += *(ip + 1);
else
ip += *(ip + 2);
}
else if (IsPointer(g[5]) && IsInt(g[1])) {
ip += 4;
}
else if (IsInt(g[5]) && IsPointer(g[1])) {
ip += 4;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: jcmp");
return 1;
}
#ifdef STATS
opcodeCounters[1192].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

jcmp_5_2:
{
if (IsInt(g[5]) && IsInt(g[2])) {
if (g[5].i < g[2].i)
ip += *(ip + 1);
else if(g[5].i == g[2].i)
ip += *(ip + 2);
else
ip += *(ip + 3);
}
else if (IsPointer(g[5]) && IsPointer(g[2])) {
if (g[5].p == g[2].p)
ip += *(ip + 1);
else
ip += *(ip + 2);
}
else if (IsPointer(g[5]) && IsInt(g[2])) {
ip += 4;
}
else if (IsInt(g[5]) && IsPointer(g[2])) {
ip += 4;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: jcmp");
return 1;
}
#ifdef STATS
opcodeCounters[1193].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

jcmp_5_3:
{
if (IsInt(g[5]) && IsInt(g[3])) {
if (g[5].i < g[3].i)
ip += *(ip + 1);
else if(g[5].i == g[3].i)
ip += *(ip + 2);
else
ip += *(ip + 3);
}
else if (IsPointer(g[5]) && IsPointer(g[3])) {
if (g[5].p == g[3].p)
ip += *(ip + 1);
else
ip += *(ip + 2);
}
else if (IsPointer(g[5]) && IsInt(g[3])) {
ip += 4;
}
else if (IsInt(g[5]) && IsPointer(g[3])) {
ip += 4;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: jcmp");
return 1;
}
#ifdef STATS
opcodeCounters[1194].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

jcmp_5_4:
{
if (IsInt(g[5]) && IsInt(g[4])) {
if (g[5].i < g[4].i)
ip += *(ip + 1);
else if(g[5].i == g[4].i)
ip += *(ip + 2);
else
ip += *(ip + 3);
}
else if (IsPointer(g[5]) && IsPointer(g[4])) {
if (g[5].p == g[4].p)
ip += *(ip + 1);
else
ip += *(ip + 2);
}
else if (IsPointer(g[5]) && IsInt(g[4])) {
ip += 4;
}
else if (IsInt(g[5]) && IsPointer(g[4])) {
ip += 4;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: jcmp");
return 1;
}
#ifdef STATS
opcodeCounters[1195].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

jcmpc_0:
{
if (IsInt(g[0])) {
int16_t dconstant = *(ip +1);
int64_t constant = *((int64_t*)(ip + dconstant));
if (g[0].i < constant)
ip += *(ip + 2);
else if(g[0].i == constant)
ip += *(ip + 3);
else
ip += *(ip + 4);
}
else if (IsPointer(g[0])) {
ip += 5;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: jcmpc");
return 1;
}
#ifdef STATS
opcodeCounters[1196].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

jcmpc_1:
{
if (IsInt(g[1])) {
int16_t dconstant = *(ip +1);
int64_t constant = *((int64_t*)(ip + dconstant));
if (g[1].i < constant)
ip += *(ip + 2);
else if(g[1].i == constant)
ip += *(ip + 3);
else
ip += *(ip + 4);
}
else if (IsPointer(g[1])) {
ip += 5;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: jcmpc");
return 1;
}
#ifdef STATS
opcodeCounters[1197].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

jcmpc_2:
{
if (IsInt(g[2])) {
int16_t dconstant = *(ip +1);
int64_t constant = *((int64_t*)(ip + dconstant));
if (g[2].i < constant)
ip += *(ip + 2);
else if(g[2].i == constant)
ip += *(ip + 3);
else
ip += *(ip + 4);
}
else if (IsPointer(g[2])) {
ip += 5;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: jcmpc");
return 1;
}
#ifdef STATS
opcodeCounters[1198].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

jcmpc_3:
{
if (IsInt(g[3])) {
int16_t dconstant = *(ip +1);
int64_t constant = *((int64_t*)(ip + dconstant));
if (g[3].i < constant)
ip += *(ip + 2);
else if(g[3].i == constant)
ip += *(ip + 3);
else
ip += *(ip + 4);
}
else if (IsPointer(g[3])) {
ip += 5;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: jcmpc");
return 1;
}
#ifdef STATS
opcodeCounters[1199].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

jcmpc_4:
{
if (IsInt(g[4])) {
int16_t dconstant = *(ip +1);
int64_t constant = *((int64_t*)(ip + dconstant));
if (g[4].i < constant)
ip += *(ip + 2);
else if(g[4].i == constant)
ip += *(ip + 3);
else
ip += *(ip + 4);
}
else if (IsPointer(g[4])) {
ip += 5;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: jcmpc");
return 1;
}
#ifdef STATS
opcodeCounters[1200].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

jcmpc_5:
{
if (IsInt(g[5])) {
int16_t dconstant = *(ip +1);
int64_t constant = *((int64_t*)(ip + dconstant));
if (g[5].i < constant)
ip += *(ip + 2);
else if(g[5].i == constant)
ip += *(ip + 3);
else
ip += *(ip + 4);
}
else if (IsPointer(g[5])) {
ip += 5;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: jcmpc");
return 1;
}
#ifdef STATS
opcodeCounters[1201].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

jnullp_0:
{
if (IsPointer(g[0])) {
if (g[0].p != NULL)
ip += *(ip + 1);
else
ip += *(ip + 2);
}
else if (IsInt(g[0])) {
ip += 5;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: jnullp");
return 1;
}
#ifdef STATS
opcodeCounters[1202].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

jnullp_1:
{
if (IsPointer(g[1])) {
if (g[1].p != NULL)
ip += *(ip + 1);
else
ip += *(ip + 2);
}
else if (IsInt(g[1])) {
ip += 5;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: jnullp");
return 1;
}
#ifdef STATS
opcodeCounters[1203].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

jnullp_2:
{
if (IsPointer(g[2])) {
if (g[2].p != NULL)
ip += *(ip + 1);
else
ip += *(ip + 2);
}
else if (IsInt(g[2])) {
ip += 5;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: jnullp");
return 1;
}
#ifdef STATS
opcodeCounters[1204].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

jnullp_3:
{
if (IsPointer(g[3])) {
if (g[3].p != NULL)
ip += *(ip + 1);
else
ip += *(ip + 2);
}
else if (IsInt(g[3])) {
ip += 5;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: jnullp");
return 1;
}
#ifdef STATS
opcodeCounters[1205].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

jnullp_4:
{
if (IsPointer(g[4])) {
if (g[4].p != NULL)
ip += *(ip + 1);
else
ip += *(ip + 2);
}
else if (IsInt(g[4])) {
ip += 5;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: jnullp");
return 1;
}
#ifdef STATS
opcodeCounters[1206].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

jnullp_5:
{
if (IsPointer(g[5])) {
if (g[5].p != NULL)
ip += *(ip + 1);
else
ip += *(ip + 2);
}
else if (IsInt(g[5])) {
ip += 5;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: jnullp");
return 1;
}
#ifdef STATS
opcodeCounters[1207].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

call:
{
int16_t *newip = ip + *(ip + 1);
int64_t *sizep = (int64_t*)newip;
int64_t size = sizeof(stackframe) + sizeof(value) * (*sizep);
stackframe *base = (stackframe*)malloc(size);
if (base) {
base->fp = fp; base->ip = ip; base->ts = ts;
SaveRegisters(base->g, g);
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
opcodeCounters[1208].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

ret:
{
stackframe *cur = (stackframe*)((size_t)fp - sizeof(stackframe));
fp = cur->fp; ip = cur->ip;RestoreTS(cur->ts, ts);
RestoreRegisters(cur->g, g);
free(cur);
if (fp == NULL)
{
    #ifdef STATS
    printStats();
    #endif /* STATS */
    return 0;
}
ip += 4;
#ifdef STATS
opcodeCounters[1209].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

newo_0_1:
{
if (IsInt(g[1])) {
object *base = (object*)malloc(sizeof(object) + sizeof(value)* g[1].i);
if (base) {
base->sf = MakeSizeAndFlags(size,0);
g[0].tag = 2;
g[0].p = base;
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
opcodeCounters[1210].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

newo_0_2:
{
if (IsInt(g[2])) {
object *base = (object*)malloc(sizeof(object) + sizeof(value)* g[2].i);
if (base) {
base->sf = MakeSizeAndFlags(size,0);
g[0].tag = 2;
g[0].p = base;
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
opcodeCounters[1211].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

newo_0_3:
{
if (IsInt(g[3])) {
object *base = (object*)malloc(sizeof(object) + sizeof(value)* g[3].i);
if (base) {
base->sf = MakeSizeAndFlags(size,0);
g[0].tag = 2;
g[0].p = base;
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
opcodeCounters[1212].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

newo_0_4:
{
if (IsInt(g[4])) {
object *base = (object*)malloc(sizeof(object) + sizeof(value)* g[4].i);
if (base) {
base->sf = MakeSizeAndFlags(size,0);
g[0].tag = 2;
g[0].p = base;
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
opcodeCounters[1213].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

newo_0_5:
{
if (IsInt(g[5])) {
object *base = (object*)malloc(sizeof(object) + sizeof(value)* g[5].i);
if (base) {
base->sf = MakeSizeAndFlags(size,0);
g[0].tag = 2;
g[0].p = base;
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
opcodeCounters[1214].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

newo_1_0:
{
if (IsInt(g[0])) {
object *base = (object*)malloc(sizeof(object) + sizeof(value)* g[0].i);
if (base) {
base->sf = MakeSizeAndFlags(size,0);
g[1].tag = 2;
g[1].p = base;
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
opcodeCounters[1215].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

newo_1_2:
{
if (IsInt(g[2])) {
object *base = (object*)malloc(sizeof(object) + sizeof(value)* g[2].i);
if (base) {
base->sf = MakeSizeAndFlags(size,0);
g[1].tag = 2;
g[1].p = base;
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
opcodeCounters[1216].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

newo_1_3:
{
if (IsInt(g[3])) {
object *base = (object*)malloc(sizeof(object) + sizeof(value)* g[3].i);
if (base) {
base->sf = MakeSizeAndFlags(size,0);
g[1].tag = 2;
g[1].p = base;
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
opcodeCounters[1217].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

newo_1_4:
{
if (IsInt(g[4])) {
object *base = (object*)malloc(sizeof(object) + sizeof(value)* g[4].i);
if (base) {
base->sf = MakeSizeAndFlags(size,0);
g[1].tag = 2;
g[1].p = base;
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
opcodeCounters[1218].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

newo_1_5:
{
if (IsInt(g[5])) {
object *base = (object*)malloc(sizeof(object) + sizeof(value)* g[5].i);
if (base) {
base->sf = MakeSizeAndFlags(size,0);
g[1].tag = 2;
g[1].p = base;
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
opcodeCounters[1219].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

newo_2_0:
{
if (IsInt(g[0])) {
object *base = (object*)malloc(sizeof(object) + sizeof(value)* g[0].i);
if (base) {
base->sf = MakeSizeAndFlags(size,0);
g[2].tag = 2;
g[2].p = base;
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
opcodeCounters[1220].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

newo_2_1:
{
if (IsInt(g[1])) {
object *base = (object*)malloc(sizeof(object) + sizeof(value)* g[1].i);
if (base) {
base->sf = MakeSizeAndFlags(size,0);
g[2].tag = 2;
g[2].p = base;
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
opcodeCounters[1221].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

newo_2_3:
{
if (IsInt(g[3])) {
object *base = (object*)malloc(sizeof(object) + sizeof(value)* g[3].i);
if (base) {
base->sf = MakeSizeAndFlags(size,0);
g[2].tag = 2;
g[2].p = base;
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
opcodeCounters[1222].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

newo_2_4:
{
if (IsInt(g[4])) {
object *base = (object*)malloc(sizeof(object) + sizeof(value)* g[4].i);
if (base) {
base->sf = MakeSizeAndFlags(size,0);
g[2].tag = 2;
g[2].p = base;
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
opcodeCounters[1223].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

newo_2_5:
{
if (IsInt(g[5])) {
object *base = (object*)malloc(sizeof(object) + sizeof(value)* g[5].i);
if (base) {
base->sf = MakeSizeAndFlags(size,0);
g[2].tag = 2;
g[2].p = base;
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
opcodeCounters[1224].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

newo_3_0:
{
if (IsInt(g[0])) {
object *base = (object*)malloc(sizeof(object) + sizeof(value)* g[0].i);
if (base) {
base->sf = MakeSizeAndFlags(size,0);
g[3].tag = 2;
g[3].p = base;
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
opcodeCounters[1225].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

newo_3_1:
{
if (IsInt(g[1])) {
object *base = (object*)malloc(sizeof(object) + sizeof(value)* g[1].i);
if (base) {
base->sf = MakeSizeAndFlags(size,0);
g[3].tag = 2;
g[3].p = base;
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
opcodeCounters[1226].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

newo_3_2:
{
if (IsInt(g[2])) {
object *base = (object*)malloc(sizeof(object) + sizeof(value)* g[2].i);
if (base) {
base->sf = MakeSizeAndFlags(size,0);
g[3].tag = 2;
g[3].p = base;
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
opcodeCounters[1227].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

newo_3_4:
{
if (IsInt(g[4])) {
object *base = (object*)malloc(sizeof(object) + sizeof(value)* g[4].i);
if (base) {
base->sf = MakeSizeAndFlags(size,0);
g[3].tag = 2;
g[3].p = base;
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
opcodeCounters[1228].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

newo_3_5:
{
if (IsInt(g[5])) {
object *base = (object*)malloc(sizeof(object) + sizeof(value)* g[5].i);
if (base) {
base->sf = MakeSizeAndFlags(size,0);
g[3].tag = 2;
g[3].p = base;
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
opcodeCounters[1229].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

newo_4_0:
{
if (IsInt(g[0])) {
object *base = (object*)malloc(sizeof(object) + sizeof(value)* g[0].i);
if (base) {
base->sf = MakeSizeAndFlags(size,0);
g[4].tag = 2;
g[4].p = base;
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
opcodeCounters[1230].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

newo_4_1:
{
if (IsInt(g[1])) {
object *base = (object*)malloc(sizeof(object) + sizeof(value)* g[1].i);
if (base) {
base->sf = MakeSizeAndFlags(size,0);
g[4].tag = 2;
g[4].p = base;
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
opcodeCounters[1231].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

newo_4_2:
{
if (IsInt(g[2])) {
object *base = (object*)malloc(sizeof(object) + sizeof(value)* g[2].i);
if (base) {
base->sf = MakeSizeAndFlags(size,0);
g[4].tag = 2;
g[4].p = base;
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
opcodeCounters[1232].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

newo_4_3:
{
if (IsInt(g[3])) {
object *base = (object*)malloc(sizeof(object) + sizeof(value)* g[3].i);
if (base) {
base->sf = MakeSizeAndFlags(size,0);
g[4].tag = 2;
g[4].p = base;
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
opcodeCounters[1233].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

newo_4_5:
{
if (IsInt(g[5])) {
object *base = (object*)malloc(sizeof(object) + sizeof(value)* g[5].i);
if (base) {
base->sf = MakeSizeAndFlags(size,0);
g[4].tag = 2;
g[4].p = base;
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
opcodeCounters[1234].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

newo_5_0:
{
if (IsInt(g[0])) {
object *base = (object*)malloc(sizeof(object) + sizeof(value)* g[0].i);
if (base) {
base->sf = MakeSizeAndFlags(size,0);
g[5].tag = 2;
g[5].p = base;
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
opcodeCounters[1235].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

newo_5_1:
{
if (IsInt(g[1])) {
object *base = (object*)malloc(sizeof(object) + sizeof(value)* g[1].i);
if (base) {
base->sf = MakeSizeAndFlags(size,0);
g[5].tag = 2;
g[5].p = base;
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
opcodeCounters[1236].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

newo_5_2:
{
if (IsInt(g[2])) {
object *base = (object*)malloc(sizeof(object) + sizeof(value)* g[2].i);
if (base) {
base->sf = MakeSizeAndFlags(size,0);
g[5].tag = 2;
g[5].p = base;
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
opcodeCounters[1237].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

newo_5_3:
{
if (IsInt(g[3])) {
object *base = (object*)malloc(sizeof(object) + sizeof(value)* g[3].i);
if (base) {
base->sf = MakeSizeAndFlags(size,0);
g[5].tag = 2;
g[5].p = base;
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
opcodeCounters[1238].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

newo_5_4:
{
if (IsInt(g[4])) {
object *base = (object*)malloc(sizeof(object) + sizeof(value)* g[4].i);
if (base) {
base->sf = MakeSizeAndFlags(size,0);
g[5].tag = 2;
g[5].p = base;
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
opcodeCounters[1239].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

newb_0_1:
{
if (IsInt(g[1])) {
buffer *base = (buffer*)malloc(sizeof(buffer) + sizeof(int8_t)*g[1].i);
if (base) {
    base->sf = MakeSizeAndFlags(g[1].i,0);
    g[0].tag = 4;
        g[0].p = base;
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
opcodeCounters[1240].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

newb_0_2:
{
if (IsInt(g[2])) {
buffer *base = (buffer*)malloc(sizeof(buffer) + sizeof(int8_t)*g[2].i);
if (base) {
    base->sf = MakeSizeAndFlags(g[2].i,0);
    g[0].tag = 4;
        g[0].p = base;
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
opcodeCounters[1241].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

newb_0_3:
{
if (IsInt(g[3])) {
buffer *base = (buffer*)malloc(sizeof(buffer) + sizeof(int8_t)*g[3].i);
if (base) {
    base->sf = MakeSizeAndFlags(g[3].i,0);
    g[0].tag = 4;
        g[0].p = base;
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
opcodeCounters[1242].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

newb_0_4:
{
if (IsInt(g[4])) {
buffer *base = (buffer*)malloc(sizeof(buffer) + sizeof(int8_t)*g[4].i);
if (base) {
    base->sf = MakeSizeAndFlags(g[4].i,0);
    g[0].tag = 4;
        g[0].p = base;
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
opcodeCounters[1243].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

newb_0_5:
{
if (IsInt(g[5])) {
buffer *base = (buffer*)malloc(sizeof(buffer) + sizeof(int8_t)*g[5].i);
if (base) {
    base->sf = MakeSizeAndFlags(g[5].i,0);
    g[0].tag = 4;
        g[0].p = base;
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
opcodeCounters[1244].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

newb_1_0:
{
if (IsInt(g[0])) {
buffer *base = (buffer*)malloc(sizeof(buffer) + sizeof(int8_t)*g[0].i);
if (base) {
    base->sf = MakeSizeAndFlags(g[0].i,0);
    g[1].tag = 4;
        g[1].p = base;
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
opcodeCounters[1245].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

newb_1_2:
{
if (IsInt(g[2])) {
buffer *base = (buffer*)malloc(sizeof(buffer) + sizeof(int8_t)*g[2].i);
if (base) {
    base->sf = MakeSizeAndFlags(g[2].i,0);
    g[1].tag = 4;
        g[1].p = base;
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
opcodeCounters[1246].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

newb_1_3:
{
if (IsInt(g[3])) {
buffer *base = (buffer*)malloc(sizeof(buffer) + sizeof(int8_t)*g[3].i);
if (base) {
    base->sf = MakeSizeAndFlags(g[3].i,0);
    g[1].tag = 4;
        g[1].p = base;
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
opcodeCounters[1247].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

newb_1_4:
{
if (IsInt(g[4])) {
buffer *base = (buffer*)malloc(sizeof(buffer) + sizeof(int8_t)*g[4].i);
if (base) {
    base->sf = MakeSizeAndFlags(g[4].i,0);
    g[1].tag = 4;
        g[1].p = base;
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
opcodeCounters[1248].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

newb_1_5:
{
if (IsInt(g[5])) {
buffer *base = (buffer*)malloc(sizeof(buffer) + sizeof(int8_t)*g[5].i);
if (base) {
    base->sf = MakeSizeAndFlags(g[5].i,0);
    g[1].tag = 4;
        g[1].p = base;
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
opcodeCounters[1249].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

newb_2_0:
{
if (IsInt(g[0])) {
buffer *base = (buffer*)malloc(sizeof(buffer) + sizeof(int8_t)*g[0].i);
if (base) {
    base->sf = MakeSizeAndFlags(g[0].i,0);
    g[2].tag = 4;
        g[2].p = base;
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
opcodeCounters[1250].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

newb_2_1:
{
if (IsInt(g[1])) {
buffer *base = (buffer*)malloc(sizeof(buffer) + sizeof(int8_t)*g[1].i);
if (base) {
    base->sf = MakeSizeAndFlags(g[1].i,0);
    g[2].tag = 4;
        g[2].p = base;
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
opcodeCounters[1251].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

newb_2_3:
{
if (IsInt(g[3])) {
buffer *base = (buffer*)malloc(sizeof(buffer) + sizeof(int8_t)*g[3].i);
if (base) {
    base->sf = MakeSizeAndFlags(g[3].i,0);
    g[2].tag = 4;
        g[2].p = base;
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
opcodeCounters[1252].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

newb_2_4:
{
if (IsInt(g[4])) {
buffer *base = (buffer*)malloc(sizeof(buffer) + sizeof(int8_t)*g[4].i);
if (base) {
    base->sf = MakeSizeAndFlags(g[4].i,0);
    g[2].tag = 4;
        g[2].p = base;
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
opcodeCounters[1253].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

newb_2_5:
{
if (IsInt(g[5])) {
buffer *base = (buffer*)malloc(sizeof(buffer) + sizeof(int8_t)*g[5].i);
if (base) {
    base->sf = MakeSizeAndFlags(g[5].i,0);
    g[2].tag = 4;
        g[2].p = base;
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
opcodeCounters[1254].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

newb_3_0:
{
if (IsInt(g[0])) {
buffer *base = (buffer*)malloc(sizeof(buffer) + sizeof(int8_t)*g[0].i);
if (base) {
    base->sf = MakeSizeAndFlags(g[0].i,0);
    g[3].tag = 4;
        g[3].p = base;
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
opcodeCounters[1255].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

newb_3_1:
{
if (IsInt(g[1])) {
buffer *base = (buffer*)malloc(sizeof(buffer) + sizeof(int8_t)*g[1].i);
if (base) {
    base->sf = MakeSizeAndFlags(g[1].i,0);
    g[3].tag = 4;
        g[3].p = base;
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
opcodeCounters[1256].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

newb_3_2:
{
if (IsInt(g[2])) {
buffer *base = (buffer*)malloc(sizeof(buffer) + sizeof(int8_t)*g[2].i);
if (base) {
    base->sf = MakeSizeAndFlags(g[2].i,0);
    g[3].tag = 4;
        g[3].p = base;
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
opcodeCounters[1257].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

newb_3_4:
{
if (IsInt(g[4])) {
buffer *base = (buffer*)malloc(sizeof(buffer) + sizeof(int8_t)*g[4].i);
if (base) {
    base->sf = MakeSizeAndFlags(g[4].i,0);
    g[3].tag = 4;
        g[3].p = base;
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
opcodeCounters[1258].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

newb_3_5:
{
if (IsInt(g[5])) {
buffer *base = (buffer*)malloc(sizeof(buffer) + sizeof(int8_t)*g[5].i);
if (base) {
    base->sf = MakeSizeAndFlags(g[5].i,0);
    g[3].tag = 4;
        g[3].p = base;
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
opcodeCounters[1259].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

newb_4_0:
{
if (IsInt(g[0])) {
buffer *base = (buffer*)malloc(sizeof(buffer) + sizeof(int8_t)*g[0].i);
if (base) {
    base->sf = MakeSizeAndFlags(g[0].i,0);
    g[4].tag = 4;
        g[4].p = base;
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
opcodeCounters[1260].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

newb_4_1:
{
if (IsInt(g[1])) {
buffer *base = (buffer*)malloc(sizeof(buffer) + sizeof(int8_t)*g[1].i);
if (base) {
    base->sf = MakeSizeAndFlags(g[1].i,0);
    g[4].tag = 4;
        g[4].p = base;
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
opcodeCounters[1261].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

newb_4_2:
{
if (IsInt(g[2])) {
buffer *base = (buffer*)malloc(sizeof(buffer) + sizeof(int8_t)*g[2].i);
if (base) {
    base->sf = MakeSizeAndFlags(g[2].i,0);
    g[4].tag = 4;
        g[4].p = base;
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
opcodeCounters[1262].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

newb_4_3:
{
if (IsInt(g[3])) {
buffer *base = (buffer*)malloc(sizeof(buffer) + sizeof(int8_t)*g[3].i);
if (base) {
    base->sf = MakeSizeAndFlags(g[3].i,0);
    g[4].tag = 4;
        g[4].p = base;
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
opcodeCounters[1263].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

newb_4_5:
{
if (IsInt(g[5])) {
buffer *base = (buffer*)malloc(sizeof(buffer) + sizeof(int8_t)*g[5].i);
if (base) {
    base->sf = MakeSizeAndFlags(g[5].i,0);
    g[4].tag = 4;
        g[4].p = base;
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
opcodeCounters[1264].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

newb_5_0:
{
if (IsInt(g[0])) {
buffer *base = (buffer*)malloc(sizeof(buffer) + sizeof(int8_t)*g[0].i);
if (base) {
    base->sf = MakeSizeAndFlags(g[0].i,0);
    g[5].tag = 4;
        g[5].p = base;
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
opcodeCounters[1265].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

newb_5_1:
{
if (IsInt(g[1])) {
buffer *base = (buffer*)malloc(sizeof(buffer) + sizeof(int8_t)*g[1].i);
if (base) {
    base->sf = MakeSizeAndFlags(g[1].i,0);
    g[5].tag = 4;
        g[5].p = base;
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
opcodeCounters[1266].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

newb_5_2:
{
if (IsInt(g[2])) {
buffer *base = (buffer*)malloc(sizeof(buffer) + sizeof(int8_t)*g[2].i);
if (base) {
    base->sf = MakeSizeAndFlags(g[2].i,0);
    g[5].tag = 4;
        g[5].p = base;
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
opcodeCounters[1267].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

newb_5_3:
{
if (IsInt(g[3])) {
buffer *base = (buffer*)malloc(sizeof(buffer) + sizeof(int8_t)*g[3].i);
if (base) {
    base->sf = MakeSizeAndFlags(g[3].i,0);
    g[5].tag = 4;
        g[5].p = base;
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
opcodeCounters[1268].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

newb_5_4:
{
if (IsInt(g[4])) {
buffer *base = (buffer*)malloc(sizeof(buffer) + sizeof(int8_t)*g[4].i);
if (base) {
    base->sf = MakeSizeAndFlags(g[4].i,0);
    g[5].tag = 4;
        g[5].p = base;
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
opcodeCounters[1269].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

movsc_0:
{
int16_t dconstant = *(ip +1);
int64_t constant = *((int64_t*)(ip + dconstant));
buffer *base = (buffer*)malloc(sizeof(buffer) + sizeof(int8_t)*constant);
if (base) {
    base->sf = MakeSizeAndFlags(constant,0);
    strcpy((int8_t *)&(base->data) ,(int8_t *)(ip + dconstant + 4));
    g[0].tag = 4;
        g[0].p = base;
}
else {
    fprintf(stderr, "malloc failed");
    return 1;
}
ip += 2;
#ifdef STATS
opcodeCounters[1270].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

movsc_1:
{
int16_t dconstant = *(ip +1);
int64_t constant = *((int64_t*)(ip + dconstant));
buffer *base = (buffer*)malloc(sizeof(buffer) + sizeof(int8_t)*constant);
if (base) {
    base->sf = MakeSizeAndFlags(constant,0);
    strcpy((int8_t *)&(base->data) ,(int8_t *)(ip + dconstant + 4));
    g[1].tag = 4;
        g[1].p = base;
}
else {
    fprintf(stderr, "malloc failed");
    return 1;
}
ip += 2;
#ifdef STATS
opcodeCounters[1271].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

movsc_2:
{
int16_t dconstant = *(ip +1);
int64_t constant = *((int64_t*)(ip + dconstant));
buffer *base = (buffer*)malloc(sizeof(buffer) + sizeof(int8_t)*constant);
if (base) {
    base->sf = MakeSizeAndFlags(constant,0);
    strcpy((int8_t *)&(base->data) ,(int8_t *)(ip + dconstant + 4));
    g[2].tag = 4;
        g[2].p = base;
}
else {
    fprintf(stderr, "malloc failed");
    return 1;
}
ip += 2;
#ifdef STATS
opcodeCounters[1272].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

movsc_3:
{
int16_t dconstant = *(ip +1);
int64_t constant = *((int64_t*)(ip + dconstant));
buffer *base = (buffer*)malloc(sizeof(buffer) + sizeof(int8_t)*constant);
if (base) {
    base->sf = MakeSizeAndFlags(constant,0);
    strcpy((int8_t *)&(base->data) ,(int8_t *)(ip + dconstant + 4));
    g[3].tag = 4;
        g[3].p = base;
}
else {
    fprintf(stderr, "malloc failed");
    return 1;
}
ip += 2;
#ifdef STATS
opcodeCounters[1273].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

movsc_4:
{
int16_t dconstant = *(ip +1);
int64_t constant = *((int64_t*)(ip + dconstant));
buffer *base = (buffer*)malloc(sizeof(buffer) + sizeof(int8_t)*constant);
if (base) {
    base->sf = MakeSizeAndFlags(constant,0);
    strcpy((int8_t *)&(base->data) ,(int8_t *)(ip + dconstant + 4));
    g[4].tag = 4;
        g[4].p = base;
}
else {
    fprintf(stderr, "malloc failed");
    return 1;
}
ip += 2;
#ifdef STATS
opcodeCounters[1274].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

movsc_5:
{
int16_t dconstant = *(ip +1);
int64_t constant = *((int64_t*)(ip + dconstant));
buffer *base = (buffer*)malloc(sizeof(buffer) + sizeof(int8_t)*constant);
if (base) {
    base->sf = MakeSizeAndFlags(constant,0);
    strcpy((int8_t *)&(base->data) ,(int8_t *)(ip + dconstant + 4));
    g[5].tag = 4;
        g[5].p = base;
}
else {
    fprintf(stderr, "malloc failed");
    return 1;
}
ip += 2;
#ifdef STATS
opcodeCounters[1275].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

err:
{
int16_t derrdisp = *(ip +1);
int64_t errdisp = *((int64_t*)(ip + derrdisp));
printf("0:%d 1:%d 2:%d 3:%d 4:%d 5:%d\n", g[0].i, g[1].i, g[2].i, g[3].i,  g[4].i, g[5].i); 
ip++;
#ifdef STATS
opcodeCounters[1276].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

in_0:
{
if (IsPointer(g[0])) {
buffer *bp = g[0].p;
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
opcodeCounters[1277].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

in_1:
{
if (IsPointer(g[1])) {
buffer *bp = g[1].p;
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
opcodeCounters[1278].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

in_2:
{
if (IsPointer(g[2])) {
buffer *bp = g[2].p;
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
opcodeCounters[1279].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

in_3:
{
if (IsPointer(g[3])) {
buffer *bp = g[3].p;
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
opcodeCounters[1280].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

in_4:
{
if (IsPointer(g[4])) {
buffer *bp = g[4].p;
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
opcodeCounters[1281].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

in_5:
{
if (IsPointer(g[5])) {
buffer *bp = g[5].p;
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
opcodeCounters[1282].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

out_0:
{
if (IsPointer(g[0])) {
buffer *bp = g[0].p;
fwrite(bp->data, sizeof(int8_t), GetSize(bp->sf), stdout);
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: out");
return 1;
}
#ifdef STATS
opcodeCounters[1283].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

out_1:
{
if (IsPointer(g[1])) {
buffer *bp = g[1].p;
fwrite(bp->data, sizeof(int8_t), GetSize(bp->sf), stdout);
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: out");
return 1;
}
#ifdef STATS
opcodeCounters[1284].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

out_2:
{
if (IsPointer(g[2])) {
buffer *bp = g[2].p;
fwrite(bp->data, sizeof(int8_t), GetSize(bp->sf), stdout);
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: out");
return 1;
}
#ifdef STATS
opcodeCounters[1285].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

out_3:
{
if (IsPointer(g[3])) {
buffer *bp = g[3].p;
fwrite(bp->data, sizeof(int8_t), GetSize(bp->sf), stdout);
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: out");
return 1;
}
#ifdef STATS
opcodeCounters[1286].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

out_4:
{
if (IsPointer(g[4])) {
buffer *bp = g[4].p;
fwrite(bp->data, sizeof(int8_t), GetSize(bp->sf), stdout);
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: out");
return 1;
}
#ifdef STATS
opcodeCounters[1287].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

out_5:
{
if (IsPointer(g[5])) {
buffer *bp = g[5].p;
fwrite(bp->data, sizeof(int8_t), GetSize(bp->sf), stdout);
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: out");
return 1;
}
#ifdef STATS
opcodeCounters[1288].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

print_0:
{
if (IsPointer(g[0])) {
buffer *bp = g[0].p;
puts(bp->data);
ip++;
}
else if (IsInt(g[0])) {
printf("%d\n", g[0].i);
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: print");
return 1;
}
#ifdef STATS
opcodeCounters[1289].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

print_1:
{
if (IsPointer(g[1])) {
buffer *bp = g[1].p;
puts(bp->data);
ip++;
}
else if (IsInt(g[1])) {
printf("%d\n", g[1].i);
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: print");
return 1;
}
#ifdef STATS
opcodeCounters[1290].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

print_2:
{
if (IsPointer(g[2])) {
buffer *bp = g[2].p;
puts(bp->data);
ip++;
}
else if (IsInt(g[2])) {
printf("%d\n", g[2].i);
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: print");
return 1;
}
#ifdef STATS
opcodeCounters[1291].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

print_3:
{
if (IsPointer(g[3])) {
buffer *bp = g[3].p;
puts(bp->data);
ip++;
}
else if (IsInt(g[3])) {
printf("%d\n", g[3].i);
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: print");
return 1;
}
#ifdef STATS
opcodeCounters[1292].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

print_4:
{
if (IsPointer(g[4])) {
buffer *bp = g[4].p;
puts(bp->data);
ip++;
}
else if (IsInt(g[4])) {
printf("%d\n", g[4].i);
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: print");
return 1;
}
#ifdef STATS
opcodeCounters[1293].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
}

print_5:
{
if (IsPointer(g[5])) {
buffer *bp = g[5].p;
puts(bp->data);
ip++;
}
else if (IsInt(g[5])) {
printf("%d\n", g[5].i);
ip++;
}
else {
fprintf(stderr, "type error, illegal types used for instruction: print");
return 1;
}
#ifdef STATS
opcodeCounters[1294].count++;
#endif /* STATS */
goto *dynOpcodes[ts + *ip];
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

