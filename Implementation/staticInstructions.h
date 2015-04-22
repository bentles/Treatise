addii_0_0:
{
g[0].i += g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

addii_0_1:
{
g[0].i += g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

addii_0_2:
{
g[0].i += g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

addii_0_3:
{
g[0].i += g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

addii_0_4:
{
g[0].i += g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

addii_0_5:
{
g[0].i += g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

addii_1_0:
{
g[1].i += g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

addii_1_1:
{
g[1].i += g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

addii_1_2:
{
g[1].i += g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

addii_1_3:
{
g[1].i += g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

addii_1_4:
{
g[1].i += g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

addii_1_5:
{
g[1].i += g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

addii_2_0:
{
g[2].i += g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

addii_2_1:
{
g[2].i += g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

addii_2_2:
{
g[2].i += g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

addii_2_3:
{
g[2].i += g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

addii_2_4:
{
g[2].i += g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

addii_2_5:
{
g[2].i += g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

addii_3_0:
{
g[3].i += g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

addii_3_1:
{
g[3].i += g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

addii_3_2:
{
g[3].i += g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

addii_3_3:
{
g[3].i += g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

addii_3_4:
{
g[3].i += g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

addii_3_5:
{
g[3].i += g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

addii_4_0:
{
g[4].i += g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

addii_4_1:
{
g[4].i += g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

addii_4_2:
{
g[4].i += g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

addii_4_3:
{
g[4].i += g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

addii_4_4:
{
g[4].i += g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

addii_4_5:
{
g[4].i += g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

addii_5_0:
{
g[5].i += g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

addii_5_1:
{
g[5].i += g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

addii_5_2:
{
g[5].i += g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

addii_5_3:
{
g[5].i += g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

addii_5_4:
{
g[5].i += g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

addii_5_5:
{
g[5].i += g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

addik_0:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[0].i += constant;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

addik_1:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[1].i += constant;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

addik_2:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[2].i += constant;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

addik_3:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[3].i += constant;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

addik_4:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[4].i += constant;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

addik_5:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[5].i += constant;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

subii_0_1:
{
g[0].i -= g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

subii_0_2:
{
g[0].i -= g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

subii_0_3:
{
g[0].i -= g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

subii_0_4:
{
g[0].i -= g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

subii_0_5:
{
g[0].i -= g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

subii_1_0:
{
g[1].i -= g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

subii_1_2:
{
g[1].i -= g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

subii_1_3:
{
g[1].i -= g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

subii_1_4:
{
g[1].i -= g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

subii_1_5:
{
g[1].i -= g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

subii_2_0:
{
g[2].i -= g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

subii_2_1:
{
g[2].i -= g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

subii_2_3:
{
g[2].i -= g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

subii_2_4:
{
g[2].i -= g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

subii_2_5:
{
g[2].i -= g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

subii_3_0:
{
g[3].i -= g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

subii_3_1:
{
g[3].i -= g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

subii_3_2:
{
g[3].i -= g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

subii_3_4:
{
g[3].i -= g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

subii_3_5:
{
g[3].i -= g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

subii_4_0:
{
g[4].i -= g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

subii_4_1:
{
g[4].i -= g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

subii_4_2:
{
g[4].i -= g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

subii_4_3:
{
g[4].i -= g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

subii_4_5:
{
g[4].i -= g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

subii_5_0:
{
g[5].i -= g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

subii_5_1:
{
g[5].i -= g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

subii_5_2:
{
g[5].i -= g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

subii_5_3:
{
g[5].i -= g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

subii_5_4:
{
g[5].i -= g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

subki_0:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[0].i = constant - g[0].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

subki_1:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[1].i = constant - g[1].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

subki_2:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[2].i = constant - g[2].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

subki_3:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[3].i = constant - g[3].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

subki_4:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[4].i = constant - g[4].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

subki_5:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[5].i = constant - g[5].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

orii_0_1:
{
g[0].i |= g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

orii_0_2:
{
g[0].i |= g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

orii_0_3:
{
g[0].i |= g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

orii_0_4:
{
g[0].i |= g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

orii_0_5:
{
g[0].i |= g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

orii_1_0:
{
g[1].i |= g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

orii_1_2:
{
g[1].i |= g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

orii_1_3:
{
g[1].i |= g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

orii_1_4:
{
g[1].i |= g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

orii_1_5:
{
g[1].i |= g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

orii_2_0:
{
g[2].i |= g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

orii_2_1:
{
g[2].i |= g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

orii_2_3:
{
g[2].i |= g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

orii_2_4:
{
g[2].i |= g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

orii_2_5:
{
g[2].i |= g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

orii_3_0:
{
g[3].i |= g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

orii_3_1:
{
g[3].i |= g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

orii_3_2:
{
g[3].i |= g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

orii_3_4:
{
g[3].i |= g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

orii_3_5:
{
g[3].i |= g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

orii_4_0:
{
g[4].i |= g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

orii_4_1:
{
g[4].i |= g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

orii_4_2:
{
g[4].i |= g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

orii_4_3:
{
g[4].i |= g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

orii_4_5:
{
g[4].i |= g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

orii_5_0:
{
g[5].i |= g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

orii_5_1:
{
g[5].i |= g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

orii_5_2:
{
g[5].i |= g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

orii_5_3:
{
g[5].i |= g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

orii_5_4:
{
g[5].i |= g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

orki_0:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[0].i |= constant;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

orki_1:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[1].i |= constant;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

orki_2:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[2].i |= constant;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

orki_3:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[3].i |= constant;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

orki_4:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[4].i |= constant;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

orki_5:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[5].i |= constant;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

xorii_0_1:
{
g[0].i ^= g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

xorii_0_2:
{
g[0].i ^= g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

xorii_0_3:
{
g[0].i ^= g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

xorii_0_4:
{
g[0].i ^= g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

xorii_0_5:
{
g[0].i ^= g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

xorii_1_0:
{
g[1].i ^= g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

xorii_1_2:
{
g[1].i ^= g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

xorii_1_3:
{
g[1].i ^= g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

xorii_1_4:
{
g[1].i ^= g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

xorii_1_5:
{
g[1].i ^= g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

xorii_2_0:
{
g[2].i ^= g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

xorii_2_1:
{
g[2].i ^= g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

xorii_2_3:
{
g[2].i ^= g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

xorii_2_4:
{
g[2].i ^= g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

xorii_2_5:
{
g[2].i ^= g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

xorii_3_0:
{
g[3].i ^= g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

xorii_3_1:
{
g[3].i ^= g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

xorii_3_2:
{
g[3].i ^= g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

xorii_3_4:
{
g[3].i ^= g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

xorii_3_5:
{
g[3].i ^= g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

xorii_4_0:
{
g[4].i ^= g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

xorii_4_1:
{
g[4].i ^= g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

xorii_4_2:
{
g[4].i ^= g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

xorii_4_3:
{
g[4].i ^= g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

xorii_4_5:
{
g[4].i ^= g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

xorii_5_0:
{
g[5].i ^= g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

xorii_5_1:
{
g[5].i ^= g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

xorii_5_2:
{
g[5].i ^= g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

xorii_5_3:
{
g[5].i ^= g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

xorii_5_4:
{
g[5].i ^= g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shlii_0_1:
{
g[0].i <<= g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shlii_0_2:
{
g[0].i <<= g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shlii_0_3:
{
g[0].i <<= g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shlii_0_4:
{
g[0].i <<= g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shlii_0_5:
{
g[0].i <<= g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shlii_1_0:
{
g[1].i <<= g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shlii_1_2:
{
g[1].i <<= g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shlii_1_3:
{
g[1].i <<= g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shlii_1_4:
{
g[1].i <<= g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shlii_1_5:
{
g[1].i <<= g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shlii_2_0:
{
g[2].i <<= g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shlii_2_1:
{
g[2].i <<= g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shlii_2_3:
{
g[2].i <<= g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shlii_2_4:
{
g[2].i <<= g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shlii_2_5:
{
g[2].i <<= g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shlii_3_0:
{
g[3].i <<= g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shlii_3_1:
{
g[3].i <<= g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shlii_3_2:
{
g[3].i <<= g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shlii_3_4:
{
g[3].i <<= g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shlii_3_5:
{
g[3].i <<= g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shlii_4_0:
{
g[4].i <<= g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shlii_4_1:
{
g[4].i <<= g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shlii_4_2:
{
g[4].i <<= g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shlii_4_3:
{
g[4].i <<= g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shlii_4_5:
{
g[4].i <<= g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shlii_5_0:
{
g[5].i <<= g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shlii_5_1:
{
g[5].i <<= g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shlii_5_2:
{
g[5].i <<= g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shlii_5_3:
{
g[5].i <<= g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shlii_5_4:
{
g[5].i <<= g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shlik_0:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[0].i <<= constant;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

shlik_1:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[1].i <<= constant;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

shlik_2:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[2].i <<= constant;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

shlik_3:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[3].i <<= constant;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

shlik_4:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[4].i <<= constant;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

shlik_5:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[5].i <<= constant;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

shlki_0:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[0].i = constant << g[0].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

shlki_1:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[1].i = constant << g[1].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

shlki_2:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[2].i = constant << g[2].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

shlki_3:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[3].i = constant << g[3].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

shlki_4:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[4].i = constant << g[4].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

shlki_5:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[5].i = constant << g[5].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

shrii_0_1:
{
g[0].i = (uint64_t)g[0].i >> g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shrii_0_2:
{
g[0].i = (uint64_t)g[0].i >> g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shrii_0_3:
{
g[0].i = (uint64_t)g[0].i >> g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shrii_0_4:
{
g[0].i = (uint64_t)g[0].i >> g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shrii_0_5:
{
g[0].i = (uint64_t)g[0].i >> g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shrii_1_0:
{
g[1].i = (uint64_t)g[1].i >> g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shrii_1_2:
{
g[1].i = (uint64_t)g[1].i >> g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shrii_1_3:
{
g[1].i = (uint64_t)g[1].i >> g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shrii_1_4:
{
g[1].i = (uint64_t)g[1].i >> g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shrii_1_5:
{
g[1].i = (uint64_t)g[1].i >> g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shrii_2_0:
{
g[2].i = (uint64_t)g[2].i >> g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shrii_2_1:
{
g[2].i = (uint64_t)g[2].i >> g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shrii_2_3:
{
g[2].i = (uint64_t)g[2].i >> g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shrii_2_4:
{
g[2].i = (uint64_t)g[2].i >> g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shrii_2_5:
{
g[2].i = (uint64_t)g[2].i >> g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shrii_3_0:
{
g[3].i = (uint64_t)g[3].i >> g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shrii_3_1:
{
g[3].i = (uint64_t)g[3].i >> g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shrii_3_2:
{
g[3].i = (uint64_t)g[3].i >> g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shrii_3_4:
{
g[3].i = (uint64_t)g[3].i >> g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shrii_3_5:
{
g[3].i = (uint64_t)g[3].i >> g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shrii_4_0:
{
g[4].i = (uint64_t)g[4].i >> g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shrii_4_1:
{
g[4].i = (uint64_t)g[4].i >> g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shrii_4_2:
{
g[4].i = (uint64_t)g[4].i >> g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shrii_4_3:
{
g[4].i = (uint64_t)g[4].i >> g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shrii_4_5:
{
g[4].i = (uint64_t)g[4].i >> g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shrii_5_0:
{
g[5].i = (uint64_t)g[5].i >> g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shrii_5_1:
{
g[5].i = (uint64_t)g[5].i >> g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shrii_5_2:
{
g[5].i = (uint64_t)g[5].i >> g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shrii_5_3:
{
g[5].i = (uint64_t)g[5].i >> g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shrii_5_4:
{
g[5].i = (uint64_t)g[5].i >> g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shrik_0:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[0].i = (uint64_t)g[0].i >> constant;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

shrik_1:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[1].i = (uint64_t)g[1].i >> constant;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

shrik_2:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[2].i = (uint64_t)g[2].i >> constant;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

shrik_3:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[3].i = (uint64_t)g[3].i >> constant;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

shrik_4:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[4].i = (uint64_t)g[4].i >> constant;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

shrik_5:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[5].i = (uint64_t)g[5].i >> constant;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

shrki_0:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[0].i = (uint64_t)constant >> g[0].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

shrki_1:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[1].i = (uint64_t)constant >> g[1].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

shrki_2:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[2].i = (uint64_t)constant >> g[2].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

shrki_3:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[3].i = (uint64_t)constant >> g[3].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

shrki_4:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[4].i = (uint64_t)constant >> g[4].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

shrki_5:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[5].i = (uint64_t)constant >> g[5].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

sarii_0_1:
{
g[0].i >>= g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

sarii_0_2:
{
g[0].i >>= g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

sarii_0_3:
{
g[0].i >>= g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

sarii_0_4:
{
g[0].i >>= g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

sarii_0_5:
{
g[0].i >>= g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

sarii_1_0:
{
g[1].i >>= g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

sarii_1_2:
{
g[1].i >>= g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

sarii_1_3:
{
g[1].i >>= g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

sarii_1_4:
{
g[1].i >>= g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

sarii_1_5:
{
g[1].i >>= g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

sarii_2_0:
{
g[2].i >>= g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

sarii_2_1:
{
g[2].i >>= g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

sarii_2_3:
{
g[2].i >>= g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

sarii_2_4:
{
g[2].i >>= g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

sarii_2_5:
{
g[2].i >>= g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

sarii_3_0:
{
g[3].i >>= g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

sarii_3_1:
{
g[3].i >>= g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

sarii_3_2:
{
g[3].i >>= g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

sarii_3_4:
{
g[3].i >>= g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

sarii_3_5:
{
g[3].i >>= g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

sarii_4_0:
{
g[4].i >>= g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

sarii_4_1:
{
g[4].i >>= g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

sarii_4_2:
{
g[4].i >>= g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

sarii_4_3:
{
g[4].i >>= g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

sarii_4_5:
{
g[4].i >>= g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

sarii_5_0:
{
g[5].i >>= g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

sarii_5_1:
{
g[5].i >>= g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

sarii_5_2:
{
g[5].i >>= g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

sarii_5_3:
{
g[5].i >>= g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

sarii_5_4:
{
g[5].i >>= g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

sarik_0:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[0].i >>= constant;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

sarik_1:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[1].i >>= constant;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

sarik_2:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[2].i >>= constant;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

sarik_3:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[3].i >>= constant;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

sarik_4:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[4].i >>= constant;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

sarik_5:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[5].i >>= constant;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

sarki_0:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[0].i = constant >> g[0].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

sarki_1:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[1].i = constant >> g[1].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

sarki_2:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[2].i = constant >> g[2].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

sarki_3:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[3].i = constant >> g[3].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

sarki_4:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[4].i = constant >> g[4].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

sarki_5:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[5].i = constant >> g[5].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

movii_0_1:
{
g[0].i = g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movii_0_2:
{
g[0].i = g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movii_0_3:
{
g[0].i = g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movii_0_4:
{
g[0].i = g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movii_0_5:
{
g[0].i = g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movii_1_0:
{
g[1].i = g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movii_1_2:
{
g[1].i = g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movii_1_3:
{
g[1].i = g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movii_1_4:
{
g[1].i = g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movii_1_5:
{
g[1].i = g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movii_2_0:
{
g[2].i = g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movii_2_1:
{
g[2].i = g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movii_2_3:
{
g[2].i = g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movii_2_4:
{
g[2].i = g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movii_2_5:
{
g[2].i = g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movii_3_0:
{
g[3].i = g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movii_3_1:
{
g[3].i = g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movii_3_2:
{
g[3].i = g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movii_3_4:
{
g[3].i = g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movii_3_5:
{
g[3].i = g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movii_4_0:
{
g[4].i = g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movii_4_1:
{
g[4].i = g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movii_4_2:
{
g[4].i = g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movii_4_3:
{
g[4].i = g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movii_4_5:
{
g[4].i = g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movii_5_0:
{
g[5].i = g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movii_5_1:
{
g[5].i = g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movii_5_2:
{
g[5].i = g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movii_5_3:
{
g[5].i = g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movii_5_4:
{
g[5].i = g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpp_0_1:
{
g[0].tag = g[1].tag;
g[0].p = g[1].p;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpp_0_2:
{
g[0].tag = g[2].tag;
g[0].p = g[2].p;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpp_0_3:
{
g[0].tag = g[3].tag;
g[0].p = g[3].p;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpp_0_4:
{
g[0].tag = g[4].tag;
g[0].p = g[4].p;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpp_0_5:
{
g[0].tag = g[5].tag;
g[0].p = g[5].p;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpp_1_0:
{
g[1].tag = g[0].tag;
g[1].p = g[0].p;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpp_1_2:
{
g[1].tag = g[2].tag;
g[1].p = g[2].p;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpp_1_3:
{
g[1].tag = g[3].tag;
g[1].p = g[3].p;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpp_1_4:
{
g[1].tag = g[4].tag;
g[1].p = g[4].p;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpp_1_5:
{
g[1].tag = g[5].tag;
g[1].p = g[5].p;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpp_2_0:
{
g[2].tag = g[0].tag;
g[2].p = g[0].p;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpp_2_1:
{
g[2].tag = g[1].tag;
g[2].p = g[1].p;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpp_2_3:
{
g[2].tag = g[3].tag;
g[2].p = g[3].p;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpp_2_4:
{
g[2].tag = g[4].tag;
g[2].p = g[4].p;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpp_2_5:
{
g[2].tag = g[5].tag;
g[2].p = g[5].p;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpp_3_0:
{
g[3].tag = g[0].tag;
g[3].p = g[0].p;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpp_3_1:
{
g[3].tag = g[1].tag;
g[3].p = g[1].p;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpp_3_2:
{
g[3].tag = g[2].tag;
g[3].p = g[2].p;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpp_3_4:
{
g[3].tag = g[4].tag;
g[3].p = g[4].p;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpp_3_5:
{
g[3].tag = g[5].tag;
g[3].p = g[5].p;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpp_4_0:
{
g[4].tag = g[0].tag;
g[4].p = g[0].p;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpp_4_1:
{
g[4].tag = g[1].tag;
g[4].p = g[1].p;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpp_4_2:
{
g[4].tag = g[2].tag;
g[4].p = g[2].p;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpp_4_3:
{
g[4].tag = g[3].tag;
g[4].p = g[3].p;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpp_4_5:
{
g[4].tag = g[5].tag;
g[4].p = g[5].p;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpp_5_0:
{
g[5].tag = g[0].tag;
g[5].p = g[0].p;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpp_5_1:
{
g[5].tag = g[1].tag;
g[5].p = g[1].p;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpp_5_2:
{
g[5].tag = g[2].tag;
g[5].p = g[2].p;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpp_5_3:
{
g[5].tag = g[3].tag;
g[5].p = g[3].p;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpp_5_4:
{
g[5].tag = g[4].tag;
g[5].p = g[4].p;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movip_0_1:
{
g[0].p = g[1].p;
g[0].tag = g[1].tag;
ts |= 0x20 /*100000*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movip_0_2:
{
g[0].p = g[2].p;
g[0].tag = g[2].tag;
ts |= 0x20 /*100000*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movip_0_3:
{
g[0].p = g[3].p;
g[0].tag = g[3].tag;
ts |= 0x20 /*100000*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movip_0_4:
{
g[0].p = g[4].p;
g[0].tag = g[4].tag;
ts |= 0x20 /*100000*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movip_0_5:
{
g[0].p = g[5].p;
g[0].tag = g[5].tag;
ts |= 0x20 /*100000*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movip_1_0:
{
g[1].p = g[0].p;
g[1].tag = g[0].tag;
ts |= 0x10 /*010000*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movip_1_2:
{
g[1].p = g[2].p;
g[1].tag = g[2].tag;
ts |= 0x10 /*010000*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movip_1_3:
{
g[1].p = g[3].p;
g[1].tag = g[3].tag;
ts |= 0x10 /*010000*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movip_1_4:
{
g[1].p = g[4].p;
g[1].tag = g[4].tag;
ts |= 0x10 /*010000*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movip_1_5:
{
g[1].p = g[5].p;
g[1].tag = g[5].tag;
ts |= 0x10 /*010000*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movip_2_0:
{
g[2].p = g[0].p;
g[2].tag = g[0].tag;
ts |= 0x8 /*001000*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movip_2_1:
{
g[2].p = g[1].p;
g[2].tag = g[1].tag;
ts |= 0x8 /*001000*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movip_2_3:
{
g[2].p = g[3].p;
g[2].tag = g[3].tag;
ts |= 0x8 /*001000*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movip_2_4:
{
g[2].p = g[4].p;
g[2].tag = g[4].tag;
ts |= 0x8 /*001000*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movip_2_5:
{
g[2].p = g[5].p;
g[2].tag = g[5].tag;
ts |= 0x8 /*001000*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movip_3_0:
{
g[3].p = g[0].p;
g[3].tag = g[0].tag;
ts |= 0x4 /*000100*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movip_3_1:
{
g[3].p = g[1].p;
g[3].tag = g[1].tag;
ts |= 0x4 /*000100*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movip_3_2:
{
g[3].p = g[2].p;
g[3].tag = g[2].tag;
ts |= 0x4 /*000100*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movip_3_4:
{
g[3].p = g[4].p;
g[3].tag = g[4].tag;
ts |= 0x4 /*000100*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movip_3_5:
{
g[3].p = g[5].p;
g[3].tag = g[5].tag;
ts |= 0x4 /*000100*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movip_4_0:
{
g[4].p = g[0].p;
g[4].tag = g[0].tag;
ts |= 0x2 /*000010*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movip_4_1:
{
g[4].p = g[1].p;
g[4].tag = g[1].tag;
ts |= 0x2 /*000010*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movip_4_2:
{
g[4].p = g[2].p;
g[4].tag = g[2].tag;
ts |= 0x2 /*000010*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movip_4_3:
{
g[4].p = g[3].p;
g[4].tag = g[3].tag;
ts |= 0x2 /*000010*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movip_4_5:
{
g[4].p = g[5].p;
g[4].tag = g[5].tag;
ts |= 0x2 /*000010*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movip_5_0:
{
g[5].p = g[0].p;
g[5].tag = g[0].tag;
ts |= 0x1 /*000001*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movip_5_1:
{
g[5].p = g[1].p;
g[5].tag = g[1].tag;
ts |= 0x1 /*000001*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movip_5_2:
{
g[5].p = g[2].p;
g[5].tag = g[2].tag;
ts |= 0x1 /*000001*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movip_5_3:
{
g[5].p = g[3].p;
g[5].tag = g[3].tag;
ts |= 0x1 /*000001*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movip_5_4:
{
g[5].p = g[4].p;
g[5].tag = g[4].tag;
ts |= 0x1 /*000001*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpi_0_1:
{
g[0].i = g[1].i;
g[0].tag = 0;
ts |= 0x1f /*011111*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpi_0_2:
{
g[0].i = g[2].i;
g[0].tag = 0;
ts |= 0x1f /*011111*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpi_0_3:
{
g[0].i = g[3].i;
g[0].tag = 0;
ts |= 0x1f /*011111*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpi_0_4:
{
g[0].i = g[4].i;
g[0].tag = 0;
ts |= 0x1f /*011111*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpi_0_5:
{
g[0].i = g[5].i;
g[0].tag = 0;
ts |= 0x1f /*011111*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpi_1_0:
{
g[1].i = g[0].i;
g[1].tag = 0;
ts |= 0x2f /*101111*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpi_1_2:
{
g[1].i = g[2].i;
g[1].tag = 0;
ts |= 0x2f /*101111*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpi_1_3:
{
g[1].i = g[3].i;
g[1].tag = 0;
ts |= 0x2f /*101111*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpi_1_4:
{
g[1].i = g[4].i;
g[1].tag = 0;
ts |= 0x2f /*101111*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpi_1_5:
{
g[1].i = g[5].i;
g[1].tag = 0;
ts |= 0x2f /*101111*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpi_2_0:
{
g[2].i = g[0].i;
g[2].tag = 0;
ts |= 0x37 /*110111*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpi_2_1:
{
g[2].i = g[1].i;
g[2].tag = 0;
ts |= 0x37 /*110111*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpi_2_3:
{
g[2].i = g[3].i;
g[2].tag = 0;
ts |= 0x37 /*110111*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpi_2_4:
{
g[2].i = g[4].i;
g[2].tag = 0;
ts |= 0x37 /*110111*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpi_2_5:
{
g[2].i = g[5].i;
g[2].tag = 0;
ts |= 0x37 /*110111*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpi_3_0:
{
g[3].i = g[0].i;
g[3].tag = 0;
ts |= 0x3b /*111011*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpi_3_1:
{
g[3].i = g[1].i;
g[3].tag = 0;
ts |= 0x3b /*111011*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpi_3_2:
{
g[3].i = g[2].i;
g[3].tag = 0;
ts |= 0x3b /*111011*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpi_3_4:
{
g[3].i = g[4].i;
g[3].tag = 0;
ts |= 0x3b /*111011*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpi_3_5:
{
g[3].i = g[5].i;
g[3].tag = 0;
ts |= 0x3b /*111011*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpi_4_0:
{
g[4].i = g[0].i;
g[4].tag = 0;
ts |= 0x3d /*111101*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpi_4_1:
{
g[4].i = g[1].i;
g[4].tag = 0;
ts |= 0x3d /*111101*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpi_4_2:
{
g[4].i = g[2].i;
g[4].tag = 0;
ts |= 0x3d /*111101*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpi_4_3:
{
g[4].i = g[3].i;
g[4].tag = 0;
ts |= 0x3d /*111101*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpi_4_5:
{
g[4].i = g[5].i;
g[4].tag = 0;
ts |= 0x3d /*111101*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpi_5_0:
{
g[5].i = g[0].i;
g[5].tag = 0;
ts |= 0x3e /*111110*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpi_5_1:
{
g[5].i = g[1].i;
g[5].tag = 0;
ts |= 0x3e /*111110*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpi_5_2:
{
g[5].i = g[2].i;
g[5].tag = 0;
ts |= 0x3e /*111110*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpi_5_3:
{
g[5].i = g[3].i;
g[5].tag = 0;
ts |= 0x3e /*111110*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpi_5_4:
{
g[5].i = g[4].i;
g[5].tag = 0;
ts |= 0x3e /*111110*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movik_0:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[0].i = constant;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

movik_1:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[1].i = constant;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

movik_2:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[2].i = constant;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

movik_3:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[3].i = constant;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

movik_4:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[4].i = constant;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

movik_5:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[5].i = constant;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

movpk_0:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[0].i = constant;
g[0].tag = 0;
ts |= 0x1f /*011111*/;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

movpk_1:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[1].i = constant;
g[1].tag = 0;
ts |= 0x2f /*101111*/;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

movpk_2:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[2].i = constant;
g[2].tag = 0;
ts |= 0x37 /*110111*/;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

movpk_3:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[3].i = constant;
g[3].tag = 0;
ts |= 0x3b /*111011*/;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

movpk_4:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[4].i = constant;
g[4].tag = 0;
ts |= 0x3d /*111101*/;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

movpk_5:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[5].i = constant;
g[5].tag = 0;
ts |= 0x3e /*111110*/;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

movpN_0:
{
g[0].p = NULL;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpN_1:
{
g[1].p = NULL;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpN_2:
{
g[2].p = NULL;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpN_3:
{
g[3].p = NULL;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpN_4:
{
g[4].p = NULL;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpN_5:
{
g[5].p = NULL;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

moviN_0:
{
g[0].p = NULL;
g[0].tag = 1;
ts |= 0x20 /*100000*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

moviN_1:
{
g[1].p = NULL;
g[1].tag = 1;
ts |= 0x10 /*010000*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

moviN_2:
{
g[2].p = NULL;
g[2].tag = 1;
ts |= 0x8 /*001000*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

moviN_3:
{
g[3].p = NULL;
g[3].tag = 1;
ts |= 0x4 /*000100*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

moviN_4:
{
g[4].p = NULL;
g[4].tag = 1;
ts |= 0x2 /*000010*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

moviN_5:
{
g[5].p = NULL;
g[5].tag = 1;
ts |= 0x1 /*000001*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

getl_0:
{
int16_t constant = program[pc + 1];
value val = fp[constant];
if (val.tag != 0)
{
g[0].tag = val.tag;
ts |= 0x20 /*100000*/;
g[0].p = val.p;
}
else{
g[0].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getl_1:
{
int16_t constant = program[pc + 1];
value val = fp[constant];
if (val.tag != 0)
{
g[1].tag = val.tag;
ts |= 0x10 /*010000*/;
g[1].p = val.p;
}
else{
g[1].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getl_2:
{
int16_t constant = program[pc + 1];
value val = fp[constant];
if (val.tag != 0)
{
g[2].tag = val.tag;
ts |= 0x8 /*001000*/;
g[2].p = val.p;
}
else{
g[2].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getl_3:
{
int16_t constant = program[pc + 1];
value val = fp[constant];
if (val.tag != 0)
{
g[3].tag = val.tag;
ts |= 0x4 /*000100*/;
g[3].p = val.p;
}
else{
g[3].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getl_4:
{
int16_t constant = program[pc + 1];
value val = fp[constant];
if (val.tag != 0)
{
g[4].tag = val.tag;
ts |= 0x2 /*000010*/;
g[4].p = val.p;
}
else{
g[4].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getl_5:
{
int16_t constant = program[pc + 1];
value val = fp[constant];
if (val.tag != 0)
{
g[5].tag = val.tag;
ts |= 0x1 /*000001*/;
g[5].p = val.p;
}
else{
g[5].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getlp_0:
{
int16_t constant = program[pc + 1];
value val = fp[constant];
if (val.tag == 0){
g[0].tag = 0;
ts |= 0x1f /*011111*/;
g[0].i = val.i;
}
g[0].tag = val.tag;
g[0].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getlp_1:
{
int16_t constant = program[pc + 1];
value val = fp[constant];
if (val.tag == 0){
g[1].tag = 0;
ts |= 0x2f /*101111*/;
g[1].i = val.i;
}
g[1].tag = val.tag;
g[1].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getlp_2:
{
int16_t constant = program[pc + 1];
value val = fp[constant];
if (val.tag == 0){
g[2].tag = 0;
ts |= 0x37 /*110111*/;
g[2].i = val.i;
}
g[2].tag = val.tag;
g[2].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getlp_3:
{
int16_t constant = program[pc + 1];
value val = fp[constant];
if (val.tag == 0){
g[3].tag = 0;
ts |= 0x3b /*111011*/;
g[3].i = val.i;
}
g[3].tag = val.tag;
g[3].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getlp_4:
{
int16_t constant = program[pc + 1];
value val = fp[constant];
if (val.tag == 0){
g[4].tag = 0;
ts |= 0x3d /*111101*/;
g[4].i = val.i;
}
g[4].tag = val.tag;
g[4].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getlp_5:
{
int16_t constant = program[pc + 1];
value val = fp[constant];
if (val.tag == 0){
g[5].tag = 0;
ts |= 0x3e /*111110*/;
g[5].i = val.i;
}
g[5].tag = val.tag;
g[5].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setl_0:
{
int16_t constant = program[pc + 1];
value* vp = fp + constant * sizeof(value);
(*vp).tag = g[0].tag;
(*vp).i = g[0].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setl_1:
{
int16_t constant = program[pc + 1];
value* vp = fp + constant * sizeof(value);
(*vp).tag = g[1].tag;
(*vp).i = g[1].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setl_2:
{
int16_t constant = program[pc + 1];
value* vp = fp + constant * sizeof(value);
(*vp).tag = g[2].tag;
(*vp).i = g[2].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setl_3:
{
int16_t constant = program[pc + 1];
value* vp = fp + constant * sizeof(value);
(*vp).tag = g[3].tag;
(*vp).i = g[3].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setl_4:
{
int16_t constant = program[pc + 1];
value* vp = fp + constant * sizeof(value);
(*vp).tag = g[4].tag;
(*vp).i = g[4].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setl_5:
{
int16_t constant = program[pc + 1];
value* vp = fp + constant * sizeof(value);
(*vp).tag = g[5].tag;
(*vp).i = g[5].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setlp_0:
{
int16_t constant = program[pc + 1];
value* vp = fp + constant * sizeof(value);
(*vp).tag = g[0].tag;
(*vp).p = g[0].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setlp_1:
{
int16_t constant = program[pc + 1];
value* vp = fp + constant * sizeof(value);
(*vp).tag = g[1].tag;
(*vp).p = g[1].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setlp_2:
{
int16_t constant = program[pc + 1];
value* vp = fp + constant * sizeof(value);
(*vp).tag = g[2].tag;
(*vp).p = g[2].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setlp_3:
{
int16_t constant = program[pc + 1];
value* vp = fp + constant * sizeof(value);
(*vp).tag = g[3].tag;
(*vp).p = g[3].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setlp_4:
{
int16_t constant = program[pc + 1];
value* vp = fp + constant * sizeof(value);
(*vp).tag = g[4].tag;
(*vp).p = g[4].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setlp_5:
{
int16_t constant = program[pc + 1];
value* vp = fp + constant * sizeof(value);
(*vp).tag = g[5].tag;
(*vp).p = g[5].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getm_0_0:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[0].p))->data[constant];
if (val.tag != 0)
{
g[0].tag = val.tag;
ts |= 0x20 /*100000*/;
g[0].p = val.p;
}
else{
g[0].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getm_0_1:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[1].p))->data[constant];
if (val.tag != 0)
{
g[0].tag = val.tag;
ts |= 0x20 /*100000*/;
g[0].p = val.p;
}
else{
g[0].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getm_0_2:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[2].p))->data[constant];
if (val.tag != 0)
{
g[0].tag = val.tag;
ts |= 0x20 /*100000*/;
g[0].p = val.p;
}
else{
g[0].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getm_0_3:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[3].p))->data[constant];
if (val.tag != 0)
{
g[0].tag = val.tag;
ts |= 0x20 /*100000*/;
g[0].p = val.p;
}
else{
g[0].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getm_0_4:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[4].p))->data[constant];
if (val.tag != 0)
{
g[0].tag = val.tag;
ts |= 0x20 /*100000*/;
g[0].p = val.p;
}
else{
g[0].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getm_0_5:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[5].p))->data[constant];
if (val.tag != 0)
{
g[0].tag = val.tag;
ts |= 0x20 /*100000*/;
g[0].p = val.p;
}
else{
g[0].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getm_1_0:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[0].p))->data[constant];
if (val.tag != 0)
{
g[1].tag = val.tag;
ts |= 0x10 /*010000*/;
g[1].p = val.p;
}
else{
g[1].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getm_1_1:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[1].p))->data[constant];
if (val.tag != 0)
{
g[1].tag = val.tag;
ts |= 0x10 /*010000*/;
g[1].p = val.p;
}
else{
g[1].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getm_1_2:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[2].p))->data[constant];
if (val.tag != 0)
{
g[1].tag = val.tag;
ts |= 0x10 /*010000*/;
g[1].p = val.p;
}
else{
g[1].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getm_1_3:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[3].p))->data[constant];
if (val.tag != 0)
{
g[1].tag = val.tag;
ts |= 0x10 /*010000*/;
g[1].p = val.p;
}
else{
g[1].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getm_1_4:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[4].p))->data[constant];
if (val.tag != 0)
{
g[1].tag = val.tag;
ts |= 0x10 /*010000*/;
g[1].p = val.p;
}
else{
g[1].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getm_1_5:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[5].p))->data[constant];
if (val.tag != 0)
{
g[1].tag = val.tag;
ts |= 0x10 /*010000*/;
g[1].p = val.p;
}
else{
g[1].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getm_2_0:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[0].p))->data[constant];
if (val.tag != 0)
{
g[2].tag = val.tag;
ts |= 0x8 /*001000*/;
g[2].p = val.p;
}
else{
g[2].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getm_2_1:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[1].p))->data[constant];
if (val.tag != 0)
{
g[2].tag = val.tag;
ts |= 0x8 /*001000*/;
g[2].p = val.p;
}
else{
g[2].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getm_2_2:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[2].p))->data[constant];
if (val.tag != 0)
{
g[2].tag = val.tag;
ts |= 0x8 /*001000*/;
g[2].p = val.p;
}
else{
g[2].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getm_2_3:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[3].p))->data[constant];
if (val.tag != 0)
{
g[2].tag = val.tag;
ts |= 0x8 /*001000*/;
g[2].p = val.p;
}
else{
g[2].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getm_2_4:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[4].p))->data[constant];
if (val.tag != 0)
{
g[2].tag = val.tag;
ts |= 0x8 /*001000*/;
g[2].p = val.p;
}
else{
g[2].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getm_2_5:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[5].p))->data[constant];
if (val.tag != 0)
{
g[2].tag = val.tag;
ts |= 0x8 /*001000*/;
g[2].p = val.p;
}
else{
g[2].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getm_3_0:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[0].p))->data[constant];
if (val.tag != 0)
{
g[3].tag = val.tag;
ts |= 0x4 /*000100*/;
g[3].p = val.p;
}
else{
g[3].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getm_3_1:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[1].p))->data[constant];
if (val.tag != 0)
{
g[3].tag = val.tag;
ts |= 0x4 /*000100*/;
g[3].p = val.p;
}
else{
g[3].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getm_3_2:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[2].p))->data[constant];
if (val.tag != 0)
{
g[3].tag = val.tag;
ts |= 0x4 /*000100*/;
g[3].p = val.p;
}
else{
g[3].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getm_3_3:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[3].p))->data[constant];
if (val.tag != 0)
{
g[3].tag = val.tag;
ts |= 0x4 /*000100*/;
g[3].p = val.p;
}
else{
g[3].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getm_3_4:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[4].p))->data[constant];
if (val.tag != 0)
{
g[3].tag = val.tag;
ts |= 0x4 /*000100*/;
g[3].p = val.p;
}
else{
g[3].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getm_3_5:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[5].p))->data[constant];
if (val.tag != 0)
{
g[3].tag = val.tag;
ts |= 0x4 /*000100*/;
g[3].p = val.p;
}
else{
g[3].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getm_4_0:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[0].p))->data[constant];
if (val.tag != 0)
{
g[4].tag = val.tag;
ts |= 0x2 /*000010*/;
g[4].p = val.p;
}
else{
g[4].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getm_4_1:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[1].p))->data[constant];
if (val.tag != 0)
{
g[4].tag = val.tag;
ts |= 0x2 /*000010*/;
g[4].p = val.p;
}
else{
g[4].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getm_4_2:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[2].p))->data[constant];
if (val.tag != 0)
{
g[4].tag = val.tag;
ts |= 0x2 /*000010*/;
g[4].p = val.p;
}
else{
g[4].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getm_4_3:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[3].p))->data[constant];
if (val.tag != 0)
{
g[4].tag = val.tag;
ts |= 0x2 /*000010*/;
g[4].p = val.p;
}
else{
g[4].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getm_4_4:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[4].p))->data[constant];
if (val.tag != 0)
{
g[4].tag = val.tag;
ts |= 0x2 /*000010*/;
g[4].p = val.p;
}
else{
g[4].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getm_4_5:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[5].p))->data[constant];
if (val.tag != 0)
{
g[4].tag = val.tag;
ts |= 0x2 /*000010*/;
g[4].p = val.p;
}
else{
g[4].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getm_5_0:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[0].p))->data[constant];
if (val.tag != 0)
{
g[5].tag = val.tag;
ts |= 0x1 /*000001*/;
g[5].p = val.p;
}
else{
g[5].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getm_5_1:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[1].p))->data[constant];
if (val.tag != 0)
{
g[5].tag = val.tag;
ts |= 0x1 /*000001*/;
g[5].p = val.p;
}
else{
g[5].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getm_5_2:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[2].p))->data[constant];
if (val.tag != 0)
{
g[5].tag = val.tag;
ts |= 0x1 /*000001*/;
g[5].p = val.p;
}
else{
g[5].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getm_5_3:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[3].p))->data[constant];
if (val.tag != 0)
{
g[5].tag = val.tag;
ts |= 0x1 /*000001*/;
g[5].p = val.p;
}
else{
g[5].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getm_5_4:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[4].p))->data[constant];
if (val.tag != 0)
{
g[5].tag = val.tag;
ts |= 0x1 /*000001*/;
g[5].p = val.p;
}
else{
g[5].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getm_5_5:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[5].p))->data[constant];
if (val.tag != 0)
{
g[5].tag = val.tag;
ts |= 0x1 /*000001*/;
g[5].p = val.p;
}
else{
g[5].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getmp_0_0:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[0].p))->data[constant];
if (val.tag == 0){
g[0].tag = 0;
ts |= 0x1f /*011111*/;
g[0].i = val.i;
}
g[0].tag = val.tag;
g[0].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getmp_0_1:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[1].p))->data[constant];
if (val.tag == 0){
g[0].tag = 0;
ts |= 0x1f /*011111*/;
g[0].i = val.i;
}
g[0].tag = val.tag;
g[0].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getmp_0_2:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[2].p))->data[constant];
if (val.tag == 0){
g[0].tag = 0;
ts |= 0x1f /*011111*/;
g[0].i = val.i;
}
g[0].tag = val.tag;
g[0].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getmp_0_3:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[3].p))->data[constant];
if (val.tag == 0){
g[0].tag = 0;
ts |= 0x1f /*011111*/;
g[0].i = val.i;
}
g[0].tag = val.tag;
g[0].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getmp_0_4:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[4].p))->data[constant];
if (val.tag == 0){
g[0].tag = 0;
ts |= 0x1f /*011111*/;
g[0].i = val.i;
}
g[0].tag = val.tag;
g[0].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getmp_0_5:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[5].p))->data[constant];
if (val.tag == 0){
g[0].tag = 0;
ts |= 0x1f /*011111*/;
g[0].i = val.i;
}
g[0].tag = val.tag;
g[0].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getmp_1_0:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[0].p))->data[constant];
if (val.tag == 0){
g[1].tag = 0;
ts |= 0x2f /*101111*/;
g[1].i = val.i;
}
g[1].tag = val.tag;
g[1].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getmp_1_1:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[1].p))->data[constant];
if (val.tag == 0){
g[1].tag = 0;
ts |= 0x2f /*101111*/;
g[1].i = val.i;
}
g[1].tag = val.tag;
g[1].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getmp_1_2:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[2].p))->data[constant];
if (val.tag == 0){
g[1].tag = 0;
ts |= 0x2f /*101111*/;
g[1].i = val.i;
}
g[1].tag = val.tag;
g[1].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getmp_1_3:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[3].p))->data[constant];
if (val.tag == 0){
g[1].tag = 0;
ts |= 0x2f /*101111*/;
g[1].i = val.i;
}
g[1].tag = val.tag;
g[1].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getmp_1_4:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[4].p))->data[constant];
if (val.tag == 0){
g[1].tag = 0;
ts |= 0x2f /*101111*/;
g[1].i = val.i;
}
g[1].tag = val.tag;
g[1].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getmp_1_5:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[5].p))->data[constant];
if (val.tag == 0){
g[1].tag = 0;
ts |= 0x2f /*101111*/;
g[1].i = val.i;
}
g[1].tag = val.tag;
g[1].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getmp_2_0:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[0].p))->data[constant];
if (val.tag == 0){
g[2].tag = 0;
ts |= 0x37 /*110111*/;
g[2].i = val.i;
}
g[2].tag = val.tag;
g[2].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getmp_2_1:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[1].p))->data[constant];
if (val.tag == 0){
g[2].tag = 0;
ts |= 0x37 /*110111*/;
g[2].i = val.i;
}
g[2].tag = val.tag;
g[2].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getmp_2_2:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[2].p))->data[constant];
if (val.tag == 0){
g[2].tag = 0;
ts |= 0x37 /*110111*/;
g[2].i = val.i;
}
g[2].tag = val.tag;
g[2].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getmp_2_3:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[3].p))->data[constant];
if (val.tag == 0){
g[2].tag = 0;
ts |= 0x37 /*110111*/;
g[2].i = val.i;
}
g[2].tag = val.tag;
g[2].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getmp_2_4:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[4].p))->data[constant];
if (val.tag == 0){
g[2].tag = 0;
ts |= 0x37 /*110111*/;
g[2].i = val.i;
}
g[2].tag = val.tag;
g[2].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getmp_2_5:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[5].p))->data[constant];
if (val.tag == 0){
g[2].tag = 0;
ts |= 0x37 /*110111*/;
g[2].i = val.i;
}
g[2].tag = val.tag;
g[2].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getmp_3_0:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[0].p))->data[constant];
if (val.tag == 0){
g[3].tag = 0;
ts |= 0x3b /*111011*/;
g[3].i = val.i;
}
g[3].tag = val.tag;
g[3].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getmp_3_1:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[1].p))->data[constant];
if (val.tag == 0){
g[3].tag = 0;
ts |= 0x3b /*111011*/;
g[3].i = val.i;
}
g[3].tag = val.tag;
g[3].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getmp_3_2:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[2].p))->data[constant];
if (val.tag == 0){
g[3].tag = 0;
ts |= 0x3b /*111011*/;
g[3].i = val.i;
}
g[3].tag = val.tag;
g[3].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getmp_3_3:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[3].p))->data[constant];
if (val.tag == 0){
g[3].tag = 0;
ts |= 0x3b /*111011*/;
g[3].i = val.i;
}
g[3].tag = val.tag;
g[3].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getmp_3_4:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[4].p))->data[constant];
if (val.tag == 0){
g[3].tag = 0;
ts |= 0x3b /*111011*/;
g[3].i = val.i;
}
g[3].tag = val.tag;
g[3].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getmp_3_5:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[5].p))->data[constant];
if (val.tag == 0){
g[3].tag = 0;
ts |= 0x3b /*111011*/;
g[3].i = val.i;
}
g[3].tag = val.tag;
g[3].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getmp_4_0:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[0].p))->data[constant];
if (val.tag == 0){
g[4].tag = 0;
ts |= 0x3d /*111101*/;
g[4].i = val.i;
}
g[4].tag = val.tag;
g[4].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getmp_4_1:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[1].p))->data[constant];
if (val.tag == 0){
g[4].tag = 0;
ts |= 0x3d /*111101*/;
g[4].i = val.i;
}
g[4].tag = val.tag;
g[4].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getmp_4_2:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[2].p))->data[constant];
if (val.tag == 0){
g[4].tag = 0;
ts |= 0x3d /*111101*/;
g[4].i = val.i;
}
g[4].tag = val.tag;
g[4].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getmp_4_3:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[3].p))->data[constant];
if (val.tag == 0){
g[4].tag = 0;
ts |= 0x3d /*111101*/;
g[4].i = val.i;
}
g[4].tag = val.tag;
g[4].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getmp_4_4:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[4].p))->data[constant];
if (val.tag == 0){
g[4].tag = 0;
ts |= 0x3d /*111101*/;
g[4].i = val.i;
}
g[4].tag = val.tag;
g[4].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getmp_4_5:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[5].p))->data[constant];
if (val.tag == 0){
g[4].tag = 0;
ts |= 0x3d /*111101*/;
g[4].i = val.i;
}
g[4].tag = val.tag;
g[4].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getmp_5_0:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[0].p))->data[constant];
if (val.tag == 0){
g[5].tag = 0;
ts |= 0x3e /*111110*/;
g[5].i = val.i;
}
g[5].tag = val.tag;
g[5].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getmp_5_1:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[1].p))->data[constant];
if (val.tag == 0){
g[5].tag = 0;
ts |= 0x3e /*111110*/;
g[5].i = val.i;
}
g[5].tag = val.tag;
g[5].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getmp_5_2:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[2].p))->data[constant];
if (val.tag == 0){
g[5].tag = 0;
ts |= 0x3e /*111110*/;
g[5].i = val.i;
}
g[5].tag = val.tag;
g[5].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getmp_5_3:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[3].p))->data[constant];
if (val.tag == 0){
g[5].tag = 0;
ts |= 0x3e /*111110*/;
g[5].i = val.i;
}
g[5].tag = val.tag;
g[5].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getmp_5_4:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[4].p))->data[constant];
if (val.tag == 0){
g[5].tag = 0;
ts |= 0x3e /*111110*/;
g[5].i = val.i;
}
g[5].tag = val.tag;
g[5].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getmp_5_5:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[5].p))->data[constant];
if (val.tag == 0){
g[5].tag = 0;
ts |= 0x3e /*111110*/;
g[5].i = val.i;
}
g[5].tag = val.tag;
g[5].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setm_0_0:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[0].p))->data[constant]);
vp->tag =0;
vp->i = g[0].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setm_0_1:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[0].p))->data[constant]);
vp->tag =0;
vp->i = g[1].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setm_0_2:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[0].p))->data[constant]);
vp->tag =0;
vp->i = g[2].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setm_0_3:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[0].p))->data[constant]);
vp->tag =0;
vp->i = g[3].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setm_0_4:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[0].p))->data[constant]);
vp->tag =0;
vp->i = g[4].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setm_0_5:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[0].p))->data[constant]);
vp->tag =0;
vp->i = g[5].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setm_1_0:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[1].p))->data[constant]);
vp->tag =0;
vp->i = g[0].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setm_1_1:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[1].p))->data[constant]);
vp->tag =0;
vp->i = g[1].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setm_1_2:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[1].p))->data[constant]);
vp->tag =0;
vp->i = g[2].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setm_1_3:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[1].p))->data[constant]);
vp->tag =0;
vp->i = g[3].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setm_1_4:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[1].p))->data[constant]);
vp->tag =0;
vp->i = g[4].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setm_1_5:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[1].p))->data[constant]);
vp->tag =0;
vp->i = g[5].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setm_2_0:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[2].p))->data[constant]);
vp->tag =0;
vp->i = g[0].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setm_2_1:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[2].p))->data[constant]);
vp->tag =0;
vp->i = g[1].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setm_2_2:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[2].p))->data[constant]);
vp->tag =0;
vp->i = g[2].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setm_2_3:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[2].p))->data[constant]);
vp->tag =0;
vp->i = g[3].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setm_2_4:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[2].p))->data[constant]);
vp->tag =0;
vp->i = g[4].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setm_2_5:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[2].p))->data[constant]);
vp->tag =0;
vp->i = g[5].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setm_3_0:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[3].p))->data[constant]);
vp->tag =0;
vp->i = g[0].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setm_3_1:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[3].p))->data[constant]);
vp->tag =0;
vp->i = g[1].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setm_3_2:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[3].p))->data[constant]);
vp->tag =0;
vp->i = g[2].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setm_3_3:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[3].p))->data[constant]);
vp->tag =0;
vp->i = g[3].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setm_3_4:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[3].p))->data[constant]);
vp->tag =0;
vp->i = g[4].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setm_3_5:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[3].p))->data[constant]);
vp->tag =0;
vp->i = g[5].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setm_4_0:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[4].p))->data[constant]);
vp->tag =0;
vp->i = g[0].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setm_4_1:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[4].p))->data[constant]);
vp->tag =0;
vp->i = g[1].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setm_4_2:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[4].p))->data[constant]);
vp->tag =0;
vp->i = g[2].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setm_4_3:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[4].p))->data[constant]);
vp->tag =0;
vp->i = g[3].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setm_4_4:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[4].p))->data[constant]);
vp->tag =0;
vp->i = g[4].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setm_4_5:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[4].p))->data[constant]);
vp->tag =0;
vp->i = g[5].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setm_5_0:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[5].p))->data[constant]);
vp->tag =0;
vp->i = g[0].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setm_5_1:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[5].p))->data[constant]);
vp->tag =0;
vp->i = g[1].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setm_5_2:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[5].p))->data[constant]);
vp->tag =0;
vp->i = g[2].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setm_5_3:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[5].p))->data[constant]);
vp->tag =0;
vp->i = g[3].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setm_5_4:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[5].p))->data[constant]);
vp->tag =0;
vp->i = g[4].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setm_5_5:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[5].p))->data[constant]);
vp->tag =0;
vp->i = g[5].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setmp_0_0:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[0].p))->data[constant]);
vp->tag = g[0].tag;
vp->p = g[0].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setmp_0_1:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[0].p))->data[constant]);
vp->tag = g[1].tag;
vp->p = g[1].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setmp_0_2:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[0].p))->data[constant]);
vp->tag = g[2].tag;
vp->p = g[2].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setmp_0_3:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[0].p))->data[constant]);
vp->tag = g[3].tag;
vp->p = g[3].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setmp_0_4:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[0].p))->data[constant]);
vp->tag = g[4].tag;
vp->p = g[4].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setmp_0_5:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[0].p))->data[constant]);
vp->tag = g[5].tag;
vp->p = g[5].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setmp_1_0:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[1].p))->data[constant]);
vp->tag = g[0].tag;
vp->p = g[0].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setmp_1_1:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[1].p))->data[constant]);
vp->tag = g[1].tag;
vp->p = g[1].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setmp_1_2:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[1].p))->data[constant]);
vp->tag = g[2].tag;
vp->p = g[2].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setmp_1_3:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[1].p))->data[constant]);
vp->tag = g[3].tag;
vp->p = g[3].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setmp_1_4:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[1].p))->data[constant]);
vp->tag = g[4].tag;
vp->p = g[4].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setmp_1_5:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[1].p))->data[constant]);
vp->tag = g[5].tag;
vp->p = g[5].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setmp_2_0:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[2].p))->data[constant]);
vp->tag = g[0].tag;
vp->p = g[0].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setmp_2_1:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[2].p))->data[constant]);
vp->tag = g[1].tag;
vp->p = g[1].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setmp_2_2:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[2].p))->data[constant]);
vp->tag = g[2].tag;
vp->p = g[2].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setmp_2_3:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[2].p))->data[constant]);
vp->tag = g[3].tag;
vp->p = g[3].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setmp_2_4:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[2].p))->data[constant]);
vp->tag = g[4].tag;
vp->p = g[4].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setmp_2_5:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[2].p))->data[constant]);
vp->tag = g[5].tag;
vp->p = g[5].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setmp_3_0:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[3].p))->data[constant]);
vp->tag = g[0].tag;
vp->p = g[0].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setmp_3_1:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[3].p))->data[constant]);
vp->tag = g[1].tag;
vp->p = g[1].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setmp_3_2:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[3].p))->data[constant]);
vp->tag = g[2].tag;
vp->p = g[2].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setmp_3_3:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[3].p))->data[constant]);
vp->tag = g[3].tag;
vp->p = g[3].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setmp_3_4:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[3].p))->data[constant]);
vp->tag = g[4].tag;
vp->p = g[4].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setmp_3_5:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[3].p))->data[constant]);
vp->tag = g[5].tag;
vp->p = g[5].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setmp_4_0:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[4].p))->data[constant]);
vp->tag = g[0].tag;
vp->p = g[0].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setmp_4_1:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[4].p))->data[constant]);
vp->tag = g[1].tag;
vp->p = g[1].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setmp_4_2:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[4].p))->data[constant]);
vp->tag = g[2].tag;
vp->p = g[2].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setmp_4_3:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[4].p))->data[constant]);
vp->tag = g[3].tag;
vp->p = g[3].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setmp_4_4:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[4].p))->data[constant]);
vp->tag = g[4].tag;
vp->p = g[4].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setmp_4_5:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[4].p))->data[constant]);
vp->tag = g[5].tag;
vp->p = g[5].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setmp_5_0:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[5].p))->data[constant]);
vp->tag = g[0].tag;
vp->p = g[0].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setmp_5_1:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[5].p))->data[constant]);
vp->tag = g[1].tag;
vp->p = g[1].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setmp_5_2:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[5].p))->data[constant]);
vp->tag = g[2].tag;
vp->p = g[2].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setmp_5_3:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[5].p))->data[constant]);
vp->tag = g[3].tag;
vp->p = g[3].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setmp_5_4:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[5].p))->data[constant]);
vp->tag = g[4].tag;
vp->p = g[4].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setmp_5_5:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[5].p))->data[constant]);
vp->tag = g[5].tag;
vp->p = g[5].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

geta_0_0_1:
{
value val = ((pointeronly *)(g[0].p))->data[g[1].i];
g[0].tag = val.tag;
ts |= 0x20 /*100000*/;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_0_0_2:
{
value val = ((pointeronly *)(g[0].p))->data[g[2].i];
g[0].tag = val.tag;
ts |= 0x20 /*100000*/;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_0_0_3:
{
value val = ((pointeronly *)(g[0].p))->data[g[3].i];
g[0].tag = val.tag;
ts |= 0x20 /*100000*/;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_0_0_4:
{
value val = ((pointeronly *)(g[0].p))->data[g[4].i];
g[0].tag = val.tag;
ts |= 0x20 /*100000*/;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_0_0_5:
{
value val = ((pointeronly *)(g[0].p))->data[g[5].i];
g[0].tag = val.tag;
ts |= 0x20 /*100000*/;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_0_1_0:
{
value val = ((pointeronly *)(g[1].p))->data[g[0].i];
g[0].tag = val.tag;
ts |= 0x20 /*100000*/;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_0_1_2:
{
value val = ((pointeronly *)(g[1].p))->data[g[2].i];
g[0].tag = val.tag;
ts |= 0x20 /*100000*/;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_0_1_3:
{
value val = ((pointeronly *)(g[1].p))->data[g[3].i];
g[0].tag = val.tag;
ts |= 0x20 /*100000*/;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_0_1_4:
{
value val = ((pointeronly *)(g[1].p))->data[g[4].i];
g[0].tag = val.tag;
ts |= 0x20 /*100000*/;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_0_1_5:
{
value val = ((pointeronly *)(g[1].p))->data[g[5].i];
g[0].tag = val.tag;
ts |= 0x20 /*100000*/;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_0_2_0:
{
value val = ((pointeronly *)(g[2].p))->data[g[0].i];
g[0].tag = val.tag;
ts |= 0x20 /*100000*/;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_0_2_1:
{
value val = ((pointeronly *)(g[2].p))->data[g[1].i];
g[0].tag = val.tag;
ts |= 0x20 /*100000*/;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_0_2_3:
{
value val = ((pointeronly *)(g[2].p))->data[g[3].i];
g[0].tag = val.tag;
ts |= 0x20 /*100000*/;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_0_2_4:
{
value val = ((pointeronly *)(g[2].p))->data[g[4].i];
g[0].tag = val.tag;
ts |= 0x20 /*100000*/;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_0_2_5:
{
value val = ((pointeronly *)(g[2].p))->data[g[5].i];
g[0].tag = val.tag;
ts |= 0x20 /*100000*/;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_0_3_0:
{
value val = ((pointeronly *)(g[3].p))->data[g[0].i];
g[0].tag = val.tag;
ts |= 0x20 /*100000*/;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_0_3_1:
{
value val = ((pointeronly *)(g[3].p))->data[g[1].i];
g[0].tag = val.tag;
ts |= 0x20 /*100000*/;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_0_3_2:
{
value val = ((pointeronly *)(g[3].p))->data[g[2].i];
g[0].tag = val.tag;
ts |= 0x20 /*100000*/;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_0_3_4:
{
value val = ((pointeronly *)(g[3].p))->data[g[4].i];
g[0].tag = val.tag;
ts |= 0x20 /*100000*/;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_0_3_5:
{
value val = ((pointeronly *)(g[3].p))->data[g[5].i];
g[0].tag = val.tag;
ts |= 0x20 /*100000*/;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_0_4_0:
{
value val = ((pointeronly *)(g[4].p))->data[g[0].i];
g[0].tag = val.tag;
ts |= 0x20 /*100000*/;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_0_4_1:
{
value val = ((pointeronly *)(g[4].p))->data[g[1].i];
g[0].tag = val.tag;
ts |= 0x20 /*100000*/;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_0_4_2:
{
value val = ((pointeronly *)(g[4].p))->data[g[2].i];
g[0].tag = val.tag;
ts |= 0x20 /*100000*/;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_0_4_3:
{
value val = ((pointeronly *)(g[4].p))->data[g[3].i];
g[0].tag = val.tag;
ts |= 0x20 /*100000*/;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_0_4_5:
{
value val = ((pointeronly *)(g[4].p))->data[g[5].i];
g[0].tag = val.tag;
ts |= 0x20 /*100000*/;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_0_5_0:
{
value val = ((pointeronly *)(g[5].p))->data[g[0].i];
g[0].tag = val.tag;
ts |= 0x20 /*100000*/;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_0_5_1:
{
value val = ((pointeronly *)(g[5].p))->data[g[1].i];
g[0].tag = val.tag;
ts |= 0x20 /*100000*/;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_0_5_2:
{
value val = ((pointeronly *)(g[5].p))->data[g[2].i];
g[0].tag = val.tag;
ts |= 0x20 /*100000*/;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_0_5_3:
{
value val = ((pointeronly *)(g[5].p))->data[g[3].i];
g[0].tag = val.tag;
ts |= 0x20 /*100000*/;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_0_5_4:
{
value val = ((pointeronly *)(g[5].p))->data[g[4].i];
g[0].tag = val.tag;
ts |= 0x20 /*100000*/;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_1_0_1:
{
value val = ((pointeronly *)(g[0].p))->data[g[1].i];
g[1].tag = val.tag;
ts |= 0x10 /*010000*/;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_1_0_2:
{
value val = ((pointeronly *)(g[0].p))->data[g[2].i];
g[1].tag = val.tag;
ts |= 0x10 /*010000*/;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_1_0_3:
{
value val = ((pointeronly *)(g[0].p))->data[g[3].i];
g[1].tag = val.tag;
ts |= 0x10 /*010000*/;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_1_0_4:
{
value val = ((pointeronly *)(g[0].p))->data[g[4].i];
g[1].tag = val.tag;
ts |= 0x10 /*010000*/;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_1_0_5:
{
value val = ((pointeronly *)(g[0].p))->data[g[5].i];
g[1].tag = val.tag;
ts |= 0x10 /*010000*/;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_1_1_0:
{
value val = ((pointeronly *)(g[1].p))->data[g[0].i];
g[1].tag = val.tag;
ts |= 0x10 /*010000*/;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_1_1_2:
{
value val = ((pointeronly *)(g[1].p))->data[g[2].i];
g[1].tag = val.tag;
ts |= 0x10 /*010000*/;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_1_1_3:
{
value val = ((pointeronly *)(g[1].p))->data[g[3].i];
g[1].tag = val.tag;
ts |= 0x10 /*010000*/;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_1_1_4:
{
value val = ((pointeronly *)(g[1].p))->data[g[4].i];
g[1].tag = val.tag;
ts |= 0x10 /*010000*/;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_1_1_5:
{
value val = ((pointeronly *)(g[1].p))->data[g[5].i];
g[1].tag = val.tag;
ts |= 0x10 /*010000*/;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_1_2_0:
{
value val = ((pointeronly *)(g[2].p))->data[g[0].i];
g[1].tag = val.tag;
ts |= 0x10 /*010000*/;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_1_2_1:
{
value val = ((pointeronly *)(g[2].p))->data[g[1].i];
g[1].tag = val.tag;
ts |= 0x10 /*010000*/;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_1_2_3:
{
value val = ((pointeronly *)(g[2].p))->data[g[3].i];
g[1].tag = val.tag;
ts |= 0x10 /*010000*/;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_1_2_4:
{
value val = ((pointeronly *)(g[2].p))->data[g[4].i];
g[1].tag = val.tag;
ts |= 0x10 /*010000*/;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_1_2_5:
{
value val = ((pointeronly *)(g[2].p))->data[g[5].i];
g[1].tag = val.tag;
ts |= 0x10 /*010000*/;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_1_3_0:
{
value val = ((pointeronly *)(g[3].p))->data[g[0].i];
g[1].tag = val.tag;
ts |= 0x10 /*010000*/;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_1_3_1:
{
value val = ((pointeronly *)(g[3].p))->data[g[1].i];
g[1].tag = val.tag;
ts |= 0x10 /*010000*/;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_1_3_2:
{
value val = ((pointeronly *)(g[3].p))->data[g[2].i];
g[1].tag = val.tag;
ts |= 0x10 /*010000*/;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_1_3_4:
{
value val = ((pointeronly *)(g[3].p))->data[g[4].i];
g[1].tag = val.tag;
ts |= 0x10 /*010000*/;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_1_3_5:
{
value val = ((pointeronly *)(g[3].p))->data[g[5].i];
g[1].tag = val.tag;
ts |= 0x10 /*010000*/;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_1_4_0:
{
value val = ((pointeronly *)(g[4].p))->data[g[0].i];
g[1].tag = val.tag;
ts |= 0x10 /*010000*/;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_1_4_1:
{
value val = ((pointeronly *)(g[4].p))->data[g[1].i];
g[1].tag = val.tag;
ts |= 0x10 /*010000*/;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_1_4_2:
{
value val = ((pointeronly *)(g[4].p))->data[g[2].i];
g[1].tag = val.tag;
ts |= 0x10 /*010000*/;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_1_4_3:
{
value val = ((pointeronly *)(g[4].p))->data[g[3].i];
g[1].tag = val.tag;
ts |= 0x10 /*010000*/;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_1_4_5:
{
value val = ((pointeronly *)(g[4].p))->data[g[5].i];
g[1].tag = val.tag;
ts |= 0x10 /*010000*/;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_1_5_0:
{
value val = ((pointeronly *)(g[5].p))->data[g[0].i];
g[1].tag = val.tag;
ts |= 0x10 /*010000*/;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_1_5_1:
{
value val = ((pointeronly *)(g[5].p))->data[g[1].i];
g[1].tag = val.tag;
ts |= 0x10 /*010000*/;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_1_5_2:
{
value val = ((pointeronly *)(g[5].p))->data[g[2].i];
g[1].tag = val.tag;
ts |= 0x10 /*010000*/;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_1_5_3:
{
value val = ((pointeronly *)(g[5].p))->data[g[3].i];
g[1].tag = val.tag;
ts |= 0x10 /*010000*/;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_1_5_4:
{
value val = ((pointeronly *)(g[5].p))->data[g[4].i];
g[1].tag = val.tag;
ts |= 0x10 /*010000*/;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_2_0_1:
{
value val = ((pointeronly *)(g[0].p))->data[g[1].i];
g[2].tag = val.tag;
ts |= 0x8 /*001000*/;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_2_0_2:
{
value val = ((pointeronly *)(g[0].p))->data[g[2].i];
g[2].tag = val.tag;
ts |= 0x8 /*001000*/;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_2_0_3:
{
value val = ((pointeronly *)(g[0].p))->data[g[3].i];
g[2].tag = val.tag;
ts |= 0x8 /*001000*/;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_2_0_4:
{
value val = ((pointeronly *)(g[0].p))->data[g[4].i];
g[2].tag = val.tag;
ts |= 0x8 /*001000*/;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_2_0_5:
{
value val = ((pointeronly *)(g[0].p))->data[g[5].i];
g[2].tag = val.tag;
ts |= 0x8 /*001000*/;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_2_1_0:
{
value val = ((pointeronly *)(g[1].p))->data[g[0].i];
g[2].tag = val.tag;
ts |= 0x8 /*001000*/;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_2_1_2:
{
value val = ((pointeronly *)(g[1].p))->data[g[2].i];
g[2].tag = val.tag;
ts |= 0x8 /*001000*/;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_2_1_3:
{
value val = ((pointeronly *)(g[1].p))->data[g[3].i];
g[2].tag = val.tag;
ts |= 0x8 /*001000*/;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_2_1_4:
{
value val = ((pointeronly *)(g[1].p))->data[g[4].i];
g[2].tag = val.tag;
ts |= 0x8 /*001000*/;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_2_1_5:
{
value val = ((pointeronly *)(g[1].p))->data[g[5].i];
g[2].tag = val.tag;
ts |= 0x8 /*001000*/;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_2_2_0:
{
value val = ((pointeronly *)(g[2].p))->data[g[0].i];
g[2].tag = val.tag;
ts |= 0x8 /*001000*/;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_2_2_1:
{
value val = ((pointeronly *)(g[2].p))->data[g[1].i];
g[2].tag = val.tag;
ts |= 0x8 /*001000*/;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_2_2_3:
{
value val = ((pointeronly *)(g[2].p))->data[g[3].i];
g[2].tag = val.tag;
ts |= 0x8 /*001000*/;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_2_2_4:
{
value val = ((pointeronly *)(g[2].p))->data[g[4].i];
g[2].tag = val.tag;
ts |= 0x8 /*001000*/;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_2_2_5:
{
value val = ((pointeronly *)(g[2].p))->data[g[5].i];
g[2].tag = val.tag;
ts |= 0x8 /*001000*/;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_2_3_0:
{
value val = ((pointeronly *)(g[3].p))->data[g[0].i];
g[2].tag = val.tag;
ts |= 0x8 /*001000*/;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_2_3_1:
{
value val = ((pointeronly *)(g[3].p))->data[g[1].i];
g[2].tag = val.tag;
ts |= 0x8 /*001000*/;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_2_3_2:
{
value val = ((pointeronly *)(g[3].p))->data[g[2].i];
g[2].tag = val.tag;
ts |= 0x8 /*001000*/;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_2_3_4:
{
value val = ((pointeronly *)(g[3].p))->data[g[4].i];
g[2].tag = val.tag;
ts |= 0x8 /*001000*/;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_2_3_5:
{
value val = ((pointeronly *)(g[3].p))->data[g[5].i];
g[2].tag = val.tag;
ts |= 0x8 /*001000*/;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_2_4_0:
{
value val = ((pointeronly *)(g[4].p))->data[g[0].i];
g[2].tag = val.tag;
ts |= 0x8 /*001000*/;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_2_4_1:
{
value val = ((pointeronly *)(g[4].p))->data[g[1].i];
g[2].tag = val.tag;
ts |= 0x8 /*001000*/;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_2_4_2:
{
value val = ((pointeronly *)(g[4].p))->data[g[2].i];
g[2].tag = val.tag;
ts |= 0x8 /*001000*/;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_2_4_3:
{
value val = ((pointeronly *)(g[4].p))->data[g[3].i];
g[2].tag = val.tag;
ts |= 0x8 /*001000*/;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_2_4_5:
{
value val = ((pointeronly *)(g[4].p))->data[g[5].i];
g[2].tag = val.tag;
ts |= 0x8 /*001000*/;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_2_5_0:
{
value val = ((pointeronly *)(g[5].p))->data[g[0].i];
g[2].tag = val.tag;
ts |= 0x8 /*001000*/;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_2_5_1:
{
value val = ((pointeronly *)(g[5].p))->data[g[1].i];
g[2].tag = val.tag;
ts |= 0x8 /*001000*/;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_2_5_2:
{
value val = ((pointeronly *)(g[5].p))->data[g[2].i];
g[2].tag = val.tag;
ts |= 0x8 /*001000*/;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_2_5_3:
{
value val = ((pointeronly *)(g[5].p))->data[g[3].i];
g[2].tag = val.tag;
ts |= 0x8 /*001000*/;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_2_5_4:
{
value val = ((pointeronly *)(g[5].p))->data[g[4].i];
g[2].tag = val.tag;
ts |= 0x8 /*001000*/;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_3_0_1:
{
value val = ((pointeronly *)(g[0].p))->data[g[1].i];
g[3].tag = val.tag;
ts |= 0x4 /*000100*/;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_3_0_2:
{
value val = ((pointeronly *)(g[0].p))->data[g[2].i];
g[3].tag = val.tag;
ts |= 0x4 /*000100*/;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_3_0_3:
{
value val = ((pointeronly *)(g[0].p))->data[g[3].i];
g[3].tag = val.tag;
ts |= 0x4 /*000100*/;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_3_0_4:
{
value val = ((pointeronly *)(g[0].p))->data[g[4].i];
g[3].tag = val.tag;
ts |= 0x4 /*000100*/;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_3_0_5:
{
value val = ((pointeronly *)(g[0].p))->data[g[5].i];
g[3].tag = val.tag;
ts |= 0x4 /*000100*/;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_3_1_0:
{
value val = ((pointeronly *)(g[1].p))->data[g[0].i];
g[3].tag = val.tag;
ts |= 0x4 /*000100*/;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_3_1_2:
{
value val = ((pointeronly *)(g[1].p))->data[g[2].i];
g[3].tag = val.tag;
ts |= 0x4 /*000100*/;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_3_1_3:
{
value val = ((pointeronly *)(g[1].p))->data[g[3].i];
g[3].tag = val.tag;
ts |= 0x4 /*000100*/;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_3_1_4:
{
value val = ((pointeronly *)(g[1].p))->data[g[4].i];
g[3].tag = val.tag;
ts |= 0x4 /*000100*/;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_3_1_5:
{
value val = ((pointeronly *)(g[1].p))->data[g[5].i];
g[3].tag = val.tag;
ts |= 0x4 /*000100*/;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_3_2_0:
{
value val = ((pointeronly *)(g[2].p))->data[g[0].i];
g[3].tag = val.tag;
ts |= 0x4 /*000100*/;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_3_2_1:
{
value val = ((pointeronly *)(g[2].p))->data[g[1].i];
g[3].tag = val.tag;
ts |= 0x4 /*000100*/;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_3_2_3:
{
value val = ((pointeronly *)(g[2].p))->data[g[3].i];
g[3].tag = val.tag;
ts |= 0x4 /*000100*/;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_3_2_4:
{
value val = ((pointeronly *)(g[2].p))->data[g[4].i];
g[3].tag = val.tag;
ts |= 0x4 /*000100*/;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_3_2_5:
{
value val = ((pointeronly *)(g[2].p))->data[g[5].i];
g[3].tag = val.tag;
ts |= 0x4 /*000100*/;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_3_3_0:
{
value val = ((pointeronly *)(g[3].p))->data[g[0].i];
g[3].tag = val.tag;
ts |= 0x4 /*000100*/;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_3_3_1:
{
value val = ((pointeronly *)(g[3].p))->data[g[1].i];
g[3].tag = val.tag;
ts |= 0x4 /*000100*/;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_3_3_2:
{
value val = ((pointeronly *)(g[3].p))->data[g[2].i];
g[3].tag = val.tag;
ts |= 0x4 /*000100*/;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_3_3_4:
{
value val = ((pointeronly *)(g[3].p))->data[g[4].i];
g[3].tag = val.tag;
ts |= 0x4 /*000100*/;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_3_3_5:
{
value val = ((pointeronly *)(g[3].p))->data[g[5].i];
g[3].tag = val.tag;
ts |= 0x4 /*000100*/;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_3_4_0:
{
value val = ((pointeronly *)(g[4].p))->data[g[0].i];
g[3].tag = val.tag;
ts |= 0x4 /*000100*/;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_3_4_1:
{
value val = ((pointeronly *)(g[4].p))->data[g[1].i];
g[3].tag = val.tag;
ts |= 0x4 /*000100*/;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_3_4_2:
{
value val = ((pointeronly *)(g[4].p))->data[g[2].i];
g[3].tag = val.tag;
ts |= 0x4 /*000100*/;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_3_4_3:
{
value val = ((pointeronly *)(g[4].p))->data[g[3].i];
g[3].tag = val.tag;
ts |= 0x4 /*000100*/;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_3_4_5:
{
value val = ((pointeronly *)(g[4].p))->data[g[5].i];
g[3].tag = val.tag;
ts |= 0x4 /*000100*/;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_3_5_0:
{
value val = ((pointeronly *)(g[5].p))->data[g[0].i];
g[3].tag = val.tag;
ts |= 0x4 /*000100*/;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_3_5_1:
{
value val = ((pointeronly *)(g[5].p))->data[g[1].i];
g[3].tag = val.tag;
ts |= 0x4 /*000100*/;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_3_5_2:
{
value val = ((pointeronly *)(g[5].p))->data[g[2].i];
g[3].tag = val.tag;
ts |= 0x4 /*000100*/;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_3_5_3:
{
value val = ((pointeronly *)(g[5].p))->data[g[3].i];
g[3].tag = val.tag;
ts |= 0x4 /*000100*/;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_3_5_4:
{
value val = ((pointeronly *)(g[5].p))->data[g[4].i];
g[3].tag = val.tag;
ts |= 0x4 /*000100*/;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_4_0_1:
{
value val = ((pointeronly *)(g[0].p))->data[g[1].i];
g[4].tag = val.tag;
ts |= 0x2 /*000010*/;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_4_0_2:
{
value val = ((pointeronly *)(g[0].p))->data[g[2].i];
g[4].tag = val.tag;
ts |= 0x2 /*000010*/;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_4_0_3:
{
value val = ((pointeronly *)(g[0].p))->data[g[3].i];
g[4].tag = val.tag;
ts |= 0x2 /*000010*/;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_4_0_4:
{
value val = ((pointeronly *)(g[0].p))->data[g[4].i];
g[4].tag = val.tag;
ts |= 0x2 /*000010*/;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_4_0_5:
{
value val = ((pointeronly *)(g[0].p))->data[g[5].i];
g[4].tag = val.tag;
ts |= 0x2 /*000010*/;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_4_1_0:
{
value val = ((pointeronly *)(g[1].p))->data[g[0].i];
g[4].tag = val.tag;
ts |= 0x2 /*000010*/;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_4_1_2:
{
value val = ((pointeronly *)(g[1].p))->data[g[2].i];
g[4].tag = val.tag;
ts |= 0x2 /*000010*/;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_4_1_3:
{
value val = ((pointeronly *)(g[1].p))->data[g[3].i];
g[4].tag = val.tag;
ts |= 0x2 /*000010*/;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_4_1_4:
{
value val = ((pointeronly *)(g[1].p))->data[g[4].i];
g[4].tag = val.tag;
ts |= 0x2 /*000010*/;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_4_1_5:
{
value val = ((pointeronly *)(g[1].p))->data[g[5].i];
g[4].tag = val.tag;
ts |= 0x2 /*000010*/;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_4_2_0:
{
value val = ((pointeronly *)(g[2].p))->data[g[0].i];
g[4].tag = val.tag;
ts |= 0x2 /*000010*/;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_4_2_1:
{
value val = ((pointeronly *)(g[2].p))->data[g[1].i];
g[4].tag = val.tag;
ts |= 0x2 /*000010*/;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_4_2_3:
{
value val = ((pointeronly *)(g[2].p))->data[g[3].i];
g[4].tag = val.tag;
ts |= 0x2 /*000010*/;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_4_2_4:
{
value val = ((pointeronly *)(g[2].p))->data[g[4].i];
g[4].tag = val.tag;
ts |= 0x2 /*000010*/;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_4_2_5:
{
value val = ((pointeronly *)(g[2].p))->data[g[5].i];
g[4].tag = val.tag;
ts |= 0x2 /*000010*/;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_4_3_0:
{
value val = ((pointeronly *)(g[3].p))->data[g[0].i];
g[4].tag = val.tag;
ts |= 0x2 /*000010*/;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_4_3_1:
{
value val = ((pointeronly *)(g[3].p))->data[g[1].i];
g[4].tag = val.tag;
ts |= 0x2 /*000010*/;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_4_3_2:
{
value val = ((pointeronly *)(g[3].p))->data[g[2].i];
g[4].tag = val.tag;
ts |= 0x2 /*000010*/;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_4_3_4:
{
value val = ((pointeronly *)(g[3].p))->data[g[4].i];
g[4].tag = val.tag;
ts |= 0x2 /*000010*/;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_4_3_5:
{
value val = ((pointeronly *)(g[3].p))->data[g[5].i];
g[4].tag = val.tag;
ts |= 0x2 /*000010*/;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_4_4_0:
{
value val = ((pointeronly *)(g[4].p))->data[g[0].i];
g[4].tag = val.tag;
ts |= 0x2 /*000010*/;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_4_4_1:
{
value val = ((pointeronly *)(g[4].p))->data[g[1].i];
g[4].tag = val.tag;
ts |= 0x2 /*000010*/;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_4_4_2:
{
value val = ((pointeronly *)(g[4].p))->data[g[2].i];
g[4].tag = val.tag;
ts |= 0x2 /*000010*/;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_4_4_3:
{
value val = ((pointeronly *)(g[4].p))->data[g[3].i];
g[4].tag = val.tag;
ts |= 0x2 /*000010*/;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_4_4_5:
{
value val = ((pointeronly *)(g[4].p))->data[g[5].i];
g[4].tag = val.tag;
ts |= 0x2 /*000010*/;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_4_5_0:
{
value val = ((pointeronly *)(g[5].p))->data[g[0].i];
g[4].tag = val.tag;
ts |= 0x2 /*000010*/;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_4_5_1:
{
value val = ((pointeronly *)(g[5].p))->data[g[1].i];
g[4].tag = val.tag;
ts |= 0x2 /*000010*/;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_4_5_2:
{
value val = ((pointeronly *)(g[5].p))->data[g[2].i];
g[4].tag = val.tag;
ts |= 0x2 /*000010*/;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_4_5_3:
{
value val = ((pointeronly *)(g[5].p))->data[g[3].i];
g[4].tag = val.tag;
ts |= 0x2 /*000010*/;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_4_5_4:
{
value val = ((pointeronly *)(g[5].p))->data[g[4].i];
g[4].tag = val.tag;
ts |= 0x2 /*000010*/;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_5_0_1:
{
value val = ((pointeronly *)(g[0].p))->data[g[1].i];
g[5].tag = val.tag;
ts |= 0x1 /*000001*/;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_5_0_2:
{
value val = ((pointeronly *)(g[0].p))->data[g[2].i];
g[5].tag = val.tag;
ts |= 0x1 /*000001*/;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_5_0_3:
{
value val = ((pointeronly *)(g[0].p))->data[g[3].i];
g[5].tag = val.tag;
ts |= 0x1 /*000001*/;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_5_0_4:
{
value val = ((pointeronly *)(g[0].p))->data[g[4].i];
g[5].tag = val.tag;
ts |= 0x1 /*000001*/;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_5_0_5:
{
value val = ((pointeronly *)(g[0].p))->data[g[5].i];
g[5].tag = val.tag;
ts |= 0x1 /*000001*/;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_5_1_0:
{
value val = ((pointeronly *)(g[1].p))->data[g[0].i];
g[5].tag = val.tag;
ts |= 0x1 /*000001*/;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_5_1_2:
{
value val = ((pointeronly *)(g[1].p))->data[g[2].i];
g[5].tag = val.tag;
ts |= 0x1 /*000001*/;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_5_1_3:
{
value val = ((pointeronly *)(g[1].p))->data[g[3].i];
g[5].tag = val.tag;
ts |= 0x1 /*000001*/;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_5_1_4:
{
value val = ((pointeronly *)(g[1].p))->data[g[4].i];
g[5].tag = val.tag;
ts |= 0x1 /*000001*/;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_5_1_5:
{
value val = ((pointeronly *)(g[1].p))->data[g[5].i];
g[5].tag = val.tag;
ts |= 0x1 /*000001*/;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_5_2_0:
{
value val = ((pointeronly *)(g[2].p))->data[g[0].i];
g[5].tag = val.tag;
ts |= 0x1 /*000001*/;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_5_2_1:
{
value val = ((pointeronly *)(g[2].p))->data[g[1].i];
g[5].tag = val.tag;
ts |= 0x1 /*000001*/;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_5_2_3:
{
value val = ((pointeronly *)(g[2].p))->data[g[3].i];
g[5].tag = val.tag;
ts |= 0x1 /*000001*/;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_5_2_4:
{
value val = ((pointeronly *)(g[2].p))->data[g[4].i];
g[5].tag = val.tag;
ts |= 0x1 /*000001*/;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_5_2_5:
{
value val = ((pointeronly *)(g[2].p))->data[g[5].i];
g[5].tag = val.tag;
ts |= 0x1 /*000001*/;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_5_3_0:
{
value val = ((pointeronly *)(g[3].p))->data[g[0].i];
g[5].tag = val.tag;
ts |= 0x1 /*000001*/;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_5_3_1:
{
value val = ((pointeronly *)(g[3].p))->data[g[1].i];
g[5].tag = val.tag;
ts |= 0x1 /*000001*/;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_5_3_2:
{
value val = ((pointeronly *)(g[3].p))->data[g[2].i];
g[5].tag = val.tag;
ts |= 0x1 /*000001*/;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_5_3_4:
{
value val = ((pointeronly *)(g[3].p))->data[g[4].i];
g[5].tag = val.tag;
ts |= 0x1 /*000001*/;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_5_3_5:
{
value val = ((pointeronly *)(g[3].p))->data[g[5].i];
g[5].tag = val.tag;
ts |= 0x1 /*000001*/;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_5_4_0:
{
value val = ((pointeronly *)(g[4].p))->data[g[0].i];
g[5].tag = val.tag;
ts |= 0x1 /*000001*/;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_5_4_1:
{
value val = ((pointeronly *)(g[4].p))->data[g[1].i];
g[5].tag = val.tag;
ts |= 0x1 /*000001*/;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_5_4_2:
{
value val = ((pointeronly *)(g[4].p))->data[g[2].i];
g[5].tag = val.tag;
ts |= 0x1 /*000001*/;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_5_4_3:
{
value val = ((pointeronly *)(g[4].p))->data[g[3].i];
g[5].tag = val.tag;
ts |= 0x1 /*000001*/;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_5_4_5:
{
value val = ((pointeronly *)(g[4].p))->data[g[5].i];
g[5].tag = val.tag;
ts |= 0x1 /*000001*/;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_5_5_0:
{
value val = ((pointeronly *)(g[5].p))->data[g[0].i];
g[5].tag = val.tag;
ts |= 0x1 /*000001*/;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_5_5_1:
{
value val = ((pointeronly *)(g[5].p))->data[g[1].i];
g[5].tag = val.tag;
ts |= 0x1 /*000001*/;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_5_5_2:
{
value val = ((pointeronly *)(g[5].p))->data[g[2].i];
g[5].tag = val.tag;
ts |= 0x1 /*000001*/;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_5_5_3:
{
value val = ((pointeronly *)(g[5].p))->data[g[3].i];
g[5].tag = val.tag;
ts |= 0x1 /*000001*/;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_5_5_4:
{
value val = ((pointeronly *)(g[5].p))->data[g[4].i];
g[5].tag = val.tag;
ts |= 0x1 /*000001*/;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_0_0_1:
{
value val = ((pointeronly *)(g[0].p))->data[g[1].i];
g[0].tag = val.tag;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_0_0_2:
{
value val = ((pointeronly *)(g[0].p))->data[g[2].i];
g[0].tag = val.tag;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_0_0_3:
{
value val = ((pointeronly *)(g[0].p))->data[g[3].i];
g[0].tag = val.tag;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_0_0_4:
{
value val = ((pointeronly *)(g[0].p))->data[g[4].i];
g[0].tag = val.tag;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_0_0_5:
{
value val = ((pointeronly *)(g[0].p))->data[g[5].i];
g[0].tag = val.tag;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_0_1_0:
{
value val = ((pointeronly *)(g[1].p))->data[g[0].i];
g[0].tag = val.tag;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_0_1_2:
{
value val = ((pointeronly *)(g[1].p))->data[g[2].i];
g[0].tag = val.tag;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_0_1_3:
{
value val = ((pointeronly *)(g[1].p))->data[g[3].i];
g[0].tag = val.tag;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_0_1_4:
{
value val = ((pointeronly *)(g[1].p))->data[g[4].i];
g[0].tag = val.tag;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_0_1_5:
{
value val = ((pointeronly *)(g[1].p))->data[g[5].i];
g[0].tag = val.tag;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_0_2_0:
{
value val = ((pointeronly *)(g[2].p))->data[g[0].i];
g[0].tag = val.tag;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_0_2_1:
{
value val = ((pointeronly *)(g[2].p))->data[g[1].i];
g[0].tag = val.tag;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_0_2_3:
{
value val = ((pointeronly *)(g[2].p))->data[g[3].i];
g[0].tag = val.tag;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_0_2_4:
{
value val = ((pointeronly *)(g[2].p))->data[g[4].i];
g[0].tag = val.tag;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_0_2_5:
{
value val = ((pointeronly *)(g[2].p))->data[g[5].i];
g[0].tag = val.tag;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_0_3_0:
{
value val = ((pointeronly *)(g[3].p))->data[g[0].i];
g[0].tag = val.tag;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_0_3_1:
{
value val = ((pointeronly *)(g[3].p))->data[g[1].i];
g[0].tag = val.tag;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_0_3_2:
{
value val = ((pointeronly *)(g[3].p))->data[g[2].i];
g[0].tag = val.tag;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_0_3_4:
{
value val = ((pointeronly *)(g[3].p))->data[g[4].i];
g[0].tag = val.tag;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_0_3_5:
{
value val = ((pointeronly *)(g[3].p))->data[g[5].i];
g[0].tag = val.tag;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_0_4_0:
{
value val = ((pointeronly *)(g[4].p))->data[g[0].i];
g[0].tag = val.tag;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_0_4_1:
{
value val = ((pointeronly *)(g[4].p))->data[g[1].i];
g[0].tag = val.tag;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_0_4_2:
{
value val = ((pointeronly *)(g[4].p))->data[g[2].i];
g[0].tag = val.tag;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_0_4_3:
{
value val = ((pointeronly *)(g[4].p))->data[g[3].i];
g[0].tag = val.tag;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_0_4_5:
{
value val = ((pointeronly *)(g[4].p))->data[g[5].i];
g[0].tag = val.tag;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_0_5_0:
{
value val = ((pointeronly *)(g[5].p))->data[g[0].i];
g[0].tag = val.tag;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_0_5_1:
{
value val = ((pointeronly *)(g[5].p))->data[g[1].i];
g[0].tag = val.tag;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_0_5_2:
{
value val = ((pointeronly *)(g[5].p))->data[g[2].i];
g[0].tag = val.tag;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_0_5_3:
{
value val = ((pointeronly *)(g[5].p))->data[g[3].i];
g[0].tag = val.tag;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_0_5_4:
{
value val = ((pointeronly *)(g[5].p))->data[g[4].i];
g[0].tag = val.tag;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_1_0_1:
{
value val = ((pointeronly *)(g[0].p))->data[g[1].i];
g[1].tag = val.tag;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_1_0_2:
{
value val = ((pointeronly *)(g[0].p))->data[g[2].i];
g[1].tag = val.tag;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_1_0_3:
{
value val = ((pointeronly *)(g[0].p))->data[g[3].i];
g[1].tag = val.tag;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_1_0_4:
{
value val = ((pointeronly *)(g[0].p))->data[g[4].i];
g[1].tag = val.tag;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_1_0_5:
{
value val = ((pointeronly *)(g[0].p))->data[g[5].i];
g[1].tag = val.tag;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_1_1_0:
{
value val = ((pointeronly *)(g[1].p))->data[g[0].i];
g[1].tag = val.tag;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_1_1_2:
{
value val = ((pointeronly *)(g[1].p))->data[g[2].i];
g[1].tag = val.tag;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_1_1_3:
{
value val = ((pointeronly *)(g[1].p))->data[g[3].i];
g[1].tag = val.tag;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_1_1_4:
{
value val = ((pointeronly *)(g[1].p))->data[g[4].i];
g[1].tag = val.tag;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_1_1_5:
{
value val = ((pointeronly *)(g[1].p))->data[g[5].i];
g[1].tag = val.tag;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_1_2_0:
{
value val = ((pointeronly *)(g[2].p))->data[g[0].i];
g[1].tag = val.tag;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_1_2_1:
{
value val = ((pointeronly *)(g[2].p))->data[g[1].i];
g[1].tag = val.tag;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_1_2_3:
{
value val = ((pointeronly *)(g[2].p))->data[g[3].i];
g[1].tag = val.tag;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_1_2_4:
{
value val = ((pointeronly *)(g[2].p))->data[g[4].i];
g[1].tag = val.tag;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_1_2_5:
{
value val = ((pointeronly *)(g[2].p))->data[g[5].i];
g[1].tag = val.tag;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_1_3_0:
{
value val = ((pointeronly *)(g[3].p))->data[g[0].i];
g[1].tag = val.tag;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_1_3_1:
{
value val = ((pointeronly *)(g[3].p))->data[g[1].i];
g[1].tag = val.tag;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_1_3_2:
{
value val = ((pointeronly *)(g[3].p))->data[g[2].i];
g[1].tag = val.tag;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_1_3_4:
{
value val = ((pointeronly *)(g[3].p))->data[g[4].i];
g[1].tag = val.tag;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_1_3_5:
{
value val = ((pointeronly *)(g[3].p))->data[g[5].i];
g[1].tag = val.tag;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_1_4_0:
{
value val = ((pointeronly *)(g[4].p))->data[g[0].i];
g[1].tag = val.tag;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_1_4_1:
{
value val = ((pointeronly *)(g[4].p))->data[g[1].i];
g[1].tag = val.tag;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_1_4_2:
{
value val = ((pointeronly *)(g[4].p))->data[g[2].i];
g[1].tag = val.tag;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_1_4_3:
{
value val = ((pointeronly *)(g[4].p))->data[g[3].i];
g[1].tag = val.tag;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_1_4_5:
{
value val = ((pointeronly *)(g[4].p))->data[g[5].i];
g[1].tag = val.tag;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_1_5_0:
{
value val = ((pointeronly *)(g[5].p))->data[g[0].i];
g[1].tag = val.tag;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_1_5_1:
{
value val = ((pointeronly *)(g[5].p))->data[g[1].i];
g[1].tag = val.tag;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_1_5_2:
{
value val = ((pointeronly *)(g[5].p))->data[g[2].i];
g[1].tag = val.tag;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_1_5_3:
{
value val = ((pointeronly *)(g[5].p))->data[g[3].i];
g[1].tag = val.tag;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_1_5_4:
{
value val = ((pointeronly *)(g[5].p))->data[g[4].i];
g[1].tag = val.tag;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_2_0_1:
{
value val = ((pointeronly *)(g[0].p))->data[g[1].i];
g[2].tag = val.tag;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_2_0_2:
{
value val = ((pointeronly *)(g[0].p))->data[g[2].i];
g[2].tag = val.tag;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_2_0_3:
{
value val = ((pointeronly *)(g[0].p))->data[g[3].i];
g[2].tag = val.tag;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_2_0_4:
{
value val = ((pointeronly *)(g[0].p))->data[g[4].i];
g[2].tag = val.tag;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_2_0_5:
{
value val = ((pointeronly *)(g[0].p))->data[g[5].i];
g[2].tag = val.tag;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_2_1_0:
{
value val = ((pointeronly *)(g[1].p))->data[g[0].i];
g[2].tag = val.tag;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_2_1_2:
{
value val = ((pointeronly *)(g[1].p))->data[g[2].i];
g[2].tag = val.tag;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_2_1_3:
{
value val = ((pointeronly *)(g[1].p))->data[g[3].i];
g[2].tag = val.tag;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_2_1_4:
{
value val = ((pointeronly *)(g[1].p))->data[g[4].i];
g[2].tag = val.tag;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_2_1_5:
{
value val = ((pointeronly *)(g[1].p))->data[g[5].i];
g[2].tag = val.tag;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_2_2_0:
{
value val = ((pointeronly *)(g[2].p))->data[g[0].i];
g[2].tag = val.tag;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_2_2_1:
{
value val = ((pointeronly *)(g[2].p))->data[g[1].i];
g[2].tag = val.tag;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_2_2_3:
{
value val = ((pointeronly *)(g[2].p))->data[g[3].i];
g[2].tag = val.tag;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_2_2_4:
{
value val = ((pointeronly *)(g[2].p))->data[g[4].i];
g[2].tag = val.tag;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_2_2_5:
{
value val = ((pointeronly *)(g[2].p))->data[g[5].i];
g[2].tag = val.tag;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_2_3_0:
{
value val = ((pointeronly *)(g[3].p))->data[g[0].i];
g[2].tag = val.tag;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_2_3_1:
{
value val = ((pointeronly *)(g[3].p))->data[g[1].i];
g[2].tag = val.tag;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_2_3_2:
{
value val = ((pointeronly *)(g[3].p))->data[g[2].i];
g[2].tag = val.tag;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_2_3_4:
{
value val = ((pointeronly *)(g[3].p))->data[g[4].i];
g[2].tag = val.tag;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_2_3_5:
{
value val = ((pointeronly *)(g[3].p))->data[g[5].i];
g[2].tag = val.tag;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_2_4_0:
{
value val = ((pointeronly *)(g[4].p))->data[g[0].i];
g[2].tag = val.tag;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_2_4_1:
{
value val = ((pointeronly *)(g[4].p))->data[g[1].i];
g[2].tag = val.tag;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_2_4_2:
{
value val = ((pointeronly *)(g[4].p))->data[g[2].i];
g[2].tag = val.tag;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_2_4_3:
{
value val = ((pointeronly *)(g[4].p))->data[g[3].i];
g[2].tag = val.tag;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_2_4_5:
{
value val = ((pointeronly *)(g[4].p))->data[g[5].i];
g[2].tag = val.tag;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_2_5_0:
{
value val = ((pointeronly *)(g[5].p))->data[g[0].i];
g[2].tag = val.tag;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_2_5_1:
{
value val = ((pointeronly *)(g[5].p))->data[g[1].i];
g[2].tag = val.tag;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_2_5_2:
{
value val = ((pointeronly *)(g[5].p))->data[g[2].i];
g[2].tag = val.tag;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_2_5_3:
{
value val = ((pointeronly *)(g[5].p))->data[g[3].i];
g[2].tag = val.tag;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_2_5_4:
{
value val = ((pointeronly *)(g[5].p))->data[g[4].i];
g[2].tag = val.tag;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_3_0_1:
{
value val = ((pointeronly *)(g[0].p))->data[g[1].i];
g[3].tag = val.tag;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_3_0_2:
{
value val = ((pointeronly *)(g[0].p))->data[g[2].i];
g[3].tag = val.tag;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_3_0_3:
{
value val = ((pointeronly *)(g[0].p))->data[g[3].i];
g[3].tag = val.tag;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_3_0_4:
{
value val = ((pointeronly *)(g[0].p))->data[g[4].i];
g[3].tag = val.tag;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_3_0_5:
{
value val = ((pointeronly *)(g[0].p))->data[g[5].i];
g[3].tag = val.tag;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_3_1_0:
{
value val = ((pointeronly *)(g[1].p))->data[g[0].i];
g[3].tag = val.tag;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_3_1_2:
{
value val = ((pointeronly *)(g[1].p))->data[g[2].i];
g[3].tag = val.tag;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_3_1_3:
{
value val = ((pointeronly *)(g[1].p))->data[g[3].i];
g[3].tag = val.tag;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_3_1_4:
{
value val = ((pointeronly *)(g[1].p))->data[g[4].i];
g[3].tag = val.tag;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_3_1_5:
{
value val = ((pointeronly *)(g[1].p))->data[g[5].i];
g[3].tag = val.tag;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_3_2_0:
{
value val = ((pointeronly *)(g[2].p))->data[g[0].i];
g[3].tag = val.tag;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_3_2_1:
{
value val = ((pointeronly *)(g[2].p))->data[g[1].i];
g[3].tag = val.tag;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_3_2_3:
{
value val = ((pointeronly *)(g[2].p))->data[g[3].i];
g[3].tag = val.tag;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_3_2_4:
{
value val = ((pointeronly *)(g[2].p))->data[g[4].i];
g[3].tag = val.tag;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_3_2_5:
{
value val = ((pointeronly *)(g[2].p))->data[g[5].i];
g[3].tag = val.tag;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_3_3_0:
{
value val = ((pointeronly *)(g[3].p))->data[g[0].i];
g[3].tag = val.tag;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_3_3_1:
{
value val = ((pointeronly *)(g[3].p))->data[g[1].i];
g[3].tag = val.tag;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_3_3_2:
{
value val = ((pointeronly *)(g[3].p))->data[g[2].i];
g[3].tag = val.tag;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_3_3_4:
{
value val = ((pointeronly *)(g[3].p))->data[g[4].i];
g[3].tag = val.tag;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_3_3_5:
{
value val = ((pointeronly *)(g[3].p))->data[g[5].i];
g[3].tag = val.tag;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_3_4_0:
{
value val = ((pointeronly *)(g[4].p))->data[g[0].i];
g[3].tag = val.tag;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_3_4_1:
{
value val = ((pointeronly *)(g[4].p))->data[g[1].i];
g[3].tag = val.tag;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_3_4_2:
{
value val = ((pointeronly *)(g[4].p))->data[g[2].i];
g[3].tag = val.tag;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_3_4_3:
{
value val = ((pointeronly *)(g[4].p))->data[g[3].i];
g[3].tag = val.tag;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_3_4_5:
{
value val = ((pointeronly *)(g[4].p))->data[g[5].i];
g[3].tag = val.tag;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_3_5_0:
{
value val = ((pointeronly *)(g[5].p))->data[g[0].i];
g[3].tag = val.tag;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_3_5_1:
{
value val = ((pointeronly *)(g[5].p))->data[g[1].i];
g[3].tag = val.tag;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_3_5_2:
{
value val = ((pointeronly *)(g[5].p))->data[g[2].i];
g[3].tag = val.tag;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_3_5_3:
{
value val = ((pointeronly *)(g[5].p))->data[g[3].i];
g[3].tag = val.tag;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_3_5_4:
{
value val = ((pointeronly *)(g[5].p))->data[g[4].i];
g[3].tag = val.tag;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_4_0_1:
{
value val = ((pointeronly *)(g[0].p))->data[g[1].i];
g[4].tag = val.tag;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_4_0_2:
{
value val = ((pointeronly *)(g[0].p))->data[g[2].i];
g[4].tag = val.tag;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_4_0_3:
{
value val = ((pointeronly *)(g[0].p))->data[g[3].i];
g[4].tag = val.tag;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_4_0_4:
{
value val = ((pointeronly *)(g[0].p))->data[g[4].i];
g[4].tag = val.tag;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_4_0_5:
{
value val = ((pointeronly *)(g[0].p))->data[g[5].i];
g[4].tag = val.tag;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_4_1_0:
{
value val = ((pointeronly *)(g[1].p))->data[g[0].i];
g[4].tag = val.tag;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_4_1_2:
{
value val = ((pointeronly *)(g[1].p))->data[g[2].i];
g[4].tag = val.tag;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_4_1_3:
{
value val = ((pointeronly *)(g[1].p))->data[g[3].i];
g[4].tag = val.tag;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_4_1_4:
{
value val = ((pointeronly *)(g[1].p))->data[g[4].i];
g[4].tag = val.tag;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_4_1_5:
{
value val = ((pointeronly *)(g[1].p))->data[g[5].i];
g[4].tag = val.tag;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_4_2_0:
{
value val = ((pointeronly *)(g[2].p))->data[g[0].i];
g[4].tag = val.tag;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_4_2_1:
{
value val = ((pointeronly *)(g[2].p))->data[g[1].i];
g[4].tag = val.tag;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_4_2_3:
{
value val = ((pointeronly *)(g[2].p))->data[g[3].i];
g[4].tag = val.tag;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_4_2_4:
{
value val = ((pointeronly *)(g[2].p))->data[g[4].i];
g[4].tag = val.tag;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_4_2_5:
{
value val = ((pointeronly *)(g[2].p))->data[g[5].i];
g[4].tag = val.tag;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_4_3_0:
{
value val = ((pointeronly *)(g[3].p))->data[g[0].i];
g[4].tag = val.tag;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_4_3_1:
{
value val = ((pointeronly *)(g[3].p))->data[g[1].i];
g[4].tag = val.tag;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_4_3_2:
{
value val = ((pointeronly *)(g[3].p))->data[g[2].i];
g[4].tag = val.tag;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_4_3_4:
{
value val = ((pointeronly *)(g[3].p))->data[g[4].i];
g[4].tag = val.tag;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_4_3_5:
{
value val = ((pointeronly *)(g[3].p))->data[g[5].i];
g[4].tag = val.tag;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_4_4_0:
{
value val = ((pointeronly *)(g[4].p))->data[g[0].i];
g[4].tag = val.tag;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_4_4_1:
{
value val = ((pointeronly *)(g[4].p))->data[g[1].i];
g[4].tag = val.tag;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_4_4_2:
{
value val = ((pointeronly *)(g[4].p))->data[g[2].i];
g[4].tag = val.tag;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_4_4_3:
{
value val = ((pointeronly *)(g[4].p))->data[g[3].i];
g[4].tag = val.tag;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_4_4_5:
{
value val = ((pointeronly *)(g[4].p))->data[g[5].i];
g[4].tag = val.tag;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_4_5_0:
{
value val = ((pointeronly *)(g[5].p))->data[g[0].i];
g[4].tag = val.tag;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_4_5_1:
{
value val = ((pointeronly *)(g[5].p))->data[g[1].i];
g[4].tag = val.tag;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_4_5_2:
{
value val = ((pointeronly *)(g[5].p))->data[g[2].i];
g[4].tag = val.tag;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_4_5_3:
{
value val = ((pointeronly *)(g[5].p))->data[g[3].i];
g[4].tag = val.tag;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_4_5_4:
{
value val = ((pointeronly *)(g[5].p))->data[g[4].i];
g[4].tag = val.tag;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_5_0_1:
{
value val = ((pointeronly *)(g[0].p))->data[g[1].i];
g[5].tag = val.tag;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_5_0_2:
{
value val = ((pointeronly *)(g[0].p))->data[g[2].i];
g[5].tag = val.tag;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_5_0_3:
{
value val = ((pointeronly *)(g[0].p))->data[g[3].i];
g[5].tag = val.tag;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_5_0_4:
{
value val = ((pointeronly *)(g[0].p))->data[g[4].i];
g[5].tag = val.tag;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_5_0_5:
{
value val = ((pointeronly *)(g[0].p))->data[g[5].i];
g[5].tag = val.tag;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_5_1_0:
{
value val = ((pointeronly *)(g[1].p))->data[g[0].i];
g[5].tag = val.tag;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_5_1_2:
{
value val = ((pointeronly *)(g[1].p))->data[g[2].i];
g[5].tag = val.tag;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_5_1_3:
{
value val = ((pointeronly *)(g[1].p))->data[g[3].i];
g[5].tag = val.tag;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_5_1_4:
{
value val = ((pointeronly *)(g[1].p))->data[g[4].i];
g[5].tag = val.tag;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_5_1_5:
{
value val = ((pointeronly *)(g[1].p))->data[g[5].i];
g[5].tag = val.tag;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_5_2_0:
{
value val = ((pointeronly *)(g[2].p))->data[g[0].i];
g[5].tag = val.tag;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_5_2_1:
{
value val = ((pointeronly *)(g[2].p))->data[g[1].i];
g[5].tag = val.tag;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_5_2_3:
{
value val = ((pointeronly *)(g[2].p))->data[g[3].i];
g[5].tag = val.tag;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_5_2_4:
{
value val = ((pointeronly *)(g[2].p))->data[g[4].i];
g[5].tag = val.tag;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_5_2_5:
{
value val = ((pointeronly *)(g[2].p))->data[g[5].i];
g[5].tag = val.tag;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_5_3_0:
{
value val = ((pointeronly *)(g[3].p))->data[g[0].i];
g[5].tag = val.tag;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_5_3_1:
{
value val = ((pointeronly *)(g[3].p))->data[g[1].i];
g[5].tag = val.tag;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_5_3_2:
{
value val = ((pointeronly *)(g[3].p))->data[g[2].i];
g[5].tag = val.tag;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_5_3_4:
{
value val = ((pointeronly *)(g[3].p))->data[g[4].i];
g[5].tag = val.tag;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_5_3_5:
{
value val = ((pointeronly *)(g[3].p))->data[g[5].i];
g[5].tag = val.tag;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_5_4_0:
{
value val = ((pointeronly *)(g[4].p))->data[g[0].i];
g[5].tag = val.tag;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_5_4_1:
{
value val = ((pointeronly *)(g[4].p))->data[g[1].i];
g[5].tag = val.tag;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_5_4_2:
{
value val = ((pointeronly *)(g[4].p))->data[g[2].i];
g[5].tag = val.tag;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_5_4_3:
{
value val = ((pointeronly *)(g[4].p))->data[g[3].i];
g[5].tag = val.tag;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_5_4_5:
{
value val = ((pointeronly *)(g[4].p))->data[g[5].i];
g[5].tag = val.tag;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_5_5_0:
{
value val = ((pointeronly *)(g[5].p))->data[g[0].i];
g[5].tag = val.tag;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_5_5_1:
{
value val = ((pointeronly *)(g[5].p))->data[g[1].i];
g[5].tag = val.tag;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_5_5_2:
{
value val = ((pointeronly *)(g[5].p))->data[g[2].i];
g[5].tag = val.tag;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_5_5_3:
{
value val = ((pointeronly *)(g[5].p))->data[g[3].i];
g[5].tag = val.tag;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_5_5_4:
{
value val = ((pointeronly *)(g[5].p))->data[g[4].i];
g[5].tag = val.tag;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

setap_0_1_0:
{
value *vp = &(((pointeronly *)(g[0].p))->data[g[1].i]);
vp->tag = g[0].tag;
vp->p = g[0].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_0_1_1:
{
value *vp = &(((pointeronly *)(g[0].p))->data[g[1].i]);
vp->tag = g[1].tag;
vp->p = g[1].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_0_1_2:
{
value *vp = &(((pointeronly *)(g[0].p))->data[g[1].i]);
vp->tag = g[2].tag;
vp->p = g[2].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_0_1_3:
{
value *vp = &(((pointeronly *)(g[0].p))->data[g[1].i]);
vp->tag = g[3].tag;
vp->p = g[3].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_0_1_4:
{
value *vp = &(((pointeronly *)(g[0].p))->data[g[1].i]);
vp->tag = g[4].tag;
vp->p = g[4].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_0_1_5:
{
value *vp = &(((pointeronly *)(g[0].p))->data[g[1].i]);
vp->tag = g[5].tag;
vp->p = g[5].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_0_2_0:
{
value *vp = &(((pointeronly *)(g[0].p))->data[g[2].i]);
vp->tag = g[0].tag;
vp->p = g[0].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_0_2_1:
{
value *vp = &(((pointeronly *)(g[0].p))->data[g[2].i]);
vp->tag = g[1].tag;
vp->p = g[1].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_0_2_2:
{
value *vp = &(((pointeronly *)(g[0].p))->data[g[2].i]);
vp->tag = g[2].tag;
vp->p = g[2].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_0_2_3:
{
value *vp = &(((pointeronly *)(g[0].p))->data[g[2].i]);
vp->tag = g[3].tag;
vp->p = g[3].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_0_2_4:
{
value *vp = &(((pointeronly *)(g[0].p))->data[g[2].i]);
vp->tag = g[4].tag;
vp->p = g[4].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_0_2_5:
{
value *vp = &(((pointeronly *)(g[0].p))->data[g[2].i]);
vp->tag = g[5].tag;
vp->p = g[5].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_0_3_0:
{
value *vp = &(((pointeronly *)(g[0].p))->data[g[3].i]);
vp->tag = g[0].tag;
vp->p = g[0].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_0_3_1:
{
value *vp = &(((pointeronly *)(g[0].p))->data[g[3].i]);
vp->tag = g[1].tag;
vp->p = g[1].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_0_3_2:
{
value *vp = &(((pointeronly *)(g[0].p))->data[g[3].i]);
vp->tag = g[2].tag;
vp->p = g[2].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_0_3_3:
{
value *vp = &(((pointeronly *)(g[0].p))->data[g[3].i]);
vp->tag = g[3].tag;
vp->p = g[3].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_0_3_4:
{
value *vp = &(((pointeronly *)(g[0].p))->data[g[3].i]);
vp->tag = g[4].tag;
vp->p = g[4].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_0_3_5:
{
value *vp = &(((pointeronly *)(g[0].p))->data[g[3].i]);
vp->tag = g[5].tag;
vp->p = g[5].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_0_4_0:
{
value *vp = &(((pointeronly *)(g[0].p))->data[g[4].i]);
vp->tag = g[0].tag;
vp->p = g[0].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_0_4_1:
{
value *vp = &(((pointeronly *)(g[0].p))->data[g[4].i]);
vp->tag = g[1].tag;
vp->p = g[1].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_0_4_2:
{
value *vp = &(((pointeronly *)(g[0].p))->data[g[4].i]);
vp->tag = g[2].tag;
vp->p = g[2].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_0_4_3:
{
value *vp = &(((pointeronly *)(g[0].p))->data[g[4].i]);
vp->tag = g[3].tag;
vp->p = g[3].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_0_4_4:
{
value *vp = &(((pointeronly *)(g[0].p))->data[g[4].i]);
vp->tag = g[4].tag;
vp->p = g[4].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_0_4_5:
{
value *vp = &(((pointeronly *)(g[0].p))->data[g[4].i]);
vp->tag = g[5].tag;
vp->p = g[5].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_0_5_0:
{
value *vp = &(((pointeronly *)(g[0].p))->data[g[5].i]);
vp->tag = g[0].tag;
vp->p = g[0].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_0_5_1:
{
value *vp = &(((pointeronly *)(g[0].p))->data[g[5].i]);
vp->tag = g[1].tag;
vp->p = g[1].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_0_5_2:
{
value *vp = &(((pointeronly *)(g[0].p))->data[g[5].i]);
vp->tag = g[2].tag;
vp->p = g[2].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_0_5_3:
{
value *vp = &(((pointeronly *)(g[0].p))->data[g[5].i]);
vp->tag = g[3].tag;
vp->p = g[3].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_0_5_4:
{
value *vp = &(((pointeronly *)(g[0].p))->data[g[5].i]);
vp->tag = g[4].tag;
vp->p = g[4].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_0_5_5:
{
value *vp = &(((pointeronly *)(g[0].p))->data[g[5].i]);
vp->tag = g[5].tag;
vp->p = g[5].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_1_0_0:
{
value *vp = &(((pointeronly *)(g[1].p))->data[g[0].i]);
vp->tag = g[0].tag;
vp->p = g[0].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_1_0_1:
{
value *vp = &(((pointeronly *)(g[1].p))->data[g[0].i]);
vp->tag = g[1].tag;
vp->p = g[1].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_1_0_2:
{
value *vp = &(((pointeronly *)(g[1].p))->data[g[0].i]);
vp->tag = g[2].tag;
vp->p = g[2].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_1_0_3:
{
value *vp = &(((pointeronly *)(g[1].p))->data[g[0].i]);
vp->tag = g[3].tag;
vp->p = g[3].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_1_0_4:
{
value *vp = &(((pointeronly *)(g[1].p))->data[g[0].i]);
vp->tag = g[4].tag;
vp->p = g[4].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_1_0_5:
{
value *vp = &(((pointeronly *)(g[1].p))->data[g[0].i]);
vp->tag = g[5].tag;
vp->p = g[5].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_1_2_0:
{
value *vp = &(((pointeronly *)(g[1].p))->data[g[2].i]);
vp->tag = g[0].tag;
vp->p = g[0].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_1_2_1:
{
value *vp = &(((pointeronly *)(g[1].p))->data[g[2].i]);
vp->tag = g[1].tag;
vp->p = g[1].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_1_2_2:
{
value *vp = &(((pointeronly *)(g[1].p))->data[g[2].i]);
vp->tag = g[2].tag;
vp->p = g[2].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_1_2_3:
{
value *vp = &(((pointeronly *)(g[1].p))->data[g[2].i]);
vp->tag = g[3].tag;
vp->p = g[3].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_1_2_4:
{
value *vp = &(((pointeronly *)(g[1].p))->data[g[2].i]);
vp->tag = g[4].tag;
vp->p = g[4].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_1_2_5:
{
value *vp = &(((pointeronly *)(g[1].p))->data[g[2].i]);
vp->tag = g[5].tag;
vp->p = g[5].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_1_3_0:
{
value *vp = &(((pointeronly *)(g[1].p))->data[g[3].i]);
vp->tag = g[0].tag;
vp->p = g[0].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_1_3_1:
{
value *vp = &(((pointeronly *)(g[1].p))->data[g[3].i]);
vp->tag = g[1].tag;
vp->p = g[1].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_1_3_2:
{
value *vp = &(((pointeronly *)(g[1].p))->data[g[3].i]);
vp->tag = g[2].tag;
vp->p = g[2].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_1_3_3:
{
value *vp = &(((pointeronly *)(g[1].p))->data[g[3].i]);
vp->tag = g[3].tag;
vp->p = g[3].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_1_3_4:
{
value *vp = &(((pointeronly *)(g[1].p))->data[g[3].i]);
vp->tag = g[4].tag;
vp->p = g[4].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_1_3_5:
{
value *vp = &(((pointeronly *)(g[1].p))->data[g[3].i]);
vp->tag = g[5].tag;
vp->p = g[5].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_1_4_0:
{
value *vp = &(((pointeronly *)(g[1].p))->data[g[4].i]);
vp->tag = g[0].tag;
vp->p = g[0].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_1_4_1:
{
value *vp = &(((pointeronly *)(g[1].p))->data[g[4].i]);
vp->tag = g[1].tag;
vp->p = g[1].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_1_4_2:
{
value *vp = &(((pointeronly *)(g[1].p))->data[g[4].i]);
vp->tag = g[2].tag;
vp->p = g[2].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_1_4_3:
{
value *vp = &(((pointeronly *)(g[1].p))->data[g[4].i]);
vp->tag = g[3].tag;
vp->p = g[3].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_1_4_4:
{
value *vp = &(((pointeronly *)(g[1].p))->data[g[4].i]);
vp->tag = g[4].tag;
vp->p = g[4].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_1_4_5:
{
value *vp = &(((pointeronly *)(g[1].p))->data[g[4].i]);
vp->tag = g[5].tag;
vp->p = g[5].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_1_5_0:
{
value *vp = &(((pointeronly *)(g[1].p))->data[g[5].i]);
vp->tag = g[0].tag;
vp->p = g[0].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_1_5_1:
{
value *vp = &(((pointeronly *)(g[1].p))->data[g[5].i]);
vp->tag = g[1].tag;
vp->p = g[1].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_1_5_2:
{
value *vp = &(((pointeronly *)(g[1].p))->data[g[5].i]);
vp->tag = g[2].tag;
vp->p = g[2].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_1_5_3:
{
value *vp = &(((pointeronly *)(g[1].p))->data[g[5].i]);
vp->tag = g[3].tag;
vp->p = g[3].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_1_5_4:
{
value *vp = &(((pointeronly *)(g[1].p))->data[g[5].i]);
vp->tag = g[4].tag;
vp->p = g[4].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_1_5_5:
{
value *vp = &(((pointeronly *)(g[1].p))->data[g[5].i]);
vp->tag = g[5].tag;
vp->p = g[5].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_2_0_0:
{
value *vp = &(((pointeronly *)(g[2].p))->data[g[0].i]);
vp->tag = g[0].tag;
vp->p = g[0].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_2_0_1:
{
value *vp = &(((pointeronly *)(g[2].p))->data[g[0].i]);
vp->tag = g[1].tag;
vp->p = g[1].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_2_0_2:
{
value *vp = &(((pointeronly *)(g[2].p))->data[g[0].i]);
vp->tag = g[2].tag;
vp->p = g[2].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_2_0_3:
{
value *vp = &(((pointeronly *)(g[2].p))->data[g[0].i]);
vp->tag = g[3].tag;
vp->p = g[3].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_2_0_4:
{
value *vp = &(((pointeronly *)(g[2].p))->data[g[0].i]);
vp->tag = g[4].tag;
vp->p = g[4].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_2_0_5:
{
value *vp = &(((pointeronly *)(g[2].p))->data[g[0].i]);
vp->tag = g[5].tag;
vp->p = g[5].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_2_1_0:
{
value *vp = &(((pointeronly *)(g[2].p))->data[g[1].i]);
vp->tag = g[0].tag;
vp->p = g[0].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_2_1_1:
{
value *vp = &(((pointeronly *)(g[2].p))->data[g[1].i]);
vp->tag = g[1].tag;
vp->p = g[1].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_2_1_2:
{
value *vp = &(((pointeronly *)(g[2].p))->data[g[1].i]);
vp->tag = g[2].tag;
vp->p = g[2].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_2_1_3:
{
value *vp = &(((pointeronly *)(g[2].p))->data[g[1].i]);
vp->tag = g[3].tag;
vp->p = g[3].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_2_1_4:
{
value *vp = &(((pointeronly *)(g[2].p))->data[g[1].i]);
vp->tag = g[4].tag;
vp->p = g[4].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_2_1_5:
{
value *vp = &(((pointeronly *)(g[2].p))->data[g[1].i]);
vp->tag = g[5].tag;
vp->p = g[5].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_2_3_0:
{
value *vp = &(((pointeronly *)(g[2].p))->data[g[3].i]);
vp->tag = g[0].tag;
vp->p = g[0].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_2_3_1:
{
value *vp = &(((pointeronly *)(g[2].p))->data[g[3].i]);
vp->tag = g[1].tag;
vp->p = g[1].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_2_3_2:
{
value *vp = &(((pointeronly *)(g[2].p))->data[g[3].i]);
vp->tag = g[2].tag;
vp->p = g[2].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_2_3_3:
{
value *vp = &(((pointeronly *)(g[2].p))->data[g[3].i]);
vp->tag = g[3].tag;
vp->p = g[3].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_2_3_4:
{
value *vp = &(((pointeronly *)(g[2].p))->data[g[3].i]);
vp->tag = g[4].tag;
vp->p = g[4].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_2_3_5:
{
value *vp = &(((pointeronly *)(g[2].p))->data[g[3].i]);
vp->tag = g[5].tag;
vp->p = g[5].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_2_4_0:
{
value *vp = &(((pointeronly *)(g[2].p))->data[g[4].i]);
vp->tag = g[0].tag;
vp->p = g[0].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_2_4_1:
{
value *vp = &(((pointeronly *)(g[2].p))->data[g[4].i]);
vp->tag = g[1].tag;
vp->p = g[1].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_2_4_2:
{
value *vp = &(((pointeronly *)(g[2].p))->data[g[4].i]);
vp->tag = g[2].tag;
vp->p = g[2].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_2_4_3:
{
value *vp = &(((pointeronly *)(g[2].p))->data[g[4].i]);
vp->tag = g[3].tag;
vp->p = g[3].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_2_4_4:
{
value *vp = &(((pointeronly *)(g[2].p))->data[g[4].i]);
vp->tag = g[4].tag;
vp->p = g[4].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_2_4_5:
{
value *vp = &(((pointeronly *)(g[2].p))->data[g[4].i]);
vp->tag = g[5].tag;
vp->p = g[5].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_2_5_0:
{
value *vp = &(((pointeronly *)(g[2].p))->data[g[5].i]);
vp->tag = g[0].tag;
vp->p = g[0].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_2_5_1:
{
value *vp = &(((pointeronly *)(g[2].p))->data[g[5].i]);
vp->tag = g[1].tag;
vp->p = g[1].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_2_5_2:
{
value *vp = &(((pointeronly *)(g[2].p))->data[g[5].i]);
vp->tag = g[2].tag;
vp->p = g[2].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_2_5_3:
{
value *vp = &(((pointeronly *)(g[2].p))->data[g[5].i]);
vp->tag = g[3].tag;
vp->p = g[3].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_2_5_4:
{
value *vp = &(((pointeronly *)(g[2].p))->data[g[5].i]);
vp->tag = g[4].tag;
vp->p = g[4].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_2_5_5:
{
value *vp = &(((pointeronly *)(g[2].p))->data[g[5].i]);
vp->tag = g[5].tag;
vp->p = g[5].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_3_0_0:
{
value *vp = &(((pointeronly *)(g[3].p))->data[g[0].i]);
vp->tag = g[0].tag;
vp->p = g[0].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_3_0_1:
{
value *vp = &(((pointeronly *)(g[3].p))->data[g[0].i]);
vp->tag = g[1].tag;
vp->p = g[1].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_3_0_2:
{
value *vp = &(((pointeronly *)(g[3].p))->data[g[0].i]);
vp->tag = g[2].tag;
vp->p = g[2].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_3_0_3:
{
value *vp = &(((pointeronly *)(g[3].p))->data[g[0].i]);
vp->tag = g[3].tag;
vp->p = g[3].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_3_0_4:
{
value *vp = &(((pointeronly *)(g[3].p))->data[g[0].i]);
vp->tag = g[4].tag;
vp->p = g[4].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_3_0_5:
{
value *vp = &(((pointeronly *)(g[3].p))->data[g[0].i]);
vp->tag = g[5].tag;
vp->p = g[5].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_3_1_0:
{
value *vp = &(((pointeronly *)(g[3].p))->data[g[1].i]);
vp->tag = g[0].tag;
vp->p = g[0].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_3_1_1:
{
value *vp = &(((pointeronly *)(g[3].p))->data[g[1].i]);
vp->tag = g[1].tag;
vp->p = g[1].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_3_1_2:
{
value *vp = &(((pointeronly *)(g[3].p))->data[g[1].i]);
vp->tag = g[2].tag;
vp->p = g[2].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_3_1_3:
{
value *vp = &(((pointeronly *)(g[3].p))->data[g[1].i]);
vp->tag = g[3].tag;
vp->p = g[3].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_3_1_4:
{
value *vp = &(((pointeronly *)(g[3].p))->data[g[1].i]);
vp->tag = g[4].tag;
vp->p = g[4].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_3_1_5:
{
value *vp = &(((pointeronly *)(g[3].p))->data[g[1].i]);
vp->tag = g[5].tag;
vp->p = g[5].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_3_2_0:
{
value *vp = &(((pointeronly *)(g[3].p))->data[g[2].i]);
vp->tag = g[0].tag;
vp->p = g[0].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_3_2_1:
{
value *vp = &(((pointeronly *)(g[3].p))->data[g[2].i]);
vp->tag = g[1].tag;
vp->p = g[1].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_3_2_2:
{
value *vp = &(((pointeronly *)(g[3].p))->data[g[2].i]);
vp->tag = g[2].tag;
vp->p = g[2].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_3_2_3:
{
value *vp = &(((pointeronly *)(g[3].p))->data[g[2].i]);
vp->tag = g[3].tag;
vp->p = g[3].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_3_2_4:
{
value *vp = &(((pointeronly *)(g[3].p))->data[g[2].i]);
vp->tag = g[4].tag;
vp->p = g[4].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_3_2_5:
{
value *vp = &(((pointeronly *)(g[3].p))->data[g[2].i]);
vp->tag = g[5].tag;
vp->p = g[5].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_3_4_0:
{
value *vp = &(((pointeronly *)(g[3].p))->data[g[4].i]);
vp->tag = g[0].tag;
vp->p = g[0].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_3_4_1:
{
value *vp = &(((pointeronly *)(g[3].p))->data[g[4].i]);
vp->tag = g[1].tag;
vp->p = g[1].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_3_4_2:
{
value *vp = &(((pointeronly *)(g[3].p))->data[g[4].i]);
vp->tag = g[2].tag;
vp->p = g[2].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_3_4_3:
{
value *vp = &(((pointeronly *)(g[3].p))->data[g[4].i]);
vp->tag = g[3].tag;
vp->p = g[3].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_3_4_4:
{
value *vp = &(((pointeronly *)(g[3].p))->data[g[4].i]);
vp->tag = g[4].tag;
vp->p = g[4].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_3_4_5:
{
value *vp = &(((pointeronly *)(g[3].p))->data[g[4].i]);
vp->tag = g[5].tag;
vp->p = g[5].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_3_5_0:
{
value *vp = &(((pointeronly *)(g[3].p))->data[g[5].i]);
vp->tag = g[0].tag;
vp->p = g[0].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_3_5_1:
{
value *vp = &(((pointeronly *)(g[3].p))->data[g[5].i]);
vp->tag = g[1].tag;
vp->p = g[1].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_3_5_2:
{
value *vp = &(((pointeronly *)(g[3].p))->data[g[5].i]);
vp->tag = g[2].tag;
vp->p = g[2].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_3_5_3:
{
value *vp = &(((pointeronly *)(g[3].p))->data[g[5].i]);
vp->tag = g[3].tag;
vp->p = g[3].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_3_5_4:
{
value *vp = &(((pointeronly *)(g[3].p))->data[g[5].i]);
vp->tag = g[4].tag;
vp->p = g[4].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_3_5_5:
{
value *vp = &(((pointeronly *)(g[3].p))->data[g[5].i]);
vp->tag = g[5].tag;
vp->p = g[5].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_4_0_0:
{
value *vp = &(((pointeronly *)(g[4].p))->data[g[0].i]);
vp->tag = g[0].tag;
vp->p = g[0].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_4_0_1:
{
value *vp = &(((pointeronly *)(g[4].p))->data[g[0].i]);
vp->tag = g[1].tag;
vp->p = g[1].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_4_0_2:
{
value *vp = &(((pointeronly *)(g[4].p))->data[g[0].i]);
vp->tag = g[2].tag;
vp->p = g[2].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_4_0_3:
{
value *vp = &(((pointeronly *)(g[4].p))->data[g[0].i]);
vp->tag = g[3].tag;
vp->p = g[3].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_4_0_4:
{
value *vp = &(((pointeronly *)(g[4].p))->data[g[0].i]);
vp->tag = g[4].tag;
vp->p = g[4].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_4_0_5:
{
value *vp = &(((pointeronly *)(g[4].p))->data[g[0].i]);
vp->tag = g[5].tag;
vp->p = g[5].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_4_1_0:
{
value *vp = &(((pointeronly *)(g[4].p))->data[g[1].i]);
vp->tag = g[0].tag;
vp->p = g[0].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_4_1_1:
{
value *vp = &(((pointeronly *)(g[4].p))->data[g[1].i]);
vp->tag = g[1].tag;
vp->p = g[1].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_4_1_2:
{
value *vp = &(((pointeronly *)(g[4].p))->data[g[1].i]);
vp->tag = g[2].tag;
vp->p = g[2].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_4_1_3:
{
value *vp = &(((pointeronly *)(g[4].p))->data[g[1].i]);
vp->tag = g[3].tag;
vp->p = g[3].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_4_1_4:
{
value *vp = &(((pointeronly *)(g[4].p))->data[g[1].i]);
vp->tag = g[4].tag;
vp->p = g[4].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_4_1_5:
{
value *vp = &(((pointeronly *)(g[4].p))->data[g[1].i]);
vp->tag = g[5].tag;
vp->p = g[5].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_4_2_0:
{
value *vp = &(((pointeronly *)(g[4].p))->data[g[2].i]);
vp->tag = g[0].tag;
vp->p = g[0].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_4_2_1:
{
value *vp = &(((pointeronly *)(g[4].p))->data[g[2].i]);
vp->tag = g[1].tag;
vp->p = g[1].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_4_2_2:
{
value *vp = &(((pointeronly *)(g[4].p))->data[g[2].i]);
vp->tag = g[2].tag;
vp->p = g[2].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_4_2_3:
{
value *vp = &(((pointeronly *)(g[4].p))->data[g[2].i]);
vp->tag = g[3].tag;
vp->p = g[3].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_4_2_4:
{
value *vp = &(((pointeronly *)(g[4].p))->data[g[2].i]);
vp->tag = g[4].tag;
vp->p = g[4].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_4_2_5:
{
value *vp = &(((pointeronly *)(g[4].p))->data[g[2].i]);
vp->tag = g[5].tag;
vp->p = g[5].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_4_3_0:
{
value *vp = &(((pointeronly *)(g[4].p))->data[g[3].i]);
vp->tag = g[0].tag;
vp->p = g[0].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_4_3_1:
{
value *vp = &(((pointeronly *)(g[4].p))->data[g[3].i]);
vp->tag = g[1].tag;
vp->p = g[1].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_4_3_2:
{
value *vp = &(((pointeronly *)(g[4].p))->data[g[3].i]);
vp->tag = g[2].tag;
vp->p = g[2].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_4_3_3:
{
value *vp = &(((pointeronly *)(g[4].p))->data[g[3].i]);
vp->tag = g[3].tag;
vp->p = g[3].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_4_3_4:
{
value *vp = &(((pointeronly *)(g[4].p))->data[g[3].i]);
vp->tag = g[4].tag;
vp->p = g[4].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_4_3_5:
{
value *vp = &(((pointeronly *)(g[4].p))->data[g[3].i]);
vp->tag = g[5].tag;
vp->p = g[5].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_4_5_0:
{
value *vp = &(((pointeronly *)(g[4].p))->data[g[5].i]);
vp->tag = g[0].tag;
vp->p = g[0].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_4_5_1:
{
value *vp = &(((pointeronly *)(g[4].p))->data[g[5].i]);
vp->tag = g[1].tag;
vp->p = g[1].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_4_5_2:
{
value *vp = &(((pointeronly *)(g[4].p))->data[g[5].i]);
vp->tag = g[2].tag;
vp->p = g[2].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_4_5_3:
{
value *vp = &(((pointeronly *)(g[4].p))->data[g[5].i]);
vp->tag = g[3].tag;
vp->p = g[3].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_4_5_4:
{
value *vp = &(((pointeronly *)(g[4].p))->data[g[5].i]);
vp->tag = g[4].tag;
vp->p = g[4].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_4_5_5:
{
value *vp = &(((pointeronly *)(g[4].p))->data[g[5].i]);
vp->tag = g[5].tag;
vp->p = g[5].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_5_0_0:
{
value *vp = &(((pointeronly *)(g[5].p))->data[g[0].i]);
vp->tag = g[0].tag;
vp->p = g[0].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_5_0_1:
{
value *vp = &(((pointeronly *)(g[5].p))->data[g[0].i]);
vp->tag = g[1].tag;
vp->p = g[1].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_5_0_2:
{
value *vp = &(((pointeronly *)(g[5].p))->data[g[0].i]);
vp->tag = g[2].tag;
vp->p = g[2].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_5_0_3:
{
value *vp = &(((pointeronly *)(g[5].p))->data[g[0].i]);
vp->tag = g[3].tag;
vp->p = g[3].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_5_0_4:
{
value *vp = &(((pointeronly *)(g[5].p))->data[g[0].i]);
vp->tag = g[4].tag;
vp->p = g[4].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_5_0_5:
{
value *vp = &(((pointeronly *)(g[5].p))->data[g[0].i]);
vp->tag = g[5].tag;
vp->p = g[5].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_5_1_0:
{
value *vp = &(((pointeronly *)(g[5].p))->data[g[1].i]);
vp->tag = g[0].tag;
vp->p = g[0].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_5_1_1:
{
value *vp = &(((pointeronly *)(g[5].p))->data[g[1].i]);
vp->tag = g[1].tag;
vp->p = g[1].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_5_1_2:
{
value *vp = &(((pointeronly *)(g[5].p))->data[g[1].i]);
vp->tag = g[2].tag;
vp->p = g[2].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_5_1_3:
{
value *vp = &(((pointeronly *)(g[5].p))->data[g[1].i]);
vp->tag = g[3].tag;
vp->p = g[3].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_5_1_4:
{
value *vp = &(((pointeronly *)(g[5].p))->data[g[1].i]);
vp->tag = g[4].tag;
vp->p = g[4].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_5_1_5:
{
value *vp = &(((pointeronly *)(g[5].p))->data[g[1].i]);
vp->tag = g[5].tag;
vp->p = g[5].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_5_2_0:
{
value *vp = &(((pointeronly *)(g[5].p))->data[g[2].i]);
vp->tag = g[0].tag;
vp->p = g[0].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_5_2_1:
{
value *vp = &(((pointeronly *)(g[5].p))->data[g[2].i]);
vp->tag = g[1].tag;
vp->p = g[1].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_5_2_2:
{
value *vp = &(((pointeronly *)(g[5].p))->data[g[2].i]);
vp->tag = g[2].tag;
vp->p = g[2].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_5_2_3:
{
value *vp = &(((pointeronly *)(g[5].p))->data[g[2].i]);
vp->tag = g[3].tag;
vp->p = g[3].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_5_2_4:
{
value *vp = &(((pointeronly *)(g[5].p))->data[g[2].i]);
vp->tag = g[4].tag;
vp->p = g[4].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_5_2_5:
{
value *vp = &(((pointeronly *)(g[5].p))->data[g[2].i]);
vp->tag = g[5].tag;
vp->p = g[5].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_5_3_0:
{
value *vp = &(((pointeronly *)(g[5].p))->data[g[3].i]);
vp->tag = g[0].tag;
vp->p = g[0].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_5_3_1:
{
value *vp = &(((pointeronly *)(g[5].p))->data[g[3].i]);
vp->tag = g[1].tag;
vp->p = g[1].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_5_3_2:
{
value *vp = &(((pointeronly *)(g[5].p))->data[g[3].i]);
vp->tag = g[2].tag;
vp->p = g[2].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_5_3_3:
{
value *vp = &(((pointeronly *)(g[5].p))->data[g[3].i]);
vp->tag = g[3].tag;
vp->p = g[3].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_5_3_4:
{
value *vp = &(((pointeronly *)(g[5].p))->data[g[3].i]);
vp->tag = g[4].tag;
vp->p = g[4].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_5_3_5:
{
value *vp = &(((pointeronly *)(g[5].p))->data[g[3].i]);
vp->tag = g[5].tag;
vp->p = g[5].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_5_4_0:
{
value *vp = &(((pointeronly *)(g[5].p))->data[g[4].i]);
vp->tag = g[0].tag;
vp->p = g[0].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_5_4_1:
{
value *vp = &(((pointeronly *)(g[5].p))->data[g[4].i]);
vp->tag = g[1].tag;
vp->p = g[1].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_5_4_2:
{
value *vp = &(((pointeronly *)(g[5].p))->data[g[4].i]);
vp->tag = g[2].tag;
vp->p = g[2].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_5_4_3:
{
value *vp = &(((pointeronly *)(g[5].p))->data[g[4].i]);
vp->tag = g[3].tag;
vp->p = g[3].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_5_4_4:
{
value *vp = &(((pointeronly *)(g[5].p))->data[g[4].i]);
vp->tag = g[4].tag;
vp->p = g[4].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_5_4_5:
{
value *vp = &(((pointeronly *)(g[5].p))->data[g[4].i]);
vp->tag = g[5].tag;
vp->p = g[5].p;
goto *dynOpcodes[ts + program[pc]];
}

getb_0_0_1:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[1].i];
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_0_0_2:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[2].i];
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_0_0_3:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[3].i];
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_0_0_4:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[4].i];
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_0_0_5:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[5].i];
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_0_1_0:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[0].i];
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_0_1_2:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[2].i];
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_0_1_3:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[3].i];
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_0_1_4:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[4].i];
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_0_1_5:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[5].i];
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_0_2_0:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[0].i];
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_0_2_1:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[1].i];
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_0_2_3:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[3].i];
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_0_2_4:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[4].i];
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_0_2_5:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[5].i];
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_0_3_0:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[0].i];
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_0_3_1:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[1].i];
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_0_3_2:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[2].i];
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_0_3_4:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[4].i];
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_0_3_5:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[5].i];
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_0_4_0:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[0].i];
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_0_4_1:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[1].i];
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_0_4_2:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[2].i];
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_0_4_3:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[3].i];
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_0_4_5:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[5].i];
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_0_5_0:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[0].i];
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_0_5_1:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[1].i];
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_0_5_2:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[2].i];
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_0_5_3:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[3].i];
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_0_5_4:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[4].i];
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_1_0_1:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[1].i];
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_1_0_2:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[2].i];
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_1_0_3:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[3].i];
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_1_0_4:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[4].i];
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_1_0_5:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[5].i];
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_1_1_0:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[0].i];
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_1_1_2:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[2].i];
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_1_1_3:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[3].i];
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_1_1_4:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[4].i];
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_1_1_5:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[5].i];
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_1_2_0:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[0].i];
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_1_2_1:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[1].i];
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_1_2_3:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[3].i];
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_1_2_4:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[4].i];
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_1_2_5:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[5].i];
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_1_3_0:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[0].i];
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_1_3_1:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[1].i];
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_1_3_2:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[2].i];
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_1_3_4:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[4].i];
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_1_3_5:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[5].i];
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_1_4_0:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[0].i];
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_1_4_1:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[1].i];
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_1_4_2:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[2].i];
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_1_4_3:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[3].i];
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_1_4_5:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[5].i];
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_1_5_0:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[0].i];
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_1_5_1:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[1].i];
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_1_5_2:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[2].i];
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_1_5_3:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[3].i];
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_1_5_4:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[4].i];
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_2_0_1:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[1].i];
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_2_0_2:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[2].i];
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_2_0_3:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[3].i];
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_2_0_4:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[4].i];
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_2_0_5:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[5].i];
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_2_1_0:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[0].i];
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_2_1_2:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[2].i];
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_2_1_3:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[3].i];
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_2_1_4:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[4].i];
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_2_1_5:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[5].i];
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_2_2_0:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[0].i];
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_2_2_1:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[1].i];
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_2_2_3:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[3].i];
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_2_2_4:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[4].i];
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_2_2_5:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[5].i];
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_2_3_0:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[0].i];
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_2_3_1:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[1].i];
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_2_3_2:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[2].i];
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_2_3_4:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[4].i];
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_2_3_5:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[5].i];
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_2_4_0:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[0].i];
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_2_4_1:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[1].i];
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_2_4_2:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[2].i];
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_2_4_3:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[3].i];
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_2_4_5:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[5].i];
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_2_5_0:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[0].i];
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_2_5_1:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[1].i];
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_2_5_2:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[2].i];
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_2_5_3:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[3].i];
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_2_5_4:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[4].i];
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_3_0_1:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[1].i];
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_3_0_2:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[2].i];
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_3_0_3:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[3].i];
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_3_0_4:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[4].i];
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_3_0_5:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[5].i];
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_3_1_0:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[0].i];
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_3_1_2:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[2].i];
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_3_1_3:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[3].i];
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_3_1_4:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[4].i];
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_3_1_5:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[5].i];
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_3_2_0:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[0].i];
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_3_2_1:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[1].i];
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_3_2_3:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[3].i];
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_3_2_4:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[4].i];
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_3_2_5:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[5].i];
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_3_3_0:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[0].i];
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_3_3_1:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[1].i];
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_3_3_2:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[2].i];
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_3_3_4:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[4].i];
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_3_3_5:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[5].i];
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_3_4_0:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[0].i];
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_3_4_1:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[1].i];
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_3_4_2:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[2].i];
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_3_4_3:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[3].i];
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_3_4_5:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[5].i];
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_3_5_0:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[0].i];
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_3_5_1:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[1].i];
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_3_5_2:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[2].i];
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_3_5_3:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[3].i];
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_3_5_4:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[4].i];
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_4_0_1:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[1].i];
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_4_0_2:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[2].i];
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_4_0_3:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[3].i];
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_4_0_4:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[4].i];
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_4_0_5:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[5].i];
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_4_1_0:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[0].i];
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_4_1_2:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[2].i];
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_4_1_3:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[3].i];
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_4_1_4:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[4].i];
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_4_1_5:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[5].i];
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_4_2_0:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[0].i];
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_4_2_1:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[1].i];
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_4_2_3:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[3].i];
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_4_2_4:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[4].i];
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_4_2_5:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[5].i];
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_4_3_0:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[0].i];
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_4_3_1:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[1].i];
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_4_3_2:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[2].i];
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_4_3_4:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[4].i];
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_4_3_5:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[5].i];
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_4_4_0:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[0].i];
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_4_4_1:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[1].i];
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_4_4_2:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[2].i];
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_4_4_3:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[3].i];
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_4_4_5:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[5].i];
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_4_5_0:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[0].i];
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_4_5_1:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[1].i];
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_4_5_2:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[2].i];
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_4_5_3:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[3].i];
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_4_5_4:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[4].i];
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_5_0_1:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[1].i];
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_5_0_2:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[2].i];
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_5_0_3:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[3].i];
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_5_0_4:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[4].i];
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_5_0_5:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[5].i];
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_5_1_0:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[0].i];
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_5_1_2:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[2].i];
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_5_1_3:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[3].i];
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_5_1_4:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[4].i];
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_5_1_5:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[5].i];
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_5_2_0:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[0].i];
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_5_2_1:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[1].i];
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_5_2_3:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[3].i];
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_5_2_4:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[4].i];
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_5_2_5:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[5].i];
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_5_3_0:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[0].i];
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_5_3_1:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[1].i];
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_5_3_2:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[2].i];
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_5_3_4:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[4].i];
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_5_3_5:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[5].i];
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_5_4_0:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[0].i];
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_5_4_1:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[1].i];
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_5_4_2:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[2].i];
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_5_4_3:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[3].i];
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_5_4_5:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[5].i];
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_5_5_0:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[0].i];
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_5_5_1:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[1].i];
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_5_5_2:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[2].i];
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_5_5_3:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[3].i];
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_5_5_4:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[4].i];
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_0_0_1:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[1].i];
g[0].tag = 0;
ts |= 0x1f /*011111*/;
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_0_0_2:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[2].i];
g[0].tag = 0;
ts |= 0x1f /*011111*/;
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_0_0_3:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[3].i];
g[0].tag = 0;
ts |= 0x1f /*011111*/;
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_0_0_4:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[4].i];
g[0].tag = 0;
ts |= 0x1f /*011111*/;
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_0_0_5:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[5].i];
g[0].tag = 0;
ts |= 0x1f /*011111*/;
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_0_1_0:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[0].i];
g[0].tag = 0;
ts |= 0x1f /*011111*/;
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_0_1_2:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[2].i];
g[0].tag = 0;
ts |= 0x1f /*011111*/;
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_0_1_3:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[3].i];
g[0].tag = 0;
ts |= 0x1f /*011111*/;
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_0_1_4:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[4].i];
g[0].tag = 0;
ts |= 0x1f /*011111*/;
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_0_1_5:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[5].i];
g[0].tag = 0;
ts |= 0x1f /*011111*/;
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_0_2_0:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[0].i];
g[0].tag = 0;
ts |= 0x1f /*011111*/;
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_0_2_1:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[1].i];
g[0].tag = 0;
ts |= 0x1f /*011111*/;
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_0_2_3:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[3].i];
g[0].tag = 0;
ts |= 0x1f /*011111*/;
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_0_2_4:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[4].i];
g[0].tag = 0;
ts |= 0x1f /*011111*/;
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_0_2_5:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[5].i];
g[0].tag = 0;
ts |= 0x1f /*011111*/;
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_0_3_0:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[0].i];
g[0].tag = 0;
ts |= 0x1f /*011111*/;
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_0_3_1:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[1].i];
g[0].tag = 0;
ts |= 0x1f /*011111*/;
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_0_3_2:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[2].i];
g[0].tag = 0;
ts |= 0x1f /*011111*/;
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_0_3_4:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[4].i];
g[0].tag = 0;
ts |= 0x1f /*011111*/;
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_0_3_5:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[5].i];
g[0].tag = 0;
ts |= 0x1f /*011111*/;
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_0_4_0:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[0].i];
g[0].tag = 0;
ts |= 0x1f /*011111*/;
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_0_4_1:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[1].i];
g[0].tag = 0;
ts |= 0x1f /*011111*/;
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_0_4_2:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[2].i];
g[0].tag = 0;
ts |= 0x1f /*011111*/;
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_0_4_3:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[3].i];
g[0].tag = 0;
ts |= 0x1f /*011111*/;
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_0_4_5:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[5].i];
g[0].tag = 0;
ts |= 0x1f /*011111*/;
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_0_5_0:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[0].i];
g[0].tag = 0;
ts |= 0x1f /*011111*/;
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_0_5_1:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[1].i];
g[0].tag = 0;
ts |= 0x1f /*011111*/;
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_0_5_2:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[2].i];
g[0].tag = 0;
ts |= 0x1f /*011111*/;
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_0_5_3:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[3].i];
g[0].tag = 0;
ts |= 0x1f /*011111*/;
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_0_5_4:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[4].i];
g[0].tag = 0;
ts |= 0x1f /*011111*/;
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_1_0_1:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[1].i];
g[1].tag = 0;
ts |= 0x2f /*101111*/;
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_1_0_2:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[2].i];
g[1].tag = 0;
ts |= 0x2f /*101111*/;
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_1_0_3:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[3].i];
g[1].tag = 0;
ts |= 0x2f /*101111*/;
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_1_0_4:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[4].i];
g[1].tag = 0;
ts |= 0x2f /*101111*/;
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_1_0_5:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[5].i];
g[1].tag = 0;
ts |= 0x2f /*101111*/;
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_1_1_0:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[0].i];
g[1].tag = 0;
ts |= 0x2f /*101111*/;
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_1_1_2:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[2].i];
g[1].tag = 0;
ts |= 0x2f /*101111*/;
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_1_1_3:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[3].i];
g[1].tag = 0;
ts |= 0x2f /*101111*/;
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_1_1_4:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[4].i];
g[1].tag = 0;
ts |= 0x2f /*101111*/;
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_1_1_5:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[5].i];
g[1].tag = 0;
ts |= 0x2f /*101111*/;
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_1_2_0:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[0].i];
g[1].tag = 0;
ts |= 0x2f /*101111*/;
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_1_2_1:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[1].i];
g[1].tag = 0;
ts |= 0x2f /*101111*/;
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_1_2_3:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[3].i];
g[1].tag = 0;
ts |= 0x2f /*101111*/;
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_1_2_4:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[4].i];
g[1].tag = 0;
ts |= 0x2f /*101111*/;
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_1_2_5:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[5].i];
g[1].tag = 0;
ts |= 0x2f /*101111*/;
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_1_3_0:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[0].i];
g[1].tag = 0;
ts |= 0x2f /*101111*/;
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_1_3_1:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[1].i];
g[1].tag = 0;
ts |= 0x2f /*101111*/;
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_1_3_2:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[2].i];
g[1].tag = 0;
ts |= 0x2f /*101111*/;
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_1_3_4:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[4].i];
g[1].tag = 0;
ts |= 0x2f /*101111*/;
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_1_3_5:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[5].i];
g[1].tag = 0;
ts |= 0x2f /*101111*/;
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_1_4_0:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[0].i];
g[1].tag = 0;
ts |= 0x2f /*101111*/;
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_1_4_1:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[1].i];
g[1].tag = 0;
ts |= 0x2f /*101111*/;
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_1_4_2:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[2].i];
g[1].tag = 0;
ts |= 0x2f /*101111*/;
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_1_4_3:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[3].i];
g[1].tag = 0;
ts |= 0x2f /*101111*/;
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_1_4_5:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[5].i];
g[1].tag = 0;
ts |= 0x2f /*101111*/;
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_1_5_0:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[0].i];
g[1].tag = 0;
ts |= 0x2f /*101111*/;
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_1_5_1:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[1].i];
g[1].tag = 0;
ts |= 0x2f /*101111*/;
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_1_5_2:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[2].i];
g[1].tag = 0;
ts |= 0x2f /*101111*/;
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_1_5_3:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[3].i];
g[1].tag = 0;
ts |= 0x2f /*101111*/;
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_1_5_4:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[4].i];
g[1].tag = 0;
ts |= 0x2f /*101111*/;
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_2_0_1:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[1].i];
g[2].tag = 0;
ts |= 0x37 /*110111*/;
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_2_0_2:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[2].i];
g[2].tag = 0;
ts |= 0x37 /*110111*/;
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_2_0_3:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[3].i];
g[2].tag = 0;
ts |= 0x37 /*110111*/;
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_2_0_4:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[4].i];
g[2].tag = 0;
ts |= 0x37 /*110111*/;
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_2_0_5:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[5].i];
g[2].tag = 0;
ts |= 0x37 /*110111*/;
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_2_1_0:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[0].i];
g[2].tag = 0;
ts |= 0x37 /*110111*/;
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_2_1_2:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[2].i];
g[2].tag = 0;
ts |= 0x37 /*110111*/;
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_2_1_3:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[3].i];
g[2].tag = 0;
ts |= 0x37 /*110111*/;
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_2_1_4:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[4].i];
g[2].tag = 0;
ts |= 0x37 /*110111*/;
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_2_1_5:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[5].i];
g[2].tag = 0;
ts |= 0x37 /*110111*/;
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_2_2_0:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[0].i];
g[2].tag = 0;
ts |= 0x37 /*110111*/;
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_2_2_1:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[1].i];
g[2].tag = 0;
ts |= 0x37 /*110111*/;
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_2_2_3:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[3].i];
g[2].tag = 0;
ts |= 0x37 /*110111*/;
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_2_2_4:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[4].i];
g[2].tag = 0;
ts |= 0x37 /*110111*/;
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_2_2_5:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[5].i];
g[2].tag = 0;
ts |= 0x37 /*110111*/;
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_2_3_0:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[0].i];
g[2].tag = 0;
ts |= 0x37 /*110111*/;
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_2_3_1:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[1].i];
g[2].tag = 0;
ts |= 0x37 /*110111*/;
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_2_3_2:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[2].i];
g[2].tag = 0;
ts |= 0x37 /*110111*/;
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_2_3_4:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[4].i];
g[2].tag = 0;
ts |= 0x37 /*110111*/;
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_2_3_5:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[5].i];
g[2].tag = 0;
ts |= 0x37 /*110111*/;
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_2_4_0:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[0].i];
g[2].tag = 0;
ts |= 0x37 /*110111*/;
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_2_4_1:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[1].i];
g[2].tag = 0;
ts |= 0x37 /*110111*/;
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_2_4_2:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[2].i];
g[2].tag = 0;
ts |= 0x37 /*110111*/;
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_2_4_3:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[3].i];
g[2].tag = 0;
ts |= 0x37 /*110111*/;
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_2_4_5:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[5].i];
g[2].tag = 0;
ts |= 0x37 /*110111*/;
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_2_5_0:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[0].i];
g[2].tag = 0;
ts |= 0x37 /*110111*/;
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_2_5_1:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[1].i];
g[2].tag = 0;
ts |= 0x37 /*110111*/;
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_2_5_2:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[2].i];
g[2].tag = 0;
ts |= 0x37 /*110111*/;
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_2_5_3:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[3].i];
g[2].tag = 0;
ts |= 0x37 /*110111*/;
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_2_5_4:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[4].i];
g[2].tag = 0;
ts |= 0x37 /*110111*/;
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_3_0_1:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[1].i];
g[3].tag = 0;
ts |= 0x3b /*111011*/;
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_3_0_2:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[2].i];
g[3].tag = 0;
ts |= 0x3b /*111011*/;
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_3_0_3:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[3].i];
g[3].tag = 0;
ts |= 0x3b /*111011*/;
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_3_0_4:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[4].i];
g[3].tag = 0;
ts |= 0x3b /*111011*/;
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_3_0_5:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[5].i];
g[3].tag = 0;
ts |= 0x3b /*111011*/;
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_3_1_0:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[0].i];
g[3].tag = 0;
ts |= 0x3b /*111011*/;
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_3_1_2:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[2].i];
g[3].tag = 0;
ts |= 0x3b /*111011*/;
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_3_1_3:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[3].i];
g[3].tag = 0;
ts |= 0x3b /*111011*/;
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_3_1_4:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[4].i];
g[3].tag = 0;
ts |= 0x3b /*111011*/;
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_3_1_5:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[5].i];
g[3].tag = 0;
ts |= 0x3b /*111011*/;
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_3_2_0:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[0].i];
g[3].tag = 0;
ts |= 0x3b /*111011*/;
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_3_2_1:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[1].i];
g[3].tag = 0;
ts |= 0x3b /*111011*/;
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_3_2_3:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[3].i];
g[3].tag = 0;
ts |= 0x3b /*111011*/;
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_3_2_4:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[4].i];
g[3].tag = 0;
ts |= 0x3b /*111011*/;
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_3_2_5:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[5].i];
g[3].tag = 0;
ts |= 0x3b /*111011*/;
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_3_3_0:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[0].i];
g[3].tag = 0;
ts |= 0x3b /*111011*/;
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_3_3_1:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[1].i];
g[3].tag = 0;
ts |= 0x3b /*111011*/;
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_3_3_2:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[2].i];
g[3].tag = 0;
ts |= 0x3b /*111011*/;
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_3_3_4:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[4].i];
g[3].tag = 0;
ts |= 0x3b /*111011*/;
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_3_3_5:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[5].i];
g[3].tag = 0;
ts |= 0x3b /*111011*/;
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_3_4_0:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[0].i];
g[3].tag = 0;
ts |= 0x3b /*111011*/;
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_3_4_1:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[1].i];
g[3].tag = 0;
ts |= 0x3b /*111011*/;
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_3_4_2:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[2].i];
g[3].tag = 0;
ts |= 0x3b /*111011*/;
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_3_4_3:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[3].i];
g[3].tag = 0;
ts |= 0x3b /*111011*/;
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_3_4_5:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[5].i];
g[3].tag = 0;
ts |= 0x3b /*111011*/;
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_3_5_0:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[0].i];
g[3].tag = 0;
ts |= 0x3b /*111011*/;
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_3_5_1:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[1].i];
g[3].tag = 0;
ts |= 0x3b /*111011*/;
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_3_5_2:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[2].i];
g[3].tag = 0;
ts |= 0x3b /*111011*/;
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_3_5_3:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[3].i];
g[3].tag = 0;
ts |= 0x3b /*111011*/;
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_3_5_4:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[4].i];
g[3].tag = 0;
ts |= 0x3b /*111011*/;
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_4_0_1:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[1].i];
g[4].tag = 0;
ts |= 0x3d /*111101*/;
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_4_0_2:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[2].i];
g[4].tag = 0;
ts |= 0x3d /*111101*/;
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_4_0_3:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[3].i];
g[4].tag = 0;
ts |= 0x3d /*111101*/;
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_4_0_4:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[4].i];
g[4].tag = 0;
ts |= 0x3d /*111101*/;
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_4_0_5:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[5].i];
g[4].tag = 0;
ts |= 0x3d /*111101*/;
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_4_1_0:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[0].i];
g[4].tag = 0;
ts |= 0x3d /*111101*/;
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_4_1_2:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[2].i];
g[4].tag = 0;
ts |= 0x3d /*111101*/;
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_4_1_3:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[3].i];
g[4].tag = 0;
ts |= 0x3d /*111101*/;
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_4_1_4:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[4].i];
g[4].tag = 0;
ts |= 0x3d /*111101*/;
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_4_1_5:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[5].i];
g[4].tag = 0;
ts |= 0x3d /*111101*/;
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_4_2_0:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[0].i];
g[4].tag = 0;
ts |= 0x3d /*111101*/;
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_4_2_1:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[1].i];
g[4].tag = 0;
ts |= 0x3d /*111101*/;
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_4_2_3:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[3].i];
g[4].tag = 0;
ts |= 0x3d /*111101*/;
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_4_2_4:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[4].i];
g[4].tag = 0;
ts |= 0x3d /*111101*/;
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_4_2_5:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[5].i];
g[4].tag = 0;
ts |= 0x3d /*111101*/;
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_4_3_0:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[0].i];
g[4].tag = 0;
ts |= 0x3d /*111101*/;
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_4_3_1:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[1].i];
g[4].tag = 0;
ts |= 0x3d /*111101*/;
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_4_3_2:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[2].i];
g[4].tag = 0;
ts |= 0x3d /*111101*/;
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_4_3_4:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[4].i];
g[4].tag = 0;
ts |= 0x3d /*111101*/;
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_4_3_5:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[5].i];
g[4].tag = 0;
ts |= 0x3d /*111101*/;
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_4_4_0:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[0].i];
g[4].tag = 0;
ts |= 0x3d /*111101*/;
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_4_4_1:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[1].i];
g[4].tag = 0;
ts |= 0x3d /*111101*/;
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_4_4_2:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[2].i];
g[4].tag = 0;
ts |= 0x3d /*111101*/;
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_4_4_3:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[3].i];
g[4].tag = 0;
ts |= 0x3d /*111101*/;
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_4_4_5:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[5].i];
g[4].tag = 0;
ts |= 0x3d /*111101*/;
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_4_5_0:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[0].i];
g[4].tag = 0;
ts |= 0x3d /*111101*/;
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_4_5_1:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[1].i];
g[4].tag = 0;
ts |= 0x3d /*111101*/;
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_4_5_2:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[2].i];
g[4].tag = 0;
ts |= 0x3d /*111101*/;
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_4_5_3:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[3].i];
g[4].tag = 0;
ts |= 0x3d /*111101*/;
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_4_5_4:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[4].i];
g[4].tag = 0;
ts |= 0x3d /*111101*/;
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_5_0_1:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[1].i];
g[5].tag = 0;
ts |= 0x3e /*111110*/;
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_5_0_2:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[2].i];
g[5].tag = 0;
ts |= 0x3e /*111110*/;
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_5_0_3:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[3].i];
g[5].tag = 0;
ts |= 0x3e /*111110*/;
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_5_0_4:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[4].i];
g[5].tag = 0;
ts |= 0x3e /*111110*/;
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_5_0_5:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[5].i];
g[5].tag = 0;
ts |= 0x3e /*111110*/;
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_5_1_0:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[0].i];
g[5].tag = 0;
ts |= 0x3e /*111110*/;
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_5_1_2:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[2].i];
g[5].tag = 0;
ts |= 0x3e /*111110*/;
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_5_1_3:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[3].i];
g[5].tag = 0;
ts |= 0x3e /*111110*/;
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_5_1_4:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[4].i];
g[5].tag = 0;
ts |= 0x3e /*111110*/;
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_5_1_5:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[5].i];
g[5].tag = 0;
ts |= 0x3e /*111110*/;
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_5_2_0:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[0].i];
g[5].tag = 0;
ts |= 0x3e /*111110*/;
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_5_2_1:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[1].i];
g[5].tag = 0;
ts |= 0x3e /*111110*/;
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_5_2_3:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[3].i];
g[5].tag = 0;
ts |= 0x3e /*111110*/;
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_5_2_4:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[4].i];
g[5].tag = 0;
ts |= 0x3e /*111110*/;
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_5_2_5:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[5].i];
g[5].tag = 0;
ts |= 0x3e /*111110*/;
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_5_3_0:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[0].i];
g[5].tag = 0;
ts |= 0x3e /*111110*/;
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_5_3_1:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[1].i];
g[5].tag = 0;
ts |= 0x3e /*111110*/;
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_5_3_2:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[2].i];
g[5].tag = 0;
ts |= 0x3e /*111110*/;
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_5_3_4:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[4].i];
g[5].tag = 0;
ts |= 0x3e /*111110*/;
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_5_3_5:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[5].i];
g[5].tag = 0;
ts |= 0x3e /*111110*/;
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_5_4_0:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[0].i];
g[5].tag = 0;
ts |= 0x3e /*111110*/;
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_5_4_1:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[1].i];
g[5].tag = 0;
ts |= 0x3e /*111110*/;
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_5_4_2:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[2].i];
g[5].tag = 0;
ts |= 0x3e /*111110*/;
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_5_4_3:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[3].i];
g[5].tag = 0;
ts |= 0x3e /*111110*/;
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_5_4_5:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[5].i];
g[5].tag = 0;
ts |= 0x3e /*111110*/;
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_5_5_0:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[0].i];
g[5].tag = 0;
ts |= 0x3e /*111110*/;
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_5_5_1:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[1].i];
g[5].tag = 0;
ts |= 0x3e /*111110*/;
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_5_5_2:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[2].i];
g[5].tag = 0;
ts |= 0x3e /*111110*/;
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_5_5_3:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[3].i];
g[5].tag = 0;
ts |= 0x3e /*111110*/;
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_5_5_4:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[4].i];
g[5].tag = 0;
ts |= 0x3e /*111110*/;
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

setb_0_0_1:
{
uint8_t *vp = &(((buffer *)(g[0].p))->data[g[0].i]);
*vp = g[0].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_0_0_2:
{
uint8_t *vp = &(((buffer *)(g[0].p))->data[g[0].i]);
*vp = g[0].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_0_0_3:
{
uint8_t *vp = &(((buffer *)(g[0].p))->data[g[0].i]);
*vp = g[0].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_0_0_4:
{
uint8_t *vp = &(((buffer *)(g[0].p))->data[g[0].i]);
*vp = g[0].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_0_0_5:
{
uint8_t *vp = &(((buffer *)(g[0].p))->data[g[0].i]);
*vp = g[0].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_0_1_0:
{
uint8_t *vp = &(((buffer *)(g[0].p))->data[g[1].i]);
*vp = g[0].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_0_1_2:
{
uint8_t *vp = &(((buffer *)(g[0].p))->data[g[1].i]);
*vp = g[0].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_0_1_3:
{
uint8_t *vp = &(((buffer *)(g[0].p))->data[g[1].i]);
*vp = g[0].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_0_1_4:
{
uint8_t *vp = &(((buffer *)(g[0].p))->data[g[1].i]);
*vp = g[0].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_0_1_5:
{
uint8_t *vp = &(((buffer *)(g[0].p))->data[g[1].i]);
*vp = g[0].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_0_2_0:
{
uint8_t *vp = &(((buffer *)(g[0].p))->data[g[2].i]);
*vp = g[0].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_0_2_1:
{
uint8_t *vp = &(((buffer *)(g[0].p))->data[g[2].i]);
*vp = g[0].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_0_2_3:
{
uint8_t *vp = &(((buffer *)(g[0].p))->data[g[2].i]);
*vp = g[0].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_0_2_4:
{
uint8_t *vp = &(((buffer *)(g[0].p))->data[g[2].i]);
*vp = g[0].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_0_2_5:
{
uint8_t *vp = &(((buffer *)(g[0].p))->data[g[2].i]);
*vp = g[0].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_0_3_0:
{
uint8_t *vp = &(((buffer *)(g[0].p))->data[g[3].i]);
*vp = g[0].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_0_3_1:
{
uint8_t *vp = &(((buffer *)(g[0].p))->data[g[3].i]);
*vp = g[0].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_0_3_2:
{
uint8_t *vp = &(((buffer *)(g[0].p))->data[g[3].i]);
*vp = g[0].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_0_3_4:
{
uint8_t *vp = &(((buffer *)(g[0].p))->data[g[3].i]);
*vp = g[0].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_0_3_5:
{
uint8_t *vp = &(((buffer *)(g[0].p))->data[g[3].i]);
*vp = g[0].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_0_4_0:
{
uint8_t *vp = &(((buffer *)(g[0].p))->data[g[4].i]);
*vp = g[0].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_0_4_1:
{
uint8_t *vp = &(((buffer *)(g[0].p))->data[g[4].i]);
*vp = g[0].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_0_4_2:
{
uint8_t *vp = &(((buffer *)(g[0].p))->data[g[4].i]);
*vp = g[0].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_0_4_3:
{
uint8_t *vp = &(((buffer *)(g[0].p))->data[g[4].i]);
*vp = g[0].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_0_4_5:
{
uint8_t *vp = &(((buffer *)(g[0].p))->data[g[4].i]);
*vp = g[0].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_0_5_0:
{
uint8_t *vp = &(((buffer *)(g[0].p))->data[g[5].i]);
*vp = g[0].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_0_5_1:
{
uint8_t *vp = &(((buffer *)(g[0].p))->data[g[5].i]);
*vp = g[0].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_0_5_2:
{
uint8_t *vp = &(((buffer *)(g[0].p))->data[g[5].i]);
*vp = g[0].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_0_5_3:
{
uint8_t *vp = &(((buffer *)(g[0].p))->data[g[5].i]);
*vp = g[0].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_0_5_4:
{
uint8_t *vp = &(((buffer *)(g[0].p))->data[g[5].i]);
*vp = g[0].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_1_0_1:
{
uint8_t *vp = &(((buffer *)(g[1].p))->data[g[0].i]);
*vp = g[1].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_1_0_2:
{
uint8_t *vp = &(((buffer *)(g[1].p))->data[g[0].i]);
*vp = g[1].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_1_0_3:
{
uint8_t *vp = &(((buffer *)(g[1].p))->data[g[0].i]);
*vp = g[1].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_1_0_4:
{
uint8_t *vp = &(((buffer *)(g[1].p))->data[g[0].i]);
*vp = g[1].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_1_0_5:
{
uint8_t *vp = &(((buffer *)(g[1].p))->data[g[0].i]);
*vp = g[1].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_1_1_0:
{
uint8_t *vp = &(((buffer *)(g[1].p))->data[g[1].i]);
*vp = g[1].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_1_1_2:
{
uint8_t *vp = &(((buffer *)(g[1].p))->data[g[1].i]);
*vp = g[1].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_1_1_3:
{
uint8_t *vp = &(((buffer *)(g[1].p))->data[g[1].i]);
*vp = g[1].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_1_1_4:
{
uint8_t *vp = &(((buffer *)(g[1].p))->data[g[1].i]);
*vp = g[1].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_1_1_5:
{
uint8_t *vp = &(((buffer *)(g[1].p))->data[g[1].i]);
*vp = g[1].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_1_2_0:
{
uint8_t *vp = &(((buffer *)(g[1].p))->data[g[2].i]);
*vp = g[1].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_1_2_1:
{
uint8_t *vp = &(((buffer *)(g[1].p))->data[g[2].i]);
*vp = g[1].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_1_2_3:
{
uint8_t *vp = &(((buffer *)(g[1].p))->data[g[2].i]);
*vp = g[1].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_1_2_4:
{
uint8_t *vp = &(((buffer *)(g[1].p))->data[g[2].i]);
*vp = g[1].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_1_2_5:
{
uint8_t *vp = &(((buffer *)(g[1].p))->data[g[2].i]);
*vp = g[1].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_1_3_0:
{
uint8_t *vp = &(((buffer *)(g[1].p))->data[g[3].i]);
*vp = g[1].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_1_3_1:
{
uint8_t *vp = &(((buffer *)(g[1].p))->data[g[3].i]);
*vp = g[1].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_1_3_2:
{
uint8_t *vp = &(((buffer *)(g[1].p))->data[g[3].i]);
*vp = g[1].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_1_3_4:
{
uint8_t *vp = &(((buffer *)(g[1].p))->data[g[3].i]);
*vp = g[1].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_1_3_5:
{
uint8_t *vp = &(((buffer *)(g[1].p))->data[g[3].i]);
*vp = g[1].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_1_4_0:
{
uint8_t *vp = &(((buffer *)(g[1].p))->data[g[4].i]);
*vp = g[1].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_1_4_1:
{
uint8_t *vp = &(((buffer *)(g[1].p))->data[g[4].i]);
*vp = g[1].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_1_4_2:
{
uint8_t *vp = &(((buffer *)(g[1].p))->data[g[4].i]);
*vp = g[1].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_1_4_3:
{
uint8_t *vp = &(((buffer *)(g[1].p))->data[g[4].i]);
*vp = g[1].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_1_4_5:
{
uint8_t *vp = &(((buffer *)(g[1].p))->data[g[4].i]);
*vp = g[1].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_1_5_0:
{
uint8_t *vp = &(((buffer *)(g[1].p))->data[g[5].i]);
*vp = g[1].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_1_5_1:
{
uint8_t *vp = &(((buffer *)(g[1].p))->data[g[5].i]);
*vp = g[1].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_1_5_2:
{
uint8_t *vp = &(((buffer *)(g[1].p))->data[g[5].i]);
*vp = g[1].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_1_5_3:
{
uint8_t *vp = &(((buffer *)(g[1].p))->data[g[5].i]);
*vp = g[1].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_1_5_4:
{
uint8_t *vp = &(((buffer *)(g[1].p))->data[g[5].i]);
*vp = g[1].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_2_0_1:
{
uint8_t *vp = &(((buffer *)(g[2].p))->data[g[0].i]);
*vp = g[2].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_2_0_2:
{
uint8_t *vp = &(((buffer *)(g[2].p))->data[g[0].i]);
*vp = g[2].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_2_0_3:
{
uint8_t *vp = &(((buffer *)(g[2].p))->data[g[0].i]);
*vp = g[2].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_2_0_4:
{
uint8_t *vp = &(((buffer *)(g[2].p))->data[g[0].i]);
*vp = g[2].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_2_0_5:
{
uint8_t *vp = &(((buffer *)(g[2].p))->data[g[0].i]);
*vp = g[2].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_2_1_0:
{
uint8_t *vp = &(((buffer *)(g[2].p))->data[g[1].i]);
*vp = g[2].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_2_1_2:
{
uint8_t *vp = &(((buffer *)(g[2].p))->data[g[1].i]);
*vp = g[2].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_2_1_3:
{
uint8_t *vp = &(((buffer *)(g[2].p))->data[g[1].i]);
*vp = g[2].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_2_1_4:
{
uint8_t *vp = &(((buffer *)(g[2].p))->data[g[1].i]);
*vp = g[2].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_2_1_5:
{
uint8_t *vp = &(((buffer *)(g[2].p))->data[g[1].i]);
*vp = g[2].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_2_2_0:
{
uint8_t *vp = &(((buffer *)(g[2].p))->data[g[2].i]);
*vp = g[2].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_2_2_1:
{
uint8_t *vp = &(((buffer *)(g[2].p))->data[g[2].i]);
*vp = g[2].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_2_2_3:
{
uint8_t *vp = &(((buffer *)(g[2].p))->data[g[2].i]);
*vp = g[2].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_2_2_4:
{
uint8_t *vp = &(((buffer *)(g[2].p))->data[g[2].i]);
*vp = g[2].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_2_2_5:
{
uint8_t *vp = &(((buffer *)(g[2].p))->data[g[2].i]);
*vp = g[2].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_2_3_0:
{
uint8_t *vp = &(((buffer *)(g[2].p))->data[g[3].i]);
*vp = g[2].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_2_3_1:
{
uint8_t *vp = &(((buffer *)(g[2].p))->data[g[3].i]);
*vp = g[2].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_2_3_2:
{
uint8_t *vp = &(((buffer *)(g[2].p))->data[g[3].i]);
*vp = g[2].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_2_3_4:
{
uint8_t *vp = &(((buffer *)(g[2].p))->data[g[3].i]);
*vp = g[2].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_2_3_5:
{
uint8_t *vp = &(((buffer *)(g[2].p))->data[g[3].i]);
*vp = g[2].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_2_4_0:
{
uint8_t *vp = &(((buffer *)(g[2].p))->data[g[4].i]);
*vp = g[2].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_2_4_1:
{
uint8_t *vp = &(((buffer *)(g[2].p))->data[g[4].i]);
*vp = g[2].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_2_4_2:
{
uint8_t *vp = &(((buffer *)(g[2].p))->data[g[4].i]);
*vp = g[2].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_2_4_3:
{
uint8_t *vp = &(((buffer *)(g[2].p))->data[g[4].i]);
*vp = g[2].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_2_4_5:
{
uint8_t *vp = &(((buffer *)(g[2].p))->data[g[4].i]);
*vp = g[2].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_2_5_0:
{
uint8_t *vp = &(((buffer *)(g[2].p))->data[g[5].i]);
*vp = g[2].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_2_5_1:
{
uint8_t *vp = &(((buffer *)(g[2].p))->data[g[5].i]);
*vp = g[2].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_2_5_2:
{
uint8_t *vp = &(((buffer *)(g[2].p))->data[g[5].i]);
*vp = g[2].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_2_5_3:
{
uint8_t *vp = &(((buffer *)(g[2].p))->data[g[5].i]);
*vp = g[2].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_2_5_4:
{
uint8_t *vp = &(((buffer *)(g[2].p))->data[g[5].i]);
*vp = g[2].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_3_0_1:
{
uint8_t *vp = &(((buffer *)(g[3].p))->data[g[0].i]);
*vp = g[3].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_3_0_2:
{
uint8_t *vp = &(((buffer *)(g[3].p))->data[g[0].i]);
*vp = g[3].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_3_0_3:
{
uint8_t *vp = &(((buffer *)(g[3].p))->data[g[0].i]);
*vp = g[3].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_3_0_4:
{
uint8_t *vp = &(((buffer *)(g[3].p))->data[g[0].i]);
*vp = g[3].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_3_0_5:
{
uint8_t *vp = &(((buffer *)(g[3].p))->data[g[0].i]);
*vp = g[3].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_3_1_0:
{
uint8_t *vp = &(((buffer *)(g[3].p))->data[g[1].i]);
*vp = g[3].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_3_1_2:
{
uint8_t *vp = &(((buffer *)(g[3].p))->data[g[1].i]);
*vp = g[3].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_3_1_3:
{
uint8_t *vp = &(((buffer *)(g[3].p))->data[g[1].i]);
*vp = g[3].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_3_1_4:
{
uint8_t *vp = &(((buffer *)(g[3].p))->data[g[1].i]);
*vp = g[3].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_3_1_5:
{
uint8_t *vp = &(((buffer *)(g[3].p))->data[g[1].i]);
*vp = g[3].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_3_2_0:
{
uint8_t *vp = &(((buffer *)(g[3].p))->data[g[2].i]);
*vp = g[3].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_3_2_1:
{
uint8_t *vp = &(((buffer *)(g[3].p))->data[g[2].i]);
*vp = g[3].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_3_2_3:
{
uint8_t *vp = &(((buffer *)(g[3].p))->data[g[2].i]);
*vp = g[3].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_3_2_4:
{
uint8_t *vp = &(((buffer *)(g[3].p))->data[g[2].i]);
*vp = g[3].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_3_2_5:
{
uint8_t *vp = &(((buffer *)(g[3].p))->data[g[2].i]);
*vp = g[3].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_3_3_0:
{
uint8_t *vp = &(((buffer *)(g[3].p))->data[g[3].i]);
*vp = g[3].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_3_3_1:
{
uint8_t *vp = &(((buffer *)(g[3].p))->data[g[3].i]);
*vp = g[3].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_3_3_2:
{
uint8_t *vp = &(((buffer *)(g[3].p))->data[g[3].i]);
*vp = g[3].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_3_3_4:
{
uint8_t *vp = &(((buffer *)(g[3].p))->data[g[3].i]);
*vp = g[3].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_3_3_5:
{
uint8_t *vp = &(((buffer *)(g[3].p))->data[g[3].i]);
*vp = g[3].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_3_4_0:
{
uint8_t *vp = &(((buffer *)(g[3].p))->data[g[4].i]);
*vp = g[3].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_3_4_1:
{
uint8_t *vp = &(((buffer *)(g[3].p))->data[g[4].i]);
*vp = g[3].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_3_4_2:
{
uint8_t *vp = &(((buffer *)(g[3].p))->data[g[4].i]);
*vp = g[3].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_3_4_3:
{
uint8_t *vp = &(((buffer *)(g[3].p))->data[g[4].i]);
*vp = g[3].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_3_4_5:
{
uint8_t *vp = &(((buffer *)(g[3].p))->data[g[4].i]);
*vp = g[3].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_3_5_0:
{
uint8_t *vp = &(((buffer *)(g[3].p))->data[g[5].i]);
*vp = g[3].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_3_5_1:
{
uint8_t *vp = &(((buffer *)(g[3].p))->data[g[5].i]);
*vp = g[3].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_3_5_2:
{
uint8_t *vp = &(((buffer *)(g[3].p))->data[g[5].i]);
*vp = g[3].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_3_5_3:
{
uint8_t *vp = &(((buffer *)(g[3].p))->data[g[5].i]);
*vp = g[3].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_3_5_4:
{
uint8_t *vp = &(((buffer *)(g[3].p))->data[g[5].i]);
*vp = g[3].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_4_0_1:
{
uint8_t *vp = &(((buffer *)(g[4].p))->data[g[0].i]);
*vp = g[4].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_4_0_2:
{
uint8_t *vp = &(((buffer *)(g[4].p))->data[g[0].i]);
*vp = g[4].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_4_0_3:
{
uint8_t *vp = &(((buffer *)(g[4].p))->data[g[0].i]);
*vp = g[4].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_4_0_4:
{
uint8_t *vp = &(((buffer *)(g[4].p))->data[g[0].i]);
*vp = g[4].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_4_0_5:
{
uint8_t *vp = &(((buffer *)(g[4].p))->data[g[0].i]);
*vp = g[4].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_4_1_0:
{
uint8_t *vp = &(((buffer *)(g[4].p))->data[g[1].i]);
*vp = g[4].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_4_1_2:
{
uint8_t *vp = &(((buffer *)(g[4].p))->data[g[1].i]);
*vp = g[4].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_4_1_3:
{
uint8_t *vp = &(((buffer *)(g[4].p))->data[g[1].i]);
*vp = g[4].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_4_1_4:
{
uint8_t *vp = &(((buffer *)(g[4].p))->data[g[1].i]);
*vp = g[4].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_4_1_5:
{
uint8_t *vp = &(((buffer *)(g[4].p))->data[g[1].i]);
*vp = g[4].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_4_2_0:
{
uint8_t *vp = &(((buffer *)(g[4].p))->data[g[2].i]);
*vp = g[4].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_4_2_1:
{
uint8_t *vp = &(((buffer *)(g[4].p))->data[g[2].i]);
*vp = g[4].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_4_2_3:
{
uint8_t *vp = &(((buffer *)(g[4].p))->data[g[2].i]);
*vp = g[4].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_4_2_4:
{
uint8_t *vp = &(((buffer *)(g[4].p))->data[g[2].i]);
*vp = g[4].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_4_2_5:
{
uint8_t *vp = &(((buffer *)(g[4].p))->data[g[2].i]);
*vp = g[4].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_4_3_0:
{
uint8_t *vp = &(((buffer *)(g[4].p))->data[g[3].i]);
*vp = g[4].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_4_3_1:
{
uint8_t *vp = &(((buffer *)(g[4].p))->data[g[3].i]);
*vp = g[4].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_4_3_2:
{
uint8_t *vp = &(((buffer *)(g[4].p))->data[g[3].i]);
*vp = g[4].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_4_3_4:
{
uint8_t *vp = &(((buffer *)(g[4].p))->data[g[3].i]);
*vp = g[4].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_4_3_5:
{
uint8_t *vp = &(((buffer *)(g[4].p))->data[g[3].i]);
*vp = g[4].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_4_4_0:
{
uint8_t *vp = &(((buffer *)(g[4].p))->data[g[4].i]);
*vp = g[4].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_4_4_1:
{
uint8_t *vp = &(((buffer *)(g[4].p))->data[g[4].i]);
*vp = g[4].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_4_4_2:
{
uint8_t *vp = &(((buffer *)(g[4].p))->data[g[4].i]);
*vp = g[4].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_4_4_3:
{
uint8_t *vp = &(((buffer *)(g[4].p))->data[g[4].i]);
*vp = g[4].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_4_4_5:
{
uint8_t *vp = &(((buffer *)(g[4].p))->data[g[4].i]);
*vp = g[4].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_4_5_0:
{
uint8_t *vp = &(((buffer *)(g[4].p))->data[g[5].i]);
*vp = g[4].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_4_5_1:
{
uint8_t *vp = &(((buffer *)(g[4].p))->data[g[5].i]);
*vp = g[4].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_4_5_2:
{
uint8_t *vp = &(((buffer *)(g[4].p))->data[g[5].i]);
*vp = g[4].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_4_5_3:
{
uint8_t *vp = &(((buffer *)(g[4].p))->data[g[5].i]);
*vp = g[4].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_4_5_4:
{
uint8_t *vp = &(((buffer *)(g[4].p))->data[g[5].i]);
*vp = g[4].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_5_0_1:
{
uint8_t *vp = &(((buffer *)(g[5].p))->data[g[0].i]);
*vp = g[5].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_5_0_2:
{
uint8_t *vp = &(((buffer *)(g[5].p))->data[g[0].i]);
*vp = g[5].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_5_0_3:
{
uint8_t *vp = &(((buffer *)(g[5].p))->data[g[0].i]);
*vp = g[5].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_5_0_4:
{
uint8_t *vp = &(((buffer *)(g[5].p))->data[g[0].i]);
*vp = g[5].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_5_0_5:
{
uint8_t *vp = &(((buffer *)(g[5].p))->data[g[0].i]);
*vp = g[5].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_5_1_0:
{
uint8_t *vp = &(((buffer *)(g[5].p))->data[g[1].i]);
*vp = g[5].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_5_1_2:
{
uint8_t *vp = &(((buffer *)(g[5].p))->data[g[1].i]);
*vp = g[5].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_5_1_3:
{
uint8_t *vp = &(((buffer *)(g[5].p))->data[g[1].i]);
*vp = g[5].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_5_1_4:
{
uint8_t *vp = &(((buffer *)(g[5].p))->data[g[1].i]);
*vp = g[5].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_5_1_5:
{
uint8_t *vp = &(((buffer *)(g[5].p))->data[g[1].i]);
*vp = g[5].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_5_2_0:
{
uint8_t *vp = &(((buffer *)(g[5].p))->data[g[2].i]);
*vp = g[5].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_5_2_1:
{
uint8_t *vp = &(((buffer *)(g[5].p))->data[g[2].i]);
*vp = g[5].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_5_2_3:
{
uint8_t *vp = &(((buffer *)(g[5].p))->data[g[2].i]);
*vp = g[5].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_5_2_4:
{
uint8_t *vp = &(((buffer *)(g[5].p))->data[g[2].i]);
*vp = g[5].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_5_2_5:
{
uint8_t *vp = &(((buffer *)(g[5].p))->data[g[2].i]);
*vp = g[5].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_5_3_0:
{
uint8_t *vp = &(((buffer *)(g[5].p))->data[g[3].i]);
*vp = g[5].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_5_3_1:
{
uint8_t *vp = &(((buffer *)(g[5].p))->data[g[3].i]);
*vp = g[5].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_5_3_2:
{
uint8_t *vp = &(((buffer *)(g[5].p))->data[g[3].i]);
*vp = g[5].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_5_3_4:
{
uint8_t *vp = &(((buffer *)(g[5].p))->data[g[3].i]);
*vp = g[5].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_5_3_5:
{
uint8_t *vp = &(((buffer *)(g[5].p))->data[g[3].i]);
*vp = g[5].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_5_4_0:
{
uint8_t *vp = &(((buffer *)(g[5].p))->data[g[4].i]);
*vp = g[5].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_5_4_1:
{
uint8_t *vp = &(((buffer *)(g[5].p))->data[g[4].i]);
*vp = g[5].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_5_4_2:
{
uint8_t *vp = &(((buffer *)(g[5].p))->data[g[4].i]);
*vp = g[5].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_5_4_3:
{
uint8_t *vp = &(((buffer *)(g[5].p))->data[g[4].i]);
*vp = g[5].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_5_4_5:
{
uint8_t *vp = &(((buffer *)(g[5].p))->data[g[4].i]);
*vp = g[5].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_5_5_0:
{
uint8_t *vp = &(((buffer *)(g[5].p))->data[g[5].i]);
*vp = g[5].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_5_5_1:
{
uint8_t *vp = &(((buffer *)(g[5].p))->data[g[5].i]);
*vp = g[5].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_5_5_2:
{
uint8_t *vp = &(((buffer *)(g[5].p))->data[g[5].i]);
*vp = g[5].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_5_5_3:
{
uint8_t *vp = &(((buffer *)(g[5].p))->data[g[5].i]);
*vp = g[5].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_5_5_4:
{
uint8_t *vp = &(((buffer *)(g[5].p))->data[g[5].i]);
*vp = g[5].i;
goto *dynOpcodes[ts + program[pc]];
}

jmp:
{
pc += program[pc+1];
goto *dynOpcodes[ts + program[pc]];
}

jmpf:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
pc += constant;
goto *dynOpcodes[ts + program[pc]];
}

jsw_0:
{
int16_t tableSize = program[pc + 1];
if(g[0].i < 0 || g[0].i >= tableSize) {
int16_t defaultJump = program[pc + tableSize + 2];
pc += defaultJump;
}
else {
int16_t jump = program[pc + g[0].i + 2];
pc += jump;
 }
goto *dynOpcodes[ts + program[pc]];
}

jsw_1:
{
int16_t tableSize = program[pc + 1];
if(g[1].i < 0 || g[1].i >= tableSize) {
int16_t defaultJump = program[pc + tableSize + 2];
pc += defaultJump;
}
else {
int16_t jump = program[pc + g[1].i + 2];
pc += jump;
 }
goto *dynOpcodes[ts + program[pc]];
}

jsw_2:
{
int16_t tableSize = program[pc + 1];
if(g[2].i < 0 || g[2].i >= tableSize) {
int16_t defaultJump = program[pc + tableSize + 2];
pc += defaultJump;
}
else {
int16_t jump = program[pc + g[2].i + 2];
pc += jump;
 }
goto *dynOpcodes[ts + program[pc]];
}

jsw_3:
{
int16_t tableSize = program[pc + 1];
if(g[3].i < 0 || g[3].i >= tableSize) {
int16_t defaultJump = program[pc + tableSize + 2];
pc += defaultJump;
}
else {
int16_t jump = program[pc + g[3].i + 2];
pc += jump;
 }
goto *dynOpcodes[ts + program[pc]];
}

jsw_4:
{
int16_t tableSize = program[pc + 1];
if(g[4].i < 0 || g[4].i >= tableSize) {
int16_t defaultJump = program[pc + tableSize + 2];
pc += defaultJump;
}
else {
int16_t jump = program[pc + g[4].i + 2];
pc += jump;
 }
goto *dynOpcodes[ts + program[pc]];
}

jsw_5:
{
int16_t tableSize = program[pc + 1];
if(g[5].i < 0 || g[5].i >= tableSize) {
int16_t defaultJump = program[pc + tableSize + 2];
pc += defaultJump;
}
else {
int16_t jump = program[pc + g[5].i + 2];
pc += jump;
 }
goto *dynOpcodes[ts + program[pc]];
}

cabii_0_1:
{
if (g[0].i < g[1].i)
pc += program[pc + 1];
else if(g[0].i == g[1].i)
pc += program[pc + 2];
else
pc += program[pc + 3];
goto *dynOpcodes[ts + program[pc]];
}

cabii_0_2:
{
if (g[0].i < g[2].i)
pc += program[pc + 1];
else if(g[0].i == g[2].i)
pc += program[pc + 2];
else
pc += program[pc + 3];
goto *dynOpcodes[ts + program[pc]];
}

cabii_0_3:
{
if (g[0].i < g[3].i)
pc += program[pc + 1];
else if(g[0].i == g[3].i)
pc += program[pc + 2];
else
pc += program[pc + 3];
goto *dynOpcodes[ts + program[pc]];
}

cabii_0_4:
{
if (g[0].i < g[4].i)
pc += program[pc + 1];
else if(g[0].i == g[4].i)
pc += program[pc + 2];
else
pc += program[pc + 3];
goto *dynOpcodes[ts + program[pc]];
}

cabii_0_5:
{
if (g[0].i < g[5].i)
pc += program[pc + 1];
else if(g[0].i == g[5].i)
pc += program[pc + 2];
else
pc += program[pc + 3];
goto *dynOpcodes[ts + program[pc]];
}

cabii_1_0:
{
if (g[1].i < g[0].i)
pc += program[pc + 1];
else if(g[1].i == g[0].i)
pc += program[pc + 2];
else
pc += program[pc + 3];
goto *dynOpcodes[ts + program[pc]];
}

cabii_1_2:
{
if (g[1].i < g[2].i)
pc += program[pc + 1];
else if(g[1].i == g[2].i)
pc += program[pc + 2];
else
pc += program[pc + 3];
goto *dynOpcodes[ts + program[pc]];
}

cabii_1_3:
{
if (g[1].i < g[3].i)
pc += program[pc + 1];
else if(g[1].i == g[3].i)
pc += program[pc + 2];
else
pc += program[pc + 3];
goto *dynOpcodes[ts + program[pc]];
}

cabii_1_4:
{
if (g[1].i < g[4].i)
pc += program[pc + 1];
else if(g[1].i == g[4].i)
pc += program[pc + 2];
else
pc += program[pc + 3];
goto *dynOpcodes[ts + program[pc]];
}

cabii_1_5:
{
if (g[1].i < g[5].i)
pc += program[pc + 1];
else if(g[1].i == g[5].i)
pc += program[pc + 2];
else
pc += program[pc + 3];
goto *dynOpcodes[ts + program[pc]];
}

cabii_2_0:
{
if (g[2].i < g[0].i)
pc += program[pc + 1];
else if(g[2].i == g[0].i)
pc += program[pc + 2];
else
pc += program[pc + 3];
goto *dynOpcodes[ts + program[pc]];
}

cabii_2_1:
{
if (g[2].i < g[1].i)
pc += program[pc + 1];
else if(g[2].i == g[1].i)
pc += program[pc + 2];
else
pc += program[pc + 3];
goto *dynOpcodes[ts + program[pc]];
}

cabii_2_3:
{
if (g[2].i < g[3].i)
pc += program[pc + 1];
else if(g[2].i == g[3].i)
pc += program[pc + 2];
else
pc += program[pc + 3];
goto *dynOpcodes[ts + program[pc]];
}

cabii_2_4:
{
if (g[2].i < g[4].i)
pc += program[pc + 1];
else if(g[2].i == g[4].i)
pc += program[pc + 2];
else
pc += program[pc + 3];
goto *dynOpcodes[ts + program[pc]];
}

cabii_2_5:
{
if (g[2].i < g[5].i)
pc += program[pc + 1];
else if(g[2].i == g[5].i)
pc += program[pc + 2];
else
pc += program[pc + 3];
goto *dynOpcodes[ts + program[pc]];
}

cabii_3_0:
{
if (g[3].i < g[0].i)
pc += program[pc + 1];
else if(g[3].i == g[0].i)
pc += program[pc + 2];
else
pc += program[pc + 3];
goto *dynOpcodes[ts + program[pc]];
}

cabii_3_1:
{
if (g[3].i < g[1].i)
pc += program[pc + 1];
else if(g[3].i == g[1].i)
pc += program[pc + 2];
else
pc += program[pc + 3];
goto *dynOpcodes[ts + program[pc]];
}

cabii_3_2:
{
if (g[3].i < g[2].i)
pc += program[pc + 1];
else if(g[3].i == g[2].i)
pc += program[pc + 2];
else
pc += program[pc + 3];
goto *dynOpcodes[ts + program[pc]];
}

cabii_3_4:
{
if (g[3].i < g[4].i)
pc += program[pc + 1];
else if(g[3].i == g[4].i)
pc += program[pc + 2];
else
pc += program[pc + 3];
goto *dynOpcodes[ts + program[pc]];
}

cabii_3_5:
{
if (g[3].i < g[5].i)
pc += program[pc + 1];
else if(g[3].i == g[5].i)
pc += program[pc + 2];
else
pc += program[pc + 3];
goto *dynOpcodes[ts + program[pc]];
}

cabii_4_0:
{
if (g[4].i < g[0].i)
pc += program[pc + 1];
else if(g[4].i == g[0].i)
pc += program[pc + 2];
else
pc += program[pc + 3];
goto *dynOpcodes[ts + program[pc]];
}

cabii_4_1:
{
if (g[4].i < g[1].i)
pc += program[pc + 1];
else if(g[4].i == g[1].i)
pc += program[pc + 2];
else
pc += program[pc + 3];
goto *dynOpcodes[ts + program[pc]];
}

cabii_4_2:
{
if (g[4].i < g[2].i)
pc += program[pc + 1];
else if(g[4].i == g[2].i)
pc += program[pc + 2];
else
pc += program[pc + 3];
goto *dynOpcodes[ts + program[pc]];
}

cabii_4_3:
{
if (g[4].i < g[3].i)
pc += program[pc + 1];
else if(g[4].i == g[3].i)
pc += program[pc + 2];
else
pc += program[pc + 3];
goto *dynOpcodes[ts + program[pc]];
}

cabii_4_5:
{
if (g[4].i < g[5].i)
pc += program[pc + 1];
else if(g[4].i == g[5].i)
pc += program[pc + 2];
else
pc += program[pc + 3];
goto *dynOpcodes[ts + program[pc]];
}

cabii_5_0:
{
if (g[5].i < g[0].i)
pc += program[pc + 1];
else if(g[5].i == g[0].i)
pc += program[pc + 2];
else
pc += program[pc + 3];
goto *dynOpcodes[ts + program[pc]];
}

cabii_5_1:
{
if (g[5].i < g[1].i)
pc += program[pc + 1];
else if(g[5].i == g[1].i)
pc += program[pc + 2];
else
pc += program[pc + 3];
goto *dynOpcodes[ts + program[pc]];
}

cabii_5_2:
{
if (g[5].i < g[2].i)
pc += program[pc + 1];
else if(g[5].i == g[2].i)
pc += program[pc + 2];
else
pc += program[pc + 3];
goto *dynOpcodes[ts + program[pc]];
}

cabii_5_3:
{
if (g[5].i < g[3].i)
pc += program[pc + 1];
else if(g[5].i == g[3].i)
pc += program[pc + 2];
else
pc += program[pc + 3];
goto *dynOpcodes[ts + program[pc]];
}

cabii_5_4:
{
if (g[5].i < g[4].i)
pc += program[pc + 1];
else if(g[5].i == g[4].i)
pc += program[pc + 2];
else
pc += program[pc + 3];
goto *dynOpcodes[ts + program[pc]];
}

cabpp_0_1:
{
if (g[0].p == g[1].p)
pc += program[pc + 2];
else
pc += program[pc + 4];
goto *dynOpcodes[ts + program[pc]];
}

cabpp_0_2:
{
if (g[0].p == g[2].p)
pc += program[pc + 2];
else
pc += program[pc + 4];
goto *dynOpcodes[ts + program[pc]];
}

cabpp_0_3:
{
if (g[0].p == g[3].p)
pc += program[pc + 2];
else
pc += program[pc + 4];
goto *dynOpcodes[ts + program[pc]];
}

cabpp_0_4:
{
if (g[0].p == g[4].p)
pc += program[pc + 2];
else
pc += program[pc + 4];
goto *dynOpcodes[ts + program[pc]];
}

cabpp_0_5:
{
if (g[0].p == g[5].p)
pc += program[pc + 2];
else
pc += program[pc + 4];
goto *dynOpcodes[ts + program[pc]];
}

cabpp_1_0:
{
if (g[1].p == g[0].p)
pc += program[pc + 2];
else
pc += program[pc + 4];
goto *dynOpcodes[ts + program[pc]];
}

cabpp_1_2:
{
if (g[1].p == g[2].p)
pc += program[pc + 2];
else
pc += program[pc + 4];
goto *dynOpcodes[ts + program[pc]];
}

cabpp_1_3:
{
if (g[1].p == g[3].p)
pc += program[pc + 2];
else
pc += program[pc + 4];
goto *dynOpcodes[ts + program[pc]];
}

cabpp_1_4:
{
if (g[1].p == g[4].p)
pc += program[pc + 2];
else
pc += program[pc + 4];
goto *dynOpcodes[ts + program[pc]];
}

cabpp_1_5:
{
if (g[1].p == g[5].p)
pc += program[pc + 2];
else
pc += program[pc + 4];
goto *dynOpcodes[ts + program[pc]];
}

cabpp_2_0:
{
if (g[2].p == g[0].p)
pc += program[pc + 2];
else
pc += program[pc + 4];
goto *dynOpcodes[ts + program[pc]];
}

cabpp_2_1:
{
if (g[2].p == g[1].p)
pc += program[pc + 2];
else
pc += program[pc + 4];
goto *dynOpcodes[ts + program[pc]];
}

cabpp_2_3:
{
if (g[2].p == g[3].p)
pc += program[pc + 2];
else
pc += program[pc + 4];
goto *dynOpcodes[ts + program[pc]];
}

cabpp_2_4:
{
if (g[2].p == g[4].p)
pc += program[pc + 2];
else
pc += program[pc + 4];
goto *dynOpcodes[ts + program[pc]];
}

cabpp_2_5:
{
if (g[2].p == g[5].p)
pc += program[pc + 2];
else
pc += program[pc + 4];
goto *dynOpcodes[ts + program[pc]];
}

cabpp_3_0:
{
if (g[3].p == g[0].p)
pc += program[pc + 2];
else
pc += program[pc + 4];
goto *dynOpcodes[ts + program[pc]];
}

cabpp_3_1:
{
if (g[3].p == g[1].p)
pc += program[pc + 2];
else
pc += program[pc + 4];
goto *dynOpcodes[ts + program[pc]];
}

cabpp_3_2:
{
if (g[3].p == g[2].p)
pc += program[pc + 2];
else
pc += program[pc + 4];
goto *dynOpcodes[ts + program[pc]];
}

cabpp_3_4:
{
if (g[3].p == g[4].p)
pc += program[pc + 2];
else
pc += program[pc + 4];
goto *dynOpcodes[ts + program[pc]];
}

cabpp_3_5:
{
if (g[3].p == g[5].p)
pc += program[pc + 2];
else
pc += program[pc + 4];
goto *dynOpcodes[ts + program[pc]];
}

cabpp_4_0:
{
if (g[4].p == g[0].p)
pc += program[pc + 2];
else
pc += program[pc + 4];
goto *dynOpcodes[ts + program[pc]];
}

cabpp_4_1:
{
if (g[4].p == g[1].p)
pc += program[pc + 2];
else
pc += program[pc + 4];
goto *dynOpcodes[ts + program[pc]];
}

cabpp_4_2:
{
if (g[4].p == g[2].p)
pc += program[pc + 2];
else
pc += program[pc + 4];
goto *dynOpcodes[ts + program[pc]];
}

cabpp_4_3:
{
if (g[4].p == g[3].p)
pc += program[pc + 2];
else
pc += program[pc + 4];
goto *dynOpcodes[ts + program[pc]];
}

cabpp_4_5:
{
if (g[4].p == g[5].p)
pc += program[pc + 2];
else
pc += program[pc + 4];
goto *dynOpcodes[ts + program[pc]];
}

cabpp_5_0:
{
if (g[5].p == g[0].p)
pc += program[pc + 2];
else
pc += program[pc + 4];
goto *dynOpcodes[ts + program[pc]];
}

cabpp_5_1:
{
if (g[5].p == g[1].p)
pc += program[pc + 2];
else
pc += program[pc + 4];
goto *dynOpcodes[ts + program[pc]];
}

cabpp_5_2:
{
if (g[5].p == g[2].p)
pc += program[pc + 2];
else
pc += program[pc + 4];
goto *dynOpcodes[ts + program[pc]];
}

cabpp_5_3:
{
if (g[5].p == g[3].p)
pc += program[pc + 2];
else
pc += program[pc + 4];
goto *dynOpcodes[ts + program[pc]];
}

cabpp_5_4:
{
if (g[5].p == g[4].p)
pc += program[pc + 2];
else
pc += program[pc + 4];
goto *dynOpcodes[ts + program[pc]];
}

cabft_0_1:
{
pc += 5;
goto *dynOpcodes[ts + program[pc]];
}

cabft_0_2:
{
pc += 5;
goto *dynOpcodes[ts + program[pc]];
}

cabft_0_3:
{
pc += 5;
goto *dynOpcodes[ts + program[pc]];
}

cabft_0_4:
{
pc += 5;
goto *dynOpcodes[ts + program[pc]];
}

cabft_0_5:
{
pc += 5;
goto *dynOpcodes[ts + program[pc]];
}

cabft_1_0:
{
pc += 5;
goto *dynOpcodes[ts + program[pc]];
}

cabft_1_2:
{
pc += 5;
goto *dynOpcodes[ts + program[pc]];
}

cabft_1_3:
{
pc += 5;
goto *dynOpcodes[ts + program[pc]];
}

cabft_1_4:
{
pc += 5;
goto *dynOpcodes[ts + program[pc]];
}

cabft_1_5:
{
pc += 5;
goto *dynOpcodes[ts + program[pc]];
}

cabft_2_0:
{
pc += 5;
goto *dynOpcodes[ts + program[pc]];
}

cabft_2_1:
{
pc += 5;
goto *dynOpcodes[ts + program[pc]];
}

cabft_2_3:
{
pc += 5;
goto *dynOpcodes[ts + program[pc]];
}

cabft_2_4:
{
pc += 5;
goto *dynOpcodes[ts + program[pc]];
}

cabft_2_5:
{
pc += 5;
goto *dynOpcodes[ts + program[pc]];
}

cabft_3_0:
{
pc += 5;
goto *dynOpcodes[ts + program[pc]];
}

cabft_3_1:
{
pc += 5;
goto *dynOpcodes[ts + program[pc]];
}

cabft_3_2:
{
pc += 5;
goto *dynOpcodes[ts + program[pc]];
}

cabft_3_4:
{
pc += 5;
goto *dynOpcodes[ts + program[pc]];
}

cabft_3_5:
{
pc += 5;
goto *dynOpcodes[ts + program[pc]];
}

cabft_4_0:
{
pc += 5;
goto *dynOpcodes[ts + program[pc]];
}

cabft_4_1:
{
pc += 5;
goto *dynOpcodes[ts + program[pc]];
}

cabft_4_2:
{
pc += 5;
goto *dynOpcodes[ts + program[pc]];
}

cabft_4_3:
{
pc += 5;
goto *dynOpcodes[ts + program[pc]];
}

cabft_4_5:
{
pc += 5;
goto *dynOpcodes[ts + program[pc]];
}

cabft_5_0:
{
pc += 5;
goto *dynOpcodes[ts + program[pc]];
}

cabft_5_1:
{
pc += 5;
goto *dynOpcodes[ts + program[pc]];
}

cabft_5_2:
{
pc += 5;
goto *dynOpcodes[ts + program[pc]];
}

cabft_5_3:
{
pc += 5;
goto *dynOpcodes[ts + program[pc]];
}

cabft_5_4:
{
pc += 5;
goto *dynOpcodes[ts + program[pc]];
}

cabik_0:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
if (g[0].i < constant)
pc += program[pc + 2];
else if(g[0].i == constant)
pc += program[pc + 3];
else
pc += program[pc + 4];
goto *dynOpcodes[ts + program[pc]];
}

cabik_1:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
if (g[1].i < constant)
pc += program[pc + 2];
else if(g[1].i == constant)
pc += program[pc + 3];
else
pc += program[pc + 4];
goto *dynOpcodes[ts + program[pc]];
}

cabik_2:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
if (g[2].i < constant)
pc += program[pc + 2];
else if(g[2].i == constant)
pc += program[pc + 3];
else
pc += program[pc + 4];
goto *dynOpcodes[ts + program[pc]];
}

cabik_3:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
if (g[3].i < constant)
pc += program[pc + 2];
else if(g[3].i == constant)
pc += program[pc + 3];
else
pc += program[pc + 4];
goto *dynOpcodes[ts + program[pc]];
}

cabik_4:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
if (g[4].i < constant)
pc += program[pc + 2];
else if(g[4].i == constant)
pc += program[pc + 3];
else
pc += program[pc + 4];
goto *dynOpcodes[ts + program[pc]];
}

cabik_5:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
if (g[5].i < constant)
pc += program[pc + 2];
else if(g[5].i == constant)
pc += program[pc + 3];
else
pc += program[pc + 4];
goto *dynOpcodes[ts + program[pc]];
}

cabft_0:
{
pc += 5;
goto *dynOpcodes[ts + program[pc]];
}

cabft_1:
{
pc += 5;
goto *dynOpcodes[ts + program[pc]];
}

cabft_2:
{
pc += 5;
goto *dynOpcodes[ts + program[pc]];
}

cabft_3:
{
pc += 5;
goto *dynOpcodes[ts + program[pc]];
}

cabft_4:
{
pc += 5;
goto *dynOpcodes[ts + program[pc]];
}

cabft_5:
{
pc += 5;
goto *dynOpcodes[ts + program[pc]];
}

cabpN_0:
{
if (g[0].p == NULL)
pc += program[pc + 2];
else
pc += program[pc + 3];
goto *dynOpcodes[ts + program[pc]];
}

cabpN_1:
{
if (g[1].p == NULL)
pc += program[pc + 2];
else
pc += program[pc + 3];
goto *dynOpcodes[ts + program[pc]];
}

cabpN_2:
{
if (g[2].p == NULL)
pc += program[pc + 2];
else
pc += program[pc + 3];
goto *dynOpcodes[ts + program[pc]];
}

cabpN_3:
{
if (g[3].p == NULL)
pc += program[pc + 2];
else
pc += program[pc + 3];
goto *dynOpcodes[ts + program[pc]];
}

cabpN_4:
{
if (g[4].p == NULL)
pc += program[pc + 2];
else
pc += program[pc + 3];
goto *dynOpcodes[ts + program[pc]];
}

cabpN_5:
{
if (g[5].p == NULL)
pc += program[pc + 2];
else
pc += program[pc + 3];
goto *dynOpcodes[ts + program[pc]];
}

call:
{
int64_t newpc = pc + program[pc + 1];
size_t size = sizeof(stackframe) + sizeof(value) * program[newpc];
stackframe *base = (stackframe*)malloc(size);
base->fp = fp; base->pc = pc; base->ts = ts;
SaveRegisters(base->g);
value *newfp = base->l;
memcpy(newfp, fp + program[pc + 2], program[pc + 3]*sizeof(value));
fp = newfp;
pc = newpc + 1;
goto *dynOpcodes[ts + program[pc]];
}

ret:
{
stackframe *cur = (stackframe*)(fp - offsetof(stackframe, fp));
fp = cur->fp; pc = cur->pc; ts = (cur->ts & 0xF000) | (ts & 0x10800);
RestoreRegisters(cur->g);
free(cur);//probably does a thing 
if (fp == NULL)
return 0;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

newp_0:
{
int16_t dsize = program[pc + 1];
int64_t size = *((int64_t*)(&program[pc + dsize]));
object *base = (object*)malloc(sizeof(object) + sizeof(value)*size);
base->sf = MakeSizeAndFlags(size,0);
g[0].tag = 2;
ts |= 0x20 /*100000*/;
g[0].p = base;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

newp_1:
{
int16_t dsize = program[pc + 1];
int64_t size = *((int64_t*)(&program[pc + dsize]));
object *base = (object*)malloc(sizeof(object) + sizeof(value)*size);
base->sf = MakeSizeAndFlags(size,0);
g[1].tag = 2;
ts |= 0x10 /*010000*/;
g[1].p = base;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

newp_2:
{
int16_t dsize = program[pc + 1];
int64_t size = *((int64_t*)(&program[pc + dsize]));
object *base = (object*)malloc(sizeof(object) + sizeof(value)*size);
base->sf = MakeSizeAndFlags(size,0);
g[2].tag = 2;
ts |= 0x8 /*001000*/;
g[2].p = base;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

newp_3:
{
int16_t dsize = program[pc + 1];
int64_t size = *((int64_t*)(&program[pc + dsize]));
object *base = (object*)malloc(sizeof(object) + sizeof(value)*size);
base->sf = MakeSizeAndFlags(size,0);
g[3].tag = 2;
ts |= 0x4 /*000100*/;
g[3].p = base;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

newp_4:
{
int16_t dsize = program[pc + 1];
int64_t size = *((int64_t*)(&program[pc + dsize]));
object *base = (object*)malloc(sizeof(object) + sizeof(value)*size);
base->sf = MakeSizeAndFlags(size,0);
g[4].tag = 2;
ts |= 0x2 /*000010*/;
g[4].p = base;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

newp_5:
{
int16_t dsize = program[pc + 1];
int64_t size = *((int64_t*)(&program[pc + dsize]));
object *base = (object*)malloc(sizeof(object) + sizeof(value)*size);
base->sf = MakeSizeAndFlags(size,0);
g[5].tag = 2;
ts |= 0x1 /*000001*/;
g[5].p = base;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

newpa_0:
{
int16_t dsize = program[pc + 1];
int64_t size = *((int64_t*)(&program[pc + dsize]));
pointeronly *base = (pointeronly*)malloc(sizeof(pointeronly) + sizeof(value)*size);
base->sf = MakeSizeAndFlags(size,0);
g[0].tag = 3;
ts |= 0x20 /*100000*/;
g[0].p = base;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

newpa_1:
{
int16_t dsize = program[pc + 1];
int64_t size = *((int64_t*)(&program[pc + dsize]));
pointeronly *base = (pointeronly*)malloc(sizeof(pointeronly) + sizeof(value)*size);
base->sf = MakeSizeAndFlags(size,0);
g[1].tag = 3;
ts |= 0x10 /*010000*/;
g[1].p = base;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

newpa_2:
{
int16_t dsize = program[pc + 1];
int64_t size = *((int64_t*)(&program[pc + dsize]));
pointeronly *base = (pointeronly*)malloc(sizeof(pointeronly) + sizeof(value)*size);
base->sf = MakeSizeAndFlags(size,0);
g[2].tag = 3;
ts |= 0x8 /*001000*/;
g[2].p = base;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

newpa_3:
{
int16_t dsize = program[pc + 1];
int64_t size = *((int64_t*)(&program[pc + dsize]));
pointeronly *base = (pointeronly*)malloc(sizeof(pointeronly) + sizeof(value)*size);
base->sf = MakeSizeAndFlags(size,0);
g[3].tag = 3;
ts |= 0x4 /*000100*/;
g[3].p = base;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

newpa_4:
{
int16_t dsize = program[pc + 1];
int64_t size = *((int64_t*)(&program[pc + dsize]));
pointeronly *base = (pointeronly*)malloc(sizeof(pointeronly) + sizeof(value)*size);
base->sf = MakeSizeAndFlags(size,0);
g[4].tag = 3;
ts |= 0x2 /*000010*/;
g[4].p = base;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

newpa_5:
{
int16_t dsize = program[pc + 1];
int64_t size = *((int64_t*)(&program[pc + dsize]));
pointeronly *base = (pointeronly*)malloc(sizeof(pointeronly) + sizeof(value)*size);
base->sf = MakeSizeAndFlags(size,0);
g[5].tag = 3;
ts |= 0x1 /*000001*/;
g[5].p = base;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

newa_0:
{
int16_t dsize = program[pc + 1];
int64_t size = *((int64_t*)(&program[pc + dsize]));
buffer *base = (buffer*)malloc(sizeof(buffer) + sizeof(int8_t)*size);
base->sf = MakeSizeAndFlags(size,0);
g[0].tag = 4;
ts |= 0x20 /*100000*/;
g[0].p = base;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

newa_1:
{
int16_t dsize = program[pc + 1];
int64_t size = *((int64_t*)(&program[pc + dsize]));
buffer *base = (buffer*)malloc(sizeof(buffer) + sizeof(int8_t)*size);
base->sf = MakeSizeAndFlags(size,0);
g[1].tag = 4;
ts |= 0x10 /*010000*/;
g[1].p = base;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

newa_2:
{
int16_t dsize = program[pc + 1];
int64_t size = *((int64_t*)(&program[pc + dsize]));
buffer *base = (buffer*)malloc(sizeof(buffer) + sizeof(int8_t)*size);
base->sf = MakeSizeAndFlags(size,0);
g[2].tag = 4;
ts |= 0x8 /*001000*/;
g[2].p = base;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

newa_3:
{
int16_t dsize = program[pc + 1];
int64_t size = *((int64_t*)(&program[pc + dsize]));
buffer *base = (buffer*)malloc(sizeof(buffer) + sizeof(int8_t)*size);
base->sf = MakeSizeAndFlags(size,0);
g[3].tag = 4;
ts |= 0x4 /*000100*/;
g[3].p = base;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

newa_4:
{
int16_t dsize = program[pc + 1];
int64_t size = *((int64_t*)(&program[pc + dsize]));
buffer *base = (buffer*)malloc(sizeof(buffer) + sizeof(int8_t)*size);
base->sf = MakeSizeAndFlags(size,0);
g[4].tag = 4;
ts |= 0x2 /*000010*/;
g[4].p = base;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

newa_5:
{
int16_t dsize = program[pc + 1];
int64_t size = *((int64_t*)(&program[pc + dsize]));
buffer *base = (buffer*)malloc(sizeof(buffer) + sizeof(int8_t)*size);
base->sf = MakeSizeAndFlags(size,0);
g[5].tag = 4;
ts |= 0x1 /*000001*/;
g[5].p = base;
pc++;
goto *dynOpcodes[ts + program[pc]];
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

addii_0_0:
{
g[0].i += g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

addii_0_1:
{
g[0].i += g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

addii_0_2:
{
g[0].i += g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

addii_0_3:
{
g[0].i += g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

addii_0_4:
{
g[0].i += g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

addii_0_5:
{
g[0].i += g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

addii_1_0:
{
g[1].i += g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

addii_1_1:
{
g[1].i += g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

addii_1_2:
{
g[1].i += g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

addii_1_3:
{
g[1].i += g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

addii_1_4:
{
g[1].i += g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

addii_1_5:
{
g[1].i += g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

addii_2_0:
{
g[2].i += g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

addii_2_1:
{
g[2].i += g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

addii_2_2:
{
g[2].i += g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

addii_2_3:
{
g[2].i += g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

addii_2_4:
{
g[2].i += g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

addii_2_5:
{
g[2].i += g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

addii_3_0:
{
g[3].i += g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

addii_3_1:
{
g[3].i += g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

addii_3_2:
{
g[3].i += g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

addii_3_3:
{
g[3].i += g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

addii_3_4:
{
g[3].i += g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

addii_3_5:
{
g[3].i += g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

addii_4_0:
{
g[4].i += g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

addii_4_1:
{
g[4].i += g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

addii_4_2:
{
g[4].i += g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

addii_4_3:
{
g[4].i += g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

addii_4_4:
{
g[4].i += g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

addii_4_5:
{
g[4].i += g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

addii_5_0:
{
g[5].i += g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

addii_5_1:
{
g[5].i += g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

addii_5_2:
{
g[5].i += g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

addii_5_3:
{
g[5].i += g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

addii_5_4:
{
g[5].i += g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

addii_5_5:
{
g[5].i += g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

addik_0:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[0].i += constant;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

addik_1:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[1].i += constant;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

addik_2:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[2].i += constant;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

addik_3:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[3].i += constant;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

addik_4:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[4].i += constant;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

addik_5:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[5].i += constant;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

subii_0_1:
{
g[0].i -= g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

subii_0_2:
{
g[0].i -= g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

subii_0_3:
{
g[0].i -= g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

subii_0_4:
{
g[0].i -= g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

subii_0_5:
{
g[0].i -= g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

subii_1_0:
{
g[1].i -= g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

subii_1_2:
{
g[1].i -= g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

subii_1_3:
{
g[1].i -= g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

subii_1_4:
{
g[1].i -= g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

subii_1_5:
{
g[1].i -= g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

subii_2_0:
{
g[2].i -= g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

subii_2_1:
{
g[2].i -= g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

subii_2_3:
{
g[2].i -= g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

subii_2_4:
{
g[2].i -= g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

subii_2_5:
{
g[2].i -= g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

subii_3_0:
{
g[3].i -= g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

subii_3_1:
{
g[3].i -= g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

subii_3_2:
{
g[3].i -= g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

subii_3_4:
{
g[3].i -= g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

subii_3_5:
{
g[3].i -= g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

subii_4_0:
{
g[4].i -= g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

subii_4_1:
{
g[4].i -= g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

subii_4_2:
{
g[4].i -= g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

subii_4_3:
{
g[4].i -= g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

subii_4_5:
{
g[4].i -= g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

subii_5_0:
{
g[5].i -= g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

subii_5_1:
{
g[5].i -= g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

subii_5_2:
{
g[5].i -= g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

subii_5_3:
{
g[5].i -= g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

subii_5_4:
{
g[5].i -= g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

subki_0:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[0].i = constant - g[0].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

subki_1:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[1].i = constant - g[1].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

subki_2:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[2].i = constant - g[2].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

subki_3:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[3].i = constant - g[3].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

subki_4:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[4].i = constant - g[4].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

subki_5:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[5].i = constant - g[5].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

orii_0_1:
{
g[0].i |= g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

orii_0_2:
{
g[0].i |= g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

orii_0_3:
{
g[0].i |= g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

orii_0_4:
{
g[0].i |= g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

orii_0_5:
{
g[0].i |= g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

orii_1_0:
{
g[1].i |= g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

orii_1_2:
{
g[1].i |= g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

orii_1_3:
{
g[1].i |= g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

orii_1_4:
{
g[1].i |= g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

orii_1_5:
{
g[1].i |= g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

orii_2_0:
{
g[2].i |= g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

orii_2_1:
{
g[2].i |= g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

orii_2_3:
{
g[2].i |= g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

orii_2_4:
{
g[2].i |= g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

orii_2_5:
{
g[2].i |= g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

orii_3_0:
{
g[3].i |= g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

orii_3_1:
{
g[3].i |= g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

orii_3_2:
{
g[3].i |= g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

orii_3_4:
{
g[3].i |= g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

orii_3_5:
{
g[3].i |= g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

orii_4_0:
{
g[4].i |= g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

orii_4_1:
{
g[4].i |= g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

orii_4_2:
{
g[4].i |= g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

orii_4_3:
{
g[4].i |= g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

orii_4_5:
{
g[4].i |= g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

orii_5_0:
{
g[5].i |= g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

orii_5_1:
{
g[5].i |= g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

orii_5_2:
{
g[5].i |= g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

orii_5_3:
{
g[5].i |= g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

orii_5_4:
{
g[5].i |= g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

orki_0:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[0].i |= constant;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

orki_1:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[1].i |= constant;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

orki_2:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[2].i |= constant;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

orki_3:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[3].i |= constant;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

orki_4:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[4].i |= constant;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

orki_5:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[5].i |= constant;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

xorii_0_1:
{
g[0].i ^= g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

xorii_0_2:
{
g[0].i ^= g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

xorii_0_3:
{
g[0].i ^= g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

xorii_0_4:
{
g[0].i ^= g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

xorii_0_5:
{
g[0].i ^= g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

xorii_1_0:
{
g[1].i ^= g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

xorii_1_2:
{
g[1].i ^= g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

xorii_1_3:
{
g[1].i ^= g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

xorii_1_4:
{
g[1].i ^= g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

xorii_1_5:
{
g[1].i ^= g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

xorii_2_0:
{
g[2].i ^= g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

xorii_2_1:
{
g[2].i ^= g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

xorii_2_3:
{
g[2].i ^= g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

xorii_2_4:
{
g[2].i ^= g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

xorii_2_5:
{
g[2].i ^= g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

xorii_3_0:
{
g[3].i ^= g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

xorii_3_1:
{
g[3].i ^= g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

xorii_3_2:
{
g[3].i ^= g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

xorii_3_4:
{
g[3].i ^= g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

xorii_3_5:
{
g[3].i ^= g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

xorii_4_0:
{
g[4].i ^= g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

xorii_4_1:
{
g[4].i ^= g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

xorii_4_2:
{
g[4].i ^= g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

xorii_4_3:
{
g[4].i ^= g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

xorii_4_5:
{
g[4].i ^= g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

xorii_5_0:
{
g[5].i ^= g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

xorii_5_1:
{
g[5].i ^= g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

xorii_5_2:
{
g[5].i ^= g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

xorii_5_3:
{
g[5].i ^= g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

xorii_5_4:
{
g[5].i ^= g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shlii_0_1:
{
g[0].i <<= g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shlii_0_2:
{
g[0].i <<= g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shlii_0_3:
{
g[0].i <<= g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shlii_0_4:
{
g[0].i <<= g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shlii_0_5:
{
g[0].i <<= g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shlii_1_0:
{
g[1].i <<= g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shlii_1_2:
{
g[1].i <<= g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shlii_1_3:
{
g[1].i <<= g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shlii_1_4:
{
g[1].i <<= g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shlii_1_5:
{
g[1].i <<= g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shlii_2_0:
{
g[2].i <<= g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shlii_2_1:
{
g[2].i <<= g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shlii_2_3:
{
g[2].i <<= g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shlii_2_4:
{
g[2].i <<= g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shlii_2_5:
{
g[2].i <<= g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shlii_3_0:
{
g[3].i <<= g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shlii_3_1:
{
g[3].i <<= g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shlii_3_2:
{
g[3].i <<= g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shlii_3_4:
{
g[3].i <<= g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shlii_3_5:
{
g[3].i <<= g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shlii_4_0:
{
g[4].i <<= g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shlii_4_1:
{
g[4].i <<= g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shlii_4_2:
{
g[4].i <<= g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shlii_4_3:
{
g[4].i <<= g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shlii_4_5:
{
g[4].i <<= g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shlii_5_0:
{
g[5].i <<= g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shlii_5_1:
{
g[5].i <<= g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shlii_5_2:
{
g[5].i <<= g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shlii_5_3:
{
g[5].i <<= g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shlii_5_4:
{
g[5].i <<= g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shlik_0:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[0].i <<= constant;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

shlik_1:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[1].i <<= constant;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

shlik_2:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[2].i <<= constant;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

shlik_3:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[3].i <<= constant;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

shlik_4:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[4].i <<= constant;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

shlik_5:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[5].i <<= constant;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

shlki_0:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[0].i = constant << g[0].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

shlki_1:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[1].i = constant << g[1].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

shlki_2:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[2].i = constant << g[2].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

shlki_3:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[3].i = constant << g[3].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

shlki_4:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[4].i = constant << g[4].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

shlki_5:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[5].i = constant << g[5].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

shrii_0_1:
{
g[0].i = (uint64_t)g[0].i >> g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shrii_0_2:
{
g[0].i = (uint64_t)g[0].i >> g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shrii_0_3:
{
g[0].i = (uint64_t)g[0].i >> g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shrii_0_4:
{
g[0].i = (uint64_t)g[0].i >> g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shrii_0_5:
{
g[0].i = (uint64_t)g[0].i >> g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shrii_1_0:
{
g[1].i = (uint64_t)g[1].i >> g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shrii_1_2:
{
g[1].i = (uint64_t)g[1].i >> g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shrii_1_3:
{
g[1].i = (uint64_t)g[1].i >> g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shrii_1_4:
{
g[1].i = (uint64_t)g[1].i >> g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shrii_1_5:
{
g[1].i = (uint64_t)g[1].i >> g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shrii_2_0:
{
g[2].i = (uint64_t)g[2].i >> g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shrii_2_1:
{
g[2].i = (uint64_t)g[2].i >> g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shrii_2_3:
{
g[2].i = (uint64_t)g[2].i >> g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shrii_2_4:
{
g[2].i = (uint64_t)g[2].i >> g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shrii_2_5:
{
g[2].i = (uint64_t)g[2].i >> g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shrii_3_0:
{
g[3].i = (uint64_t)g[3].i >> g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shrii_3_1:
{
g[3].i = (uint64_t)g[3].i >> g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shrii_3_2:
{
g[3].i = (uint64_t)g[3].i >> g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shrii_3_4:
{
g[3].i = (uint64_t)g[3].i >> g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shrii_3_5:
{
g[3].i = (uint64_t)g[3].i >> g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shrii_4_0:
{
g[4].i = (uint64_t)g[4].i >> g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shrii_4_1:
{
g[4].i = (uint64_t)g[4].i >> g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shrii_4_2:
{
g[4].i = (uint64_t)g[4].i >> g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shrii_4_3:
{
g[4].i = (uint64_t)g[4].i >> g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shrii_4_5:
{
g[4].i = (uint64_t)g[4].i >> g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shrii_5_0:
{
g[5].i = (uint64_t)g[5].i >> g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shrii_5_1:
{
g[5].i = (uint64_t)g[5].i >> g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shrii_5_2:
{
g[5].i = (uint64_t)g[5].i >> g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shrii_5_3:
{
g[5].i = (uint64_t)g[5].i >> g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shrii_5_4:
{
g[5].i = (uint64_t)g[5].i >> g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shrik_0:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[0].i = (uint64_t)g[0].i >> constant;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

shrik_1:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[1].i = (uint64_t)g[1].i >> constant;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

shrik_2:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[2].i = (uint64_t)g[2].i >> constant;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

shrik_3:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[3].i = (uint64_t)g[3].i >> constant;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

shrik_4:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[4].i = (uint64_t)g[4].i >> constant;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

shrik_5:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[5].i = (uint64_t)g[5].i >> constant;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

shrki_0:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[0].i = (uint64_t)constant >> g[0].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

shrki_1:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[1].i = (uint64_t)constant >> g[1].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

shrki_2:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[2].i = (uint64_t)constant >> g[2].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

shrki_3:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[3].i = (uint64_t)constant >> g[3].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

shrki_4:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[4].i = (uint64_t)constant >> g[4].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

shrki_5:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[5].i = (uint64_t)constant >> g[5].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

sarii_0_1:
{
g[0].i >>= g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

sarii_0_2:
{
g[0].i >>= g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

sarii_0_3:
{
g[0].i >>= g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

sarii_0_4:
{
g[0].i >>= g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

sarii_0_5:
{
g[0].i >>= g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

sarii_1_0:
{
g[1].i >>= g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

sarii_1_2:
{
g[1].i >>= g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

sarii_1_3:
{
g[1].i >>= g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

sarii_1_4:
{
g[1].i >>= g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

sarii_1_5:
{
g[1].i >>= g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

sarii_2_0:
{
g[2].i >>= g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

sarii_2_1:
{
g[2].i >>= g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

sarii_2_3:
{
g[2].i >>= g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

sarii_2_4:
{
g[2].i >>= g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

sarii_2_5:
{
g[2].i >>= g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

sarii_3_0:
{
g[3].i >>= g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

sarii_3_1:
{
g[3].i >>= g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

sarii_3_2:
{
g[3].i >>= g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

sarii_3_4:
{
g[3].i >>= g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

sarii_3_5:
{
g[3].i >>= g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

sarii_4_0:
{
g[4].i >>= g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

sarii_4_1:
{
g[4].i >>= g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

sarii_4_2:
{
g[4].i >>= g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

sarii_4_3:
{
g[4].i >>= g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

sarii_4_5:
{
g[4].i >>= g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

sarii_5_0:
{
g[5].i >>= g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

sarii_5_1:
{
g[5].i >>= g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

sarii_5_2:
{
g[5].i >>= g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

sarii_5_3:
{
g[5].i >>= g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

sarii_5_4:
{
g[5].i >>= g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

sarik_0:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[0].i >>= constant;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

sarik_1:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[1].i >>= constant;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

sarik_2:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[2].i >>= constant;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

sarik_3:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[3].i >>= constant;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

sarik_4:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[4].i >>= constant;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

sarik_5:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[5].i >>= constant;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

sarki_0:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[0].i = constant >> g[0].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

sarki_1:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[1].i = constant >> g[1].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

sarki_2:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[2].i = constant >> g[2].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

sarki_3:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[3].i = constant >> g[3].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

sarki_4:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[4].i = constant >> g[4].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

sarki_5:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[5].i = constant >> g[5].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

movii_0_1:
{
g[0].i = g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movii_0_2:
{
g[0].i = g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movii_0_3:
{
g[0].i = g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movii_0_4:
{
g[0].i = g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movii_0_5:
{
g[0].i = g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movii_1_0:
{
g[1].i = g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movii_1_2:
{
g[1].i = g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movii_1_3:
{
g[1].i = g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movii_1_4:
{
g[1].i = g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movii_1_5:
{
g[1].i = g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movii_2_0:
{
g[2].i = g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movii_2_1:
{
g[2].i = g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movii_2_3:
{
g[2].i = g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movii_2_4:
{
g[2].i = g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movii_2_5:
{
g[2].i = g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movii_3_0:
{
g[3].i = g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movii_3_1:
{
g[3].i = g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movii_3_2:
{
g[3].i = g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movii_3_4:
{
g[3].i = g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movii_3_5:
{
g[3].i = g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movii_4_0:
{
g[4].i = g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movii_4_1:
{
g[4].i = g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movii_4_2:
{
g[4].i = g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movii_4_3:
{
g[4].i = g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movii_4_5:
{
g[4].i = g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movii_5_0:
{
g[5].i = g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movii_5_1:
{
g[5].i = g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movii_5_2:
{
g[5].i = g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movii_5_3:
{
g[5].i = g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movii_5_4:
{
g[5].i = g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpp_0_1:
{
g[0].tag = g[1].tag;
g[0].p = g[1].p;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpp_0_2:
{
g[0].tag = g[2].tag;
g[0].p = g[2].p;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpp_0_3:
{
g[0].tag = g[3].tag;
g[0].p = g[3].p;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpp_0_4:
{
g[0].tag = g[4].tag;
g[0].p = g[4].p;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpp_0_5:
{
g[0].tag = g[5].tag;
g[0].p = g[5].p;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpp_1_0:
{
g[1].tag = g[0].tag;
g[1].p = g[0].p;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpp_1_2:
{
g[1].tag = g[2].tag;
g[1].p = g[2].p;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpp_1_3:
{
g[1].tag = g[3].tag;
g[1].p = g[3].p;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpp_1_4:
{
g[1].tag = g[4].tag;
g[1].p = g[4].p;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpp_1_5:
{
g[1].tag = g[5].tag;
g[1].p = g[5].p;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpp_2_0:
{
g[2].tag = g[0].tag;
g[2].p = g[0].p;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpp_2_1:
{
g[2].tag = g[1].tag;
g[2].p = g[1].p;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpp_2_3:
{
g[2].tag = g[3].tag;
g[2].p = g[3].p;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpp_2_4:
{
g[2].tag = g[4].tag;
g[2].p = g[4].p;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpp_2_5:
{
g[2].tag = g[5].tag;
g[2].p = g[5].p;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpp_3_0:
{
g[3].tag = g[0].tag;
g[3].p = g[0].p;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpp_3_1:
{
g[3].tag = g[1].tag;
g[3].p = g[1].p;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpp_3_2:
{
g[3].tag = g[2].tag;
g[3].p = g[2].p;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpp_3_4:
{
g[3].tag = g[4].tag;
g[3].p = g[4].p;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpp_3_5:
{
g[3].tag = g[5].tag;
g[3].p = g[5].p;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpp_4_0:
{
g[4].tag = g[0].tag;
g[4].p = g[0].p;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpp_4_1:
{
g[4].tag = g[1].tag;
g[4].p = g[1].p;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpp_4_2:
{
g[4].tag = g[2].tag;
g[4].p = g[2].p;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpp_4_3:
{
g[4].tag = g[3].tag;
g[4].p = g[3].p;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpp_4_5:
{
g[4].tag = g[5].tag;
g[4].p = g[5].p;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpp_5_0:
{
g[5].tag = g[0].tag;
g[5].p = g[0].p;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpp_5_1:
{
g[5].tag = g[1].tag;
g[5].p = g[1].p;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpp_5_2:
{
g[5].tag = g[2].tag;
g[5].p = g[2].p;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpp_5_3:
{
g[5].tag = g[3].tag;
g[5].p = g[3].p;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpp_5_4:
{
g[5].tag = g[4].tag;
g[5].p = g[4].p;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movip_0_1:
{
g[0].p = g[1].p;
g[0].tag = g[1].tag;
ts |= 0x20 /*100000*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movip_0_2:
{
g[0].p = g[2].p;
g[0].tag = g[2].tag;
ts |= 0x20 /*100000*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movip_0_3:
{
g[0].p = g[3].p;
g[0].tag = g[3].tag;
ts |= 0x20 /*100000*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movip_0_4:
{
g[0].p = g[4].p;
g[0].tag = g[4].tag;
ts |= 0x20 /*100000*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movip_0_5:
{
g[0].p = g[5].p;
g[0].tag = g[5].tag;
ts |= 0x20 /*100000*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movip_1_0:
{
g[1].p = g[0].p;
g[1].tag = g[0].tag;
ts |= 0x10 /*010000*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movip_1_2:
{
g[1].p = g[2].p;
g[1].tag = g[2].tag;
ts |= 0x10 /*010000*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movip_1_3:
{
g[1].p = g[3].p;
g[1].tag = g[3].tag;
ts |= 0x10 /*010000*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movip_1_4:
{
g[1].p = g[4].p;
g[1].tag = g[4].tag;
ts |= 0x10 /*010000*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movip_1_5:
{
g[1].p = g[5].p;
g[1].tag = g[5].tag;
ts |= 0x10 /*010000*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movip_2_0:
{
g[2].p = g[0].p;
g[2].tag = g[0].tag;
ts |= 0x8 /*001000*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movip_2_1:
{
g[2].p = g[1].p;
g[2].tag = g[1].tag;
ts |= 0x8 /*001000*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movip_2_3:
{
g[2].p = g[3].p;
g[2].tag = g[3].tag;
ts |= 0x8 /*001000*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movip_2_4:
{
g[2].p = g[4].p;
g[2].tag = g[4].tag;
ts |= 0x8 /*001000*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movip_2_5:
{
g[2].p = g[5].p;
g[2].tag = g[5].tag;
ts |= 0x8 /*001000*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movip_3_0:
{
g[3].p = g[0].p;
g[3].tag = g[0].tag;
ts |= 0x4 /*000100*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movip_3_1:
{
g[3].p = g[1].p;
g[3].tag = g[1].tag;
ts |= 0x4 /*000100*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movip_3_2:
{
g[3].p = g[2].p;
g[3].tag = g[2].tag;
ts |= 0x4 /*000100*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movip_3_4:
{
g[3].p = g[4].p;
g[3].tag = g[4].tag;
ts |= 0x4 /*000100*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movip_3_5:
{
g[3].p = g[5].p;
g[3].tag = g[5].tag;
ts |= 0x4 /*000100*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movip_4_0:
{
g[4].p = g[0].p;
g[4].tag = g[0].tag;
ts |= 0x2 /*000010*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movip_4_1:
{
g[4].p = g[1].p;
g[4].tag = g[1].tag;
ts |= 0x2 /*000010*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movip_4_2:
{
g[4].p = g[2].p;
g[4].tag = g[2].tag;
ts |= 0x2 /*000010*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movip_4_3:
{
g[4].p = g[3].p;
g[4].tag = g[3].tag;
ts |= 0x2 /*000010*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movip_4_5:
{
g[4].p = g[5].p;
g[4].tag = g[5].tag;
ts |= 0x2 /*000010*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movip_5_0:
{
g[5].p = g[0].p;
g[5].tag = g[0].tag;
ts |= 0x1 /*000001*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movip_5_1:
{
g[5].p = g[1].p;
g[5].tag = g[1].tag;
ts |= 0x1 /*000001*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movip_5_2:
{
g[5].p = g[2].p;
g[5].tag = g[2].tag;
ts |= 0x1 /*000001*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movip_5_3:
{
g[5].p = g[3].p;
g[5].tag = g[3].tag;
ts |= 0x1 /*000001*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movip_5_4:
{
g[5].p = g[4].p;
g[5].tag = g[4].tag;
ts |= 0x1 /*000001*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpi_0_1:
{
g[0].i = g[1].i;
g[0].tag = 0;
ts |= 0x1f /*011111*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpi_0_2:
{
g[0].i = g[2].i;
g[0].tag = 0;
ts |= 0x1f /*011111*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpi_0_3:
{
g[0].i = g[3].i;
g[0].tag = 0;
ts |= 0x1f /*011111*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpi_0_4:
{
g[0].i = g[4].i;
g[0].tag = 0;
ts |= 0x1f /*011111*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpi_0_5:
{
g[0].i = g[5].i;
g[0].tag = 0;
ts |= 0x1f /*011111*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpi_1_0:
{
g[1].i = g[0].i;
g[1].tag = 0;
ts |= 0x2f /*101111*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpi_1_2:
{
g[1].i = g[2].i;
g[1].tag = 0;
ts |= 0x2f /*101111*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpi_1_3:
{
g[1].i = g[3].i;
g[1].tag = 0;
ts |= 0x2f /*101111*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpi_1_4:
{
g[1].i = g[4].i;
g[1].tag = 0;
ts |= 0x2f /*101111*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpi_1_5:
{
g[1].i = g[5].i;
g[1].tag = 0;
ts |= 0x2f /*101111*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpi_2_0:
{
g[2].i = g[0].i;
g[2].tag = 0;
ts |= 0x37 /*110111*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpi_2_1:
{
g[2].i = g[1].i;
g[2].tag = 0;
ts |= 0x37 /*110111*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpi_2_3:
{
g[2].i = g[3].i;
g[2].tag = 0;
ts |= 0x37 /*110111*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpi_2_4:
{
g[2].i = g[4].i;
g[2].tag = 0;
ts |= 0x37 /*110111*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpi_2_5:
{
g[2].i = g[5].i;
g[2].tag = 0;
ts |= 0x37 /*110111*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpi_3_0:
{
g[3].i = g[0].i;
g[3].tag = 0;
ts |= 0x3b /*111011*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpi_3_1:
{
g[3].i = g[1].i;
g[3].tag = 0;
ts |= 0x3b /*111011*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpi_3_2:
{
g[3].i = g[2].i;
g[3].tag = 0;
ts |= 0x3b /*111011*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpi_3_4:
{
g[3].i = g[4].i;
g[3].tag = 0;
ts |= 0x3b /*111011*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpi_3_5:
{
g[3].i = g[5].i;
g[3].tag = 0;
ts |= 0x3b /*111011*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpi_4_0:
{
g[4].i = g[0].i;
g[4].tag = 0;
ts |= 0x3d /*111101*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpi_4_1:
{
g[4].i = g[1].i;
g[4].tag = 0;
ts |= 0x3d /*111101*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpi_4_2:
{
g[4].i = g[2].i;
g[4].tag = 0;
ts |= 0x3d /*111101*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpi_4_3:
{
g[4].i = g[3].i;
g[4].tag = 0;
ts |= 0x3d /*111101*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpi_4_5:
{
g[4].i = g[5].i;
g[4].tag = 0;
ts |= 0x3d /*111101*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpi_5_0:
{
g[5].i = g[0].i;
g[5].tag = 0;
ts |= 0x3e /*111110*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpi_5_1:
{
g[5].i = g[1].i;
g[5].tag = 0;
ts |= 0x3e /*111110*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpi_5_2:
{
g[5].i = g[2].i;
g[5].tag = 0;
ts |= 0x3e /*111110*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpi_5_3:
{
g[5].i = g[3].i;
g[5].tag = 0;
ts |= 0x3e /*111110*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpi_5_4:
{
g[5].i = g[4].i;
g[5].tag = 0;
ts |= 0x3e /*111110*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movik_0:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[0].i = constant;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

movik_1:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[1].i = constant;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

movik_2:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[2].i = constant;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

movik_3:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[3].i = constant;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

movik_4:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[4].i = constant;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

movik_5:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[5].i = constant;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

movpk_0:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[0].i = constant;
g[0].tag = 0;
ts |= 0x1f /*011111*/;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

movpk_1:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[1].i = constant;
g[1].tag = 0;
ts |= 0x2f /*101111*/;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

movpk_2:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[2].i = constant;
g[2].tag = 0;
ts |= 0x37 /*110111*/;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

movpk_3:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[3].i = constant;
g[3].tag = 0;
ts |= 0x3b /*111011*/;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

movpk_4:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[4].i = constant;
g[4].tag = 0;
ts |= 0x3d /*111101*/;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

movpk_5:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[5].i = constant;
g[5].tag = 0;
ts |= 0x3e /*111110*/;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

movpN_0:
{
g[0].p = NULL;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpN_1:
{
g[1].p = NULL;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpN_2:
{
g[2].p = NULL;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpN_3:
{
g[3].p = NULL;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpN_4:
{
g[4].p = NULL;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpN_5:
{
g[5].p = NULL;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

moviN_0:
{
g[0].p = NULL;
g[0].tag = 1;
ts |= 0x20 /*100000*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

moviN_1:
{
g[1].p = NULL;
g[1].tag = 1;
ts |= 0x10 /*010000*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

moviN_2:
{
g[2].p = NULL;
g[2].tag = 1;
ts |= 0x8 /*001000*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

moviN_3:
{
g[3].p = NULL;
g[3].tag = 1;
ts |= 0x4 /*000100*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

moviN_4:
{
g[4].p = NULL;
g[4].tag = 1;
ts |= 0x2 /*000010*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

moviN_5:
{
g[5].p = NULL;
g[5].tag = 1;
ts |= 0x1 /*000001*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

getl_0:
{
int16_t constant = program[pc + 1];
value val = fp[constant];
if (val.tag != 0)
{
g[0].tag = val.tag;
ts |= 0x20 /*100000*/;
g[0].p = val.p;
}
else{
g[0].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getl_1:
{
int16_t constant = program[pc + 1];
value val = fp[constant];
if (val.tag != 0)
{
g[1].tag = val.tag;
ts |= 0x10 /*010000*/;
g[1].p = val.p;
}
else{
g[1].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getl_2:
{
int16_t constant = program[pc + 1];
value val = fp[constant];
if (val.tag != 0)
{
g[2].tag = val.tag;
ts |= 0x8 /*001000*/;
g[2].p = val.p;
}
else{
g[2].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getl_3:
{
int16_t constant = program[pc + 1];
value val = fp[constant];
if (val.tag != 0)
{
g[3].tag = val.tag;
ts |= 0x4 /*000100*/;
g[3].p = val.p;
}
else{
g[3].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getl_4:
{
int16_t constant = program[pc + 1];
value val = fp[constant];
if (val.tag != 0)
{
g[4].tag = val.tag;
ts |= 0x2 /*000010*/;
g[4].p = val.p;
}
else{
g[4].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getl_5:
{
int16_t constant = program[pc + 1];
value val = fp[constant];
if (val.tag != 0)
{
g[5].tag = val.tag;
ts |= 0x1 /*000001*/;
g[5].p = val.p;
}
else{
g[5].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getlp_0:
{
int16_t constant = program[pc + 1];
value val = fp[constant];
if (val.tag == 0){
g[0].tag = 0;
ts |= 0x1f /*011111*/;
g[0].i = val.i;
}
g[0].tag = val.tag;
g[0].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getlp_1:
{
int16_t constant = program[pc + 1];
value val = fp[constant];
if (val.tag == 0){
g[1].tag = 0;
ts |= 0x2f /*101111*/;
g[1].i = val.i;
}
g[1].tag = val.tag;
g[1].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getlp_2:
{
int16_t constant = program[pc + 1];
value val = fp[constant];
if (val.tag == 0){
g[2].tag = 0;
ts |= 0x37 /*110111*/;
g[2].i = val.i;
}
g[2].tag = val.tag;
g[2].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getlp_3:
{
int16_t constant = program[pc + 1];
value val = fp[constant];
if (val.tag == 0){
g[3].tag = 0;
ts |= 0x3b /*111011*/;
g[3].i = val.i;
}
g[3].tag = val.tag;
g[3].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getlp_4:
{
int16_t constant = program[pc + 1];
value val = fp[constant];
if (val.tag == 0){
g[4].tag = 0;
ts |= 0x3d /*111101*/;
g[4].i = val.i;
}
g[4].tag = val.tag;
g[4].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getlp_5:
{
int16_t constant = program[pc + 1];
value val = fp[constant];
if (val.tag == 0){
g[5].tag = 0;
ts |= 0x3e /*111110*/;
g[5].i = val.i;
}
g[5].tag = val.tag;
g[5].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setl_0:
{
int16_t constant = program[pc + 1];
value* vp = fp + constant * sizeof(value);
(*vp).tag = g[0].tag;
(*vp).i = g[0].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setl_1:
{
int16_t constant = program[pc + 1];
value* vp = fp + constant * sizeof(value);
(*vp).tag = g[1].tag;
(*vp).i = g[1].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setl_2:
{
int16_t constant = program[pc + 1];
value* vp = fp + constant * sizeof(value);
(*vp).tag = g[2].tag;
(*vp).i = g[2].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setl_3:
{
int16_t constant = program[pc + 1];
value* vp = fp + constant * sizeof(value);
(*vp).tag = g[3].tag;
(*vp).i = g[3].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setl_4:
{
int16_t constant = program[pc + 1];
value* vp = fp + constant * sizeof(value);
(*vp).tag = g[4].tag;
(*vp).i = g[4].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setl_5:
{
int16_t constant = program[pc + 1];
value* vp = fp + constant * sizeof(value);
(*vp).tag = g[5].tag;
(*vp).i = g[5].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setlp_0:
{
int16_t constant = program[pc + 1];
value* vp = fp + constant * sizeof(value);
(*vp).tag = g[0].tag;
(*vp).p = g[0].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setlp_1:
{
int16_t constant = program[pc + 1];
value* vp = fp + constant * sizeof(value);
(*vp).tag = g[1].tag;
(*vp).p = g[1].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setlp_2:
{
int16_t constant = program[pc + 1];
value* vp = fp + constant * sizeof(value);
(*vp).tag = g[2].tag;
(*vp).p = g[2].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setlp_3:
{
int16_t constant = program[pc + 1];
value* vp = fp + constant * sizeof(value);
(*vp).tag = g[3].tag;
(*vp).p = g[3].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setlp_4:
{
int16_t constant = program[pc + 1];
value* vp = fp + constant * sizeof(value);
(*vp).tag = g[4].tag;
(*vp).p = g[4].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setlp_5:
{
int16_t constant = program[pc + 1];
value* vp = fp + constant * sizeof(value);
(*vp).tag = g[5].tag;
(*vp).p = g[5].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getm_0_0:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[0].p))->data[constant];
if (val.tag != 0)
{
g[0].tag = val.tag;
ts |= 0x20 /*100000*/;
g[0].p = val.p;
}
else{
g[0].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getm_0_1:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[1].p))->data[constant];
if (val.tag != 0)
{
g[0].tag = val.tag;
ts |= 0x20 /*100000*/;
g[0].p = val.p;
}
else{
g[0].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getm_0_2:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[2].p))->data[constant];
if (val.tag != 0)
{
g[0].tag = val.tag;
ts |= 0x20 /*100000*/;
g[0].p = val.p;
}
else{
g[0].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getm_0_3:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[3].p))->data[constant];
if (val.tag != 0)
{
g[0].tag = val.tag;
ts |= 0x20 /*100000*/;
g[0].p = val.p;
}
else{
g[0].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getm_0_4:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[4].p))->data[constant];
if (val.tag != 0)
{
g[0].tag = val.tag;
ts |= 0x20 /*100000*/;
g[0].p = val.p;
}
else{
g[0].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getm_0_5:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[5].p))->data[constant];
if (val.tag != 0)
{
g[0].tag = val.tag;
ts |= 0x20 /*100000*/;
g[0].p = val.p;
}
else{
g[0].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getm_1_0:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[0].p))->data[constant];
if (val.tag != 0)
{
g[1].tag = val.tag;
ts |= 0x10 /*010000*/;
g[1].p = val.p;
}
else{
g[1].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getm_1_1:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[1].p))->data[constant];
if (val.tag != 0)
{
g[1].tag = val.tag;
ts |= 0x10 /*010000*/;
g[1].p = val.p;
}
else{
g[1].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getm_1_2:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[2].p))->data[constant];
if (val.tag != 0)
{
g[1].tag = val.tag;
ts |= 0x10 /*010000*/;
g[1].p = val.p;
}
else{
g[1].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getm_1_3:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[3].p))->data[constant];
if (val.tag != 0)
{
g[1].tag = val.tag;
ts |= 0x10 /*010000*/;
g[1].p = val.p;
}
else{
g[1].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getm_1_4:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[4].p))->data[constant];
if (val.tag != 0)
{
g[1].tag = val.tag;
ts |= 0x10 /*010000*/;
g[1].p = val.p;
}
else{
g[1].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getm_1_5:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[5].p))->data[constant];
if (val.tag != 0)
{
g[1].tag = val.tag;
ts |= 0x10 /*010000*/;
g[1].p = val.p;
}
else{
g[1].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getm_2_0:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[0].p))->data[constant];
if (val.tag != 0)
{
g[2].tag = val.tag;
ts |= 0x8 /*001000*/;
g[2].p = val.p;
}
else{
g[2].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getm_2_1:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[1].p))->data[constant];
if (val.tag != 0)
{
g[2].tag = val.tag;
ts |= 0x8 /*001000*/;
g[2].p = val.p;
}
else{
g[2].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getm_2_2:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[2].p))->data[constant];
if (val.tag != 0)
{
g[2].tag = val.tag;
ts |= 0x8 /*001000*/;
g[2].p = val.p;
}
else{
g[2].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getm_2_3:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[3].p))->data[constant];
if (val.tag != 0)
{
g[2].tag = val.tag;
ts |= 0x8 /*001000*/;
g[2].p = val.p;
}
else{
g[2].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getm_2_4:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[4].p))->data[constant];
if (val.tag != 0)
{
g[2].tag = val.tag;
ts |= 0x8 /*001000*/;
g[2].p = val.p;
}
else{
g[2].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getm_2_5:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[5].p))->data[constant];
if (val.tag != 0)
{
g[2].tag = val.tag;
ts |= 0x8 /*001000*/;
g[2].p = val.p;
}
else{
g[2].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getm_3_0:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[0].p))->data[constant];
if (val.tag != 0)
{
g[3].tag = val.tag;
ts |= 0x4 /*000100*/;
g[3].p = val.p;
}
else{
g[3].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getm_3_1:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[1].p))->data[constant];
if (val.tag != 0)
{
g[3].tag = val.tag;
ts |= 0x4 /*000100*/;
g[3].p = val.p;
}
else{
g[3].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getm_3_2:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[2].p))->data[constant];
if (val.tag != 0)
{
g[3].tag = val.tag;
ts |= 0x4 /*000100*/;
g[3].p = val.p;
}
else{
g[3].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getm_3_3:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[3].p))->data[constant];
if (val.tag != 0)
{
g[3].tag = val.tag;
ts |= 0x4 /*000100*/;
g[3].p = val.p;
}
else{
g[3].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getm_3_4:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[4].p))->data[constant];
if (val.tag != 0)
{
g[3].tag = val.tag;
ts |= 0x4 /*000100*/;
g[3].p = val.p;
}
else{
g[3].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getm_3_5:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[5].p))->data[constant];
if (val.tag != 0)
{
g[3].tag = val.tag;
ts |= 0x4 /*000100*/;
g[3].p = val.p;
}
else{
g[3].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getm_4_0:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[0].p))->data[constant];
if (val.tag != 0)
{
g[4].tag = val.tag;
ts |= 0x2 /*000010*/;
g[4].p = val.p;
}
else{
g[4].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getm_4_1:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[1].p))->data[constant];
if (val.tag != 0)
{
g[4].tag = val.tag;
ts |= 0x2 /*000010*/;
g[4].p = val.p;
}
else{
g[4].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getm_4_2:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[2].p))->data[constant];
if (val.tag != 0)
{
g[4].tag = val.tag;
ts |= 0x2 /*000010*/;
g[4].p = val.p;
}
else{
g[4].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getm_4_3:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[3].p))->data[constant];
if (val.tag != 0)
{
g[4].tag = val.tag;
ts |= 0x2 /*000010*/;
g[4].p = val.p;
}
else{
g[4].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getm_4_4:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[4].p))->data[constant];
if (val.tag != 0)
{
g[4].tag = val.tag;
ts |= 0x2 /*000010*/;
g[4].p = val.p;
}
else{
g[4].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getm_4_5:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[5].p))->data[constant];
if (val.tag != 0)
{
g[4].tag = val.tag;
ts |= 0x2 /*000010*/;
g[4].p = val.p;
}
else{
g[4].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getm_5_0:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[0].p))->data[constant];
if (val.tag != 0)
{
g[5].tag = val.tag;
ts |= 0x1 /*000001*/;
g[5].p = val.p;
}
else{
g[5].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getm_5_1:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[1].p))->data[constant];
if (val.tag != 0)
{
g[5].tag = val.tag;
ts |= 0x1 /*000001*/;
g[5].p = val.p;
}
else{
g[5].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getm_5_2:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[2].p))->data[constant];
if (val.tag != 0)
{
g[5].tag = val.tag;
ts |= 0x1 /*000001*/;
g[5].p = val.p;
}
else{
g[5].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getm_5_3:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[3].p))->data[constant];
if (val.tag != 0)
{
g[5].tag = val.tag;
ts |= 0x1 /*000001*/;
g[5].p = val.p;
}
else{
g[5].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getm_5_4:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[4].p))->data[constant];
if (val.tag != 0)
{
g[5].tag = val.tag;
ts |= 0x1 /*000001*/;
g[5].p = val.p;
}
else{
g[5].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getm_5_5:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[5].p))->data[constant];
if (val.tag != 0)
{
g[5].tag = val.tag;
ts |= 0x1 /*000001*/;
g[5].p = val.p;
}
else{
g[5].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getmp_0_0:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[0].p))->data[constant];
if (val.tag == 0){
g[0].tag = 0;
ts |= 0x1f /*011111*/;
g[0].i = val.i;
}
g[0].tag = val.tag;
g[0].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getmp_0_1:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[1].p))->data[constant];
if (val.tag == 0){
g[0].tag = 0;
ts |= 0x1f /*011111*/;
g[0].i = val.i;
}
g[0].tag = val.tag;
g[0].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getmp_0_2:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[2].p))->data[constant];
if (val.tag == 0){
g[0].tag = 0;
ts |= 0x1f /*011111*/;
g[0].i = val.i;
}
g[0].tag = val.tag;
g[0].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getmp_0_3:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[3].p))->data[constant];
if (val.tag == 0){
g[0].tag = 0;
ts |= 0x1f /*011111*/;
g[0].i = val.i;
}
g[0].tag = val.tag;
g[0].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getmp_0_4:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[4].p))->data[constant];
if (val.tag == 0){
g[0].tag = 0;
ts |= 0x1f /*011111*/;
g[0].i = val.i;
}
g[0].tag = val.tag;
g[0].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getmp_0_5:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[5].p))->data[constant];
if (val.tag == 0){
g[0].tag = 0;
ts |= 0x1f /*011111*/;
g[0].i = val.i;
}
g[0].tag = val.tag;
g[0].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getmp_1_0:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[0].p))->data[constant];
if (val.tag == 0){
g[1].tag = 0;
ts |= 0x2f /*101111*/;
g[1].i = val.i;
}
g[1].tag = val.tag;
g[1].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getmp_1_1:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[1].p))->data[constant];
if (val.tag == 0){
g[1].tag = 0;
ts |= 0x2f /*101111*/;
g[1].i = val.i;
}
g[1].tag = val.tag;
g[1].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getmp_1_2:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[2].p))->data[constant];
if (val.tag == 0){
g[1].tag = 0;
ts |= 0x2f /*101111*/;
g[1].i = val.i;
}
g[1].tag = val.tag;
g[1].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getmp_1_3:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[3].p))->data[constant];
if (val.tag == 0){
g[1].tag = 0;
ts |= 0x2f /*101111*/;
g[1].i = val.i;
}
g[1].tag = val.tag;
g[1].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getmp_1_4:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[4].p))->data[constant];
if (val.tag == 0){
g[1].tag = 0;
ts |= 0x2f /*101111*/;
g[1].i = val.i;
}
g[1].tag = val.tag;
g[1].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getmp_1_5:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[5].p))->data[constant];
if (val.tag == 0){
g[1].tag = 0;
ts |= 0x2f /*101111*/;
g[1].i = val.i;
}
g[1].tag = val.tag;
g[1].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getmp_2_0:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[0].p))->data[constant];
if (val.tag == 0){
g[2].tag = 0;
ts |= 0x37 /*110111*/;
g[2].i = val.i;
}
g[2].tag = val.tag;
g[2].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getmp_2_1:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[1].p))->data[constant];
if (val.tag == 0){
g[2].tag = 0;
ts |= 0x37 /*110111*/;
g[2].i = val.i;
}
g[2].tag = val.tag;
g[2].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getmp_2_2:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[2].p))->data[constant];
if (val.tag == 0){
g[2].tag = 0;
ts |= 0x37 /*110111*/;
g[2].i = val.i;
}
g[2].tag = val.tag;
g[2].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getmp_2_3:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[3].p))->data[constant];
if (val.tag == 0){
g[2].tag = 0;
ts |= 0x37 /*110111*/;
g[2].i = val.i;
}
g[2].tag = val.tag;
g[2].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getmp_2_4:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[4].p))->data[constant];
if (val.tag == 0){
g[2].tag = 0;
ts |= 0x37 /*110111*/;
g[2].i = val.i;
}
g[2].tag = val.tag;
g[2].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getmp_2_5:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[5].p))->data[constant];
if (val.tag == 0){
g[2].tag = 0;
ts |= 0x37 /*110111*/;
g[2].i = val.i;
}
g[2].tag = val.tag;
g[2].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getmp_3_0:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[0].p))->data[constant];
if (val.tag == 0){
g[3].tag = 0;
ts |= 0x3b /*111011*/;
g[3].i = val.i;
}
g[3].tag = val.tag;
g[3].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getmp_3_1:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[1].p))->data[constant];
if (val.tag == 0){
g[3].tag = 0;
ts |= 0x3b /*111011*/;
g[3].i = val.i;
}
g[3].tag = val.tag;
g[3].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getmp_3_2:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[2].p))->data[constant];
if (val.tag == 0){
g[3].tag = 0;
ts |= 0x3b /*111011*/;
g[3].i = val.i;
}
g[3].tag = val.tag;
g[3].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getmp_3_3:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[3].p))->data[constant];
if (val.tag == 0){
g[3].tag = 0;
ts |= 0x3b /*111011*/;
g[3].i = val.i;
}
g[3].tag = val.tag;
g[3].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getmp_3_4:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[4].p))->data[constant];
if (val.tag == 0){
g[3].tag = 0;
ts |= 0x3b /*111011*/;
g[3].i = val.i;
}
g[3].tag = val.tag;
g[3].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getmp_3_5:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[5].p))->data[constant];
if (val.tag == 0){
g[3].tag = 0;
ts |= 0x3b /*111011*/;
g[3].i = val.i;
}
g[3].tag = val.tag;
g[3].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getmp_4_0:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[0].p))->data[constant];
if (val.tag == 0){
g[4].tag = 0;
ts |= 0x3d /*111101*/;
g[4].i = val.i;
}
g[4].tag = val.tag;
g[4].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getmp_4_1:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[1].p))->data[constant];
if (val.tag == 0){
g[4].tag = 0;
ts |= 0x3d /*111101*/;
g[4].i = val.i;
}
g[4].tag = val.tag;
g[4].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getmp_4_2:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[2].p))->data[constant];
if (val.tag == 0){
g[4].tag = 0;
ts |= 0x3d /*111101*/;
g[4].i = val.i;
}
g[4].tag = val.tag;
g[4].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getmp_4_3:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[3].p))->data[constant];
if (val.tag == 0){
g[4].tag = 0;
ts |= 0x3d /*111101*/;
g[4].i = val.i;
}
g[4].tag = val.tag;
g[4].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getmp_4_4:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[4].p))->data[constant];
if (val.tag == 0){
g[4].tag = 0;
ts |= 0x3d /*111101*/;
g[4].i = val.i;
}
g[4].tag = val.tag;
g[4].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getmp_4_5:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[5].p))->data[constant];
if (val.tag == 0){
g[4].tag = 0;
ts |= 0x3d /*111101*/;
g[4].i = val.i;
}
g[4].tag = val.tag;
g[4].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getmp_5_0:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[0].p))->data[constant];
if (val.tag == 0){
g[5].tag = 0;
ts |= 0x3e /*111110*/;
g[5].i = val.i;
}
g[5].tag = val.tag;
g[5].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getmp_5_1:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[1].p))->data[constant];
if (val.tag == 0){
g[5].tag = 0;
ts |= 0x3e /*111110*/;
g[5].i = val.i;
}
g[5].tag = val.tag;
g[5].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getmp_5_2:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[2].p))->data[constant];
if (val.tag == 0){
g[5].tag = 0;
ts |= 0x3e /*111110*/;
g[5].i = val.i;
}
g[5].tag = val.tag;
g[5].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getmp_5_3:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[3].p))->data[constant];
if (val.tag == 0){
g[5].tag = 0;
ts |= 0x3e /*111110*/;
g[5].i = val.i;
}
g[5].tag = val.tag;
g[5].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getmp_5_4:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[4].p))->data[constant];
if (val.tag == 0){
g[5].tag = 0;
ts |= 0x3e /*111110*/;
g[5].i = val.i;
}
g[5].tag = val.tag;
g[5].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getmp_5_5:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[5].p))->data[constant];
if (val.tag == 0){
g[5].tag = 0;
ts |= 0x3e /*111110*/;
g[5].i = val.i;
}
g[5].tag = val.tag;
g[5].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setm_0_0:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[0].p))->data[constant]);
vp->tag =0;
vp->i = g[0].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setm_0_1:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[0].p))->data[constant]);
vp->tag =0;
vp->i = g[1].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setm_0_2:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[0].p))->data[constant]);
vp->tag =0;
vp->i = g[2].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setm_0_3:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[0].p))->data[constant]);
vp->tag =0;
vp->i = g[3].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setm_0_4:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[0].p))->data[constant]);
vp->tag =0;
vp->i = g[4].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setm_0_5:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[0].p))->data[constant]);
vp->tag =0;
vp->i = g[5].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setm_1_0:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[1].p))->data[constant]);
vp->tag =0;
vp->i = g[0].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setm_1_1:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[1].p))->data[constant]);
vp->tag =0;
vp->i = g[1].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setm_1_2:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[1].p))->data[constant]);
vp->tag =0;
vp->i = g[2].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setm_1_3:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[1].p))->data[constant]);
vp->tag =0;
vp->i = g[3].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setm_1_4:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[1].p))->data[constant]);
vp->tag =0;
vp->i = g[4].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setm_1_5:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[1].p))->data[constant]);
vp->tag =0;
vp->i = g[5].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setm_2_0:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[2].p))->data[constant]);
vp->tag =0;
vp->i = g[0].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setm_2_1:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[2].p))->data[constant]);
vp->tag =0;
vp->i = g[1].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setm_2_2:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[2].p))->data[constant]);
vp->tag =0;
vp->i = g[2].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setm_2_3:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[2].p))->data[constant]);
vp->tag =0;
vp->i = g[3].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setm_2_4:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[2].p))->data[constant]);
vp->tag =0;
vp->i = g[4].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setm_2_5:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[2].p))->data[constant]);
vp->tag =0;
vp->i = g[5].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setm_3_0:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[3].p))->data[constant]);
vp->tag =0;
vp->i = g[0].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setm_3_1:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[3].p))->data[constant]);
vp->tag =0;
vp->i = g[1].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setm_3_2:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[3].p))->data[constant]);
vp->tag =0;
vp->i = g[2].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setm_3_3:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[3].p))->data[constant]);
vp->tag =0;
vp->i = g[3].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setm_3_4:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[3].p))->data[constant]);
vp->tag =0;
vp->i = g[4].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setm_3_5:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[3].p))->data[constant]);
vp->tag =0;
vp->i = g[5].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setm_4_0:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[4].p))->data[constant]);
vp->tag =0;
vp->i = g[0].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setm_4_1:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[4].p))->data[constant]);
vp->tag =0;
vp->i = g[1].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setm_4_2:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[4].p))->data[constant]);
vp->tag =0;
vp->i = g[2].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setm_4_3:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[4].p))->data[constant]);
vp->tag =0;
vp->i = g[3].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setm_4_4:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[4].p))->data[constant]);
vp->tag =0;
vp->i = g[4].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setm_4_5:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[4].p))->data[constant]);
vp->tag =0;
vp->i = g[5].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setm_5_0:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[5].p))->data[constant]);
vp->tag =0;
vp->i = g[0].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setm_5_1:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[5].p))->data[constant]);
vp->tag =0;
vp->i = g[1].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setm_5_2:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[5].p))->data[constant]);
vp->tag =0;
vp->i = g[2].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setm_5_3:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[5].p))->data[constant]);
vp->tag =0;
vp->i = g[3].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setm_5_4:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[5].p))->data[constant]);
vp->tag =0;
vp->i = g[4].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setm_5_5:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[5].p))->data[constant]);
vp->tag =0;
vp->i = g[5].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setmp_0_0:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[0].p))->data[constant]);
vp->tag = g[0].tag;
vp->p = g[0].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setmp_0_1:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[0].p))->data[constant]);
vp->tag = g[1].tag;
vp->p = g[1].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setmp_0_2:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[0].p))->data[constant]);
vp->tag = g[2].tag;
vp->p = g[2].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setmp_0_3:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[0].p))->data[constant]);
vp->tag = g[3].tag;
vp->p = g[3].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setmp_0_4:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[0].p))->data[constant]);
vp->tag = g[4].tag;
vp->p = g[4].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setmp_0_5:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[0].p))->data[constant]);
vp->tag = g[5].tag;
vp->p = g[5].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setmp_1_0:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[1].p))->data[constant]);
vp->tag = g[0].tag;
vp->p = g[0].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setmp_1_1:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[1].p))->data[constant]);
vp->tag = g[1].tag;
vp->p = g[1].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setmp_1_2:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[1].p))->data[constant]);
vp->tag = g[2].tag;
vp->p = g[2].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setmp_1_3:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[1].p))->data[constant]);
vp->tag = g[3].tag;
vp->p = g[3].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setmp_1_4:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[1].p))->data[constant]);
vp->tag = g[4].tag;
vp->p = g[4].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setmp_1_5:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[1].p))->data[constant]);
vp->tag = g[5].tag;
vp->p = g[5].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setmp_2_0:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[2].p))->data[constant]);
vp->tag = g[0].tag;
vp->p = g[0].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setmp_2_1:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[2].p))->data[constant]);
vp->tag = g[1].tag;
vp->p = g[1].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setmp_2_2:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[2].p))->data[constant]);
vp->tag = g[2].tag;
vp->p = g[2].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setmp_2_3:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[2].p))->data[constant]);
vp->tag = g[3].tag;
vp->p = g[3].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setmp_2_4:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[2].p))->data[constant]);
vp->tag = g[4].tag;
vp->p = g[4].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setmp_2_5:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[2].p))->data[constant]);
vp->tag = g[5].tag;
vp->p = g[5].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setmp_3_0:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[3].p))->data[constant]);
vp->tag = g[0].tag;
vp->p = g[0].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setmp_3_1:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[3].p))->data[constant]);
vp->tag = g[1].tag;
vp->p = g[1].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setmp_3_2:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[3].p))->data[constant]);
vp->tag = g[2].tag;
vp->p = g[2].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setmp_3_3:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[3].p))->data[constant]);
vp->tag = g[3].tag;
vp->p = g[3].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setmp_3_4:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[3].p))->data[constant]);
vp->tag = g[4].tag;
vp->p = g[4].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setmp_3_5:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[3].p))->data[constant]);
vp->tag = g[5].tag;
vp->p = g[5].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setmp_4_0:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[4].p))->data[constant]);
vp->tag = g[0].tag;
vp->p = g[0].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setmp_4_1:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[4].p))->data[constant]);
vp->tag = g[1].tag;
vp->p = g[1].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setmp_4_2:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[4].p))->data[constant]);
vp->tag = g[2].tag;
vp->p = g[2].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setmp_4_3:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[4].p))->data[constant]);
vp->tag = g[3].tag;
vp->p = g[3].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setmp_4_4:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[4].p))->data[constant]);
vp->tag = g[4].tag;
vp->p = g[4].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setmp_4_5:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[4].p))->data[constant]);
vp->tag = g[5].tag;
vp->p = g[5].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setmp_5_0:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[5].p))->data[constant]);
vp->tag = g[0].tag;
vp->p = g[0].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setmp_5_1:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[5].p))->data[constant]);
vp->tag = g[1].tag;
vp->p = g[1].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setmp_5_2:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[5].p))->data[constant]);
vp->tag = g[2].tag;
vp->p = g[2].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setmp_5_3:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[5].p))->data[constant]);
vp->tag = g[3].tag;
vp->p = g[3].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setmp_5_4:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[5].p))->data[constant]);
vp->tag = g[4].tag;
vp->p = g[4].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setmp_5_5:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[5].p))->data[constant]);
vp->tag = g[5].tag;
vp->p = g[5].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

geta_0_0_1:
{
value val = ((pointeronly *)(g[0].p))->data[g[1].i];
g[0].tag = val.tag;
ts |= 0x20 /*100000*/;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_0_0_2:
{
value val = ((pointeronly *)(g[0].p))->data[g[2].i];
g[0].tag = val.tag;
ts |= 0x20 /*100000*/;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_0_0_3:
{
value val = ((pointeronly *)(g[0].p))->data[g[3].i];
g[0].tag = val.tag;
ts |= 0x20 /*100000*/;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_0_0_4:
{
value val = ((pointeronly *)(g[0].p))->data[g[4].i];
g[0].tag = val.tag;
ts |= 0x20 /*100000*/;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_0_0_5:
{
value val = ((pointeronly *)(g[0].p))->data[g[5].i];
g[0].tag = val.tag;
ts |= 0x20 /*100000*/;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_0_1_0:
{
value val = ((pointeronly *)(g[1].p))->data[g[0].i];
g[0].tag = val.tag;
ts |= 0x20 /*100000*/;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_0_1_2:
{
value val = ((pointeronly *)(g[1].p))->data[g[2].i];
g[0].tag = val.tag;
ts |= 0x20 /*100000*/;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_0_1_3:
{
value val = ((pointeronly *)(g[1].p))->data[g[3].i];
g[0].tag = val.tag;
ts |= 0x20 /*100000*/;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_0_1_4:
{
value val = ((pointeronly *)(g[1].p))->data[g[4].i];
g[0].tag = val.tag;
ts |= 0x20 /*100000*/;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_0_1_5:
{
value val = ((pointeronly *)(g[1].p))->data[g[5].i];
g[0].tag = val.tag;
ts |= 0x20 /*100000*/;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_0_2_0:
{
value val = ((pointeronly *)(g[2].p))->data[g[0].i];
g[0].tag = val.tag;
ts |= 0x20 /*100000*/;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_0_2_1:
{
value val = ((pointeronly *)(g[2].p))->data[g[1].i];
g[0].tag = val.tag;
ts |= 0x20 /*100000*/;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_0_2_3:
{
value val = ((pointeronly *)(g[2].p))->data[g[3].i];
g[0].tag = val.tag;
ts |= 0x20 /*100000*/;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_0_2_4:
{
value val = ((pointeronly *)(g[2].p))->data[g[4].i];
g[0].tag = val.tag;
ts |= 0x20 /*100000*/;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_0_2_5:
{
value val = ((pointeronly *)(g[2].p))->data[g[5].i];
g[0].tag = val.tag;
ts |= 0x20 /*100000*/;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_0_3_0:
{
value val = ((pointeronly *)(g[3].p))->data[g[0].i];
g[0].tag = val.tag;
ts |= 0x20 /*100000*/;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_0_3_1:
{
value val = ((pointeronly *)(g[3].p))->data[g[1].i];
g[0].tag = val.tag;
ts |= 0x20 /*100000*/;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_0_3_2:
{
value val = ((pointeronly *)(g[3].p))->data[g[2].i];
g[0].tag = val.tag;
ts |= 0x20 /*100000*/;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_0_3_4:
{
value val = ((pointeronly *)(g[3].p))->data[g[4].i];
g[0].tag = val.tag;
ts |= 0x20 /*100000*/;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_0_3_5:
{
value val = ((pointeronly *)(g[3].p))->data[g[5].i];
g[0].tag = val.tag;
ts |= 0x20 /*100000*/;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_0_4_0:
{
value val = ((pointeronly *)(g[4].p))->data[g[0].i];
g[0].tag = val.tag;
ts |= 0x20 /*100000*/;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_0_4_1:
{
value val = ((pointeronly *)(g[4].p))->data[g[1].i];
g[0].tag = val.tag;
ts |= 0x20 /*100000*/;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_0_4_2:
{
value val = ((pointeronly *)(g[4].p))->data[g[2].i];
g[0].tag = val.tag;
ts |= 0x20 /*100000*/;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_0_4_3:
{
value val = ((pointeronly *)(g[4].p))->data[g[3].i];
g[0].tag = val.tag;
ts |= 0x20 /*100000*/;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_0_4_5:
{
value val = ((pointeronly *)(g[4].p))->data[g[5].i];
g[0].tag = val.tag;
ts |= 0x20 /*100000*/;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_0_5_0:
{
value val = ((pointeronly *)(g[5].p))->data[g[0].i];
g[0].tag = val.tag;
ts |= 0x20 /*100000*/;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_0_5_1:
{
value val = ((pointeronly *)(g[5].p))->data[g[1].i];
g[0].tag = val.tag;
ts |= 0x20 /*100000*/;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_0_5_2:
{
value val = ((pointeronly *)(g[5].p))->data[g[2].i];
g[0].tag = val.tag;
ts |= 0x20 /*100000*/;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_0_5_3:
{
value val = ((pointeronly *)(g[5].p))->data[g[3].i];
g[0].tag = val.tag;
ts |= 0x20 /*100000*/;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_0_5_4:
{
value val = ((pointeronly *)(g[5].p))->data[g[4].i];
g[0].tag = val.tag;
ts |= 0x20 /*100000*/;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_1_0_1:
{
value val = ((pointeronly *)(g[0].p))->data[g[1].i];
g[1].tag = val.tag;
ts |= 0x10 /*010000*/;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_1_0_2:
{
value val = ((pointeronly *)(g[0].p))->data[g[2].i];
g[1].tag = val.tag;
ts |= 0x10 /*010000*/;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_1_0_3:
{
value val = ((pointeronly *)(g[0].p))->data[g[3].i];
g[1].tag = val.tag;
ts |= 0x10 /*010000*/;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_1_0_4:
{
value val = ((pointeronly *)(g[0].p))->data[g[4].i];
g[1].tag = val.tag;
ts |= 0x10 /*010000*/;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_1_0_5:
{
value val = ((pointeronly *)(g[0].p))->data[g[5].i];
g[1].tag = val.tag;
ts |= 0x10 /*010000*/;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_1_1_0:
{
value val = ((pointeronly *)(g[1].p))->data[g[0].i];
g[1].tag = val.tag;
ts |= 0x10 /*010000*/;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_1_1_2:
{
value val = ((pointeronly *)(g[1].p))->data[g[2].i];
g[1].tag = val.tag;
ts |= 0x10 /*010000*/;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_1_1_3:
{
value val = ((pointeronly *)(g[1].p))->data[g[3].i];
g[1].tag = val.tag;
ts |= 0x10 /*010000*/;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_1_1_4:
{
value val = ((pointeronly *)(g[1].p))->data[g[4].i];
g[1].tag = val.tag;
ts |= 0x10 /*010000*/;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_1_1_5:
{
value val = ((pointeronly *)(g[1].p))->data[g[5].i];
g[1].tag = val.tag;
ts |= 0x10 /*010000*/;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_1_2_0:
{
value val = ((pointeronly *)(g[2].p))->data[g[0].i];
g[1].tag = val.tag;
ts |= 0x10 /*010000*/;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_1_2_1:
{
value val = ((pointeronly *)(g[2].p))->data[g[1].i];
g[1].tag = val.tag;
ts |= 0x10 /*010000*/;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_1_2_3:
{
value val = ((pointeronly *)(g[2].p))->data[g[3].i];
g[1].tag = val.tag;
ts |= 0x10 /*010000*/;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_1_2_4:
{
value val = ((pointeronly *)(g[2].p))->data[g[4].i];
g[1].tag = val.tag;
ts |= 0x10 /*010000*/;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_1_2_5:
{
value val = ((pointeronly *)(g[2].p))->data[g[5].i];
g[1].tag = val.tag;
ts |= 0x10 /*010000*/;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_1_3_0:
{
value val = ((pointeronly *)(g[3].p))->data[g[0].i];
g[1].tag = val.tag;
ts |= 0x10 /*010000*/;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_1_3_1:
{
value val = ((pointeronly *)(g[3].p))->data[g[1].i];
g[1].tag = val.tag;
ts |= 0x10 /*010000*/;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_1_3_2:
{
value val = ((pointeronly *)(g[3].p))->data[g[2].i];
g[1].tag = val.tag;
ts |= 0x10 /*010000*/;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_1_3_4:
{
value val = ((pointeronly *)(g[3].p))->data[g[4].i];
g[1].tag = val.tag;
ts |= 0x10 /*010000*/;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_1_3_5:
{
value val = ((pointeronly *)(g[3].p))->data[g[5].i];
g[1].tag = val.tag;
ts |= 0x10 /*010000*/;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_1_4_0:
{
value val = ((pointeronly *)(g[4].p))->data[g[0].i];
g[1].tag = val.tag;
ts |= 0x10 /*010000*/;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_1_4_1:
{
value val = ((pointeronly *)(g[4].p))->data[g[1].i];
g[1].tag = val.tag;
ts |= 0x10 /*010000*/;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_1_4_2:
{
value val = ((pointeronly *)(g[4].p))->data[g[2].i];
g[1].tag = val.tag;
ts |= 0x10 /*010000*/;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_1_4_3:
{
value val = ((pointeronly *)(g[4].p))->data[g[3].i];
g[1].tag = val.tag;
ts |= 0x10 /*010000*/;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_1_4_5:
{
value val = ((pointeronly *)(g[4].p))->data[g[5].i];
g[1].tag = val.tag;
ts |= 0x10 /*010000*/;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_1_5_0:
{
value val = ((pointeronly *)(g[5].p))->data[g[0].i];
g[1].tag = val.tag;
ts |= 0x10 /*010000*/;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_1_5_1:
{
value val = ((pointeronly *)(g[5].p))->data[g[1].i];
g[1].tag = val.tag;
ts |= 0x10 /*010000*/;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_1_5_2:
{
value val = ((pointeronly *)(g[5].p))->data[g[2].i];
g[1].tag = val.tag;
ts |= 0x10 /*010000*/;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_1_5_3:
{
value val = ((pointeronly *)(g[5].p))->data[g[3].i];
g[1].tag = val.tag;
ts |= 0x10 /*010000*/;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_1_5_4:
{
value val = ((pointeronly *)(g[5].p))->data[g[4].i];
g[1].tag = val.tag;
ts |= 0x10 /*010000*/;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_2_0_1:
{
value val = ((pointeronly *)(g[0].p))->data[g[1].i];
g[2].tag = val.tag;
ts |= 0x8 /*001000*/;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_2_0_2:
{
value val = ((pointeronly *)(g[0].p))->data[g[2].i];
g[2].tag = val.tag;
ts |= 0x8 /*001000*/;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_2_0_3:
{
value val = ((pointeronly *)(g[0].p))->data[g[3].i];
g[2].tag = val.tag;
ts |= 0x8 /*001000*/;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_2_0_4:
{
value val = ((pointeronly *)(g[0].p))->data[g[4].i];
g[2].tag = val.tag;
ts |= 0x8 /*001000*/;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_2_0_5:
{
value val = ((pointeronly *)(g[0].p))->data[g[5].i];
g[2].tag = val.tag;
ts |= 0x8 /*001000*/;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_2_1_0:
{
value val = ((pointeronly *)(g[1].p))->data[g[0].i];
g[2].tag = val.tag;
ts |= 0x8 /*001000*/;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_2_1_2:
{
value val = ((pointeronly *)(g[1].p))->data[g[2].i];
g[2].tag = val.tag;
ts |= 0x8 /*001000*/;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_2_1_3:
{
value val = ((pointeronly *)(g[1].p))->data[g[3].i];
g[2].tag = val.tag;
ts |= 0x8 /*001000*/;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_2_1_4:
{
value val = ((pointeronly *)(g[1].p))->data[g[4].i];
g[2].tag = val.tag;
ts |= 0x8 /*001000*/;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_2_1_5:
{
value val = ((pointeronly *)(g[1].p))->data[g[5].i];
g[2].tag = val.tag;
ts |= 0x8 /*001000*/;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_2_2_0:
{
value val = ((pointeronly *)(g[2].p))->data[g[0].i];
g[2].tag = val.tag;
ts |= 0x8 /*001000*/;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_2_2_1:
{
value val = ((pointeronly *)(g[2].p))->data[g[1].i];
g[2].tag = val.tag;
ts |= 0x8 /*001000*/;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_2_2_3:
{
value val = ((pointeronly *)(g[2].p))->data[g[3].i];
g[2].tag = val.tag;
ts |= 0x8 /*001000*/;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_2_2_4:
{
value val = ((pointeronly *)(g[2].p))->data[g[4].i];
g[2].tag = val.tag;
ts |= 0x8 /*001000*/;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_2_2_5:
{
value val = ((pointeronly *)(g[2].p))->data[g[5].i];
g[2].tag = val.tag;
ts |= 0x8 /*001000*/;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_2_3_0:
{
value val = ((pointeronly *)(g[3].p))->data[g[0].i];
g[2].tag = val.tag;
ts |= 0x8 /*001000*/;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_2_3_1:
{
value val = ((pointeronly *)(g[3].p))->data[g[1].i];
g[2].tag = val.tag;
ts |= 0x8 /*001000*/;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_2_3_2:
{
value val = ((pointeronly *)(g[3].p))->data[g[2].i];
g[2].tag = val.tag;
ts |= 0x8 /*001000*/;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_2_3_4:
{
value val = ((pointeronly *)(g[3].p))->data[g[4].i];
g[2].tag = val.tag;
ts |= 0x8 /*001000*/;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_2_3_5:
{
value val = ((pointeronly *)(g[3].p))->data[g[5].i];
g[2].tag = val.tag;
ts |= 0x8 /*001000*/;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_2_4_0:
{
value val = ((pointeronly *)(g[4].p))->data[g[0].i];
g[2].tag = val.tag;
ts |= 0x8 /*001000*/;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_2_4_1:
{
value val = ((pointeronly *)(g[4].p))->data[g[1].i];
g[2].tag = val.tag;
ts |= 0x8 /*001000*/;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_2_4_2:
{
value val = ((pointeronly *)(g[4].p))->data[g[2].i];
g[2].tag = val.tag;
ts |= 0x8 /*001000*/;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_2_4_3:
{
value val = ((pointeronly *)(g[4].p))->data[g[3].i];
g[2].tag = val.tag;
ts |= 0x8 /*001000*/;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_2_4_5:
{
value val = ((pointeronly *)(g[4].p))->data[g[5].i];
g[2].tag = val.tag;
ts |= 0x8 /*001000*/;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_2_5_0:
{
value val = ((pointeronly *)(g[5].p))->data[g[0].i];
g[2].tag = val.tag;
ts |= 0x8 /*001000*/;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_2_5_1:
{
value val = ((pointeronly *)(g[5].p))->data[g[1].i];
g[2].tag = val.tag;
ts |= 0x8 /*001000*/;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_2_5_2:
{
value val = ((pointeronly *)(g[5].p))->data[g[2].i];
g[2].tag = val.tag;
ts |= 0x8 /*001000*/;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_2_5_3:
{
value val = ((pointeronly *)(g[5].p))->data[g[3].i];
g[2].tag = val.tag;
ts |= 0x8 /*001000*/;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_2_5_4:
{
value val = ((pointeronly *)(g[5].p))->data[g[4].i];
g[2].tag = val.tag;
ts |= 0x8 /*001000*/;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_3_0_1:
{
value val = ((pointeronly *)(g[0].p))->data[g[1].i];
g[3].tag = val.tag;
ts |= 0x4 /*000100*/;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_3_0_2:
{
value val = ((pointeronly *)(g[0].p))->data[g[2].i];
g[3].tag = val.tag;
ts |= 0x4 /*000100*/;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_3_0_3:
{
value val = ((pointeronly *)(g[0].p))->data[g[3].i];
g[3].tag = val.tag;
ts |= 0x4 /*000100*/;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_3_0_4:
{
value val = ((pointeronly *)(g[0].p))->data[g[4].i];
g[3].tag = val.tag;
ts |= 0x4 /*000100*/;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_3_0_5:
{
value val = ((pointeronly *)(g[0].p))->data[g[5].i];
g[3].tag = val.tag;
ts |= 0x4 /*000100*/;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_3_1_0:
{
value val = ((pointeronly *)(g[1].p))->data[g[0].i];
g[3].tag = val.tag;
ts |= 0x4 /*000100*/;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_3_1_2:
{
value val = ((pointeronly *)(g[1].p))->data[g[2].i];
g[3].tag = val.tag;
ts |= 0x4 /*000100*/;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_3_1_3:
{
value val = ((pointeronly *)(g[1].p))->data[g[3].i];
g[3].tag = val.tag;
ts |= 0x4 /*000100*/;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_3_1_4:
{
value val = ((pointeronly *)(g[1].p))->data[g[4].i];
g[3].tag = val.tag;
ts |= 0x4 /*000100*/;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_3_1_5:
{
value val = ((pointeronly *)(g[1].p))->data[g[5].i];
g[3].tag = val.tag;
ts |= 0x4 /*000100*/;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_3_2_0:
{
value val = ((pointeronly *)(g[2].p))->data[g[0].i];
g[3].tag = val.tag;
ts |= 0x4 /*000100*/;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_3_2_1:
{
value val = ((pointeronly *)(g[2].p))->data[g[1].i];
g[3].tag = val.tag;
ts |= 0x4 /*000100*/;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_3_2_3:
{
value val = ((pointeronly *)(g[2].p))->data[g[3].i];
g[3].tag = val.tag;
ts |= 0x4 /*000100*/;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_3_2_4:
{
value val = ((pointeronly *)(g[2].p))->data[g[4].i];
g[3].tag = val.tag;
ts |= 0x4 /*000100*/;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_3_2_5:
{
value val = ((pointeronly *)(g[2].p))->data[g[5].i];
g[3].tag = val.tag;
ts |= 0x4 /*000100*/;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_3_3_0:
{
value val = ((pointeronly *)(g[3].p))->data[g[0].i];
g[3].tag = val.tag;
ts |= 0x4 /*000100*/;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_3_3_1:
{
value val = ((pointeronly *)(g[3].p))->data[g[1].i];
g[3].tag = val.tag;
ts |= 0x4 /*000100*/;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_3_3_2:
{
value val = ((pointeronly *)(g[3].p))->data[g[2].i];
g[3].tag = val.tag;
ts |= 0x4 /*000100*/;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_3_3_4:
{
value val = ((pointeronly *)(g[3].p))->data[g[4].i];
g[3].tag = val.tag;
ts |= 0x4 /*000100*/;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_3_3_5:
{
value val = ((pointeronly *)(g[3].p))->data[g[5].i];
g[3].tag = val.tag;
ts |= 0x4 /*000100*/;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_3_4_0:
{
value val = ((pointeronly *)(g[4].p))->data[g[0].i];
g[3].tag = val.tag;
ts |= 0x4 /*000100*/;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_3_4_1:
{
value val = ((pointeronly *)(g[4].p))->data[g[1].i];
g[3].tag = val.tag;
ts |= 0x4 /*000100*/;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_3_4_2:
{
value val = ((pointeronly *)(g[4].p))->data[g[2].i];
g[3].tag = val.tag;
ts |= 0x4 /*000100*/;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_3_4_3:
{
value val = ((pointeronly *)(g[4].p))->data[g[3].i];
g[3].tag = val.tag;
ts |= 0x4 /*000100*/;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_3_4_5:
{
value val = ((pointeronly *)(g[4].p))->data[g[5].i];
g[3].tag = val.tag;
ts |= 0x4 /*000100*/;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_3_5_0:
{
value val = ((pointeronly *)(g[5].p))->data[g[0].i];
g[3].tag = val.tag;
ts |= 0x4 /*000100*/;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_3_5_1:
{
value val = ((pointeronly *)(g[5].p))->data[g[1].i];
g[3].tag = val.tag;
ts |= 0x4 /*000100*/;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_3_5_2:
{
value val = ((pointeronly *)(g[5].p))->data[g[2].i];
g[3].tag = val.tag;
ts |= 0x4 /*000100*/;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_3_5_3:
{
value val = ((pointeronly *)(g[5].p))->data[g[3].i];
g[3].tag = val.tag;
ts |= 0x4 /*000100*/;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_3_5_4:
{
value val = ((pointeronly *)(g[5].p))->data[g[4].i];
g[3].tag = val.tag;
ts |= 0x4 /*000100*/;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_4_0_1:
{
value val = ((pointeronly *)(g[0].p))->data[g[1].i];
g[4].tag = val.tag;
ts |= 0x2 /*000010*/;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_4_0_2:
{
value val = ((pointeronly *)(g[0].p))->data[g[2].i];
g[4].tag = val.tag;
ts |= 0x2 /*000010*/;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_4_0_3:
{
value val = ((pointeronly *)(g[0].p))->data[g[3].i];
g[4].tag = val.tag;
ts |= 0x2 /*000010*/;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_4_0_4:
{
value val = ((pointeronly *)(g[0].p))->data[g[4].i];
g[4].tag = val.tag;
ts |= 0x2 /*000010*/;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_4_0_5:
{
value val = ((pointeronly *)(g[0].p))->data[g[5].i];
g[4].tag = val.tag;
ts |= 0x2 /*000010*/;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_4_1_0:
{
value val = ((pointeronly *)(g[1].p))->data[g[0].i];
g[4].tag = val.tag;
ts |= 0x2 /*000010*/;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_4_1_2:
{
value val = ((pointeronly *)(g[1].p))->data[g[2].i];
g[4].tag = val.tag;
ts |= 0x2 /*000010*/;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_4_1_3:
{
value val = ((pointeronly *)(g[1].p))->data[g[3].i];
g[4].tag = val.tag;
ts |= 0x2 /*000010*/;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_4_1_4:
{
value val = ((pointeronly *)(g[1].p))->data[g[4].i];
g[4].tag = val.tag;
ts |= 0x2 /*000010*/;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_4_1_5:
{
value val = ((pointeronly *)(g[1].p))->data[g[5].i];
g[4].tag = val.tag;
ts |= 0x2 /*000010*/;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_4_2_0:
{
value val = ((pointeronly *)(g[2].p))->data[g[0].i];
g[4].tag = val.tag;
ts |= 0x2 /*000010*/;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_4_2_1:
{
value val = ((pointeronly *)(g[2].p))->data[g[1].i];
g[4].tag = val.tag;
ts |= 0x2 /*000010*/;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_4_2_3:
{
value val = ((pointeronly *)(g[2].p))->data[g[3].i];
g[4].tag = val.tag;
ts |= 0x2 /*000010*/;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_4_2_4:
{
value val = ((pointeronly *)(g[2].p))->data[g[4].i];
g[4].tag = val.tag;
ts |= 0x2 /*000010*/;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_4_2_5:
{
value val = ((pointeronly *)(g[2].p))->data[g[5].i];
g[4].tag = val.tag;
ts |= 0x2 /*000010*/;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_4_3_0:
{
value val = ((pointeronly *)(g[3].p))->data[g[0].i];
g[4].tag = val.tag;
ts |= 0x2 /*000010*/;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_4_3_1:
{
value val = ((pointeronly *)(g[3].p))->data[g[1].i];
g[4].tag = val.tag;
ts |= 0x2 /*000010*/;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_4_3_2:
{
value val = ((pointeronly *)(g[3].p))->data[g[2].i];
g[4].tag = val.tag;
ts |= 0x2 /*000010*/;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_4_3_4:
{
value val = ((pointeronly *)(g[3].p))->data[g[4].i];
g[4].tag = val.tag;
ts |= 0x2 /*000010*/;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_4_3_5:
{
value val = ((pointeronly *)(g[3].p))->data[g[5].i];
g[4].tag = val.tag;
ts |= 0x2 /*000010*/;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_4_4_0:
{
value val = ((pointeronly *)(g[4].p))->data[g[0].i];
g[4].tag = val.tag;
ts |= 0x2 /*000010*/;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_4_4_1:
{
value val = ((pointeronly *)(g[4].p))->data[g[1].i];
g[4].tag = val.tag;
ts |= 0x2 /*000010*/;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_4_4_2:
{
value val = ((pointeronly *)(g[4].p))->data[g[2].i];
g[4].tag = val.tag;
ts |= 0x2 /*000010*/;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_4_4_3:
{
value val = ((pointeronly *)(g[4].p))->data[g[3].i];
g[4].tag = val.tag;
ts |= 0x2 /*000010*/;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_4_4_5:
{
value val = ((pointeronly *)(g[4].p))->data[g[5].i];
g[4].tag = val.tag;
ts |= 0x2 /*000010*/;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_4_5_0:
{
value val = ((pointeronly *)(g[5].p))->data[g[0].i];
g[4].tag = val.tag;
ts |= 0x2 /*000010*/;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_4_5_1:
{
value val = ((pointeronly *)(g[5].p))->data[g[1].i];
g[4].tag = val.tag;
ts |= 0x2 /*000010*/;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_4_5_2:
{
value val = ((pointeronly *)(g[5].p))->data[g[2].i];
g[4].tag = val.tag;
ts |= 0x2 /*000010*/;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_4_5_3:
{
value val = ((pointeronly *)(g[5].p))->data[g[3].i];
g[4].tag = val.tag;
ts |= 0x2 /*000010*/;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_4_5_4:
{
value val = ((pointeronly *)(g[5].p))->data[g[4].i];
g[4].tag = val.tag;
ts |= 0x2 /*000010*/;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_5_0_1:
{
value val = ((pointeronly *)(g[0].p))->data[g[1].i];
g[5].tag = val.tag;
ts |= 0x1 /*000001*/;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_5_0_2:
{
value val = ((pointeronly *)(g[0].p))->data[g[2].i];
g[5].tag = val.tag;
ts |= 0x1 /*000001*/;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_5_0_3:
{
value val = ((pointeronly *)(g[0].p))->data[g[3].i];
g[5].tag = val.tag;
ts |= 0x1 /*000001*/;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_5_0_4:
{
value val = ((pointeronly *)(g[0].p))->data[g[4].i];
g[5].tag = val.tag;
ts |= 0x1 /*000001*/;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_5_0_5:
{
value val = ((pointeronly *)(g[0].p))->data[g[5].i];
g[5].tag = val.tag;
ts |= 0x1 /*000001*/;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_5_1_0:
{
value val = ((pointeronly *)(g[1].p))->data[g[0].i];
g[5].tag = val.tag;
ts |= 0x1 /*000001*/;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_5_1_2:
{
value val = ((pointeronly *)(g[1].p))->data[g[2].i];
g[5].tag = val.tag;
ts |= 0x1 /*000001*/;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_5_1_3:
{
value val = ((pointeronly *)(g[1].p))->data[g[3].i];
g[5].tag = val.tag;
ts |= 0x1 /*000001*/;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_5_1_4:
{
value val = ((pointeronly *)(g[1].p))->data[g[4].i];
g[5].tag = val.tag;
ts |= 0x1 /*000001*/;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_5_1_5:
{
value val = ((pointeronly *)(g[1].p))->data[g[5].i];
g[5].tag = val.tag;
ts |= 0x1 /*000001*/;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_5_2_0:
{
value val = ((pointeronly *)(g[2].p))->data[g[0].i];
g[5].tag = val.tag;
ts |= 0x1 /*000001*/;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_5_2_1:
{
value val = ((pointeronly *)(g[2].p))->data[g[1].i];
g[5].tag = val.tag;
ts |= 0x1 /*000001*/;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_5_2_3:
{
value val = ((pointeronly *)(g[2].p))->data[g[3].i];
g[5].tag = val.tag;
ts |= 0x1 /*000001*/;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_5_2_4:
{
value val = ((pointeronly *)(g[2].p))->data[g[4].i];
g[5].tag = val.tag;
ts |= 0x1 /*000001*/;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_5_2_5:
{
value val = ((pointeronly *)(g[2].p))->data[g[5].i];
g[5].tag = val.tag;
ts |= 0x1 /*000001*/;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_5_3_0:
{
value val = ((pointeronly *)(g[3].p))->data[g[0].i];
g[5].tag = val.tag;
ts |= 0x1 /*000001*/;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_5_3_1:
{
value val = ((pointeronly *)(g[3].p))->data[g[1].i];
g[5].tag = val.tag;
ts |= 0x1 /*000001*/;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_5_3_2:
{
value val = ((pointeronly *)(g[3].p))->data[g[2].i];
g[5].tag = val.tag;
ts |= 0x1 /*000001*/;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_5_3_4:
{
value val = ((pointeronly *)(g[3].p))->data[g[4].i];
g[5].tag = val.tag;
ts |= 0x1 /*000001*/;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_5_3_5:
{
value val = ((pointeronly *)(g[3].p))->data[g[5].i];
g[5].tag = val.tag;
ts |= 0x1 /*000001*/;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_5_4_0:
{
value val = ((pointeronly *)(g[4].p))->data[g[0].i];
g[5].tag = val.tag;
ts |= 0x1 /*000001*/;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_5_4_1:
{
value val = ((pointeronly *)(g[4].p))->data[g[1].i];
g[5].tag = val.tag;
ts |= 0x1 /*000001*/;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_5_4_2:
{
value val = ((pointeronly *)(g[4].p))->data[g[2].i];
g[5].tag = val.tag;
ts |= 0x1 /*000001*/;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_5_4_3:
{
value val = ((pointeronly *)(g[4].p))->data[g[3].i];
g[5].tag = val.tag;
ts |= 0x1 /*000001*/;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_5_4_5:
{
value val = ((pointeronly *)(g[4].p))->data[g[5].i];
g[5].tag = val.tag;
ts |= 0x1 /*000001*/;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_5_5_0:
{
value val = ((pointeronly *)(g[5].p))->data[g[0].i];
g[5].tag = val.tag;
ts |= 0x1 /*000001*/;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_5_5_1:
{
value val = ((pointeronly *)(g[5].p))->data[g[1].i];
g[5].tag = val.tag;
ts |= 0x1 /*000001*/;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_5_5_2:
{
value val = ((pointeronly *)(g[5].p))->data[g[2].i];
g[5].tag = val.tag;
ts |= 0x1 /*000001*/;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_5_5_3:
{
value val = ((pointeronly *)(g[5].p))->data[g[3].i];
g[5].tag = val.tag;
ts |= 0x1 /*000001*/;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_5_5_4:
{
value val = ((pointeronly *)(g[5].p))->data[g[4].i];
g[5].tag = val.tag;
ts |= 0x1 /*000001*/;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_0_0_1:
{
value val = ((pointeronly *)(g[0].p))->data[g[1].i];
g[0].tag = val.tag;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_0_0_2:
{
value val = ((pointeronly *)(g[0].p))->data[g[2].i];
g[0].tag = val.tag;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_0_0_3:
{
value val = ((pointeronly *)(g[0].p))->data[g[3].i];
g[0].tag = val.tag;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_0_0_4:
{
value val = ((pointeronly *)(g[0].p))->data[g[4].i];
g[0].tag = val.tag;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_0_0_5:
{
value val = ((pointeronly *)(g[0].p))->data[g[5].i];
g[0].tag = val.tag;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_0_1_0:
{
value val = ((pointeronly *)(g[1].p))->data[g[0].i];
g[0].tag = val.tag;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_0_1_2:
{
value val = ((pointeronly *)(g[1].p))->data[g[2].i];
g[0].tag = val.tag;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_0_1_3:
{
value val = ((pointeronly *)(g[1].p))->data[g[3].i];
g[0].tag = val.tag;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_0_1_4:
{
value val = ((pointeronly *)(g[1].p))->data[g[4].i];
g[0].tag = val.tag;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_0_1_5:
{
value val = ((pointeronly *)(g[1].p))->data[g[5].i];
g[0].tag = val.tag;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_0_2_0:
{
value val = ((pointeronly *)(g[2].p))->data[g[0].i];
g[0].tag = val.tag;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_0_2_1:
{
value val = ((pointeronly *)(g[2].p))->data[g[1].i];
g[0].tag = val.tag;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_0_2_3:
{
value val = ((pointeronly *)(g[2].p))->data[g[3].i];
g[0].tag = val.tag;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_0_2_4:
{
value val = ((pointeronly *)(g[2].p))->data[g[4].i];
g[0].tag = val.tag;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_0_2_5:
{
value val = ((pointeronly *)(g[2].p))->data[g[5].i];
g[0].tag = val.tag;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_0_3_0:
{
value val = ((pointeronly *)(g[3].p))->data[g[0].i];
g[0].tag = val.tag;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_0_3_1:
{
value val = ((pointeronly *)(g[3].p))->data[g[1].i];
g[0].tag = val.tag;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_0_3_2:
{
value val = ((pointeronly *)(g[3].p))->data[g[2].i];
g[0].tag = val.tag;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_0_3_4:
{
value val = ((pointeronly *)(g[3].p))->data[g[4].i];
g[0].tag = val.tag;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_0_3_5:
{
value val = ((pointeronly *)(g[3].p))->data[g[5].i];
g[0].tag = val.tag;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_0_4_0:
{
value val = ((pointeronly *)(g[4].p))->data[g[0].i];
g[0].tag = val.tag;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_0_4_1:
{
value val = ((pointeronly *)(g[4].p))->data[g[1].i];
g[0].tag = val.tag;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_0_4_2:
{
value val = ((pointeronly *)(g[4].p))->data[g[2].i];
g[0].tag = val.tag;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_0_4_3:
{
value val = ((pointeronly *)(g[4].p))->data[g[3].i];
g[0].tag = val.tag;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_0_4_5:
{
value val = ((pointeronly *)(g[4].p))->data[g[5].i];
g[0].tag = val.tag;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_0_5_0:
{
value val = ((pointeronly *)(g[5].p))->data[g[0].i];
g[0].tag = val.tag;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_0_5_1:
{
value val = ((pointeronly *)(g[5].p))->data[g[1].i];
g[0].tag = val.tag;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_0_5_2:
{
value val = ((pointeronly *)(g[5].p))->data[g[2].i];
g[0].tag = val.tag;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_0_5_3:
{
value val = ((pointeronly *)(g[5].p))->data[g[3].i];
g[0].tag = val.tag;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_0_5_4:
{
value val = ((pointeronly *)(g[5].p))->data[g[4].i];
g[0].tag = val.tag;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_1_0_1:
{
value val = ((pointeronly *)(g[0].p))->data[g[1].i];
g[1].tag = val.tag;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_1_0_2:
{
value val = ((pointeronly *)(g[0].p))->data[g[2].i];
g[1].tag = val.tag;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_1_0_3:
{
value val = ((pointeronly *)(g[0].p))->data[g[3].i];
g[1].tag = val.tag;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_1_0_4:
{
value val = ((pointeronly *)(g[0].p))->data[g[4].i];
g[1].tag = val.tag;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_1_0_5:
{
value val = ((pointeronly *)(g[0].p))->data[g[5].i];
g[1].tag = val.tag;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_1_1_0:
{
value val = ((pointeronly *)(g[1].p))->data[g[0].i];
g[1].tag = val.tag;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_1_1_2:
{
value val = ((pointeronly *)(g[1].p))->data[g[2].i];
g[1].tag = val.tag;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_1_1_3:
{
value val = ((pointeronly *)(g[1].p))->data[g[3].i];
g[1].tag = val.tag;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_1_1_4:
{
value val = ((pointeronly *)(g[1].p))->data[g[4].i];
g[1].tag = val.tag;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_1_1_5:
{
value val = ((pointeronly *)(g[1].p))->data[g[5].i];
g[1].tag = val.tag;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_1_2_0:
{
value val = ((pointeronly *)(g[2].p))->data[g[0].i];
g[1].tag = val.tag;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_1_2_1:
{
value val = ((pointeronly *)(g[2].p))->data[g[1].i];
g[1].tag = val.tag;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_1_2_3:
{
value val = ((pointeronly *)(g[2].p))->data[g[3].i];
g[1].tag = val.tag;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_1_2_4:
{
value val = ((pointeronly *)(g[2].p))->data[g[4].i];
g[1].tag = val.tag;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_1_2_5:
{
value val = ((pointeronly *)(g[2].p))->data[g[5].i];
g[1].tag = val.tag;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_1_3_0:
{
value val = ((pointeronly *)(g[3].p))->data[g[0].i];
g[1].tag = val.tag;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_1_3_1:
{
value val = ((pointeronly *)(g[3].p))->data[g[1].i];
g[1].tag = val.tag;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_1_3_2:
{
value val = ((pointeronly *)(g[3].p))->data[g[2].i];
g[1].tag = val.tag;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_1_3_4:
{
value val = ((pointeronly *)(g[3].p))->data[g[4].i];
g[1].tag = val.tag;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_1_3_5:
{
value val = ((pointeronly *)(g[3].p))->data[g[5].i];
g[1].tag = val.tag;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_1_4_0:
{
value val = ((pointeronly *)(g[4].p))->data[g[0].i];
g[1].tag = val.tag;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_1_4_1:
{
value val = ((pointeronly *)(g[4].p))->data[g[1].i];
g[1].tag = val.tag;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_1_4_2:
{
value val = ((pointeronly *)(g[4].p))->data[g[2].i];
g[1].tag = val.tag;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_1_4_3:
{
value val = ((pointeronly *)(g[4].p))->data[g[3].i];
g[1].tag = val.tag;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_1_4_5:
{
value val = ((pointeronly *)(g[4].p))->data[g[5].i];
g[1].tag = val.tag;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_1_5_0:
{
value val = ((pointeronly *)(g[5].p))->data[g[0].i];
g[1].tag = val.tag;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_1_5_1:
{
value val = ((pointeronly *)(g[5].p))->data[g[1].i];
g[1].tag = val.tag;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_1_5_2:
{
value val = ((pointeronly *)(g[5].p))->data[g[2].i];
g[1].tag = val.tag;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_1_5_3:
{
value val = ((pointeronly *)(g[5].p))->data[g[3].i];
g[1].tag = val.tag;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_1_5_4:
{
value val = ((pointeronly *)(g[5].p))->data[g[4].i];
g[1].tag = val.tag;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_2_0_1:
{
value val = ((pointeronly *)(g[0].p))->data[g[1].i];
g[2].tag = val.tag;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_2_0_2:
{
value val = ((pointeronly *)(g[0].p))->data[g[2].i];
g[2].tag = val.tag;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_2_0_3:
{
value val = ((pointeronly *)(g[0].p))->data[g[3].i];
g[2].tag = val.tag;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_2_0_4:
{
value val = ((pointeronly *)(g[0].p))->data[g[4].i];
g[2].tag = val.tag;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_2_0_5:
{
value val = ((pointeronly *)(g[0].p))->data[g[5].i];
g[2].tag = val.tag;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_2_1_0:
{
value val = ((pointeronly *)(g[1].p))->data[g[0].i];
g[2].tag = val.tag;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_2_1_2:
{
value val = ((pointeronly *)(g[1].p))->data[g[2].i];
g[2].tag = val.tag;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_2_1_3:
{
value val = ((pointeronly *)(g[1].p))->data[g[3].i];
g[2].tag = val.tag;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_2_1_4:
{
value val = ((pointeronly *)(g[1].p))->data[g[4].i];
g[2].tag = val.tag;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_2_1_5:
{
value val = ((pointeronly *)(g[1].p))->data[g[5].i];
g[2].tag = val.tag;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_2_2_0:
{
value val = ((pointeronly *)(g[2].p))->data[g[0].i];
g[2].tag = val.tag;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_2_2_1:
{
value val = ((pointeronly *)(g[2].p))->data[g[1].i];
g[2].tag = val.tag;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_2_2_3:
{
value val = ((pointeronly *)(g[2].p))->data[g[3].i];
g[2].tag = val.tag;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_2_2_4:
{
value val = ((pointeronly *)(g[2].p))->data[g[4].i];
g[2].tag = val.tag;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_2_2_5:
{
value val = ((pointeronly *)(g[2].p))->data[g[5].i];
g[2].tag = val.tag;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_2_3_0:
{
value val = ((pointeronly *)(g[3].p))->data[g[0].i];
g[2].tag = val.tag;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_2_3_1:
{
value val = ((pointeronly *)(g[3].p))->data[g[1].i];
g[2].tag = val.tag;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_2_3_2:
{
value val = ((pointeronly *)(g[3].p))->data[g[2].i];
g[2].tag = val.tag;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_2_3_4:
{
value val = ((pointeronly *)(g[3].p))->data[g[4].i];
g[2].tag = val.tag;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_2_3_5:
{
value val = ((pointeronly *)(g[3].p))->data[g[5].i];
g[2].tag = val.tag;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_2_4_0:
{
value val = ((pointeronly *)(g[4].p))->data[g[0].i];
g[2].tag = val.tag;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_2_4_1:
{
value val = ((pointeronly *)(g[4].p))->data[g[1].i];
g[2].tag = val.tag;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_2_4_2:
{
value val = ((pointeronly *)(g[4].p))->data[g[2].i];
g[2].tag = val.tag;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_2_4_3:
{
value val = ((pointeronly *)(g[4].p))->data[g[3].i];
g[2].tag = val.tag;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_2_4_5:
{
value val = ((pointeronly *)(g[4].p))->data[g[5].i];
g[2].tag = val.tag;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_2_5_0:
{
value val = ((pointeronly *)(g[5].p))->data[g[0].i];
g[2].tag = val.tag;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_2_5_1:
{
value val = ((pointeronly *)(g[5].p))->data[g[1].i];
g[2].tag = val.tag;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_2_5_2:
{
value val = ((pointeronly *)(g[5].p))->data[g[2].i];
g[2].tag = val.tag;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_2_5_3:
{
value val = ((pointeronly *)(g[5].p))->data[g[3].i];
g[2].tag = val.tag;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_2_5_4:
{
value val = ((pointeronly *)(g[5].p))->data[g[4].i];
g[2].tag = val.tag;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_3_0_1:
{
value val = ((pointeronly *)(g[0].p))->data[g[1].i];
g[3].tag = val.tag;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_3_0_2:
{
value val = ((pointeronly *)(g[0].p))->data[g[2].i];
g[3].tag = val.tag;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_3_0_3:
{
value val = ((pointeronly *)(g[0].p))->data[g[3].i];
g[3].tag = val.tag;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_3_0_4:
{
value val = ((pointeronly *)(g[0].p))->data[g[4].i];
g[3].tag = val.tag;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_3_0_5:
{
value val = ((pointeronly *)(g[0].p))->data[g[5].i];
g[3].tag = val.tag;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_3_1_0:
{
value val = ((pointeronly *)(g[1].p))->data[g[0].i];
g[3].tag = val.tag;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_3_1_2:
{
value val = ((pointeronly *)(g[1].p))->data[g[2].i];
g[3].tag = val.tag;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_3_1_3:
{
value val = ((pointeronly *)(g[1].p))->data[g[3].i];
g[3].tag = val.tag;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_3_1_4:
{
value val = ((pointeronly *)(g[1].p))->data[g[4].i];
g[3].tag = val.tag;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_3_1_5:
{
value val = ((pointeronly *)(g[1].p))->data[g[5].i];
g[3].tag = val.tag;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_3_2_0:
{
value val = ((pointeronly *)(g[2].p))->data[g[0].i];
g[3].tag = val.tag;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_3_2_1:
{
value val = ((pointeronly *)(g[2].p))->data[g[1].i];
g[3].tag = val.tag;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_3_2_3:
{
value val = ((pointeronly *)(g[2].p))->data[g[3].i];
g[3].tag = val.tag;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_3_2_4:
{
value val = ((pointeronly *)(g[2].p))->data[g[4].i];
g[3].tag = val.tag;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_3_2_5:
{
value val = ((pointeronly *)(g[2].p))->data[g[5].i];
g[3].tag = val.tag;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_3_3_0:
{
value val = ((pointeronly *)(g[3].p))->data[g[0].i];
g[3].tag = val.tag;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_3_3_1:
{
value val = ((pointeronly *)(g[3].p))->data[g[1].i];
g[3].tag = val.tag;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_3_3_2:
{
value val = ((pointeronly *)(g[3].p))->data[g[2].i];
g[3].tag = val.tag;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_3_3_4:
{
value val = ((pointeronly *)(g[3].p))->data[g[4].i];
g[3].tag = val.tag;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_3_3_5:
{
value val = ((pointeronly *)(g[3].p))->data[g[5].i];
g[3].tag = val.tag;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_3_4_0:
{
value val = ((pointeronly *)(g[4].p))->data[g[0].i];
g[3].tag = val.tag;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_3_4_1:
{
value val = ((pointeronly *)(g[4].p))->data[g[1].i];
g[3].tag = val.tag;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_3_4_2:
{
value val = ((pointeronly *)(g[4].p))->data[g[2].i];
g[3].tag = val.tag;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_3_4_3:
{
value val = ((pointeronly *)(g[4].p))->data[g[3].i];
g[3].tag = val.tag;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_3_4_5:
{
value val = ((pointeronly *)(g[4].p))->data[g[5].i];
g[3].tag = val.tag;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_3_5_0:
{
value val = ((pointeronly *)(g[5].p))->data[g[0].i];
g[3].tag = val.tag;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_3_5_1:
{
value val = ((pointeronly *)(g[5].p))->data[g[1].i];
g[3].tag = val.tag;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_3_5_2:
{
value val = ((pointeronly *)(g[5].p))->data[g[2].i];
g[3].tag = val.tag;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_3_5_3:
{
value val = ((pointeronly *)(g[5].p))->data[g[3].i];
g[3].tag = val.tag;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_3_5_4:
{
value val = ((pointeronly *)(g[5].p))->data[g[4].i];
g[3].tag = val.tag;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_4_0_1:
{
value val = ((pointeronly *)(g[0].p))->data[g[1].i];
g[4].tag = val.tag;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_4_0_2:
{
value val = ((pointeronly *)(g[0].p))->data[g[2].i];
g[4].tag = val.tag;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_4_0_3:
{
value val = ((pointeronly *)(g[0].p))->data[g[3].i];
g[4].tag = val.tag;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_4_0_4:
{
value val = ((pointeronly *)(g[0].p))->data[g[4].i];
g[4].tag = val.tag;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_4_0_5:
{
value val = ((pointeronly *)(g[0].p))->data[g[5].i];
g[4].tag = val.tag;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_4_1_0:
{
value val = ((pointeronly *)(g[1].p))->data[g[0].i];
g[4].tag = val.tag;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_4_1_2:
{
value val = ((pointeronly *)(g[1].p))->data[g[2].i];
g[4].tag = val.tag;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_4_1_3:
{
value val = ((pointeronly *)(g[1].p))->data[g[3].i];
g[4].tag = val.tag;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_4_1_4:
{
value val = ((pointeronly *)(g[1].p))->data[g[4].i];
g[4].tag = val.tag;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_4_1_5:
{
value val = ((pointeronly *)(g[1].p))->data[g[5].i];
g[4].tag = val.tag;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_4_2_0:
{
value val = ((pointeronly *)(g[2].p))->data[g[0].i];
g[4].tag = val.tag;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_4_2_1:
{
value val = ((pointeronly *)(g[2].p))->data[g[1].i];
g[4].tag = val.tag;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_4_2_3:
{
value val = ((pointeronly *)(g[2].p))->data[g[3].i];
g[4].tag = val.tag;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_4_2_4:
{
value val = ((pointeronly *)(g[2].p))->data[g[4].i];
g[4].tag = val.tag;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_4_2_5:
{
value val = ((pointeronly *)(g[2].p))->data[g[5].i];
g[4].tag = val.tag;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_4_3_0:
{
value val = ((pointeronly *)(g[3].p))->data[g[0].i];
g[4].tag = val.tag;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_4_3_1:
{
value val = ((pointeronly *)(g[3].p))->data[g[1].i];
g[4].tag = val.tag;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_4_3_2:
{
value val = ((pointeronly *)(g[3].p))->data[g[2].i];
g[4].tag = val.tag;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_4_3_4:
{
value val = ((pointeronly *)(g[3].p))->data[g[4].i];
g[4].tag = val.tag;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_4_3_5:
{
value val = ((pointeronly *)(g[3].p))->data[g[5].i];
g[4].tag = val.tag;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_4_4_0:
{
value val = ((pointeronly *)(g[4].p))->data[g[0].i];
g[4].tag = val.tag;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_4_4_1:
{
value val = ((pointeronly *)(g[4].p))->data[g[1].i];
g[4].tag = val.tag;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_4_4_2:
{
value val = ((pointeronly *)(g[4].p))->data[g[2].i];
g[4].tag = val.tag;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_4_4_3:
{
value val = ((pointeronly *)(g[4].p))->data[g[3].i];
g[4].tag = val.tag;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_4_4_5:
{
value val = ((pointeronly *)(g[4].p))->data[g[5].i];
g[4].tag = val.tag;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_4_5_0:
{
value val = ((pointeronly *)(g[5].p))->data[g[0].i];
g[4].tag = val.tag;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_4_5_1:
{
value val = ((pointeronly *)(g[5].p))->data[g[1].i];
g[4].tag = val.tag;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_4_5_2:
{
value val = ((pointeronly *)(g[5].p))->data[g[2].i];
g[4].tag = val.tag;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_4_5_3:
{
value val = ((pointeronly *)(g[5].p))->data[g[3].i];
g[4].tag = val.tag;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_4_5_4:
{
value val = ((pointeronly *)(g[5].p))->data[g[4].i];
g[4].tag = val.tag;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_5_0_1:
{
value val = ((pointeronly *)(g[0].p))->data[g[1].i];
g[5].tag = val.tag;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_5_0_2:
{
value val = ((pointeronly *)(g[0].p))->data[g[2].i];
g[5].tag = val.tag;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_5_0_3:
{
value val = ((pointeronly *)(g[0].p))->data[g[3].i];
g[5].tag = val.tag;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_5_0_4:
{
value val = ((pointeronly *)(g[0].p))->data[g[4].i];
g[5].tag = val.tag;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_5_0_5:
{
value val = ((pointeronly *)(g[0].p))->data[g[5].i];
g[5].tag = val.tag;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_5_1_0:
{
value val = ((pointeronly *)(g[1].p))->data[g[0].i];
g[5].tag = val.tag;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_5_1_2:
{
value val = ((pointeronly *)(g[1].p))->data[g[2].i];
g[5].tag = val.tag;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_5_1_3:
{
value val = ((pointeronly *)(g[1].p))->data[g[3].i];
g[5].tag = val.tag;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_5_1_4:
{
value val = ((pointeronly *)(g[1].p))->data[g[4].i];
g[5].tag = val.tag;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_5_1_5:
{
value val = ((pointeronly *)(g[1].p))->data[g[5].i];
g[5].tag = val.tag;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_5_2_0:
{
value val = ((pointeronly *)(g[2].p))->data[g[0].i];
g[5].tag = val.tag;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_5_2_1:
{
value val = ((pointeronly *)(g[2].p))->data[g[1].i];
g[5].tag = val.tag;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_5_2_3:
{
value val = ((pointeronly *)(g[2].p))->data[g[3].i];
g[5].tag = val.tag;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_5_2_4:
{
value val = ((pointeronly *)(g[2].p))->data[g[4].i];
g[5].tag = val.tag;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_5_2_5:
{
value val = ((pointeronly *)(g[2].p))->data[g[5].i];
g[5].tag = val.tag;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_5_3_0:
{
value val = ((pointeronly *)(g[3].p))->data[g[0].i];
g[5].tag = val.tag;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_5_3_1:
{
value val = ((pointeronly *)(g[3].p))->data[g[1].i];
g[5].tag = val.tag;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_5_3_2:
{
value val = ((pointeronly *)(g[3].p))->data[g[2].i];
g[5].tag = val.tag;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_5_3_4:
{
value val = ((pointeronly *)(g[3].p))->data[g[4].i];
g[5].tag = val.tag;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_5_3_5:
{
value val = ((pointeronly *)(g[3].p))->data[g[5].i];
g[5].tag = val.tag;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_5_4_0:
{
value val = ((pointeronly *)(g[4].p))->data[g[0].i];
g[5].tag = val.tag;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_5_4_1:
{
value val = ((pointeronly *)(g[4].p))->data[g[1].i];
g[5].tag = val.tag;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_5_4_2:
{
value val = ((pointeronly *)(g[4].p))->data[g[2].i];
g[5].tag = val.tag;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_5_4_3:
{
value val = ((pointeronly *)(g[4].p))->data[g[3].i];
g[5].tag = val.tag;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_5_4_5:
{
value val = ((pointeronly *)(g[4].p))->data[g[5].i];
g[5].tag = val.tag;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_5_5_0:
{
value val = ((pointeronly *)(g[5].p))->data[g[0].i];
g[5].tag = val.tag;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_5_5_1:
{
value val = ((pointeronly *)(g[5].p))->data[g[1].i];
g[5].tag = val.tag;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_5_5_2:
{
value val = ((pointeronly *)(g[5].p))->data[g[2].i];
g[5].tag = val.tag;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_5_5_3:
{
value val = ((pointeronly *)(g[5].p))->data[g[3].i];
g[5].tag = val.tag;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_5_5_4:
{
value val = ((pointeronly *)(g[5].p))->data[g[4].i];
g[5].tag = val.tag;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

setap_0_1_0:
{
value *vp = &(((pointeronly *)(g[0].p))->data[g[1].i]);
vp->tag = g[0].tag;
vp->p = g[0].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_0_1_1:
{
value *vp = &(((pointeronly *)(g[0].p))->data[g[1].i]);
vp->tag = g[1].tag;
vp->p = g[1].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_0_1_2:
{
value *vp = &(((pointeronly *)(g[0].p))->data[g[1].i]);
vp->tag = g[2].tag;
vp->p = g[2].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_0_1_3:
{
value *vp = &(((pointeronly *)(g[0].p))->data[g[1].i]);
vp->tag = g[3].tag;
vp->p = g[3].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_0_1_4:
{
value *vp = &(((pointeronly *)(g[0].p))->data[g[1].i]);
vp->tag = g[4].tag;
vp->p = g[4].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_0_1_5:
{
value *vp = &(((pointeronly *)(g[0].p))->data[g[1].i]);
vp->tag = g[5].tag;
vp->p = g[5].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_0_2_0:
{
value *vp = &(((pointeronly *)(g[0].p))->data[g[2].i]);
vp->tag = g[0].tag;
vp->p = g[0].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_0_2_1:
{
value *vp = &(((pointeronly *)(g[0].p))->data[g[2].i]);
vp->tag = g[1].tag;
vp->p = g[1].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_0_2_2:
{
value *vp = &(((pointeronly *)(g[0].p))->data[g[2].i]);
vp->tag = g[2].tag;
vp->p = g[2].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_0_2_3:
{
value *vp = &(((pointeronly *)(g[0].p))->data[g[2].i]);
vp->tag = g[3].tag;
vp->p = g[3].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_0_2_4:
{
value *vp = &(((pointeronly *)(g[0].p))->data[g[2].i]);
vp->tag = g[4].tag;
vp->p = g[4].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_0_2_5:
{
value *vp = &(((pointeronly *)(g[0].p))->data[g[2].i]);
vp->tag = g[5].tag;
vp->p = g[5].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_0_3_0:
{
value *vp = &(((pointeronly *)(g[0].p))->data[g[3].i]);
vp->tag = g[0].tag;
vp->p = g[0].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_0_3_1:
{
value *vp = &(((pointeronly *)(g[0].p))->data[g[3].i]);
vp->tag = g[1].tag;
vp->p = g[1].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_0_3_2:
{
value *vp = &(((pointeronly *)(g[0].p))->data[g[3].i]);
vp->tag = g[2].tag;
vp->p = g[2].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_0_3_3:
{
value *vp = &(((pointeronly *)(g[0].p))->data[g[3].i]);
vp->tag = g[3].tag;
vp->p = g[3].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_0_3_4:
{
value *vp = &(((pointeronly *)(g[0].p))->data[g[3].i]);
vp->tag = g[4].tag;
vp->p = g[4].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_0_3_5:
{
value *vp = &(((pointeronly *)(g[0].p))->data[g[3].i]);
vp->tag = g[5].tag;
vp->p = g[5].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_0_4_0:
{
value *vp = &(((pointeronly *)(g[0].p))->data[g[4].i]);
vp->tag = g[0].tag;
vp->p = g[0].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_0_4_1:
{
value *vp = &(((pointeronly *)(g[0].p))->data[g[4].i]);
vp->tag = g[1].tag;
vp->p = g[1].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_0_4_2:
{
value *vp = &(((pointeronly *)(g[0].p))->data[g[4].i]);
vp->tag = g[2].tag;
vp->p = g[2].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_0_4_3:
{
value *vp = &(((pointeronly *)(g[0].p))->data[g[4].i]);
vp->tag = g[3].tag;
vp->p = g[3].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_0_4_4:
{
value *vp = &(((pointeronly *)(g[0].p))->data[g[4].i]);
vp->tag = g[4].tag;
vp->p = g[4].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_0_4_5:
{
value *vp = &(((pointeronly *)(g[0].p))->data[g[4].i]);
vp->tag = g[5].tag;
vp->p = g[5].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_0_5_0:
{
value *vp = &(((pointeronly *)(g[0].p))->data[g[5].i]);
vp->tag = g[0].tag;
vp->p = g[0].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_0_5_1:
{
value *vp = &(((pointeronly *)(g[0].p))->data[g[5].i]);
vp->tag = g[1].tag;
vp->p = g[1].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_0_5_2:
{
value *vp = &(((pointeronly *)(g[0].p))->data[g[5].i]);
vp->tag = g[2].tag;
vp->p = g[2].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_0_5_3:
{
value *vp = &(((pointeronly *)(g[0].p))->data[g[5].i]);
vp->tag = g[3].tag;
vp->p = g[3].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_0_5_4:
{
value *vp = &(((pointeronly *)(g[0].p))->data[g[5].i]);
vp->tag = g[4].tag;
vp->p = g[4].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_0_5_5:
{
value *vp = &(((pointeronly *)(g[0].p))->data[g[5].i]);
vp->tag = g[5].tag;
vp->p = g[5].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_1_0_0:
{
value *vp = &(((pointeronly *)(g[1].p))->data[g[0].i]);
vp->tag = g[0].tag;
vp->p = g[0].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_1_0_1:
{
value *vp = &(((pointeronly *)(g[1].p))->data[g[0].i]);
vp->tag = g[1].tag;
vp->p = g[1].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_1_0_2:
{
value *vp = &(((pointeronly *)(g[1].p))->data[g[0].i]);
vp->tag = g[2].tag;
vp->p = g[2].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_1_0_3:
{
value *vp = &(((pointeronly *)(g[1].p))->data[g[0].i]);
vp->tag = g[3].tag;
vp->p = g[3].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_1_0_4:
{
value *vp = &(((pointeronly *)(g[1].p))->data[g[0].i]);
vp->tag = g[4].tag;
vp->p = g[4].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_1_0_5:
{
value *vp = &(((pointeronly *)(g[1].p))->data[g[0].i]);
vp->tag = g[5].tag;
vp->p = g[5].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_1_2_0:
{
value *vp = &(((pointeronly *)(g[1].p))->data[g[2].i]);
vp->tag = g[0].tag;
vp->p = g[0].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_1_2_1:
{
value *vp = &(((pointeronly *)(g[1].p))->data[g[2].i]);
vp->tag = g[1].tag;
vp->p = g[1].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_1_2_2:
{
value *vp = &(((pointeronly *)(g[1].p))->data[g[2].i]);
vp->tag = g[2].tag;
vp->p = g[2].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_1_2_3:
{
value *vp = &(((pointeronly *)(g[1].p))->data[g[2].i]);
vp->tag = g[3].tag;
vp->p = g[3].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_1_2_4:
{
value *vp = &(((pointeronly *)(g[1].p))->data[g[2].i]);
vp->tag = g[4].tag;
vp->p = g[4].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_1_2_5:
{
value *vp = &(((pointeronly *)(g[1].p))->data[g[2].i]);
vp->tag = g[5].tag;
vp->p = g[5].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_1_3_0:
{
value *vp = &(((pointeronly *)(g[1].p))->data[g[3].i]);
vp->tag = g[0].tag;
vp->p = g[0].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_1_3_1:
{
value *vp = &(((pointeronly *)(g[1].p))->data[g[3].i]);
vp->tag = g[1].tag;
vp->p = g[1].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_1_3_2:
{
value *vp = &(((pointeronly *)(g[1].p))->data[g[3].i]);
vp->tag = g[2].tag;
vp->p = g[2].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_1_3_3:
{
value *vp = &(((pointeronly *)(g[1].p))->data[g[3].i]);
vp->tag = g[3].tag;
vp->p = g[3].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_1_3_4:
{
value *vp = &(((pointeronly *)(g[1].p))->data[g[3].i]);
vp->tag = g[4].tag;
vp->p = g[4].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_1_3_5:
{
value *vp = &(((pointeronly *)(g[1].p))->data[g[3].i]);
vp->tag = g[5].tag;
vp->p = g[5].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_1_4_0:
{
value *vp = &(((pointeronly *)(g[1].p))->data[g[4].i]);
vp->tag = g[0].tag;
vp->p = g[0].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_1_4_1:
{
value *vp = &(((pointeronly *)(g[1].p))->data[g[4].i]);
vp->tag = g[1].tag;
vp->p = g[1].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_1_4_2:
{
value *vp = &(((pointeronly *)(g[1].p))->data[g[4].i]);
vp->tag = g[2].tag;
vp->p = g[2].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_1_4_3:
{
value *vp = &(((pointeronly *)(g[1].p))->data[g[4].i]);
vp->tag = g[3].tag;
vp->p = g[3].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_1_4_4:
{
value *vp = &(((pointeronly *)(g[1].p))->data[g[4].i]);
vp->tag = g[4].tag;
vp->p = g[4].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_1_4_5:
{
value *vp = &(((pointeronly *)(g[1].p))->data[g[4].i]);
vp->tag = g[5].tag;
vp->p = g[5].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_1_5_0:
{
value *vp = &(((pointeronly *)(g[1].p))->data[g[5].i]);
vp->tag = g[0].tag;
vp->p = g[0].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_1_5_1:
{
value *vp = &(((pointeronly *)(g[1].p))->data[g[5].i]);
vp->tag = g[1].tag;
vp->p = g[1].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_1_5_2:
{
value *vp = &(((pointeronly *)(g[1].p))->data[g[5].i]);
vp->tag = g[2].tag;
vp->p = g[2].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_1_5_3:
{
value *vp = &(((pointeronly *)(g[1].p))->data[g[5].i]);
vp->tag = g[3].tag;
vp->p = g[3].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_1_5_4:
{
value *vp = &(((pointeronly *)(g[1].p))->data[g[5].i]);
vp->tag = g[4].tag;
vp->p = g[4].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_1_5_5:
{
value *vp = &(((pointeronly *)(g[1].p))->data[g[5].i]);
vp->tag = g[5].tag;
vp->p = g[5].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_2_0_0:
{
value *vp = &(((pointeronly *)(g[2].p))->data[g[0].i]);
vp->tag = g[0].tag;
vp->p = g[0].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_2_0_1:
{
value *vp = &(((pointeronly *)(g[2].p))->data[g[0].i]);
vp->tag = g[1].tag;
vp->p = g[1].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_2_0_2:
{
value *vp = &(((pointeronly *)(g[2].p))->data[g[0].i]);
vp->tag = g[2].tag;
vp->p = g[2].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_2_0_3:
{
value *vp = &(((pointeronly *)(g[2].p))->data[g[0].i]);
vp->tag = g[3].tag;
vp->p = g[3].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_2_0_4:
{
value *vp = &(((pointeronly *)(g[2].p))->data[g[0].i]);
vp->tag = g[4].tag;
vp->p = g[4].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_2_0_5:
{
value *vp = &(((pointeronly *)(g[2].p))->data[g[0].i]);
vp->tag = g[5].tag;
vp->p = g[5].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_2_1_0:
{
value *vp = &(((pointeronly *)(g[2].p))->data[g[1].i]);
vp->tag = g[0].tag;
vp->p = g[0].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_2_1_1:
{
value *vp = &(((pointeronly *)(g[2].p))->data[g[1].i]);
vp->tag = g[1].tag;
vp->p = g[1].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_2_1_2:
{
value *vp = &(((pointeronly *)(g[2].p))->data[g[1].i]);
vp->tag = g[2].tag;
vp->p = g[2].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_2_1_3:
{
value *vp = &(((pointeronly *)(g[2].p))->data[g[1].i]);
vp->tag = g[3].tag;
vp->p = g[3].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_2_1_4:
{
value *vp = &(((pointeronly *)(g[2].p))->data[g[1].i]);
vp->tag = g[4].tag;
vp->p = g[4].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_2_1_5:
{
value *vp = &(((pointeronly *)(g[2].p))->data[g[1].i]);
vp->tag = g[5].tag;
vp->p = g[5].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_2_3_0:
{
value *vp = &(((pointeronly *)(g[2].p))->data[g[3].i]);
vp->tag = g[0].tag;
vp->p = g[0].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_2_3_1:
{
value *vp = &(((pointeronly *)(g[2].p))->data[g[3].i]);
vp->tag = g[1].tag;
vp->p = g[1].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_2_3_2:
{
value *vp = &(((pointeronly *)(g[2].p))->data[g[3].i]);
vp->tag = g[2].tag;
vp->p = g[2].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_2_3_3:
{
value *vp = &(((pointeronly *)(g[2].p))->data[g[3].i]);
vp->tag = g[3].tag;
vp->p = g[3].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_2_3_4:
{
value *vp = &(((pointeronly *)(g[2].p))->data[g[3].i]);
vp->tag = g[4].tag;
vp->p = g[4].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_2_3_5:
{
value *vp = &(((pointeronly *)(g[2].p))->data[g[3].i]);
vp->tag = g[5].tag;
vp->p = g[5].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_2_4_0:
{
value *vp = &(((pointeronly *)(g[2].p))->data[g[4].i]);
vp->tag = g[0].tag;
vp->p = g[0].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_2_4_1:
{
value *vp = &(((pointeronly *)(g[2].p))->data[g[4].i]);
vp->tag = g[1].tag;
vp->p = g[1].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_2_4_2:
{
value *vp = &(((pointeronly *)(g[2].p))->data[g[4].i]);
vp->tag = g[2].tag;
vp->p = g[2].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_2_4_3:
{
value *vp = &(((pointeronly *)(g[2].p))->data[g[4].i]);
vp->tag = g[3].tag;
vp->p = g[3].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_2_4_4:
{
value *vp = &(((pointeronly *)(g[2].p))->data[g[4].i]);
vp->tag = g[4].tag;
vp->p = g[4].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_2_4_5:
{
value *vp = &(((pointeronly *)(g[2].p))->data[g[4].i]);
vp->tag = g[5].tag;
vp->p = g[5].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_2_5_0:
{
value *vp = &(((pointeronly *)(g[2].p))->data[g[5].i]);
vp->tag = g[0].tag;
vp->p = g[0].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_2_5_1:
{
value *vp = &(((pointeronly *)(g[2].p))->data[g[5].i]);
vp->tag = g[1].tag;
vp->p = g[1].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_2_5_2:
{
value *vp = &(((pointeronly *)(g[2].p))->data[g[5].i]);
vp->tag = g[2].tag;
vp->p = g[2].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_2_5_3:
{
value *vp = &(((pointeronly *)(g[2].p))->data[g[5].i]);
vp->tag = g[3].tag;
vp->p = g[3].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_2_5_4:
{
value *vp = &(((pointeronly *)(g[2].p))->data[g[5].i]);
vp->tag = g[4].tag;
vp->p = g[4].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_2_5_5:
{
value *vp = &(((pointeronly *)(g[2].p))->data[g[5].i]);
vp->tag = g[5].tag;
vp->p = g[5].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_3_0_0:
{
value *vp = &(((pointeronly *)(g[3].p))->data[g[0].i]);
vp->tag = g[0].tag;
vp->p = g[0].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_3_0_1:
{
value *vp = &(((pointeronly *)(g[3].p))->data[g[0].i]);
vp->tag = g[1].tag;
vp->p = g[1].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_3_0_2:
{
value *vp = &(((pointeronly *)(g[3].p))->data[g[0].i]);
vp->tag = g[2].tag;
vp->p = g[2].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_3_0_3:
{
value *vp = &(((pointeronly *)(g[3].p))->data[g[0].i]);
vp->tag = g[3].tag;
vp->p = g[3].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_3_0_4:
{
value *vp = &(((pointeronly *)(g[3].p))->data[g[0].i]);
vp->tag = g[4].tag;
vp->p = g[4].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_3_0_5:
{
value *vp = &(((pointeronly *)(g[3].p))->data[g[0].i]);
vp->tag = g[5].tag;
vp->p = g[5].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_3_1_0:
{
value *vp = &(((pointeronly *)(g[3].p))->data[g[1].i]);
vp->tag = g[0].tag;
vp->p = g[0].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_3_1_1:
{
value *vp = &(((pointeronly *)(g[3].p))->data[g[1].i]);
vp->tag = g[1].tag;
vp->p = g[1].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_3_1_2:
{
value *vp = &(((pointeronly *)(g[3].p))->data[g[1].i]);
vp->tag = g[2].tag;
vp->p = g[2].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_3_1_3:
{
value *vp = &(((pointeronly *)(g[3].p))->data[g[1].i]);
vp->tag = g[3].tag;
vp->p = g[3].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_3_1_4:
{
value *vp = &(((pointeronly *)(g[3].p))->data[g[1].i]);
vp->tag = g[4].tag;
vp->p = g[4].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_3_1_5:
{
value *vp = &(((pointeronly *)(g[3].p))->data[g[1].i]);
vp->tag = g[5].tag;
vp->p = g[5].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_3_2_0:
{
value *vp = &(((pointeronly *)(g[3].p))->data[g[2].i]);
vp->tag = g[0].tag;
vp->p = g[0].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_3_2_1:
{
value *vp = &(((pointeronly *)(g[3].p))->data[g[2].i]);
vp->tag = g[1].tag;
vp->p = g[1].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_3_2_2:
{
value *vp = &(((pointeronly *)(g[3].p))->data[g[2].i]);
vp->tag = g[2].tag;
vp->p = g[2].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_3_2_3:
{
value *vp = &(((pointeronly *)(g[3].p))->data[g[2].i]);
vp->tag = g[3].tag;
vp->p = g[3].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_3_2_4:
{
value *vp = &(((pointeronly *)(g[3].p))->data[g[2].i]);
vp->tag = g[4].tag;
vp->p = g[4].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_3_2_5:
{
value *vp = &(((pointeronly *)(g[3].p))->data[g[2].i]);
vp->tag = g[5].tag;
vp->p = g[5].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_3_4_0:
{
value *vp = &(((pointeronly *)(g[3].p))->data[g[4].i]);
vp->tag = g[0].tag;
vp->p = g[0].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_3_4_1:
{
value *vp = &(((pointeronly *)(g[3].p))->data[g[4].i]);
vp->tag = g[1].tag;
vp->p = g[1].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_3_4_2:
{
value *vp = &(((pointeronly *)(g[3].p))->data[g[4].i]);
vp->tag = g[2].tag;
vp->p = g[2].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_3_4_3:
{
value *vp = &(((pointeronly *)(g[3].p))->data[g[4].i]);
vp->tag = g[3].tag;
vp->p = g[3].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_3_4_4:
{
value *vp = &(((pointeronly *)(g[3].p))->data[g[4].i]);
vp->tag = g[4].tag;
vp->p = g[4].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_3_4_5:
{
value *vp = &(((pointeronly *)(g[3].p))->data[g[4].i]);
vp->tag = g[5].tag;
vp->p = g[5].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_3_5_0:
{
value *vp = &(((pointeronly *)(g[3].p))->data[g[5].i]);
vp->tag = g[0].tag;
vp->p = g[0].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_3_5_1:
{
value *vp = &(((pointeronly *)(g[3].p))->data[g[5].i]);
vp->tag = g[1].tag;
vp->p = g[1].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_3_5_2:
{
value *vp = &(((pointeronly *)(g[3].p))->data[g[5].i]);
vp->tag = g[2].tag;
vp->p = g[2].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_3_5_3:
{
value *vp = &(((pointeronly *)(g[3].p))->data[g[5].i]);
vp->tag = g[3].tag;
vp->p = g[3].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_3_5_4:
{
value *vp = &(((pointeronly *)(g[3].p))->data[g[5].i]);
vp->tag = g[4].tag;
vp->p = g[4].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_3_5_5:
{
value *vp = &(((pointeronly *)(g[3].p))->data[g[5].i]);
vp->tag = g[5].tag;
vp->p = g[5].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_4_0_0:
{
value *vp = &(((pointeronly *)(g[4].p))->data[g[0].i]);
vp->tag = g[0].tag;
vp->p = g[0].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_4_0_1:
{
value *vp = &(((pointeronly *)(g[4].p))->data[g[0].i]);
vp->tag = g[1].tag;
vp->p = g[1].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_4_0_2:
{
value *vp = &(((pointeronly *)(g[4].p))->data[g[0].i]);
vp->tag = g[2].tag;
vp->p = g[2].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_4_0_3:
{
value *vp = &(((pointeronly *)(g[4].p))->data[g[0].i]);
vp->tag = g[3].tag;
vp->p = g[3].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_4_0_4:
{
value *vp = &(((pointeronly *)(g[4].p))->data[g[0].i]);
vp->tag = g[4].tag;
vp->p = g[4].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_4_0_5:
{
value *vp = &(((pointeronly *)(g[4].p))->data[g[0].i]);
vp->tag = g[5].tag;
vp->p = g[5].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_4_1_0:
{
value *vp = &(((pointeronly *)(g[4].p))->data[g[1].i]);
vp->tag = g[0].tag;
vp->p = g[0].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_4_1_1:
{
value *vp = &(((pointeronly *)(g[4].p))->data[g[1].i]);
vp->tag = g[1].tag;
vp->p = g[1].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_4_1_2:
{
value *vp = &(((pointeronly *)(g[4].p))->data[g[1].i]);
vp->tag = g[2].tag;
vp->p = g[2].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_4_1_3:
{
value *vp = &(((pointeronly *)(g[4].p))->data[g[1].i]);
vp->tag = g[3].tag;
vp->p = g[3].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_4_1_4:
{
value *vp = &(((pointeronly *)(g[4].p))->data[g[1].i]);
vp->tag = g[4].tag;
vp->p = g[4].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_4_1_5:
{
value *vp = &(((pointeronly *)(g[4].p))->data[g[1].i]);
vp->tag = g[5].tag;
vp->p = g[5].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_4_2_0:
{
value *vp = &(((pointeronly *)(g[4].p))->data[g[2].i]);
vp->tag = g[0].tag;
vp->p = g[0].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_4_2_1:
{
value *vp = &(((pointeronly *)(g[4].p))->data[g[2].i]);
vp->tag = g[1].tag;
vp->p = g[1].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_4_2_2:
{
value *vp = &(((pointeronly *)(g[4].p))->data[g[2].i]);
vp->tag = g[2].tag;
vp->p = g[2].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_4_2_3:
{
value *vp = &(((pointeronly *)(g[4].p))->data[g[2].i]);
vp->tag = g[3].tag;
vp->p = g[3].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_4_2_4:
{
value *vp = &(((pointeronly *)(g[4].p))->data[g[2].i]);
vp->tag = g[4].tag;
vp->p = g[4].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_4_2_5:
{
value *vp = &(((pointeronly *)(g[4].p))->data[g[2].i]);
vp->tag = g[5].tag;
vp->p = g[5].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_4_3_0:
{
value *vp = &(((pointeronly *)(g[4].p))->data[g[3].i]);
vp->tag = g[0].tag;
vp->p = g[0].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_4_3_1:
{
value *vp = &(((pointeronly *)(g[4].p))->data[g[3].i]);
vp->tag = g[1].tag;
vp->p = g[1].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_4_3_2:
{
value *vp = &(((pointeronly *)(g[4].p))->data[g[3].i]);
vp->tag = g[2].tag;
vp->p = g[2].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_4_3_3:
{
value *vp = &(((pointeronly *)(g[4].p))->data[g[3].i]);
vp->tag = g[3].tag;
vp->p = g[3].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_4_3_4:
{
value *vp = &(((pointeronly *)(g[4].p))->data[g[3].i]);
vp->tag = g[4].tag;
vp->p = g[4].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_4_3_5:
{
value *vp = &(((pointeronly *)(g[4].p))->data[g[3].i]);
vp->tag = g[5].tag;
vp->p = g[5].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_4_5_0:
{
value *vp = &(((pointeronly *)(g[4].p))->data[g[5].i]);
vp->tag = g[0].tag;
vp->p = g[0].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_4_5_1:
{
value *vp = &(((pointeronly *)(g[4].p))->data[g[5].i]);
vp->tag = g[1].tag;
vp->p = g[1].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_4_5_2:
{
value *vp = &(((pointeronly *)(g[4].p))->data[g[5].i]);
vp->tag = g[2].tag;
vp->p = g[2].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_4_5_3:
{
value *vp = &(((pointeronly *)(g[4].p))->data[g[5].i]);
vp->tag = g[3].tag;
vp->p = g[3].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_4_5_4:
{
value *vp = &(((pointeronly *)(g[4].p))->data[g[5].i]);
vp->tag = g[4].tag;
vp->p = g[4].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_4_5_5:
{
value *vp = &(((pointeronly *)(g[4].p))->data[g[5].i]);
vp->tag = g[5].tag;
vp->p = g[5].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_5_0_0:
{
value *vp = &(((pointeronly *)(g[5].p))->data[g[0].i]);
vp->tag = g[0].tag;
vp->p = g[0].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_5_0_1:
{
value *vp = &(((pointeronly *)(g[5].p))->data[g[0].i]);
vp->tag = g[1].tag;
vp->p = g[1].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_5_0_2:
{
value *vp = &(((pointeronly *)(g[5].p))->data[g[0].i]);
vp->tag = g[2].tag;
vp->p = g[2].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_5_0_3:
{
value *vp = &(((pointeronly *)(g[5].p))->data[g[0].i]);
vp->tag = g[3].tag;
vp->p = g[3].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_5_0_4:
{
value *vp = &(((pointeronly *)(g[5].p))->data[g[0].i]);
vp->tag = g[4].tag;
vp->p = g[4].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_5_0_5:
{
value *vp = &(((pointeronly *)(g[5].p))->data[g[0].i]);
vp->tag = g[5].tag;
vp->p = g[5].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_5_1_0:
{
value *vp = &(((pointeronly *)(g[5].p))->data[g[1].i]);
vp->tag = g[0].tag;
vp->p = g[0].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_5_1_1:
{
value *vp = &(((pointeronly *)(g[5].p))->data[g[1].i]);
vp->tag = g[1].tag;
vp->p = g[1].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_5_1_2:
{
value *vp = &(((pointeronly *)(g[5].p))->data[g[1].i]);
vp->tag = g[2].tag;
vp->p = g[2].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_5_1_3:
{
value *vp = &(((pointeronly *)(g[5].p))->data[g[1].i]);
vp->tag = g[3].tag;
vp->p = g[3].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_5_1_4:
{
value *vp = &(((pointeronly *)(g[5].p))->data[g[1].i]);
vp->tag = g[4].tag;
vp->p = g[4].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_5_1_5:
{
value *vp = &(((pointeronly *)(g[5].p))->data[g[1].i]);
vp->tag = g[5].tag;
vp->p = g[5].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_5_2_0:
{
value *vp = &(((pointeronly *)(g[5].p))->data[g[2].i]);
vp->tag = g[0].tag;
vp->p = g[0].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_5_2_1:
{
value *vp = &(((pointeronly *)(g[5].p))->data[g[2].i]);
vp->tag = g[1].tag;
vp->p = g[1].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_5_2_2:
{
value *vp = &(((pointeronly *)(g[5].p))->data[g[2].i]);
vp->tag = g[2].tag;
vp->p = g[2].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_5_2_3:
{
value *vp = &(((pointeronly *)(g[5].p))->data[g[2].i]);
vp->tag = g[3].tag;
vp->p = g[3].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_5_2_4:
{
value *vp = &(((pointeronly *)(g[5].p))->data[g[2].i]);
vp->tag = g[4].tag;
vp->p = g[4].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_5_2_5:
{
value *vp = &(((pointeronly *)(g[5].p))->data[g[2].i]);
vp->tag = g[5].tag;
vp->p = g[5].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_5_3_0:
{
value *vp = &(((pointeronly *)(g[5].p))->data[g[3].i]);
vp->tag = g[0].tag;
vp->p = g[0].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_5_3_1:
{
value *vp = &(((pointeronly *)(g[5].p))->data[g[3].i]);
vp->tag = g[1].tag;
vp->p = g[1].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_5_3_2:
{
value *vp = &(((pointeronly *)(g[5].p))->data[g[3].i]);
vp->tag = g[2].tag;
vp->p = g[2].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_5_3_3:
{
value *vp = &(((pointeronly *)(g[5].p))->data[g[3].i]);
vp->tag = g[3].tag;
vp->p = g[3].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_5_3_4:
{
value *vp = &(((pointeronly *)(g[5].p))->data[g[3].i]);
vp->tag = g[4].tag;
vp->p = g[4].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_5_3_5:
{
value *vp = &(((pointeronly *)(g[5].p))->data[g[3].i]);
vp->tag = g[5].tag;
vp->p = g[5].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_5_4_0:
{
value *vp = &(((pointeronly *)(g[5].p))->data[g[4].i]);
vp->tag = g[0].tag;
vp->p = g[0].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_5_4_1:
{
value *vp = &(((pointeronly *)(g[5].p))->data[g[4].i]);
vp->tag = g[1].tag;
vp->p = g[1].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_5_4_2:
{
value *vp = &(((pointeronly *)(g[5].p))->data[g[4].i]);
vp->tag = g[2].tag;
vp->p = g[2].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_5_4_3:
{
value *vp = &(((pointeronly *)(g[5].p))->data[g[4].i]);
vp->tag = g[3].tag;
vp->p = g[3].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_5_4_4:
{
value *vp = &(((pointeronly *)(g[5].p))->data[g[4].i]);
vp->tag = g[4].tag;
vp->p = g[4].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_5_4_5:
{
value *vp = &(((pointeronly *)(g[5].p))->data[g[4].i]);
vp->tag = g[5].tag;
vp->p = g[5].p;
goto *dynOpcodes[ts + program[pc]];
}

getb_0_0_1:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[1].i];
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_0_0_2:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[2].i];
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_0_0_3:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[3].i];
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_0_0_4:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[4].i];
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_0_0_5:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[5].i];
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_0_1_0:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[0].i];
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_0_1_2:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[2].i];
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_0_1_3:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[3].i];
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_0_1_4:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[4].i];
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_0_1_5:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[5].i];
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_0_2_0:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[0].i];
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_0_2_1:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[1].i];
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_0_2_3:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[3].i];
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_0_2_4:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[4].i];
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_0_2_5:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[5].i];
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_0_3_0:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[0].i];
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_0_3_1:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[1].i];
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_0_3_2:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[2].i];
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_0_3_4:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[4].i];
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_0_3_5:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[5].i];
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_0_4_0:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[0].i];
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_0_4_1:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[1].i];
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_0_4_2:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[2].i];
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_0_4_3:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[3].i];
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_0_4_5:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[5].i];
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_0_5_0:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[0].i];
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_0_5_1:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[1].i];
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_0_5_2:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[2].i];
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_0_5_3:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[3].i];
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_0_5_4:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[4].i];
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_1_0_1:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[1].i];
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_1_0_2:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[2].i];
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_1_0_3:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[3].i];
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_1_0_4:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[4].i];
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_1_0_5:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[5].i];
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_1_1_0:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[0].i];
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_1_1_2:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[2].i];
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_1_1_3:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[3].i];
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_1_1_4:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[4].i];
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_1_1_5:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[5].i];
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_1_2_0:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[0].i];
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_1_2_1:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[1].i];
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_1_2_3:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[3].i];
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_1_2_4:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[4].i];
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_1_2_5:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[5].i];
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_1_3_0:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[0].i];
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_1_3_1:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[1].i];
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_1_3_2:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[2].i];
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_1_3_4:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[4].i];
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_1_3_5:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[5].i];
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_1_4_0:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[0].i];
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_1_4_1:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[1].i];
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_1_4_2:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[2].i];
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_1_4_3:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[3].i];
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_1_4_5:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[5].i];
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_1_5_0:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[0].i];
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_1_5_1:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[1].i];
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_1_5_2:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[2].i];
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_1_5_3:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[3].i];
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_1_5_4:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[4].i];
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_2_0_1:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[1].i];
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_2_0_2:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[2].i];
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_2_0_3:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[3].i];
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_2_0_4:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[4].i];
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_2_0_5:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[5].i];
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_2_1_0:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[0].i];
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_2_1_2:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[2].i];
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_2_1_3:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[3].i];
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_2_1_4:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[4].i];
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_2_1_5:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[5].i];
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_2_2_0:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[0].i];
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_2_2_1:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[1].i];
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_2_2_3:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[3].i];
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_2_2_4:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[4].i];
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_2_2_5:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[5].i];
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_2_3_0:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[0].i];
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_2_3_1:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[1].i];
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_2_3_2:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[2].i];
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_2_3_4:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[4].i];
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_2_3_5:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[5].i];
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_2_4_0:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[0].i];
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_2_4_1:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[1].i];
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_2_4_2:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[2].i];
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_2_4_3:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[3].i];
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_2_4_5:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[5].i];
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_2_5_0:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[0].i];
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_2_5_1:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[1].i];
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_2_5_2:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[2].i];
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_2_5_3:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[3].i];
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_2_5_4:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[4].i];
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_3_0_1:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[1].i];
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_3_0_2:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[2].i];
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_3_0_3:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[3].i];
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_3_0_4:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[4].i];
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_3_0_5:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[5].i];
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_3_1_0:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[0].i];
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_3_1_2:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[2].i];
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_3_1_3:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[3].i];
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_3_1_4:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[4].i];
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_3_1_5:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[5].i];
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_3_2_0:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[0].i];
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_3_2_1:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[1].i];
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_3_2_3:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[3].i];
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_3_2_4:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[4].i];
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_3_2_5:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[5].i];
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_3_3_0:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[0].i];
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_3_3_1:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[1].i];
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_3_3_2:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[2].i];
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_3_3_4:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[4].i];
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_3_3_5:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[5].i];
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_3_4_0:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[0].i];
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_3_4_1:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[1].i];
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_3_4_2:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[2].i];
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_3_4_3:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[3].i];
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_3_4_5:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[5].i];
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_3_5_0:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[0].i];
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_3_5_1:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[1].i];
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_3_5_2:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[2].i];
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_3_5_3:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[3].i];
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_3_5_4:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[4].i];
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_4_0_1:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[1].i];
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_4_0_2:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[2].i];
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_4_0_3:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[3].i];
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_4_0_4:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[4].i];
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_4_0_5:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[5].i];
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_4_1_0:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[0].i];
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_4_1_2:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[2].i];
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_4_1_3:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[3].i];
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_4_1_4:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[4].i];
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_4_1_5:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[5].i];
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_4_2_0:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[0].i];
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_4_2_1:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[1].i];
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_4_2_3:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[3].i];
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_4_2_4:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[4].i];
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_4_2_5:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[5].i];
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_4_3_0:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[0].i];
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_4_3_1:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[1].i];
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_4_3_2:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[2].i];
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_4_3_4:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[4].i];
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_4_3_5:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[5].i];
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_4_4_0:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[0].i];
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_4_4_1:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[1].i];
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_4_4_2:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[2].i];
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_4_4_3:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[3].i];
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_4_4_5:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[5].i];
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_4_5_0:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[0].i];
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_4_5_1:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[1].i];
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_4_5_2:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[2].i];
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_4_5_3:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[3].i];
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_4_5_4:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[4].i];
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_5_0_1:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[1].i];
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_5_0_2:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[2].i];
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_5_0_3:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[3].i];
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_5_0_4:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[4].i];
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_5_0_5:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[5].i];
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_5_1_0:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[0].i];
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_5_1_2:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[2].i];
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_5_1_3:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[3].i];
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_5_1_4:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[4].i];
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_5_1_5:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[5].i];
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_5_2_0:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[0].i];
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_5_2_1:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[1].i];
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_5_2_3:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[3].i];
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_5_2_4:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[4].i];
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_5_2_5:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[5].i];
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_5_3_0:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[0].i];
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_5_3_1:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[1].i];
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_5_3_2:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[2].i];
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_5_3_4:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[4].i];
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_5_3_5:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[5].i];
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_5_4_0:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[0].i];
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_5_4_1:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[1].i];
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_5_4_2:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[2].i];
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_5_4_3:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[3].i];
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_5_4_5:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[5].i];
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_5_5_0:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[0].i];
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_5_5_1:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[1].i];
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_5_5_2:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[2].i];
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_5_5_3:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[3].i];
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_5_5_4:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[4].i];
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_0_0_1:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[1].i];
g[0].tag = 0;
ts |= 0x1f /*011111*/;
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_0_0_2:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[2].i];
g[0].tag = 0;
ts |= 0x1f /*011111*/;
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_0_0_3:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[3].i];
g[0].tag = 0;
ts |= 0x1f /*011111*/;
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_0_0_4:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[4].i];
g[0].tag = 0;
ts |= 0x1f /*011111*/;
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_0_0_5:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[5].i];
g[0].tag = 0;
ts |= 0x1f /*011111*/;
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_0_1_0:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[0].i];
g[0].tag = 0;
ts |= 0x1f /*011111*/;
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_0_1_2:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[2].i];
g[0].tag = 0;
ts |= 0x1f /*011111*/;
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_0_1_3:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[3].i];
g[0].tag = 0;
ts |= 0x1f /*011111*/;
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_0_1_4:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[4].i];
g[0].tag = 0;
ts |= 0x1f /*011111*/;
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_0_1_5:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[5].i];
g[0].tag = 0;
ts |= 0x1f /*011111*/;
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_0_2_0:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[0].i];
g[0].tag = 0;
ts |= 0x1f /*011111*/;
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_0_2_1:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[1].i];
g[0].tag = 0;
ts |= 0x1f /*011111*/;
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_0_2_3:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[3].i];
g[0].tag = 0;
ts |= 0x1f /*011111*/;
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_0_2_4:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[4].i];
g[0].tag = 0;
ts |= 0x1f /*011111*/;
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_0_2_5:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[5].i];
g[0].tag = 0;
ts |= 0x1f /*011111*/;
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_0_3_0:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[0].i];
g[0].tag = 0;
ts |= 0x1f /*011111*/;
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_0_3_1:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[1].i];
g[0].tag = 0;
ts |= 0x1f /*011111*/;
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_0_3_2:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[2].i];
g[0].tag = 0;
ts |= 0x1f /*011111*/;
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_0_3_4:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[4].i];
g[0].tag = 0;
ts |= 0x1f /*011111*/;
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_0_3_5:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[5].i];
g[0].tag = 0;
ts |= 0x1f /*011111*/;
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_0_4_0:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[0].i];
g[0].tag = 0;
ts |= 0x1f /*011111*/;
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_0_4_1:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[1].i];
g[0].tag = 0;
ts |= 0x1f /*011111*/;
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_0_4_2:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[2].i];
g[0].tag = 0;
ts |= 0x1f /*011111*/;
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_0_4_3:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[3].i];
g[0].tag = 0;
ts |= 0x1f /*011111*/;
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_0_4_5:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[5].i];
g[0].tag = 0;
ts |= 0x1f /*011111*/;
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_0_5_0:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[0].i];
g[0].tag = 0;
ts |= 0x1f /*011111*/;
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_0_5_1:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[1].i];
g[0].tag = 0;
ts |= 0x1f /*011111*/;
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_0_5_2:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[2].i];
g[0].tag = 0;
ts |= 0x1f /*011111*/;
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_0_5_3:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[3].i];
g[0].tag = 0;
ts |= 0x1f /*011111*/;
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_0_5_4:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[4].i];
g[0].tag = 0;
ts |= 0x1f /*011111*/;
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_1_0_1:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[1].i];
g[1].tag = 0;
ts |= 0x2f /*101111*/;
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_1_0_2:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[2].i];
g[1].tag = 0;
ts |= 0x2f /*101111*/;
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_1_0_3:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[3].i];
g[1].tag = 0;
ts |= 0x2f /*101111*/;
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_1_0_4:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[4].i];
g[1].tag = 0;
ts |= 0x2f /*101111*/;
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_1_0_5:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[5].i];
g[1].tag = 0;
ts |= 0x2f /*101111*/;
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_1_1_0:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[0].i];
g[1].tag = 0;
ts |= 0x2f /*101111*/;
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_1_1_2:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[2].i];
g[1].tag = 0;
ts |= 0x2f /*101111*/;
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_1_1_3:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[3].i];
g[1].tag = 0;
ts |= 0x2f /*101111*/;
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_1_1_4:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[4].i];
g[1].tag = 0;
ts |= 0x2f /*101111*/;
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_1_1_5:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[5].i];
g[1].tag = 0;
ts |= 0x2f /*101111*/;
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_1_2_0:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[0].i];
g[1].tag = 0;
ts |= 0x2f /*101111*/;
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_1_2_1:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[1].i];
g[1].tag = 0;
ts |= 0x2f /*101111*/;
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_1_2_3:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[3].i];
g[1].tag = 0;
ts |= 0x2f /*101111*/;
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_1_2_4:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[4].i];
g[1].tag = 0;
ts |= 0x2f /*101111*/;
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_1_2_5:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[5].i];
g[1].tag = 0;
ts |= 0x2f /*101111*/;
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_1_3_0:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[0].i];
g[1].tag = 0;
ts |= 0x2f /*101111*/;
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_1_3_1:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[1].i];
g[1].tag = 0;
ts |= 0x2f /*101111*/;
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_1_3_2:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[2].i];
g[1].tag = 0;
ts |= 0x2f /*101111*/;
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_1_3_4:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[4].i];
g[1].tag = 0;
ts |= 0x2f /*101111*/;
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_1_3_5:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[5].i];
g[1].tag = 0;
ts |= 0x2f /*101111*/;
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_1_4_0:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[0].i];
g[1].tag = 0;
ts |= 0x2f /*101111*/;
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_1_4_1:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[1].i];
g[1].tag = 0;
ts |= 0x2f /*101111*/;
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_1_4_2:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[2].i];
g[1].tag = 0;
ts |= 0x2f /*101111*/;
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_1_4_3:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[3].i];
g[1].tag = 0;
ts |= 0x2f /*101111*/;
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_1_4_5:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[5].i];
g[1].tag = 0;
ts |= 0x2f /*101111*/;
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_1_5_0:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[0].i];
g[1].tag = 0;
ts |= 0x2f /*101111*/;
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_1_5_1:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[1].i];
g[1].tag = 0;
ts |= 0x2f /*101111*/;
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_1_5_2:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[2].i];
g[1].tag = 0;
ts |= 0x2f /*101111*/;
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_1_5_3:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[3].i];
g[1].tag = 0;
ts |= 0x2f /*101111*/;
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_1_5_4:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[4].i];
g[1].tag = 0;
ts |= 0x2f /*101111*/;
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_2_0_1:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[1].i];
g[2].tag = 0;
ts |= 0x37 /*110111*/;
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_2_0_2:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[2].i];
g[2].tag = 0;
ts |= 0x37 /*110111*/;
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_2_0_3:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[3].i];
g[2].tag = 0;
ts |= 0x37 /*110111*/;
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_2_0_4:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[4].i];
g[2].tag = 0;
ts |= 0x37 /*110111*/;
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_2_0_5:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[5].i];
g[2].tag = 0;
ts |= 0x37 /*110111*/;
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_2_1_0:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[0].i];
g[2].tag = 0;
ts |= 0x37 /*110111*/;
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_2_1_2:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[2].i];
g[2].tag = 0;
ts |= 0x37 /*110111*/;
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_2_1_3:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[3].i];
g[2].tag = 0;
ts |= 0x37 /*110111*/;
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_2_1_4:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[4].i];
g[2].tag = 0;
ts |= 0x37 /*110111*/;
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_2_1_5:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[5].i];
g[2].tag = 0;
ts |= 0x37 /*110111*/;
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_2_2_0:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[0].i];
g[2].tag = 0;
ts |= 0x37 /*110111*/;
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_2_2_1:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[1].i];
g[2].tag = 0;
ts |= 0x37 /*110111*/;
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_2_2_3:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[3].i];
g[2].tag = 0;
ts |= 0x37 /*110111*/;
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_2_2_4:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[4].i];
g[2].tag = 0;
ts |= 0x37 /*110111*/;
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_2_2_5:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[5].i];
g[2].tag = 0;
ts |= 0x37 /*110111*/;
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_2_3_0:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[0].i];
g[2].tag = 0;
ts |= 0x37 /*110111*/;
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_2_3_1:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[1].i];
g[2].tag = 0;
ts |= 0x37 /*110111*/;
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_2_3_2:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[2].i];
g[2].tag = 0;
ts |= 0x37 /*110111*/;
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_2_3_4:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[4].i];
g[2].tag = 0;
ts |= 0x37 /*110111*/;
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_2_3_5:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[5].i];
g[2].tag = 0;
ts |= 0x37 /*110111*/;
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_2_4_0:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[0].i];
g[2].tag = 0;
ts |= 0x37 /*110111*/;
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_2_4_1:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[1].i];
g[2].tag = 0;
ts |= 0x37 /*110111*/;
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_2_4_2:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[2].i];
g[2].tag = 0;
ts |= 0x37 /*110111*/;
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_2_4_3:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[3].i];
g[2].tag = 0;
ts |= 0x37 /*110111*/;
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_2_4_5:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[5].i];
g[2].tag = 0;
ts |= 0x37 /*110111*/;
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_2_5_0:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[0].i];
g[2].tag = 0;
ts |= 0x37 /*110111*/;
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_2_5_1:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[1].i];
g[2].tag = 0;
ts |= 0x37 /*110111*/;
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_2_5_2:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[2].i];
g[2].tag = 0;
ts |= 0x37 /*110111*/;
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_2_5_3:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[3].i];
g[2].tag = 0;
ts |= 0x37 /*110111*/;
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_2_5_4:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[4].i];
g[2].tag = 0;
ts |= 0x37 /*110111*/;
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_3_0_1:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[1].i];
g[3].tag = 0;
ts |= 0x3b /*111011*/;
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_3_0_2:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[2].i];
g[3].tag = 0;
ts |= 0x3b /*111011*/;
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_3_0_3:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[3].i];
g[3].tag = 0;
ts |= 0x3b /*111011*/;
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_3_0_4:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[4].i];
g[3].tag = 0;
ts |= 0x3b /*111011*/;
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_3_0_5:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[5].i];
g[3].tag = 0;
ts |= 0x3b /*111011*/;
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_3_1_0:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[0].i];
g[3].tag = 0;
ts |= 0x3b /*111011*/;
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_3_1_2:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[2].i];
g[3].tag = 0;
ts |= 0x3b /*111011*/;
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_3_1_3:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[3].i];
g[3].tag = 0;
ts |= 0x3b /*111011*/;
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_3_1_4:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[4].i];
g[3].tag = 0;
ts |= 0x3b /*111011*/;
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_3_1_5:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[5].i];
g[3].tag = 0;
ts |= 0x3b /*111011*/;
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_3_2_0:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[0].i];
g[3].tag = 0;
ts |= 0x3b /*111011*/;
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_3_2_1:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[1].i];
g[3].tag = 0;
ts |= 0x3b /*111011*/;
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_3_2_3:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[3].i];
g[3].tag = 0;
ts |= 0x3b /*111011*/;
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_3_2_4:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[4].i];
g[3].tag = 0;
ts |= 0x3b /*111011*/;
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_3_2_5:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[5].i];
g[3].tag = 0;
ts |= 0x3b /*111011*/;
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_3_3_0:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[0].i];
g[3].tag = 0;
ts |= 0x3b /*111011*/;
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_3_3_1:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[1].i];
g[3].tag = 0;
ts |= 0x3b /*111011*/;
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_3_3_2:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[2].i];
g[3].tag = 0;
ts |= 0x3b /*111011*/;
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_3_3_4:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[4].i];
g[3].tag = 0;
ts |= 0x3b /*111011*/;
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_3_3_5:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[5].i];
g[3].tag = 0;
ts |= 0x3b /*111011*/;
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_3_4_0:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[0].i];
g[3].tag = 0;
ts |= 0x3b /*111011*/;
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_3_4_1:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[1].i];
g[3].tag = 0;
ts |= 0x3b /*111011*/;
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_3_4_2:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[2].i];
g[3].tag = 0;
ts |= 0x3b /*111011*/;
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_3_4_3:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[3].i];
g[3].tag = 0;
ts |= 0x3b /*111011*/;
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_3_4_5:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[5].i];
g[3].tag = 0;
ts |= 0x3b /*111011*/;
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_3_5_0:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[0].i];
g[3].tag = 0;
ts |= 0x3b /*111011*/;
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_3_5_1:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[1].i];
g[3].tag = 0;
ts |= 0x3b /*111011*/;
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_3_5_2:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[2].i];
g[3].tag = 0;
ts |= 0x3b /*111011*/;
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_3_5_3:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[3].i];
g[3].tag = 0;
ts |= 0x3b /*111011*/;
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_3_5_4:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[4].i];
g[3].tag = 0;
ts |= 0x3b /*111011*/;
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_4_0_1:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[1].i];
g[4].tag = 0;
ts |= 0x3d /*111101*/;
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_4_0_2:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[2].i];
g[4].tag = 0;
ts |= 0x3d /*111101*/;
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_4_0_3:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[3].i];
g[4].tag = 0;
ts |= 0x3d /*111101*/;
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_4_0_4:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[4].i];
g[4].tag = 0;
ts |= 0x3d /*111101*/;
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_4_0_5:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[5].i];
g[4].tag = 0;
ts |= 0x3d /*111101*/;
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_4_1_0:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[0].i];
g[4].tag = 0;
ts |= 0x3d /*111101*/;
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_4_1_2:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[2].i];
g[4].tag = 0;
ts |= 0x3d /*111101*/;
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_4_1_3:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[3].i];
g[4].tag = 0;
ts |= 0x3d /*111101*/;
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_4_1_4:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[4].i];
g[4].tag = 0;
ts |= 0x3d /*111101*/;
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_4_1_5:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[5].i];
g[4].tag = 0;
ts |= 0x3d /*111101*/;
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_4_2_0:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[0].i];
g[4].tag = 0;
ts |= 0x3d /*111101*/;
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_4_2_1:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[1].i];
g[4].tag = 0;
ts |= 0x3d /*111101*/;
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_4_2_3:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[3].i];
g[4].tag = 0;
ts |= 0x3d /*111101*/;
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_4_2_4:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[4].i];
g[4].tag = 0;
ts |= 0x3d /*111101*/;
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_4_2_5:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[5].i];
g[4].tag = 0;
ts |= 0x3d /*111101*/;
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_4_3_0:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[0].i];
g[4].tag = 0;
ts |= 0x3d /*111101*/;
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_4_3_1:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[1].i];
g[4].tag = 0;
ts |= 0x3d /*111101*/;
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_4_3_2:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[2].i];
g[4].tag = 0;
ts |= 0x3d /*111101*/;
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_4_3_4:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[4].i];
g[4].tag = 0;
ts |= 0x3d /*111101*/;
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_4_3_5:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[5].i];
g[4].tag = 0;
ts |= 0x3d /*111101*/;
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_4_4_0:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[0].i];
g[4].tag = 0;
ts |= 0x3d /*111101*/;
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_4_4_1:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[1].i];
g[4].tag = 0;
ts |= 0x3d /*111101*/;
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_4_4_2:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[2].i];
g[4].tag = 0;
ts |= 0x3d /*111101*/;
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_4_4_3:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[3].i];
g[4].tag = 0;
ts |= 0x3d /*111101*/;
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_4_4_5:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[5].i];
g[4].tag = 0;
ts |= 0x3d /*111101*/;
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_4_5_0:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[0].i];
g[4].tag = 0;
ts |= 0x3d /*111101*/;
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_4_5_1:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[1].i];
g[4].tag = 0;
ts |= 0x3d /*111101*/;
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_4_5_2:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[2].i];
g[4].tag = 0;
ts |= 0x3d /*111101*/;
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_4_5_3:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[3].i];
g[4].tag = 0;
ts |= 0x3d /*111101*/;
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_4_5_4:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[4].i];
g[4].tag = 0;
ts |= 0x3d /*111101*/;
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_5_0_1:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[1].i];
g[5].tag = 0;
ts |= 0x3e /*111110*/;
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_5_0_2:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[2].i];
g[5].tag = 0;
ts |= 0x3e /*111110*/;
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_5_0_3:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[3].i];
g[5].tag = 0;
ts |= 0x3e /*111110*/;
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_5_0_4:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[4].i];
g[5].tag = 0;
ts |= 0x3e /*111110*/;
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_5_0_5:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[5].i];
g[5].tag = 0;
ts |= 0x3e /*111110*/;
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_5_1_0:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[0].i];
g[5].tag = 0;
ts |= 0x3e /*111110*/;
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_5_1_2:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[2].i];
g[5].tag = 0;
ts |= 0x3e /*111110*/;
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_5_1_3:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[3].i];
g[5].tag = 0;
ts |= 0x3e /*111110*/;
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_5_1_4:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[4].i];
g[5].tag = 0;
ts |= 0x3e /*111110*/;
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_5_1_5:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[5].i];
g[5].tag = 0;
ts |= 0x3e /*111110*/;
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_5_2_0:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[0].i];
g[5].tag = 0;
ts |= 0x3e /*111110*/;
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_5_2_1:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[1].i];
g[5].tag = 0;
ts |= 0x3e /*111110*/;
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_5_2_3:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[3].i];
g[5].tag = 0;
ts |= 0x3e /*111110*/;
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_5_2_4:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[4].i];
g[5].tag = 0;
ts |= 0x3e /*111110*/;
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_5_2_5:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[5].i];
g[5].tag = 0;
ts |= 0x3e /*111110*/;
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_5_3_0:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[0].i];
g[5].tag = 0;
ts |= 0x3e /*111110*/;
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_5_3_1:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[1].i];
g[5].tag = 0;
ts |= 0x3e /*111110*/;
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_5_3_2:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[2].i];
g[5].tag = 0;
ts |= 0x3e /*111110*/;
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_5_3_4:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[4].i];
g[5].tag = 0;
ts |= 0x3e /*111110*/;
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_5_3_5:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[5].i];
g[5].tag = 0;
ts |= 0x3e /*111110*/;
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_5_4_0:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[0].i];
g[5].tag = 0;
ts |= 0x3e /*111110*/;
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_5_4_1:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[1].i];
g[5].tag = 0;
ts |= 0x3e /*111110*/;
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_5_4_2:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[2].i];
g[5].tag = 0;
ts |= 0x3e /*111110*/;
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_5_4_3:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[3].i];
g[5].tag = 0;
ts |= 0x3e /*111110*/;
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_5_4_5:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[5].i];
g[5].tag = 0;
ts |= 0x3e /*111110*/;
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_5_5_0:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[0].i];
g[5].tag = 0;
ts |= 0x3e /*111110*/;
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_5_5_1:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[1].i];
g[5].tag = 0;
ts |= 0x3e /*111110*/;
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_5_5_2:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[2].i];
g[5].tag = 0;
ts |= 0x3e /*111110*/;
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_5_5_3:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[3].i];
g[5].tag = 0;
ts |= 0x3e /*111110*/;
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_5_5_4:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[4].i];
g[5].tag = 0;
ts |= 0x3e /*111110*/;
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

setb_0_0_1:
{
uint8_t *vp = &(((buffer *)(g[0].p))->data[g[0].i]);
*vp = g[0].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_0_0_2:
{
uint8_t *vp = &(((buffer *)(g[0].p))->data[g[0].i]);
*vp = g[0].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_0_0_3:
{
uint8_t *vp = &(((buffer *)(g[0].p))->data[g[0].i]);
*vp = g[0].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_0_0_4:
{
uint8_t *vp = &(((buffer *)(g[0].p))->data[g[0].i]);
*vp = g[0].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_0_0_5:
{
uint8_t *vp = &(((buffer *)(g[0].p))->data[g[0].i]);
*vp = g[0].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_0_1_0:
{
uint8_t *vp = &(((buffer *)(g[0].p))->data[g[1].i]);
*vp = g[0].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_0_1_2:
{
uint8_t *vp = &(((buffer *)(g[0].p))->data[g[1].i]);
*vp = g[0].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_0_1_3:
{
uint8_t *vp = &(((buffer *)(g[0].p))->data[g[1].i]);
*vp = g[0].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_0_1_4:
{
uint8_t *vp = &(((buffer *)(g[0].p))->data[g[1].i]);
*vp = g[0].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_0_1_5:
{
uint8_t *vp = &(((buffer *)(g[0].p))->data[g[1].i]);
*vp = g[0].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_0_2_0:
{
uint8_t *vp = &(((buffer *)(g[0].p))->data[g[2].i]);
*vp = g[0].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_0_2_1:
{
uint8_t *vp = &(((buffer *)(g[0].p))->data[g[2].i]);
*vp = g[0].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_0_2_3:
{
uint8_t *vp = &(((buffer *)(g[0].p))->data[g[2].i]);
*vp = g[0].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_0_2_4:
{
uint8_t *vp = &(((buffer *)(g[0].p))->data[g[2].i]);
*vp = g[0].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_0_2_5:
{
uint8_t *vp = &(((buffer *)(g[0].p))->data[g[2].i]);
*vp = g[0].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_0_3_0:
{
uint8_t *vp = &(((buffer *)(g[0].p))->data[g[3].i]);
*vp = g[0].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_0_3_1:
{
uint8_t *vp = &(((buffer *)(g[0].p))->data[g[3].i]);
*vp = g[0].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_0_3_2:
{
uint8_t *vp = &(((buffer *)(g[0].p))->data[g[3].i]);
*vp = g[0].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_0_3_4:
{
uint8_t *vp = &(((buffer *)(g[0].p))->data[g[3].i]);
*vp = g[0].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_0_3_5:
{
uint8_t *vp = &(((buffer *)(g[0].p))->data[g[3].i]);
*vp = g[0].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_0_4_0:
{
uint8_t *vp = &(((buffer *)(g[0].p))->data[g[4].i]);
*vp = g[0].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_0_4_1:
{
uint8_t *vp = &(((buffer *)(g[0].p))->data[g[4].i]);
*vp = g[0].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_0_4_2:
{
uint8_t *vp = &(((buffer *)(g[0].p))->data[g[4].i]);
*vp = g[0].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_0_4_3:
{
uint8_t *vp = &(((buffer *)(g[0].p))->data[g[4].i]);
*vp = g[0].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_0_4_5:
{
uint8_t *vp = &(((buffer *)(g[0].p))->data[g[4].i]);
*vp = g[0].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_0_5_0:
{
uint8_t *vp = &(((buffer *)(g[0].p))->data[g[5].i]);
*vp = g[0].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_0_5_1:
{
uint8_t *vp = &(((buffer *)(g[0].p))->data[g[5].i]);
*vp = g[0].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_0_5_2:
{
uint8_t *vp = &(((buffer *)(g[0].p))->data[g[5].i]);
*vp = g[0].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_0_5_3:
{
uint8_t *vp = &(((buffer *)(g[0].p))->data[g[5].i]);
*vp = g[0].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_0_5_4:
{
uint8_t *vp = &(((buffer *)(g[0].p))->data[g[5].i]);
*vp = g[0].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_1_0_1:
{
uint8_t *vp = &(((buffer *)(g[1].p))->data[g[0].i]);
*vp = g[1].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_1_0_2:
{
uint8_t *vp = &(((buffer *)(g[1].p))->data[g[0].i]);
*vp = g[1].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_1_0_3:
{
uint8_t *vp = &(((buffer *)(g[1].p))->data[g[0].i]);
*vp = g[1].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_1_0_4:
{
uint8_t *vp = &(((buffer *)(g[1].p))->data[g[0].i]);
*vp = g[1].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_1_0_5:
{
uint8_t *vp = &(((buffer *)(g[1].p))->data[g[0].i]);
*vp = g[1].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_1_1_0:
{
uint8_t *vp = &(((buffer *)(g[1].p))->data[g[1].i]);
*vp = g[1].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_1_1_2:
{
uint8_t *vp = &(((buffer *)(g[1].p))->data[g[1].i]);
*vp = g[1].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_1_1_3:
{
uint8_t *vp = &(((buffer *)(g[1].p))->data[g[1].i]);
*vp = g[1].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_1_1_4:
{
uint8_t *vp = &(((buffer *)(g[1].p))->data[g[1].i]);
*vp = g[1].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_1_1_5:
{
uint8_t *vp = &(((buffer *)(g[1].p))->data[g[1].i]);
*vp = g[1].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_1_2_0:
{
uint8_t *vp = &(((buffer *)(g[1].p))->data[g[2].i]);
*vp = g[1].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_1_2_1:
{
uint8_t *vp = &(((buffer *)(g[1].p))->data[g[2].i]);
*vp = g[1].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_1_2_3:
{
uint8_t *vp = &(((buffer *)(g[1].p))->data[g[2].i]);
*vp = g[1].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_1_2_4:
{
uint8_t *vp = &(((buffer *)(g[1].p))->data[g[2].i]);
*vp = g[1].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_1_2_5:
{
uint8_t *vp = &(((buffer *)(g[1].p))->data[g[2].i]);
*vp = g[1].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_1_3_0:
{
uint8_t *vp = &(((buffer *)(g[1].p))->data[g[3].i]);
*vp = g[1].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_1_3_1:
{
uint8_t *vp = &(((buffer *)(g[1].p))->data[g[3].i]);
*vp = g[1].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_1_3_2:
{
uint8_t *vp = &(((buffer *)(g[1].p))->data[g[3].i]);
*vp = g[1].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_1_3_4:
{
uint8_t *vp = &(((buffer *)(g[1].p))->data[g[3].i]);
*vp = g[1].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_1_3_5:
{
uint8_t *vp = &(((buffer *)(g[1].p))->data[g[3].i]);
*vp = g[1].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_1_4_0:
{
uint8_t *vp = &(((buffer *)(g[1].p))->data[g[4].i]);
*vp = g[1].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_1_4_1:
{
uint8_t *vp = &(((buffer *)(g[1].p))->data[g[4].i]);
*vp = g[1].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_1_4_2:
{
uint8_t *vp = &(((buffer *)(g[1].p))->data[g[4].i]);
*vp = g[1].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_1_4_3:
{
uint8_t *vp = &(((buffer *)(g[1].p))->data[g[4].i]);
*vp = g[1].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_1_4_5:
{
uint8_t *vp = &(((buffer *)(g[1].p))->data[g[4].i]);
*vp = g[1].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_1_5_0:
{
uint8_t *vp = &(((buffer *)(g[1].p))->data[g[5].i]);
*vp = g[1].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_1_5_1:
{
uint8_t *vp = &(((buffer *)(g[1].p))->data[g[5].i]);
*vp = g[1].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_1_5_2:
{
uint8_t *vp = &(((buffer *)(g[1].p))->data[g[5].i]);
*vp = g[1].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_1_5_3:
{
uint8_t *vp = &(((buffer *)(g[1].p))->data[g[5].i]);
*vp = g[1].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_1_5_4:
{
uint8_t *vp = &(((buffer *)(g[1].p))->data[g[5].i]);
*vp = g[1].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_2_0_1:
{
uint8_t *vp = &(((buffer *)(g[2].p))->data[g[0].i]);
*vp = g[2].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_2_0_2:
{
uint8_t *vp = &(((buffer *)(g[2].p))->data[g[0].i]);
*vp = g[2].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_2_0_3:
{
uint8_t *vp = &(((buffer *)(g[2].p))->data[g[0].i]);
*vp = g[2].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_2_0_4:
{
uint8_t *vp = &(((buffer *)(g[2].p))->data[g[0].i]);
*vp = g[2].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_2_0_5:
{
uint8_t *vp = &(((buffer *)(g[2].p))->data[g[0].i]);
*vp = g[2].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_2_1_0:
{
uint8_t *vp = &(((buffer *)(g[2].p))->data[g[1].i]);
*vp = g[2].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_2_1_2:
{
uint8_t *vp = &(((buffer *)(g[2].p))->data[g[1].i]);
*vp = g[2].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_2_1_3:
{
uint8_t *vp = &(((buffer *)(g[2].p))->data[g[1].i]);
*vp = g[2].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_2_1_4:
{
uint8_t *vp = &(((buffer *)(g[2].p))->data[g[1].i]);
*vp = g[2].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_2_1_5:
{
uint8_t *vp = &(((buffer *)(g[2].p))->data[g[1].i]);
*vp = g[2].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_2_2_0:
{
uint8_t *vp = &(((buffer *)(g[2].p))->data[g[2].i]);
*vp = g[2].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_2_2_1:
{
uint8_t *vp = &(((buffer *)(g[2].p))->data[g[2].i]);
*vp = g[2].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_2_2_3:
{
uint8_t *vp = &(((buffer *)(g[2].p))->data[g[2].i]);
*vp = g[2].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_2_2_4:
{
uint8_t *vp = &(((buffer *)(g[2].p))->data[g[2].i]);
*vp = g[2].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_2_2_5:
{
uint8_t *vp = &(((buffer *)(g[2].p))->data[g[2].i]);
*vp = g[2].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_2_3_0:
{
uint8_t *vp = &(((buffer *)(g[2].p))->data[g[3].i]);
*vp = g[2].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_2_3_1:
{
uint8_t *vp = &(((buffer *)(g[2].p))->data[g[3].i]);
*vp = g[2].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_2_3_2:
{
uint8_t *vp = &(((buffer *)(g[2].p))->data[g[3].i]);
*vp = g[2].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_2_3_4:
{
uint8_t *vp = &(((buffer *)(g[2].p))->data[g[3].i]);
*vp = g[2].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_2_3_5:
{
uint8_t *vp = &(((buffer *)(g[2].p))->data[g[3].i]);
*vp = g[2].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_2_4_0:
{
uint8_t *vp = &(((buffer *)(g[2].p))->data[g[4].i]);
*vp = g[2].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_2_4_1:
{
uint8_t *vp = &(((buffer *)(g[2].p))->data[g[4].i]);
*vp = g[2].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_2_4_2:
{
uint8_t *vp = &(((buffer *)(g[2].p))->data[g[4].i]);
*vp = g[2].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_2_4_3:
{
uint8_t *vp = &(((buffer *)(g[2].p))->data[g[4].i]);
*vp = g[2].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_2_4_5:
{
uint8_t *vp = &(((buffer *)(g[2].p))->data[g[4].i]);
*vp = g[2].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_2_5_0:
{
uint8_t *vp = &(((buffer *)(g[2].p))->data[g[5].i]);
*vp = g[2].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_2_5_1:
{
uint8_t *vp = &(((buffer *)(g[2].p))->data[g[5].i]);
*vp = g[2].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_2_5_2:
{
uint8_t *vp = &(((buffer *)(g[2].p))->data[g[5].i]);
*vp = g[2].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_2_5_3:
{
uint8_t *vp = &(((buffer *)(g[2].p))->data[g[5].i]);
*vp = g[2].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_2_5_4:
{
uint8_t *vp = &(((buffer *)(g[2].p))->data[g[5].i]);
*vp = g[2].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_3_0_1:
{
uint8_t *vp = &(((buffer *)(g[3].p))->data[g[0].i]);
*vp = g[3].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_3_0_2:
{
uint8_t *vp = &(((buffer *)(g[3].p))->data[g[0].i]);
*vp = g[3].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_3_0_3:
{
uint8_t *vp = &(((buffer *)(g[3].p))->data[g[0].i]);
*vp = g[3].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_3_0_4:
{
uint8_t *vp = &(((buffer *)(g[3].p))->data[g[0].i]);
*vp = g[3].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_3_0_5:
{
uint8_t *vp = &(((buffer *)(g[3].p))->data[g[0].i]);
*vp = g[3].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_3_1_0:
{
uint8_t *vp = &(((buffer *)(g[3].p))->data[g[1].i]);
*vp = g[3].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_3_1_2:
{
uint8_t *vp = &(((buffer *)(g[3].p))->data[g[1].i]);
*vp = g[3].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_3_1_3:
{
uint8_t *vp = &(((buffer *)(g[3].p))->data[g[1].i]);
*vp = g[3].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_3_1_4:
{
uint8_t *vp = &(((buffer *)(g[3].p))->data[g[1].i]);
*vp = g[3].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_3_1_5:
{
uint8_t *vp = &(((buffer *)(g[3].p))->data[g[1].i]);
*vp = g[3].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_3_2_0:
{
uint8_t *vp = &(((buffer *)(g[3].p))->data[g[2].i]);
*vp = g[3].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_3_2_1:
{
uint8_t *vp = &(((buffer *)(g[3].p))->data[g[2].i]);
*vp = g[3].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_3_2_3:
{
uint8_t *vp = &(((buffer *)(g[3].p))->data[g[2].i]);
*vp = g[3].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_3_2_4:
{
uint8_t *vp = &(((buffer *)(g[3].p))->data[g[2].i]);
*vp = g[3].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_3_2_5:
{
uint8_t *vp = &(((buffer *)(g[3].p))->data[g[2].i]);
*vp = g[3].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_3_3_0:
{
uint8_t *vp = &(((buffer *)(g[3].p))->data[g[3].i]);
*vp = g[3].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_3_3_1:
{
uint8_t *vp = &(((buffer *)(g[3].p))->data[g[3].i]);
*vp = g[3].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_3_3_2:
{
uint8_t *vp = &(((buffer *)(g[3].p))->data[g[3].i]);
*vp = g[3].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_3_3_4:
{
uint8_t *vp = &(((buffer *)(g[3].p))->data[g[3].i]);
*vp = g[3].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_3_3_5:
{
uint8_t *vp = &(((buffer *)(g[3].p))->data[g[3].i]);
*vp = g[3].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_3_4_0:
{
uint8_t *vp = &(((buffer *)(g[3].p))->data[g[4].i]);
*vp = g[3].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_3_4_1:
{
uint8_t *vp = &(((buffer *)(g[3].p))->data[g[4].i]);
*vp = g[3].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_3_4_2:
{
uint8_t *vp = &(((buffer *)(g[3].p))->data[g[4].i]);
*vp = g[3].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_3_4_3:
{
uint8_t *vp = &(((buffer *)(g[3].p))->data[g[4].i]);
*vp = g[3].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_3_4_5:
{
uint8_t *vp = &(((buffer *)(g[3].p))->data[g[4].i]);
*vp = g[3].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_3_5_0:
{
uint8_t *vp = &(((buffer *)(g[3].p))->data[g[5].i]);
*vp = g[3].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_3_5_1:
{
uint8_t *vp = &(((buffer *)(g[3].p))->data[g[5].i]);
*vp = g[3].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_3_5_2:
{
uint8_t *vp = &(((buffer *)(g[3].p))->data[g[5].i]);
*vp = g[3].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_3_5_3:
{
uint8_t *vp = &(((buffer *)(g[3].p))->data[g[5].i]);
*vp = g[3].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_3_5_4:
{
uint8_t *vp = &(((buffer *)(g[3].p))->data[g[5].i]);
*vp = g[3].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_4_0_1:
{
uint8_t *vp = &(((buffer *)(g[4].p))->data[g[0].i]);
*vp = g[4].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_4_0_2:
{
uint8_t *vp = &(((buffer *)(g[4].p))->data[g[0].i]);
*vp = g[4].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_4_0_3:
{
uint8_t *vp = &(((buffer *)(g[4].p))->data[g[0].i]);
*vp = g[4].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_4_0_4:
{
uint8_t *vp = &(((buffer *)(g[4].p))->data[g[0].i]);
*vp = g[4].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_4_0_5:
{
uint8_t *vp = &(((buffer *)(g[4].p))->data[g[0].i]);
*vp = g[4].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_4_1_0:
{
uint8_t *vp = &(((buffer *)(g[4].p))->data[g[1].i]);
*vp = g[4].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_4_1_2:
{
uint8_t *vp = &(((buffer *)(g[4].p))->data[g[1].i]);
*vp = g[4].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_4_1_3:
{
uint8_t *vp = &(((buffer *)(g[4].p))->data[g[1].i]);
*vp = g[4].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_4_1_4:
{
uint8_t *vp = &(((buffer *)(g[4].p))->data[g[1].i]);
*vp = g[4].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_4_1_5:
{
uint8_t *vp = &(((buffer *)(g[4].p))->data[g[1].i]);
*vp = g[4].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_4_2_0:
{
uint8_t *vp = &(((buffer *)(g[4].p))->data[g[2].i]);
*vp = g[4].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_4_2_1:
{
uint8_t *vp = &(((buffer *)(g[4].p))->data[g[2].i]);
*vp = g[4].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_4_2_3:
{
uint8_t *vp = &(((buffer *)(g[4].p))->data[g[2].i]);
*vp = g[4].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_4_2_4:
{
uint8_t *vp = &(((buffer *)(g[4].p))->data[g[2].i]);
*vp = g[4].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_4_2_5:
{
uint8_t *vp = &(((buffer *)(g[4].p))->data[g[2].i]);
*vp = g[4].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_4_3_0:
{
uint8_t *vp = &(((buffer *)(g[4].p))->data[g[3].i]);
*vp = g[4].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_4_3_1:
{
uint8_t *vp = &(((buffer *)(g[4].p))->data[g[3].i]);
*vp = g[4].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_4_3_2:
{
uint8_t *vp = &(((buffer *)(g[4].p))->data[g[3].i]);
*vp = g[4].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_4_3_4:
{
uint8_t *vp = &(((buffer *)(g[4].p))->data[g[3].i]);
*vp = g[4].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_4_3_5:
{
uint8_t *vp = &(((buffer *)(g[4].p))->data[g[3].i]);
*vp = g[4].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_4_4_0:
{
uint8_t *vp = &(((buffer *)(g[4].p))->data[g[4].i]);
*vp = g[4].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_4_4_1:
{
uint8_t *vp = &(((buffer *)(g[4].p))->data[g[4].i]);
*vp = g[4].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_4_4_2:
{
uint8_t *vp = &(((buffer *)(g[4].p))->data[g[4].i]);
*vp = g[4].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_4_4_3:
{
uint8_t *vp = &(((buffer *)(g[4].p))->data[g[4].i]);
*vp = g[4].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_4_4_5:
{
uint8_t *vp = &(((buffer *)(g[4].p))->data[g[4].i]);
*vp = g[4].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_4_5_0:
{
uint8_t *vp = &(((buffer *)(g[4].p))->data[g[5].i]);
*vp = g[4].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_4_5_1:
{
uint8_t *vp = &(((buffer *)(g[4].p))->data[g[5].i]);
*vp = g[4].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_4_5_2:
{
uint8_t *vp = &(((buffer *)(g[4].p))->data[g[5].i]);
*vp = g[4].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_4_5_3:
{
uint8_t *vp = &(((buffer *)(g[4].p))->data[g[5].i]);
*vp = g[4].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_4_5_4:
{
uint8_t *vp = &(((buffer *)(g[4].p))->data[g[5].i]);
*vp = g[4].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_5_0_1:
{
uint8_t *vp = &(((buffer *)(g[5].p))->data[g[0].i]);
*vp = g[5].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_5_0_2:
{
uint8_t *vp = &(((buffer *)(g[5].p))->data[g[0].i]);
*vp = g[5].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_5_0_3:
{
uint8_t *vp = &(((buffer *)(g[5].p))->data[g[0].i]);
*vp = g[5].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_5_0_4:
{
uint8_t *vp = &(((buffer *)(g[5].p))->data[g[0].i]);
*vp = g[5].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_5_0_5:
{
uint8_t *vp = &(((buffer *)(g[5].p))->data[g[0].i]);
*vp = g[5].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_5_1_0:
{
uint8_t *vp = &(((buffer *)(g[5].p))->data[g[1].i]);
*vp = g[5].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_5_1_2:
{
uint8_t *vp = &(((buffer *)(g[5].p))->data[g[1].i]);
*vp = g[5].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_5_1_3:
{
uint8_t *vp = &(((buffer *)(g[5].p))->data[g[1].i]);
*vp = g[5].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_5_1_4:
{
uint8_t *vp = &(((buffer *)(g[5].p))->data[g[1].i]);
*vp = g[5].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_5_1_5:
{
uint8_t *vp = &(((buffer *)(g[5].p))->data[g[1].i]);
*vp = g[5].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_5_2_0:
{
uint8_t *vp = &(((buffer *)(g[5].p))->data[g[2].i]);
*vp = g[5].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_5_2_1:
{
uint8_t *vp = &(((buffer *)(g[5].p))->data[g[2].i]);
*vp = g[5].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_5_2_3:
{
uint8_t *vp = &(((buffer *)(g[5].p))->data[g[2].i]);
*vp = g[5].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_5_2_4:
{
uint8_t *vp = &(((buffer *)(g[5].p))->data[g[2].i]);
*vp = g[5].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_5_2_5:
{
uint8_t *vp = &(((buffer *)(g[5].p))->data[g[2].i]);
*vp = g[5].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_5_3_0:
{
uint8_t *vp = &(((buffer *)(g[5].p))->data[g[3].i]);
*vp = g[5].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_5_3_1:
{
uint8_t *vp = &(((buffer *)(g[5].p))->data[g[3].i]);
*vp = g[5].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_5_3_2:
{
uint8_t *vp = &(((buffer *)(g[5].p))->data[g[3].i]);
*vp = g[5].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_5_3_4:
{
uint8_t *vp = &(((buffer *)(g[5].p))->data[g[3].i]);
*vp = g[5].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_5_3_5:
{
uint8_t *vp = &(((buffer *)(g[5].p))->data[g[3].i]);
*vp = g[5].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_5_4_0:
{
uint8_t *vp = &(((buffer *)(g[5].p))->data[g[4].i]);
*vp = g[5].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_5_4_1:
{
uint8_t *vp = &(((buffer *)(g[5].p))->data[g[4].i]);
*vp = g[5].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_5_4_2:
{
uint8_t *vp = &(((buffer *)(g[5].p))->data[g[4].i]);
*vp = g[5].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_5_4_3:
{
uint8_t *vp = &(((buffer *)(g[5].p))->data[g[4].i]);
*vp = g[5].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_5_4_5:
{
uint8_t *vp = &(((buffer *)(g[5].p))->data[g[4].i]);
*vp = g[5].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_5_5_0:
{
uint8_t *vp = &(((buffer *)(g[5].p))->data[g[5].i]);
*vp = g[5].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_5_5_1:
{
uint8_t *vp = &(((buffer *)(g[5].p))->data[g[5].i]);
*vp = g[5].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_5_5_2:
{
uint8_t *vp = &(((buffer *)(g[5].p))->data[g[5].i]);
*vp = g[5].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_5_5_3:
{
uint8_t *vp = &(((buffer *)(g[5].p))->data[g[5].i]);
*vp = g[5].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_5_5_4:
{
uint8_t *vp = &(((buffer *)(g[5].p))->data[g[5].i]);
*vp = g[5].i;
goto *dynOpcodes[ts + program[pc]];
}

jmp:
{
pc += program[pc+1];
goto *dynOpcodes[ts + program[pc]];
}

jmpf:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
pc += constant;
goto *dynOpcodes[ts + program[pc]];
}

jsw_0:
{
int16_t tableSize = program[pc + 1];
if(g[0].i < 0 || g[0].i >= tableSize) {
int16_t defaultJump = program[pc + tableSize + 2];
pc += defaultJump;
}
else {
int16_t jump = program[pc + g[0].i + 2];
pc += jump;
 }
goto *dynOpcodes[ts + program[pc]];
}

jsw_1:
{
int16_t tableSize = program[pc + 1];
if(g[1].i < 0 || g[1].i >= tableSize) {
int16_t defaultJump = program[pc + tableSize + 2];
pc += defaultJump;
}
else {
int16_t jump = program[pc + g[1].i + 2];
pc += jump;
 }
goto *dynOpcodes[ts + program[pc]];
}

jsw_2:
{
int16_t tableSize = program[pc + 1];
if(g[2].i < 0 || g[2].i >= tableSize) {
int16_t defaultJump = program[pc + tableSize + 2];
pc += defaultJump;
}
else {
int16_t jump = program[pc + g[2].i + 2];
pc += jump;
 }
goto *dynOpcodes[ts + program[pc]];
}

jsw_3:
{
int16_t tableSize = program[pc + 1];
if(g[3].i < 0 || g[3].i >= tableSize) {
int16_t defaultJump = program[pc + tableSize + 2];
pc += defaultJump;
}
else {
int16_t jump = program[pc + g[3].i + 2];
pc += jump;
 }
goto *dynOpcodes[ts + program[pc]];
}

jsw_4:
{
int16_t tableSize = program[pc + 1];
if(g[4].i < 0 || g[4].i >= tableSize) {
int16_t defaultJump = program[pc + tableSize + 2];
pc += defaultJump;
}
else {
int16_t jump = program[pc + g[4].i + 2];
pc += jump;
 }
goto *dynOpcodes[ts + program[pc]];
}

jsw_5:
{
int16_t tableSize = program[pc + 1];
if(g[5].i < 0 || g[5].i >= tableSize) {
int16_t defaultJump = program[pc + tableSize + 2];
pc += defaultJump;
}
else {
int16_t jump = program[pc + g[5].i + 2];
pc += jump;
 }
goto *dynOpcodes[ts + program[pc]];
}

cabii_0_1:
{
if (g[0].i < g[1].i)
pc += program[pc + 1];
else if(g[0].i == g[1].i)
pc += program[pc + 2];
else
pc += program[pc + 3];
goto *dynOpcodes[ts + program[pc]];
}

cabii_0_2:
{
if (g[0].i < g[2].i)
pc += program[pc + 1];
else if(g[0].i == g[2].i)
pc += program[pc + 2];
else
pc += program[pc + 3];
goto *dynOpcodes[ts + program[pc]];
}

cabii_0_3:
{
if (g[0].i < g[3].i)
pc += program[pc + 1];
else if(g[0].i == g[3].i)
pc += program[pc + 2];
else
pc += program[pc + 3];
goto *dynOpcodes[ts + program[pc]];
}

cabii_0_4:
{
if (g[0].i < g[4].i)
pc += program[pc + 1];
else if(g[0].i == g[4].i)
pc += program[pc + 2];
else
pc += program[pc + 3];
goto *dynOpcodes[ts + program[pc]];
}

cabii_0_5:
{
if (g[0].i < g[5].i)
pc += program[pc + 1];
else if(g[0].i == g[5].i)
pc += program[pc + 2];
else
pc += program[pc + 3];
goto *dynOpcodes[ts + program[pc]];
}

cabii_1_0:
{
if (g[1].i < g[0].i)
pc += program[pc + 1];
else if(g[1].i == g[0].i)
pc += program[pc + 2];
else
pc += program[pc + 3];
goto *dynOpcodes[ts + program[pc]];
}

cabii_1_2:
{
if (g[1].i < g[2].i)
pc += program[pc + 1];
else if(g[1].i == g[2].i)
pc += program[pc + 2];
else
pc += program[pc + 3];
goto *dynOpcodes[ts + program[pc]];
}

cabii_1_3:
{
if (g[1].i < g[3].i)
pc += program[pc + 1];
else if(g[1].i == g[3].i)
pc += program[pc + 2];
else
pc += program[pc + 3];
goto *dynOpcodes[ts + program[pc]];
}

cabii_1_4:
{
if (g[1].i < g[4].i)
pc += program[pc + 1];
else if(g[1].i == g[4].i)
pc += program[pc + 2];
else
pc += program[pc + 3];
goto *dynOpcodes[ts + program[pc]];
}

cabii_1_5:
{
if (g[1].i < g[5].i)
pc += program[pc + 1];
else if(g[1].i == g[5].i)
pc += program[pc + 2];
else
pc += program[pc + 3];
goto *dynOpcodes[ts + program[pc]];
}

cabii_2_0:
{
if (g[2].i < g[0].i)
pc += program[pc + 1];
else if(g[2].i == g[0].i)
pc += program[pc + 2];
else
pc += program[pc + 3];
goto *dynOpcodes[ts + program[pc]];
}

cabii_2_1:
{
if (g[2].i < g[1].i)
pc += program[pc + 1];
else if(g[2].i == g[1].i)
pc += program[pc + 2];
else
pc += program[pc + 3];
goto *dynOpcodes[ts + program[pc]];
}

cabii_2_3:
{
if (g[2].i < g[3].i)
pc += program[pc + 1];
else if(g[2].i == g[3].i)
pc += program[pc + 2];
else
pc += program[pc + 3];
goto *dynOpcodes[ts + program[pc]];
}

cabii_2_4:
{
if (g[2].i < g[4].i)
pc += program[pc + 1];
else if(g[2].i == g[4].i)
pc += program[pc + 2];
else
pc += program[pc + 3];
goto *dynOpcodes[ts + program[pc]];
}

cabii_2_5:
{
if (g[2].i < g[5].i)
pc += program[pc + 1];
else if(g[2].i == g[5].i)
pc += program[pc + 2];
else
pc += program[pc + 3];
goto *dynOpcodes[ts + program[pc]];
}

cabii_3_0:
{
if (g[3].i < g[0].i)
pc += program[pc + 1];
else if(g[3].i == g[0].i)
pc += program[pc + 2];
else
pc += program[pc + 3];
goto *dynOpcodes[ts + program[pc]];
}

cabii_3_1:
{
if (g[3].i < g[1].i)
pc += program[pc + 1];
else if(g[3].i == g[1].i)
pc += program[pc + 2];
else
pc += program[pc + 3];
goto *dynOpcodes[ts + program[pc]];
}

cabii_3_2:
{
if (g[3].i < g[2].i)
pc += program[pc + 1];
else if(g[3].i == g[2].i)
pc += program[pc + 2];
else
pc += program[pc + 3];
goto *dynOpcodes[ts + program[pc]];
}

cabii_3_4:
{
if (g[3].i < g[4].i)
pc += program[pc + 1];
else if(g[3].i == g[4].i)
pc += program[pc + 2];
else
pc += program[pc + 3];
goto *dynOpcodes[ts + program[pc]];
}

cabii_3_5:
{
if (g[3].i < g[5].i)
pc += program[pc + 1];
else if(g[3].i == g[5].i)
pc += program[pc + 2];
else
pc += program[pc + 3];
goto *dynOpcodes[ts + program[pc]];
}

cabii_4_0:
{
if (g[4].i < g[0].i)
pc += program[pc + 1];
else if(g[4].i == g[0].i)
pc += program[pc + 2];
else
pc += program[pc + 3];
goto *dynOpcodes[ts + program[pc]];
}

cabii_4_1:
{
if (g[4].i < g[1].i)
pc += program[pc + 1];
else if(g[4].i == g[1].i)
pc += program[pc + 2];
else
pc += program[pc + 3];
goto *dynOpcodes[ts + program[pc]];
}

cabii_4_2:
{
if (g[4].i < g[2].i)
pc += program[pc + 1];
else if(g[4].i == g[2].i)
pc += program[pc + 2];
else
pc += program[pc + 3];
goto *dynOpcodes[ts + program[pc]];
}

cabii_4_3:
{
if (g[4].i < g[3].i)
pc += program[pc + 1];
else if(g[4].i == g[3].i)
pc += program[pc + 2];
else
pc += program[pc + 3];
goto *dynOpcodes[ts + program[pc]];
}

cabii_4_5:
{
if (g[4].i < g[5].i)
pc += program[pc + 1];
else if(g[4].i == g[5].i)
pc += program[pc + 2];
else
pc += program[pc + 3];
goto *dynOpcodes[ts + program[pc]];
}

cabii_5_0:
{
if (g[5].i < g[0].i)
pc += program[pc + 1];
else if(g[5].i == g[0].i)
pc += program[pc + 2];
else
pc += program[pc + 3];
goto *dynOpcodes[ts + program[pc]];
}

cabii_5_1:
{
if (g[5].i < g[1].i)
pc += program[pc + 1];
else if(g[5].i == g[1].i)
pc += program[pc + 2];
else
pc += program[pc + 3];
goto *dynOpcodes[ts + program[pc]];
}

cabii_5_2:
{
if (g[5].i < g[2].i)
pc += program[pc + 1];
else if(g[5].i == g[2].i)
pc += program[pc + 2];
else
pc += program[pc + 3];
goto *dynOpcodes[ts + program[pc]];
}

cabii_5_3:
{
if (g[5].i < g[3].i)
pc += program[pc + 1];
else if(g[5].i == g[3].i)
pc += program[pc + 2];
else
pc += program[pc + 3];
goto *dynOpcodes[ts + program[pc]];
}

cabii_5_4:
{
if (g[5].i < g[4].i)
pc += program[pc + 1];
else if(g[5].i == g[4].i)
pc += program[pc + 2];
else
pc += program[pc + 3];
goto *dynOpcodes[ts + program[pc]];
}

cabpp_0_1:
{
if (g[0].p == g[1].p)
pc += program[pc + 2];
else
pc += program[pc + 4];
goto *dynOpcodes[ts + program[pc]];
}

cabpp_0_2:
{
if (g[0].p == g[2].p)
pc += program[pc + 2];
else
pc += program[pc + 4];
goto *dynOpcodes[ts + program[pc]];
}

cabpp_0_3:
{
if (g[0].p == g[3].p)
pc += program[pc + 2];
else
pc += program[pc + 4];
goto *dynOpcodes[ts + program[pc]];
}

cabpp_0_4:
{
if (g[0].p == g[4].p)
pc += program[pc + 2];
else
pc += program[pc + 4];
goto *dynOpcodes[ts + program[pc]];
}

cabpp_0_5:
{
if (g[0].p == g[5].p)
pc += program[pc + 2];
else
pc += program[pc + 4];
goto *dynOpcodes[ts + program[pc]];
}

cabpp_1_0:
{
if (g[1].p == g[0].p)
pc += program[pc + 2];
else
pc += program[pc + 4];
goto *dynOpcodes[ts + program[pc]];
}

cabpp_1_2:
{
if (g[1].p == g[2].p)
pc += program[pc + 2];
else
pc += program[pc + 4];
goto *dynOpcodes[ts + program[pc]];
}

cabpp_1_3:
{
if (g[1].p == g[3].p)
pc += program[pc + 2];
else
pc += program[pc + 4];
goto *dynOpcodes[ts + program[pc]];
}

cabpp_1_4:
{
if (g[1].p == g[4].p)
pc += program[pc + 2];
else
pc += program[pc + 4];
goto *dynOpcodes[ts + program[pc]];
}

cabpp_1_5:
{
if (g[1].p == g[5].p)
pc += program[pc + 2];
else
pc += program[pc + 4];
goto *dynOpcodes[ts + program[pc]];
}

cabpp_2_0:
{
if (g[2].p == g[0].p)
pc += program[pc + 2];
else
pc += program[pc + 4];
goto *dynOpcodes[ts + program[pc]];
}

cabpp_2_1:
{
if (g[2].p == g[1].p)
pc += program[pc + 2];
else
pc += program[pc + 4];
goto *dynOpcodes[ts + program[pc]];
}

cabpp_2_3:
{
if (g[2].p == g[3].p)
pc += program[pc + 2];
else
pc += program[pc + 4];
goto *dynOpcodes[ts + program[pc]];
}

cabpp_2_4:
{
if (g[2].p == g[4].p)
pc += program[pc + 2];
else
pc += program[pc + 4];
goto *dynOpcodes[ts + program[pc]];
}

cabpp_2_5:
{
if (g[2].p == g[5].p)
pc += program[pc + 2];
else
pc += program[pc + 4];
goto *dynOpcodes[ts + program[pc]];
}

cabpp_3_0:
{
if (g[3].p == g[0].p)
pc += program[pc + 2];
else
pc += program[pc + 4];
goto *dynOpcodes[ts + program[pc]];
}

cabpp_3_1:
{
if (g[3].p == g[1].p)
pc += program[pc + 2];
else
pc += program[pc + 4];
goto *dynOpcodes[ts + program[pc]];
}

cabpp_3_2:
{
if (g[3].p == g[2].p)
pc += program[pc + 2];
else
pc += program[pc + 4];
goto *dynOpcodes[ts + program[pc]];
}

cabpp_3_4:
{
if (g[3].p == g[4].p)
pc += program[pc + 2];
else
pc += program[pc + 4];
goto *dynOpcodes[ts + program[pc]];
}

cabpp_3_5:
{
if (g[3].p == g[5].p)
pc += program[pc + 2];
else
pc += program[pc + 4];
goto *dynOpcodes[ts + program[pc]];
}

cabpp_4_0:
{
if (g[4].p == g[0].p)
pc += program[pc + 2];
else
pc += program[pc + 4];
goto *dynOpcodes[ts + program[pc]];
}

cabpp_4_1:
{
if (g[4].p == g[1].p)
pc += program[pc + 2];
else
pc += program[pc + 4];
goto *dynOpcodes[ts + program[pc]];
}

cabpp_4_2:
{
if (g[4].p == g[2].p)
pc += program[pc + 2];
else
pc += program[pc + 4];
goto *dynOpcodes[ts + program[pc]];
}

cabpp_4_3:
{
if (g[4].p == g[3].p)
pc += program[pc + 2];
else
pc += program[pc + 4];
goto *dynOpcodes[ts + program[pc]];
}

cabpp_4_5:
{
if (g[4].p == g[5].p)
pc += program[pc + 2];
else
pc += program[pc + 4];
goto *dynOpcodes[ts + program[pc]];
}

cabpp_5_0:
{
if (g[5].p == g[0].p)
pc += program[pc + 2];
else
pc += program[pc + 4];
goto *dynOpcodes[ts + program[pc]];
}

cabpp_5_1:
{
if (g[5].p == g[1].p)
pc += program[pc + 2];
else
pc += program[pc + 4];
goto *dynOpcodes[ts + program[pc]];
}

cabpp_5_2:
{
if (g[5].p == g[2].p)
pc += program[pc + 2];
else
pc += program[pc + 4];
goto *dynOpcodes[ts + program[pc]];
}

cabpp_5_3:
{
if (g[5].p == g[3].p)
pc += program[pc + 2];
else
pc += program[pc + 4];
goto *dynOpcodes[ts + program[pc]];
}

cabpp_5_4:
{
if (g[5].p == g[4].p)
pc += program[pc + 2];
else
pc += program[pc + 4];
goto *dynOpcodes[ts + program[pc]];
}

cabft_0_1:
{
pc += 5;
goto *dynOpcodes[ts + program[pc]];
}

cabft_0_2:
{
pc += 5;
goto *dynOpcodes[ts + program[pc]];
}

cabft_0_3:
{
pc += 5;
goto *dynOpcodes[ts + program[pc]];
}

cabft_0_4:
{
pc += 5;
goto *dynOpcodes[ts + program[pc]];
}

cabft_0_5:
{
pc += 5;
goto *dynOpcodes[ts + program[pc]];
}

cabft_1_0:
{
pc += 5;
goto *dynOpcodes[ts + program[pc]];
}

cabft_1_2:
{
pc += 5;
goto *dynOpcodes[ts + program[pc]];
}

cabft_1_3:
{
pc += 5;
goto *dynOpcodes[ts + program[pc]];
}

cabft_1_4:
{
pc += 5;
goto *dynOpcodes[ts + program[pc]];
}

cabft_1_5:
{
pc += 5;
goto *dynOpcodes[ts + program[pc]];
}

cabft_2_0:
{
pc += 5;
goto *dynOpcodes[ts + program[pc]];
}

cabft_2_1:
{
pc += 5;
goto *dynOpcodes[ts + program[pc]];
}

cabft_2_3:
{
pc += 5;
goto *dynOpcodes[ts + program[pc]];
}

cabft_2_4:
{
pc += 5;
goto *dynOpcodes[ts + program[pc]];
}

cabft_2_5:
{
pc += 5;
goto *dynOpcodes[ts + program[pc]];
}

cabft_3_0:
{
pc += 5;
goto *dynOpcodes[ts + program[pc]];
}

cabft_3_1:
{
pc += 5;
goto *dynOpcodes[ts + program[pc]];
}

cabft_3_2:
{
pc += 5;
goto *dynOpcodes[ts + program[pc]];
}

cabft_3_4:
{
pc += 5;
goto *dynOpcodes[ts + program[pc]];
}

cabft_3_5:
{
pc += 5;
goto *dynOpcodes[ts + program[pc]];
}

cabft_4_0:
{
pc += 5;
goto *dynOpcodes[ts + program[pc]];
}

cabft_4_1:
{
pc += 5;
goto *dynOpcodes[ts + program[pc]];
}

cabft_4_2:
{
pc += 5;
goto *dynOpcodes[ts + program[pc]];
}

cabft_4_3:
{
pc += 5;
goto *dynOpcodes[ts + program[pc]];
}

cabft_4_5:
{
pc += 5;
goto *dynOpcodes[ts + program[pc]];
}

cabft_5_0:
{
pc += 5;
goto *dynOpcodes[ts + program[pc]];
}

cabft_5_1:
{
pc += 5;
goto *dynOpcodes[ts + program[pc]];
}

cabft_5_2:
{
pc += 5;
goto *dynOpcodes[ts + program[pc]];
}

cabft_5_3:
{
pc += 5;
goto *dynOpcodes[ts + program[pc]];
}

cabft_5_4:
{
pc += 5;
goto *dynOpcodes[ts + program[pc]];
}

cabik_0:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
if (g[0].i < constant)
pc += program[pc + 2];
else if(g[0].i == constant)
pc += program[pc + 3];
else
pc += program[pc + 4];
goto *dynOpcodes[ts + program[pc]];
}

cabik_1:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
if (g[1].i < constant)
pc += program[pc + 2];
else if(g[1].i == constant)
pc += program[pc + 3];
else
pc += program[pc + 4];
goto *dynOpcodes[ts + program[pc]];
}

cabik_2:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
if (g[2].i < constant)
pc += program[pc + 2];
else if(g[2].i == constant)
pc += program[pc + 3];
else
pc += program[pc + 4];
goto *dynOpcodes[ts + program[pc]];
}

cabik_3:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
if (g[3].i < constant)
pc += program[pc + 2];
else if(g[3].i == constant)
pc += program[pc + 3];
else
pc += program[pc + 4];
goto *dynOpcodes[ts + program[pc]];
}

cabik_4:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
if (g[4].i < constant)
pc += program[pc + 2];
else if(g[4].i == constant)
pc += program[pc + 3];
else
pc += program[pc + 4];
goto *dynOpcodes[ts + program[pc]];
}

cabik_5:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
if (g[5].i < constant)
pc += program[pc + 2];
else if(g[5].i == constant)
pc += program[pc + 3];
else
pc += program[pc + 4];
goto *dynOpcodes[ts + program[pc]];
}

cabft_0:
{
pc += 5;
goto *dynOpcodes[ts + program[pc]];
}

cabft_1:
{
pc += 5;
goto *dynOpcodes[ts + program[pc]];
}

cabft_2:
{
pc += 5;
goto *dynOpcodes[ts + program[pc]];
}

cabft_3:
{
pc += 5;
goto *dynOpcodes[ts + program[pc]];
}

cabft_4:
{
pc += 5;
goto *dynOpcodes[ts + program[pc]];
}

cabft_5:
{
pc += 5;
goto *dynOpcodes[ts + program[pc]];
}

cabpN_0:
{
if (g[0].p == NULL)
pc += program[pc + 2];
else
pc += program[pc + 3];
goto *dynOpcodes[ts + program[pc]];
}

cabpN_1:
{
if (g[1].p == NULL)
pc += program[pc + 2];
else
pc += program[pc + 3];
goto *dynOpcodes[ts + program[pc]];
}

cabpN_2:
{
if (g[2].p == NULL)
pc += program[pc + 2];
else
pc += program[pc + 3];
goto *dynOpcodes[ts + program[pc]];
}

cabpN_3:
{
if (g[3].p == NULL)
pc += program[pc + 2];
else
pc += program[pc + 3];
goto *dynOpcodes[ts + program[pc]];
}

cabpN_4:
{
if (g[4].p == NULL)
pc += program[pc + 2];
else
pc += program[pc + 3];
goto *dynOpcodes[ts + program[pc]];
}

cabpN_5:
{
if (g[5].p == NULL)
pc += program[pc + 2];
else
pc += program[pc + 3];
goto *dynOpcodes[ts + program[pc]];
}

call:
{
int64_t newpc = pc + program[pc + 1];
size_t size = sizeof(stackframe) + sizeof(value) * program[newpc];
stackframe *base = (stackframe*)malloc(size);
base->fp = fp; base->pc = pc; base->ts = ts;
SaveRegisters(base->g);
value *newfp = base->l;
memcpy(newfp, fp + program[pc + 2], program[pc + 3]*sizeof(value));
fp = newfp;
pc = newpc + 1;
goto *dynOpcodes[ts + program[pc]];
}

ret:
{
stackframe *cur = (stackframe*)(fp - offsetof(stackframe, fp));
fp = cur->fp; pc = cur->pc; ts = (cur->ts & 0xF000) | (ts & 0x10800);
RestoreRegisters(cur->g);
free(cur);//probably does a thing 
if (fp == NULL)
return 0;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

newp_0:
{
int16_t dsize = program[pc + 1];
int64_t size = *((int64_t*)(&program[pc + dsize]));
object *base = (object*)malloc(sizeof(object) + sizeof(value)*size);
base->sf = MakeSizeAndFlags(size,0);
g[0].tag = 2;
ts |= 0x20 /*100000*/;
g[0].p = base;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

newp_1:
{
int16_t dsize = program[pc + 1];
int64_t size = *((int64_t*)(&program[pc + dsize]));
object *base = (object*)malloc(sizeof(object) + sizeof(value)*size);
base->sf = MakeSizeAndFlags(size,0);
g[1].tag = 2;
ts |= 0x10 /*010000*/;
g[1].p = base;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

newp_2:
{
int16_t dsize = program[pc + 1];
int64_t size = *((int64_t*)(&program[pc + dsize]));
object *base = (object*)malloc(sizeof(object) + sizeof(value)*size);
base->sf = MakeSizeAndFlags(size,0);
g[2].tag = 2;
ts |= 0x8 /*001000*/;
g[2].p = base;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

newp_3:
{
int16_t dsize = program[pc + 1];
int64_t size = *((int64_t*)(&program[pc + dsize]));
object *base = (object*)malloc(sizeof(object) + sizeof(value)*size);
base->sf = MakeSizeAndFlags(size,0);
g[3].tag = 2;
ts |= 0x4 /*000100*/;
g[3].p = base;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

newp_4:
{
int16_t dsize = program[pc + 1];
int64_t size = *((int64_t*)(&program[pc + dsize]));
object *base = (object*)malloc(sizeof(object) + sizeof(value)*size);
base->sf = MakeSizeAndFlags(size,0);
g[4].tag = 2;
ts |= 0x2 /*000010*/;
g[4].p = base;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

newp_5:
{
int16_t dsize = program[pc + 1];
int64_t size = *((int64_t*)(&program[pc + dsize]));
object *base = (object*)malloc(sizeof(object) + sizeof(value)*size);
base->sf = MakeSizeAndFlags(size,0);
g[5].tag = 2;
ts |= 0x1 /*000001*/;
g[5].p = base;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

newpa_0:
{
int16_t dsize = program[pc + 1];
int64_t size = *((int64_t*)(&program[pc + dsize]));
pointeronly *base = (pointeronly*)malloc(sizeof(pointeronly) + sizeof(value)*size);
base->sf = MakeSizeAndFlags(size,0);
g[0].tag = 3;
ts |= 0x20 /*100000*/;
g[0].p = base;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

newpa_1:
{
int16_t dsize = program[pc + 1];
int64_t size = *((int64_t*)(&program[pc + dsize]));
pointeronly *base = (pointeronly*)malloc(sizeof(pointeronly) + sizeof(value)*size);
base->sf = MakeSizeAndFlags(size,0);
g[1].tag = 3;
ts |= 0x10 /*010000*/;
g[1].p = base;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

newpa_2:
{
int16_t dsize = program[pc + 1];
int64_t size = *((int64_t*)(&program[pc + dsize]));
pointeronly *base = (pointeronly*)malloc(sizeof(pointeronly) + sizeof(value)*size);
base->sf = MakeSizeAndFlags(size,0);
g[2].tag = 3;
ts |= 0x8 /*001000*/;
g[2].p = base;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

newpa_3:
{
int16_t dsize = program[pc + 1];
int64_t size = *((int64_t*)(&program[pc + dsize]));
pointeronly *base = (pointeronly*)malloc(sizeof(pointeronly) + sizeof(value)*size);
base->sf = MakeSizeAndFlags(size,0);
g[3].tag = 3;
ts |= 0x4 /*000100*/;
g[3].p = base;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

newpa_4:
{
int16_t dsize = program[pc + 1];
int64_t size = *((int64_t*)(&program[pc + dsize]));
pointeronly *base = (pointeronly*)malloc(sizeof(pointeronly) + sizeof(value)*size);
base->sf = MakeSizeAndFlags(size,0);
g[4].tag = 3;
ts |= 0x2 /*000010*/;
g[4].p = base;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

newpa_5:
{
int16_t dsize = program[pc + 1];
int64_t size = *((int64_t*)(&program[pc + dsize]));
pointeronly *base = (pointeronly*)malloc(sizeof(pointeronly) + sizeof(value)*size);
base->sf = MakeSizeAndFlags(size,0);
g[5].tag = 3;
ts |= 0x1 /*000001*/;
g[5].p = base;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

newa_0:
{
int16_t dsize = program[pc + 1];
int64_t size = *((int64_t*)(&program[pc + dsize]));
buffer *base = (buffer*)malloc(sizeof(buffer) + sizeof(int8_t)*size);
base->sf = MakeSizeAndFlags(size,0);
g[0].tag = 4;
ts |= 0x20 /*100000*/;
g[0].p = base;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

newa_1:
{
int16_t dsize = program[pc + 1];
int64_t size = *((int64_t*)(&program[pc + dsize]));
buffer *base = (buffer*)malloc(sizeof(buffer) + sizeof(int8_t)*size);
base->sf = MakeSizeAndFlags(size,0);
g[1].tag = 4;
ts |= 0x10 /*010000*/;
g[1].p = base;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

newa_2:
{
int16_t dsize = program[pc + 1];
int64_t size = *((int64_t*)(&program[pc + dsize]));
buffer *base = (buffer*)malloc(sizeof(buffer) + sizeof(int8_t)*size);
base->sf = MakeSizeAndFlags(size,0);
g[2].tag = 4;
ts |= 0x8 /*001000*/;
g[2].p = base;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

newa_3:
{
int16_t dsize = program[pc + 1];
int64_t size = *((int64_t*)(&program[pc + dsize]));
buffer *base = (buffer*)malloc(sizeof(buffer) + sizeof(int8_t)*size);
base->sf = MakeSizeAndFlags(size,0);
g[3].tag = 4;
ts |= 0x4 /*000100*/;
g[3].p = base;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

newa_4:
{
int16_t dsize = program[pc + 1];
int64_t size = *((int64_t*)(&program[pc + dsize]));
buffer *base = (buffer*)malloc(sizeof(buffer) + sizeof(int8_t)*size);
base->sf = MakeSizeAndFlags(size,0);
g[4].tag = 4;
ts |= 0x2 /*000010*/;
g[4].p = base;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

newa_5:
{
int16_t dsize = program[pc + 1];
int64_t size = *((int64_t*)(&program[pc + dsize]));
buffer *base = (buffer*)malloc(sizeof(buffer) + sizeof(int8_t)*size);
base->sf = MakeSizeAndFlags(size,0);
g[5].tag = 4;
ts |= 0x1 /*000001*/;
g[5].p = base;
pc++;
goto *dynOpcodes[ts + program[pc]];
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

addii_0_0:
{
g[0].i += g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

addii_0_1:
{
g[0].i += g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

addii_0_2:
{
g[0].i += g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

addii_0_3:
{
g[0].i += g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

addii_0_4:
{
g[0].i += g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

addii_0_5:
{
g[0].i += g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

addii_1_0:
{
g[1].i += g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

addii_1_1:
{
g[1].i += g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

addii_1_2:
{
g[1].i += g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

addii_1_3:
{
g[1].i += g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

addii_1_4:
{
g[1].i += g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

addii_1_5:
{
g[1].i += g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

addii_2_0:
{
g[2].i += g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

addii_2_1:
{
g[2].i += g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

addii_2_2:
{
g[2].i += g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

addii_2_3:
{
g[2].i += g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

addii_2_4:
{
g[2].i += g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

addii_2_5:
{
g[2].i += g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

addii_3_0:
{
g[3].i += g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

addii_3_1:
{
g[3].i += g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

addii_3_2:
{
g[3].i += g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

addii_3_3:
{
g[3].i += g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

addii_3_4:
{
g[3].i += g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

addii_3_5:
{
g[3].i += g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

addii_4_0:
{
g[4].i += g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

addii_4_1:
{
g[4].i += g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

addii_4_2:
{
g[4].i += g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

addii_4_3:
{
g[4].i += g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

addii_4_4:
{
g[4].i += g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

addii_4_5:
{
g[4].i += g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

addii_5_0:
{
g[5].i += g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

addii_5_1:
{
g[5].i += g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

addii_5_2:
{
g[5].i += g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

addii_5_3:
{
g[5].i += g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

addii_5_4:
{
g[5].i += g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

addii_5_5:
{
g[5].i += g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

addik_0:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[0].i += constant;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

addik_1:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[1].i += constant;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

addik_2:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[2].i += constant;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

addik_3:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[3].i += constant;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

addik_4:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[4].i += constant;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

addik_5:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[5].i += constant;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

subii_0_1:
{
g[0].i -= g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

subii_0_2:
{
g[0].i -= g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

subii_0_3:
{
g[0].i -= g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

subii_0_4:
{
g[0].i -= g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

subii_0_5:
{
g[0].i -= g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

subii_1_0:
{
g[1].i -= g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

subii_1_2:
{
g[1].i -= g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

subii_1_3:
{
g[1].i -= g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

subii_1_4:
{
g[1].i -= g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

subii_1_5:
{
g[1].i -= g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

subii_2_0:
{
g[2].i -= g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

subii_2_1:
{
g[2].i -= g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

subii_2_3:
{
g[2].i -= g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

subii_2_4:
{
g[2].i -= g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

subii_2_5:
{
g[2].i -= g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

subii_3_0:
{
g[3].i -= g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

subii_3_1:
{
g[3].i -= g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

subii_3_2:
{
g[3].i -= g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

subii_3_4:
{
g[3].i -= g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

subii_3_5:
{
g[3].i -= g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

subii_4_0:
{
g[4].i -= g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

subii_4_1:
{
g[4].i -= g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

subii_4_2:
{
g[4].i -= g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

subii_4_3:
{
g[4].i -= g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

subii_4_5:
{
g[4].i -= g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

subii_5_0:
{
g[5].i -= g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

subii_5_1:
{
g[5].i -= g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

subii_5_2:
{
g[5].i -= g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

subii_5_3:
{
g[5].i -= g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

subii_5_4:
{
g[5].i -= g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

subki_0:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[0].i = constant - g[0].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

subki_1:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[1].i = constant - g[1].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

subki_2:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[2].i = constant - g[2].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

subki_3:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[3].i = constant - g[3].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

subki_4:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[4].i = constant - g[4].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

subki_5:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[5].i = constant - g[5].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

orii_0_1:
{
g[0].i |= g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

orii_0_2:
{
g[0].i |= g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

orii_0_3:
{
g[0].i |= g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

orii_0_4:
{
g[0].i |= g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

orii_0_5:
{
g[0].i |= g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

orii_1_0:
{
g[1].i |= g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

orii_1_2:
{
g[1].i |= g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

orii_1_3:
{
g[1].i |= g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

orii_1_4:
{
g[1].i |= g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

orii_1_5:
{
g[1].i |= g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

orii_2_0:
{
g[2].i |= g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

orii_2_1:
{
g[2].i |= g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

orii_2_3:
{
g[2].i |= g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

orii_2_4:
{
g[2].i |= g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

orii_2_5:
{
g[2].i |= g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

orii_3_0:
{
g[3].i |= g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

orii_3_1:
{
g[3].i |= g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

orii_3_2:
{
g[3].i |= g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

orii_3_4:
{
g[3].i |= g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

orii_3_5:
{
g[3].i |= g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

orii_4_0:
{
g[4].i |= g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

orii_4_1:
{
g[4].i |= g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

orii_4_2:
{
g[4].i |= g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

orii_4_3:
{
g[4].i |= g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

orii_4_5:
{
g[4].i |= g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

orii_5_0:
{
g[5].i |= g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

orii_5_1:
{
g[5].i |= g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

orii_5_2:
{
g[5].i |= g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

orii_5_3:
{
g[5].i |= g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

orii_5_4:
{
g[5].i |= g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

orki_0:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[0].i |= constant;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

orki_1:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[1].i |= constant;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

orki_2:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[2].i |= constant;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

orki_3:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[3].i |= constant;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

orki_4:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[4].i |= constant;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

orki_5:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[5].i |= constant;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

xorii_0_1:
{
g[0].i ^= g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

xorii_0_2:
{
g[0].i ^= g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

xorii_0_3:
{
g[0].i ^= g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

xorii_0_4:
{
g[0].i ^= g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

xorii_0_5:
{
g[0].i ^= g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

xorii_1_0:
{
g[1].i ^= g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

xorii_1_2:
{
g[1].i ^= g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

xorii_1_3:
{
g[1].i ^= g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

xorii_1_4:
{
g[1].i ^= g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

xorii_1_5:
{
g[1].i ^= g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

xorii_2_0:
{
g[2].i ^= g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

xorii_2_1:
{
g[2].i ^= g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

xorii_2_3:
{
g[2].i ^= g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

xorii_2_4:
{
g[2].i ^= g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

xorii_2_5:
{
g[2].i ^= g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

xorii_3_0:
{
g[3].i ^= g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

xorii_3_1:
{
g[3].i ^= g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

xorii_3_2:
{
g[3].i ^= g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

xorii_3_4:
{
g[3].i ^= g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

xorii_3_5:
{
g[3].i ^= g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

xorii_4_0:
{
g[4].i ^= g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

xorii_4_1:
{
g[4].i ^= g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

xorii_4_2:
{
g[4].i ^= g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

xorii_4_3:
{
g[4].i ^= g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

xorii_4_5:
{
g[4].i ^= g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

xorii_5_0:
{
g[5].i ^= g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

xorii_5_1:
{
g[5].i ^= g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

xorii_5_2:
{
g[5].i ^= g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

xorii_5_3:
{
g[5].i ^= g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

xorii_5_4:
{
g[5].i ^= g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shlii_0_1:
{
g[0].i <<= g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shlii_0_2:
{
g[0].i <<= g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shlii_0_3:
{
g[0].i <<= g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shlii_0_4:
{
g[0].i <<= g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shlii_0_5:
{
g[0].i <<= g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shlii_1_0:
{
g[1].i <<= g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shlii_1_2:
{
g[1].i <<= g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shlii_1_3:
{
g[1].i <<= g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shlii_1_4:
{
g[1].i <<= g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shlii_1_5:
{
g[1].i <<= g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shlii_2_0:
{
g[2].i <<= g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shlii_2_1:
{
g[2].i <<= g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shlii_2_3:
{
g[2].i <<= g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shlii_2_4:
{
g[2].i <<= g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shlii_2_5:
{
g[2].i <<= g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shlii_3_0:
{
g[3].i <<= g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shlii_3_1:
{
g[3].i <<= g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shlii_3_2:
{
g[3].i <<= g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shlii_3_4:
{
g[3].i <<= g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shlii_3_5:
{
g[3].i <<= g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shlii_4_0:
{
g[4].i <<= g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shlii_4_1:
{
g[4].i <<= g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shlii_4_2:
{
g[4].i <<= g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shlii_4_3:
{
g[4].i <<= g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shlii_4_5:
{
g[4].i <<= g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shlii_5_0:
{
g[5].i <<= g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shlii_5_1:
{
g[5].i <<= g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shlii_5_2:
{
g[5].i <<= g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shlii_5_3:
{
g[5].i <<= g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shlii_5_4:
{
g[5].i <<= g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shlik_0:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[0].i <<= constant;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

shlik_1:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[1].i <<= constant;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

shlik_2:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[2].i <<= constant;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

shlik_3:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[3].i <<= constant;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

shlik_4:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[4].i <<= constant;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

shlik_5:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[5].i <<= constant;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

shlki_0:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[0].i = constant << g[0].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

shlki_1:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[1].i = constant << g[1].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

shlki_2:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[2].i = constant << g[2].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

shlki_3:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[3].i = constant << g[3].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

shlki_4:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[4].i = constant << g[4].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

shlki_5:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[5].i = constant << g[5].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

shrii_0_1:
{
g[0].i = (uint64_t)g[0].i >> g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shrii_0_2:
{
g[0].i = (uint64_t)g[0].i >> g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shrii_0_3:
{
g[0].i = (uint64_t)g[0].i >> g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shrii_0_4:
{
g[0].i = (uint64_t)g[0].i >> g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shrii_0_5:
{
g[0].i = (uint64_t)g[0].i >> g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shrii_1_0:
{
g[1].i = (uint64_t)g[1].i >> g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shrii_1_2:
{
g[1].i = (uint64_t)g[1].i >> g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shrii_1_3:
{
g[1].i = (uint64_t)g[1].i >> g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shrii_1_4:
{
g[1].i = (uint64_t)g[1].i >> g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shrii_1_5:
{
g[1].i = (uint64_t)g[1].i >> g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shrii_2_0:
{
g[2].i = (uint64_t)g[2].i >> g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shrii_2_1:
{
g[2].i = (uint64_t)g[2].i >> g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shrii_2_3:
{
g[2].i = (uint64_t)g[2].i >> g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shrii_2_4:
{
g[2].i = (uint64_t)g[2].i >> g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shrii_2_5:
{
g[2].i = (uint64_t)g[2].i >> g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shrii_3_0:
{
g[3].i = (uint64_t)g[3].i >> g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shrii_3_1:
{
g[3].i = (uint64_t)g[3].i >> g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shrii_3_2:
{
g[3].i = (uint64_t)g[3].i >> g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shrii_3_4:
{
g[3].i = (uint64_t)g[3].i >> g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shrii_3_5:
{
g[3].i = (uint64_t)g[3].i >> g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shrii_4_0:
{
g[4].i = (uint64_t)g[4].i >> g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shrii_4_1:
{
g[4].i = (uint64_t)g[4].i >> g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shrii_4_2:
{
g[4].i = (uint64_t)g[4].i >> g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shrii_4_3:
{
g[4].i = (uint64_t)g[4].i >> g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shrii_4_5:
{
g[4].i = (uint64_t)g[4].i >> g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shrii_5_0:
{
g[5].i = (uint64_t)g[5].i >> g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shrii_5_1:
{
g[5].i = (uint64_t)g[5].i >> g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shrii_5_2:
{
g[5].i = (uint64_t)g[5].i >> g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shrii_5_3:
{
g[5].i = (uint64_t)g[5].i >> g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shrii_5_4:
{
g[5].i = (uint64_t)g[5].i >> g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

shrik_0:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[0].i = (uint64_t)g[0].i >> constant;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

shrik_1:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[1].i = (uint64_t)g[1].i >> constant;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

shrik_2:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[2].i = (uint64_t)g[2].i >> constant;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

shrik_3:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[3].i = (uint64_t)g[3].i >> constant;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

shrik_4:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[4].i = (uint64_t)g[4].i >> constant;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

shrik_5:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[5].i = (uint64_t)g[5].i >> constant;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

shrki_0:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[0].i = (uint64_t)constant >> g[0].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

shrki_1:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[1].i = (uint64_t)constant >> g[1].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

shrki_2:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[2].i = (uint64_t)constant >> g[2].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

shrki_3:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[3].i = (uint64_t)constant >> g[3].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

shrki_4:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[4].i = (uint64_t)constant >> g[4].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

shrki_5:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[5].i = (uint64_t)constant >> g[5].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

sarii_0_1:
{
g[0].i >>= g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

sarii_0_2:
{
g[0].i >>= g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

sarii_0_3:
{
g[0].i >>= g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

sarii_0_4:
{
g[0].i >>= g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

sarii_0_5:
{
g[0].i >>= g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

sarii_1_0:
{
g[1].i >>= g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

sarii_1_2:
{
g[1].i >>= g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

sarii_1_3:
{
g[1].i >>= g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

sarii_1_4:
{
g[1].i >>= g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

sarii_1_5:
{
g[1].i >>= g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

sarii_2_0:
{
g[2].i >>= g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

sarii_2_1:
{
g[2].i >>= g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

sarii_2_3:
{
g[2].i >>= g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

sarii_2_4:
{
g[2].i >>= g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

sarii_2_5:
{
g[2].i >>= g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

sarii_3_0:
{
g[3].i >>= g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

sarii_3_1:
{
g[3].i >>= g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

sarii_3_2:
{
g[3].i >>= g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

sarii_3_4:
{
g[3].i >>= g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

sarii_3_5:
{
g[3].i >>= g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

sarii_4_0:
{
g[4].i >>= g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

sarii_4_1:
{
g[4].i >>= g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

sarii_4_2:
{
g[4].i >>= g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

sarii_4_3:
{
g[4].i >>= g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

sarii_4_5:
{
g[4].i >>= g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

sarii_5_0:
{
g[5].i >>= g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

sarii_5_1:
{
g[5].i >>= g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

sarii_5_2:
{
g[5].i >>= g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

sarii_5_3:
{
g[5].i >>= g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

sarii_5_4:
{
g[5].i >>= g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

sarik_0:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[0].i >>= constant;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

sarik_1:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[1].i >>= constant;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

sarik_2:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[2].i >>= constant;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

sarik_3:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[3].i >>= constant;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

sarik_4:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[4].i >>= constant;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

sarik_5:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[5].i >>= constant;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

sarki_0:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[0].i = constant >> g[0].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

sarki_1:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[1].i = constant >> g[1].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

sarki_2:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[2].i = constant >> g[2].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

sarki_3:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[3].i = constant >> g[3].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

sarki_4:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[4].i = constant >> g[4].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

sarki_5:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[5].i = constant >> g[5].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

movii_0_1:
{
g[0].i = g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movii_0_2:
{
g[0].i = g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movii_0_3:
{
g[0].i = g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movii_0_4:
{
g[0].i = g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movii_0_5:
{
g[0].i = g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movii_1_0:
{
g[1].i = g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movii_1_2:
{
g[1].i = g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movii_1_3:
{
g[1].i = g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movii_1_4:
{
g[1].i = g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movii_1_5:
{
g[1].i = g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movii_2_0:
{
g[2].i = g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movii_2_1:
{
g[2].i = g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movii_2_3:
{
g[2].i = g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movii_2_4:
{
g[2].i = g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movii_2_5:
{
g[2].i = g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movii_3_0:
{
g[3].i = g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movii_3_1:
{
g[3].i = g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movii_3_2:
{
g[3].i = g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movii_3_4:
{
g[3].i = g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movii_3_5:
{
g[3].i = g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movii_4_0:
{
g[4].i = g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movii_4_1:
{
g[4].i = g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movii_4_2:
{
g[4].i = g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movii_4_3:
{
g[4].i = g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movii_4_5:
{
g[4].i = g[5].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movii_5_0:
{
g[5].i = g[0].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movii_5_1:
{
g[5].i = g[1].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movii_5_2:
{
g[5].i = g[2].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movii_5_3:
{
g[5].i = g[3].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movii_5_4:
{
g[5].i = g[4].i;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpp_0_1:
{
g[0].tag = g[1].tag;
g[0].p = g[1].p;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpp_0_2:
{
g[0].tag = g[2].tag;
g[0].p = g[2].p;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpp_0_3:
{
g[0].tag = g[3].tag;
g[0].p = g[3].p;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpp_0_4:
{
g[0].tag = g[4].tag;
g[0].p = g[4].p;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpp_0_5:
{
g[0].tag = g[5].tag;
g[0].p = g[5].p;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpp_1_0:
{
g[1].tag = g[0].tag;
g[1].p = g[0].p;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpp_1_2:
{
g[1].tag = g[2].tag;
g[1].p = g[2].p;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpp_1_3:
{
g[1].tag = g[3].tag;
g[1].p = g[3].p;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpp_1_4:
{
g[1].tag = g[4].tag;
g[1].p = g[4].p;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpp_1_5:
{
g[1].tag = g[5].tag;
g[1].p = g[5].p;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpp_2_0:
{
g[2].tag = g[0].tag;
g[2].p = g[0].p;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpp_2_1:
{
g[2].tag = g[1].tag;
g[2].p = g[1].p;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpp_2_3:
{
g[2].tag = g[3].tag;
g[2].p = g[3].p;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpp_2_4:
{
g[2].tag = g[4].tag;
g[2].p = g[4].p;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpp_2_5:
{
g[2].tag = g[5].tag;
g[2].p = g[5].p;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpp_3_0:
{
g[3].tag = g[0].tag;
g[3].p = g[0].p;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpp_3_1:
{
g[3].tag = g[1].tag;
g[3].p = g[1].p;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpp_3_2:
{
g[3].tag = g[2].tag;
g[3].p = g[2].p;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpp_3_4:
{
g[3].tag = g[4].tag;
g[3].p = g[4].p;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpp_3_5:
{
g[3].tag = g[5].tag;
g[3].p = g[5].p;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpp_4_0:
{
g[4].tag = g[0].tag;
g[4].p = g[0].p;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpp_4_1:
{
g[4].tag = g[1].tag;
g[4].p = g[1].p;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpp_4_2:
{
g[4].tag = g[2].tag;
g[4].p = g[2].p;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpp_4_3:
{
g[4].tag = g[3].tag;
g[4].p = g[3].p;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpp_4_5:
{
g[4].tag = g[5].tag;
g[4].p = g[5].p;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpp_5_0:
{
g[5].tag = g[0].tag;
g[5].p = g[0].p;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpp_5_1:
{
g[5].tag = g[1].tag;
g[5].p = g[1].p;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpp_5_2:
{
g[5].tag = g[2].tag;
g[5].p = g[2].p;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpp_5_3:
{
g[5].tag = g[3].tag;
g[5].p = g[3].p;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpp_5_4:
{
g[5].tag = g[4].tag;
g[5].p = g[4].p;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movip_0_1:
{
g[0].p = g[1].p;
g[0].tag = g[1].tag;
ts |= 0x20 /*100000*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movip_0_2:
{
g[0].p = g[2].p;
g[0].tag = g[2].tag;
ts |= 0x20 /*100000*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movip_0_3:
{
g[0].p = g[3].p;
g[0].tag = g[3].tag;
ts |= 0x20 /*100000*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movip_0_4:
{
g[0].p = g[4].p;
g[0].tag = g[4].tag;
ts |= 0x20 /*100000*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movip_0_5:
{
g[0].p = g[5].p;
g[0].tag = g[5].tag;
ts |= 0x20 /*100000*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movip_1_0:
{
g[1].p = g[0].p;
g[1].tag = g[0].tag;
ts |= 0x10 /*010000*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movip_1_2:
{
g[1].p = g[2].p;
g[1].tag = g[2].tag;
ts |= 0x10 /*010000*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movip_1_3:
{
g[1].p = g[3].p;
g[1].tag = g[3].tag;
ts |= 0x10 /*010000*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movip_1_4:
{
g[1].p = g[4].p;
g[1].tag = g[4].tag;
ts |= 0x10 /*010000*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movip_1_5:
{
g[1].p = g[5].p;
g[1].tag = g[5].tag;
ts |= 0x10 /*010000*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movip_2_0:
{
g[2].p = g[0].p;
g[2].tag = g[0].tag;
ts |= 0x8 /*001000*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movip_2_1:
{
g[2].p = g[1].p;
g[2].tag = g[1].tag;
ts |= 0x8 /*001000*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movip_2_3:
{
g[2].p = g[3].p;
g[2].tag = g[3].tag;
ts |= 0x8 /*001000*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movip_2_4:
{
g[2].p = g[4].p;
g[2].tag = g[4].tag;
ts |= 0x8 /*001000*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movip_2_5:
{
g[2].p = g[5].p;
g[2].tag = g[5].tag;
ts |= 0x8 /*001000*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movip_3_0:
{
g[3].p = g[0].p;
g[3].tag = g[0].tag;
ts |= 0x4 /*000100*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movip_3_1:
{
g[3].p = g[1].p;
g[3].tag = g[1].tag;
ts |= 0x4 /*000100*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movip_3_2:
{
g[3].p = g[2].p;
g[3].tag = g[2].tag;
ts |= 0x4 /*000100*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movip_3_4:
{
g[3].p = g[4].p;
g[3].tag = g[4].tag;
ts |= 0x4 /*000100*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movip_3_5:
{
g[3].p = g[5].p;
g[3].tag = g[5].tag;
ts |= 0x4 /*000100*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movip_4_0:
{
g[4].p = g[0].p;
g[4].tag = g[0].tag;
ts |= 0x2 /*000010*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movip_4_1:
{
g[4].p = g[1].p;
g[4].tag = g[1].tag;
ts |= 0x2 /*000010*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movip_4_2:
{
g[4].p = g[2].p;
g[4].tag = g[2].tag;
ts |= 0x2 /*000010*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movip_4_3:
{
g[4].p = g[3].p;
g[4].tag = g[3].tag;
ts |= 0x2 /*000010*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movip_4_5:
{
g[4].p = g[5].p;
g[4].tag = g[5].tag;
ts |= 0x2 /*000010*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movip_5_0:
{
g[5].p = g[0].p;
g[5].tag = g[0].tag;
ts |= 0x1 /*000001*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movip_5_1:
{
g[5].p = g[1].p;
g[5].tag = g[1].tag;
ts |= 0x1 /*000001*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movip_5_2:
{
g[5].p = g[2].p;
g[5].tag = g[2].tag;
ts |= 0x1 /*000001*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movip_5_3:
{
g[5].p = g[3].p;
g[5].tag = g[3].tag;
ts |= 0x1 /*000001*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movip_5_4:
{
g[5].p = g[4].p;
g[5].tag = g[4].tag;
ts |= 0x1 /*000001*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpi_0_1:
{
g[0].i = g[1].i;
g[0].tag = 0;
ts |= 0x1f /*011111*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpi_0_2:
{
g[0].i = g[2].i;
g[0].tag = 0;
ts |= 0x1f /*011111*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpi_0_3:
{
g[0].i = g[3].i;
g[0].tag = 0;
ts |= 0x1f /*011111*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpi_0_4:
{
g[0].i = g[4].i;
g[0].tag = 0;
ts |= 0x1f /*011111*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpi_0_5:
{
g[0].i = g[5].i;
g[0].tag = 0;
ts |= 0x1f /*011111*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpi_1_0:
{
g[1].i = g[0].i;
g[1].tag = 0;
ts |= 0x2f /*101111*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpi_1_2:
{
g[1].i = g[2].i;
g[1].tag = 0;
ts |= 0x2f /*101111*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpi_1_3:
{
g[1].i = g[3].i;
g[1].tag = 0;
ts |= 0x2f /*101111*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpi_1_4:
{
g[1].i = g[4].i;
g[1].tag = 0;
ts |= 0x2f /*101111*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpi_1_5:
{
g[1].i = g[5].i;
g[1].tag = 0;
ts |= 0x2f /*101111*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpi_2_0:
{
g[2].i = g[0].i;
g[2].tag = 0;
ts |= 0x37 /*110111*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpi_2_1:
{
g[2].i = g[1].i;
g[2].tag = 0;
ts |= 0x37 /*110111*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpi_2_3:
{
g[2].i = g[3].i;
g[2].tag = 0;
ts |= 0x37 /*110111*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpi_2_4:
{
g[2].i = g[4].i;
g[2].tag = 0;
ts |= 0x37 /*110111*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpi_2_5:
{
g[2].i = g[5].i;
g[2].tag = 0;
ts |= 0x37 /*110111*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpi_3_0:
{
g[3].i = g[0].i;
g[3].tag = 0;
ts |= 0x3b /*111011*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpi_3_1:
{
g[3].i = g[1].i;
g[3].tag = 0;
ts |= 0x3b /*111011*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpi_3_2:
{
g[3].i = g[2].i;
g[3].tag = 0;
ts |= 0x3b /*111011*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpi_3_4:
{
g[3].i = g[4].i;
g[3].tag = 0;
ts |= 0x3b /*111011*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpi_3_5:
{
g[3].i = g[5].i;
g[3].tag = 0;
ts |= 0x3b /*111011*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpi_4_0:
{
g[4].i = g[0].i;
g[4].tag = 0;
ts |= 0x3d /*111101*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpi_4_1:
{
g[4].i = g[1].i;
g[4].tag = 0;
ts |= 0x3d /*111101*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpi_4_2:
{
g[4].i = g[2].i;
g[4].tag = 0;
ts |= 0x3d /*111101*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpi_4_3:
{
g[4].i = g[3].i;
g[4].tag = 0;
ts |= 0x3d /*111101*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpi_4_5:
{
g[4].i = g[5].i;
g[4].tag = 0;
ts |= 0x3d /*111101*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpi_5_0:
{
g[5].i = g[0].i;
g[5].tag = 0;
ts |= 0x3e /*111110*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpi_5_1:
{
g[5].i = g[1].i;
g[5].tag = 0;
ts |= 0x3e /*111110*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpi_5_2:
{
g[5].i = g[2].i;
g[5].tag = 0;
ts |= 0x3e /*111110*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpi_5_3:
{
g[5].i = g[3].i;
g[5].tag = 0;
ts |= 0x3e /*111110*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpi_5_4:
{
g[5].i = g[4].i;
g[5].tag = 0;
ts |= 0x3e /*111110*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movik_0:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[0].i = constant;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

movik_1:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[1].i = constant;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

movik_2:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[2].i = constant;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

movik_3:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[3].i = constant;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

movik_4:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[4].i = constant;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

movik_5:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[5].i = constant;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

movpk_0:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[0].i = constant;
g[0].tag = 0;
ts |= 0x1f /*011111*/;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

movpk_1:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[1].i = constant;
g[1].tag = 0;
ts |= 0x2f /*101111*/;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

movpk_2:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[2].i = constant;
g[2].tag = 0;
ts |= 0x37 /*110111*/;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

movpk_3:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[3].i = constant;
g[3].tag = 0;
ts |= 0x3b /*111011*/;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

movpk_4:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[4].i = constant;
g[4].tag = 0;
ts |= 0x3d /*111101*/;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

movpk_5:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[5].i = constant;
g[5].tag = 0;
ts |= 0x3e /*111110*/;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

movpN_0:
{
g[0].p = NULL;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpN_1:
{
g[1].p = NULL;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpN_2:
{
g[2].p = NULL;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpN_3:
{
g[3].p = NULL;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpN_4:
{
g[4].p = NULL;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

movpN_5:
{
g[5].p = NULL;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

moviN_0:
{
g[0].p = NULL;
g[0].tag = 1;
ts |= 0x20 /*100000*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

moviN_1:
{
g[1].p = NULL;
g[1].tag = 1;
ts |= 0x10 /*010000*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

moviN_2:
{
g[2].p = NULL;
g[2].tag = 1;
ts |= 0x8 /*001000*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

moviN_3:
{
g[3].p = NULL;
g[3].tag = 1;
ts |= 0x4 /*000100*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

moviN_4:
{
g[4].p = NULL;
g[4].tag = 1;
ts |= 0x2 /*000010*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

moviN_5:
{
g[5].p = NULL;
g[5].tag = 1;
ts |= 0x1 /*000001*/;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

getl_0:
{
int16_t constant = program[pc + 1];
value val = fp[constant];
if (val.tag != 0)
{
g[0].tag = val.tag;
ts |= 0x20 /*100000*/;
g[0].p = val.p;
}
else{
g[0].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getl_1:
{
int16_t constant = program[pc + 1];
value val = fp[constant];
if (val.tag != 0)
{
g[1].tag = val.tag;
ts |= 0x10 /*010000*/;
g[1].p = val.p;
}
else{
g[1].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getl_2:
{
int16_t constant = program[pc + 1];
value val = fp[constant];
if (val.tag != 0)
{
g[2].tag = val.tag;
ts |= 0x8 /*001000*/;
g[2].p = val.p;
}
else{
g[2].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getl_3:
{
int16_t constant = program[pc + 1];
value val = fp[constant];
if (val.tag != 0)
{
g[3].tag = val.tag;
ts |= 0x4 /*000100*/;
g[3].p = val.p;
}
else{
g[3].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getl_4:
{
int16_t constant = program[pc + 1];
value val = fp[constant];
if (val.tag != 0)
{
g[4].tag = val.tag;
ts |= 0x2 /*000010*/;
g[4].p = val.p;
}
else{
g[4].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getl_5:
{
int16_t constant = program[pc + 1];
value val = fp[constant];
if (val.tag != 0)
{
g[5].tag = val.tag;
ts |= 0x1 /*000001*/;
g[5].p = val.p;
}
else{
g[5].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getlp_0:
{
int16_t constant = program[pc + 1];
value val = fp[constant];
if (val.tag == 0){
g[0].tag = 0;
ts |= 0x1f /*011111*/;
g[0].i = val.i;
}
g[0].tag = val.tag;
g[0].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getlp_1:
{
int16_t constant = program[pc + 1];
value val = fp[constant];
if (val.tag == 0){
g[1].tag = 0;
ts |= 0x2f /*101111*/;
g[1].i = val.i;
}
g[1].tag = val.tag;
g[1].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getlp_2:
{
int16_t constant = program[pc + 1];
value val = fp[constant];
if (val.tag == 0){
g[2].tag = 0;
ts |= 0x37 /*110111*/;
g[2].i = val.i;
}
g[2].tag = val.tag;
g[2].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getlp_3:
{
int16_t constant = program[pc + 1];
value val = fp[constant];
if (val.tag == 0){
g[3].tag = 0;
ts |= 0x3b /*111011*/;
g[3].i = val.i;
}
g[3].tag = val.tag;
g[3].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getlp_4:
{
int16_t constant = program[pc + 1];
value val = fp[constant];
if (val.tag == 0){
g[4].tag = 0;
ts |= 0x3d /*111101*/;
g[4].i = val.i;
}
g[4].tag = val.tag;
g[4].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getlp_5:
{
int16_t constant = program[pc + 1];
value val = fp[constant];
if (val.tag == 0){
g[5].tag = 0;
ts |= 0x3e /*111110*/;
g[5].i = val.i;
}
g[5].tag = val.tag;
g[5].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setl_0:
{
int16_t constant = program[pc + 1];
value* vp = fp + constant * sizeof(value);
(*vp).tag = g[0].tag;
(*vp).i = g[0].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setl_1:
{
int16_t constant = program[pc + 1];
value* vp = fp + constant * sizeof(value);
(*vp).tag = g[1].tag;
(*vp).i = g[1].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setl_2:
{
int16_t constant = program[pc + 1];
value* vp = fp + constant * sizeof(value);
(*vp).tag = g[2].tag;
(*vp).i = g[2].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setl_3:
{
int16_t constant = program[pc + 1];
value* vp = fp + constant * sizeof(value);
(*vp).tag = g[3].tag;
(*vp).i = g[3].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setl_4:
{
int16_t constant = program[pc + 1];
value* vp = fp + constant * sizeof(value);
(*vp).tag = g[4].tag;
(*vp).i = g[4].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setl_5:
{
int16_t constant = program[pc + 1];
value* vp = fp + constant * sizeof(value);
(*vp).tag = g[5].tag;
(*vp).i = g[5].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setlp_0:
{
int16_t constant = program[pc + 1];
value* vp = fp + constant * sizeof(value);
(*vp).tag = g[0].tag;
(*vp).p = g[0].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setlp_1:
{
int16_t constant = program[pc + 1];
value* vp = fp + constant * sizeof(value);
(*vp).tag = g[1].tag;
(*vp).p = g[1].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setlp_2:
{
int16_t constant = program[pc + 1];
value* vp = fp + constant * sizeof(value);
(*vp).tag = g[2].tag;
(*vp).p = g[2].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setlp_3:
{
int16_t constant = program[pc + 1];
value* vp = fp + constant * sizeof(value);
(*vp).tag = g[3].tag;
(*vp).p = g[3].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setlp_4:
{
int16_t constant = program[pc + 1];
value* vp = fp + constant * sizeof(value);
(*vp).tag = g[4].tag;
(*vp).p = g[4].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setlp_5:
{
int16_t constant = program[pc + 1];
value* vp = fp + constant * sizeof(value);
(*vp).tag = g[5].tag;
(*vp).p = g[5].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getm_0_0:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[0].p))->data[constant];
if (val.tag != 0)
{
g[0].tag = val.tag;
ts |= 0x20 /*100000*/;
g[0].p = val.p;
}
else{
g[0].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getm_0_1:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[1].p))->data[constant];
if (val.tag != 0)
{
g[0].tag = val.tag;
ts |= 0x20 /*100000*/;
g[0].p = val.p;
}
else{
g[0].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getm_0_2:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[2].p))->data[constant];
if (val.tag != 0)
{
g[0].tag = val.tag;
ts |= 0x20 /*100000*/;
g[0].p = val.p;
}
else{
g[0].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getm_0_3:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[3].p))->data[constant];
if (val.tag != 0)
{
g[0].tag = val.tag;
ts |= 0x20 /*100000*/;
g[0].p = val.p;
}
else{
g[0].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getm_0_4:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[4].p))->data[constant];
if (val.tag != 0)
{
g[0].tag = val.tag;
ts |= 0x20 /*100000*/;
g[0].p = val.p;
}
else{
g[0].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getm_0_5:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[5].p))->data[constant];
if (val.tag != 0)
{
g[0].tag = val.tag;
ts |= 0x20 /*100000*/;
g[0].p = val.p;
}
else{
g[0].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getm_1_0:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[0].p))->data[constant];
if (val.tag != 0)
{
g[1].tag = val.tag;
ts |= 0x10 /*010000*/;
g[1].p = val.p;
}
else{
g[1].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getm_1_1:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[1].p))->data[constant];
if (val.tag != 0)
{
g[1].tag = val.tag;
ts |= 0x10 /*010000*/;
g[1].p = val.p;
}
else{
g[1].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getm_1_2:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[2].p))->data[constant];
if (val.tag != 0)
{
g[1].tag = val.tag;
ts |= 0x10 /*010000*/;
g[1].p = val.p;
}
else{
g[1].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getm_1_3:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[3].p))->data[constant];
if (val.tag != 0)
{
g[1].tag = val.tag;
ts |= 0x10 /*010000*/;
g[1].p = val.p;
}
else{
g[1].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getm_1_4:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[4].p))->data[constant];
if (val.tag != 0)
{
g[1].tag = val.tag;
ts |= 0x10 /*010000*/;
g[1].p = val.p;
}
else{
g[1].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getm_1_5:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[5].p))->data[constant];
if (val.tag != 0)
{
g[1].tag = val.tag;
ts |= 0x10 /*010000*/;
g[1].p = val.p;
}
else{
g[1].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getm_2_0:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[0].p))->data[constant];
if (val.tag != 0)
{
g[2].tag = val.tag;
ts |= 0x8 /*001000*/;
g[2].p = val.p;
}
else{
g[2].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getm_2_1:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[1].p))->data[constant];
if (val.tag != 0)
{
g[2].tag = val.tag;
ts |= 0x8 /*001000*/;
g[2].p = val.p;
}
else{
g[2].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getm_2_2:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[2].p))->data[constant];
if (val.tag != 0)
{
g[2].tag = val.tag;
ts |= 0x8 /*001000*/;
g[2].p = val.p;
}
else{
g[2].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getm_2_3:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[3].p))->data[constant];
if (val.tag != 0)
{
g[2].tag = val.tag;
ts |= 0x8 /*001000*/;
g[2].p = val.p;
}
else{
g[2].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getm_2_4:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[4].p))->data[constant];
if (val.tag != 0)
{
g[2].tag = val.tag;
ts |= 0x8 /*001000*/;
g[2].p = val.p;
}
else{
g[2].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getm_2_5:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[5].p))->data[constant];
if (val.tag != 0)
{
g[2].tag = val.tag;
ts |= 0x8 /*001000*/;
g[2].p = val.p;
}
else{
g[2].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getm_3_0:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[0].p))->data[constant];
if (val.tag != 0)
{
g[3].tag = val.tag;
ts |= 0x4 /*000100*/;
g[3].p = val.p;
}
else{
g[3].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getm_3_1:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[1].p))->data[constant];
if (val.tag != 0)
{
g[3].tag = val.tag;
ts |= 0x4 /*000100*/;
g[3].p = val.p;
}
else{
g[3].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getm_3_2:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[2].p))->data[constant];
if (val.tag != 0)
{
g[3].tag = val.tag;
ts |= 0x4 /*000100*/;
g[3].p = val.p;
}
else{
g[3].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getm_3_3:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[3].p))->data[constant];
if (val.tag != 0)
{
g[3].tag = val.tag;
ts |= 0x4 /*000100*/;
g[3].p = val.p;
}
else{
g[3].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getm_3_4:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[4].p))->data[constant];
if (val.tag != 0)
{
g[3].tag = val.tag;
ts |= 0x4 /*000100*/;
g[3].p = val.p;
}
else{
g[3].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getm_3_5:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[5].p))->data[constant];
if (val.tag != 0)
{
g[3].tag = val.tag;
ts |= 0x4 /*000100*/;
g[3].p = val.p;
}
else{
g[3].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getm_4_0:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[0].p))->data[constant];
if (val.tag != 0)
{
g[4].tag = val.tag;
ts |= 0x2 /*000010*/;
g[4].p = val.p;
}
else{
g[4].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getm_4_1:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[1].p))->data[constant];
if (val.tag != 0)
{
g[4].tag = val.tag;
ts |= 0x2 /*000010*/;
g[4].p = val.p;
}
else{
g[4].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getm_4_2:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[2].p))->data[constant];
if (val.tag != 0)
{
g[4].tag = val.tag;
ts |= 0x2 /*000010*/;
g[4].p = val.p;
}
else{
g[4].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getm_4_3:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[3].p))->data[constant];
if (val.tag != 0)
{
g[4].tag = val.tag;
ts |= 0x2 /*000010*/;
g[4].p = val.p;
}
else{
g[4].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getm_4_4:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[4].p))->data[constant];
if (val.tag != 0)
{
g[4].tag = val.tag;
ts |= 0x2 /*000010*/;
g[4].p = val.p;
}
else{
g[4].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getm_4_5:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[5].p))->data[constant];
if (val.tag != 0)
{
g[4].tag = val.tag;
ts |= 0x2 /*000010*/;
g[4].p = val.p;
}
else{
g[4].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getm_5_0:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[0].p))->data[constant];
if (val.tag != 0)
{
g[5].tag = val.tag;
ts |= 0x1 /*000001*/;
g[5].p = val.p;
}
else{
g[5].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getm_5_1:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[1].p))->data[constant];
if (val.tag != 0)
{
g[5].tag = val.tag;
ts |= 0x1 /*000001*/;
g[5].p = val.p;
}
else{
g[5].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getm_5_2:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[2].p))->data[constant];
if (val.tag != 0)
{
g[5].tag = val.tag;
ts |= 0x1 /*000001*/;
g[5].p = val.p;
}
else{
g[5].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getm_5_3:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[3].p))->data[constant];
if (val.tag != 0)
{
g[5].tag = val.tag;
ts |= 0x1 /*000001*/;
g[5].p = val.p;
}
else{
g[5].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getm_5_4:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[4].p))->data[constant];
if (val.tag != 0)
{
g[5].tag = val.tag;
ts |= 0x1 /*000001*/;
g[5].p = val.p;
}
else{
g[5].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getm_5_5:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[5].p))->data[constant];
if (val.tag != 0)
{
g[5].tag = val.tag;
ts |= 0x1 /*000001*/;
g[5].p = val.p;
}
else{
g[5].i = val.i;
}
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getmp_0_0:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[0].p))->data[constant];
if (val.tag == 0){
g[0].tag = 0;
ts |= 0x1f /*011111*/;
g[0].i = val.i;
}
g[0].tag = val.tag;
g[0].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getmp_0_1:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[1].p))->data[constant];
if (val.tag == 0){
g[0].tag = 0;
ts |= 0x1f /*011111*/;
g[0].i = val.i;
}
g[0].tag = val.tag;
g[0].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getmp_0_2:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[2].p))->data[constant];
if (val.tag == 0){
g[0].tag = 0;
ts |= 0x1f /*011111*/;
g[0].i = val.i;
}
g[0].tag = val.tag;
g[0].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getmp_0_3:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[3].p))->data[constant];
if (val.tag == 0){
g[0].tag = 0;
ts |= 0x1f /*011111*/;
g[0].i = val.i;
}
g[0].tag = val.tag;
g[0].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getmp_0_4:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[4].p))->data[constant];
if (val.tag == 0){
g[0].tag = 0;
ts |= 0x1f /*011111*/;
g[0].i = val.i;
}
g[0].tag = val.tag;
g[0].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getmp_0_5:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[5].p))->data[constant];
if (val.tag == 0){
g[0].tag = 0;
ts |= 0x1f /*011111*/;
g[0].i = val.i;
}
g[0].tag = val.tag;
g[0].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getmp_1_0:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[0].p))->data[constant];
if (val.tag == 0){
g[1].tag = 0;
ts |= 0x2f /*101111*/;
g[1].i = val.i;
}
g[1].tag = val.tag;
g[1].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getmp_1_1:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[1].p))->data[constant];
if (val.tag == 0){
g[1].tag = 0;
ts |= 0x2f /*101111*/;
g[1].i = val.i;
}
g[1].tag = val.tag;
g[1].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getmp_1_2:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[2].p))->data[constant];
if (val.tag == 0){
g[1].tag = 0;
ts |= 0x2f /*101111*/;
g[1].i = val.i;
}
g[1].tag = val.tag;
g[1].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getmp_1_3:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[3].p))->data[constant];
if (val.tag == 0){
g[1].tag = 0;
ts |= 0x2f /*101111*/;
g[1].i = val.i;
}
g[1].tag = val.tag;
g[1].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getmp_1_4:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[4].p))->data[constant];
if (val.tag == 0){
g[1].tag = 0;
ts |= 0x2f /*101111*/;
g[1].i = val.i;
}
g[1].tag = val.tag;
g[1].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getmp_1_5:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[5].p))->data[constant];
if (val.tag == 0){
g[1].tag = 0;
ts |= 0x2f /*101111*/;
g[1].i = val.i;
}
g[1].tag = val.tag;
g[1].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getmp_2_0:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[0].p))->data[constant];
if (val.tag == 0){
g[2].tag = 0;
ts |= 0x37 /*110111*/;
g[2].i = val.i;
}
g[2].tag = val.tag;
g[2].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getmp_2_1:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[1].p))->data[constant];
if (val.tag == 0){
g[2].tag = 0;
ts |= 0x37 /*110111*/;
g[2].i = val.i;
}
g[2].tag = val.tag;
g[2].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getmp_2_2:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[2].p))->data[constant];
if (val.tag == 0){
g[2].tag = 0;
ts |= 0x37 /*110111*/;
g[2].i = val.i;
}
g[2].tag = val.tag;
g[2].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getmp_2_3:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[3].p))->data[constant];
if (val.tag == 0){
g[2].tag = 0;
ts |= 0x37 /*110111*/;
g[2].i = val.i;
}
g[2].tag = val.tag;
g[2].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getmp_2_4:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[4].p))->data[constant];
if (val.tag == 0){
g[2].tag = 0;
ts |= 0x37 /*110111*/;
g[2].i = val.i;
}
g[2].tag = val.tag;
g[2].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getmp_2_5:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[5].p))->data[constant];
if (val.tag == 0){
g[2].tag = 0;
ts |= 0x37 /*110111*/;
g[2].i = val.i;
}
g[2].tag = val.tag;
g[2].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getmp_3_0:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[0].p))->data[constant];
if (val.tag == 0){
g[3].tag = 0;
ts |= 0x3b /*111011*/;
g[3].i = val.i;
}
g[3].tag = val.tag;
g[3].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getmp_3_1:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[1].p))->data[constant];
if (val.tag == 0){
g[3].tag = 0;
ts |= 0x3b /*111011*/;
g[3].i = val.i;
}
g[3].tag = val.tag;
g[3].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getmp_3_2:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[2].p))->data[constant];
if (val.tag == 0){
g[3].tag = 0;
ts |= 0x3b /*111011*/;
g[3].i = val.i;
}
g[3].tag = val.tag;
g[3].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getmp_3_3:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[3].p))->data[constant];
if (val.tag == 0){
g[3].tag = 0;
ts |= 0x3b /*111011*/;
g[3].i = val.i;
}
g[3].tag = val.tag;
g[3].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getmp_3_4:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[4].p))->data[constant];
if (val.tag == 0){
g[3].tag = 0;
ts |= 0x3b /*111011*/;
g[3].i = val.i;
}
g[3].tag = val.tag;
g[3].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getmp_3_5:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[5].p))->data[constant];
if (val.tag == 0){
g[3].tag = 0;
ts |= 0x3b /*111011*/;
g[3].i = val.i;
}
g[3].tag = val.tag;
g[3].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getmp_4_0:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[0].p))->data[constant];
if (val.tag == 0){
g[4].tag = 0;
ts |= 0x3d /*111101*/;
g[4].i = val.i;
}
g[4].tag = val.tag;
g[4].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getmp_4_1:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[1].p))->data[constant];
if (val.tag == 0){
g[4].tag = 0;
ts |= 0x3d /*111101*/;
g[4].i = val.i;
}
g[4].tag = val.tag;
g[4].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getmp_4_2:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[2].p))->data[constant];
if (val.tag == 0){
g[4].tag = 0;
ts |= 0x3d /*111101*/;
g[4].i = val.i;
}
g[4].tag = val.tag;
g[4].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getmp_4_3:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[3].p))->data[constant];
if (val.tag == 0){
g[4].tag = 0;
ts |= 0x3d /*111101*/;
g[4].i = val.i;
}
g[4].tag = val.tag;
g[4].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getmp_4_4:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[4].p))->data[constant];
if (val.tag == 0){
g[4].tag = 0;
ts |= 0x3d /*111101*/;
g[4].i = val.i;
}
g[4].tag = val.tag;
g[4].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getmp_4_5:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[5].p))->data[constant];
if (val.tag == 0){
g[4].tag = 0;
ts |= 0x3d /*111101*/;
g[4].i = val.i;
}
g[4].tag = val.tag;
g[4].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getmp_5_0:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[0].p))->data[constant];
if (val.tag == 0){
g[5].tag = 0;
ts |= 0x3e /*111110*/;
g[5].i = val.i;
}
g[5].tag = val.tag;
g[5].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getmp_5_1:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[1].p))->data[constant];
if (val.tag == 0){
g[5].tag = 0;
ts |= 0x3e /*111110*/;
g[5].i = val.i;
}
g[5].tag = val.tag;
g[5].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getmp_5_2:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[2].p))->data[constant];
if (val.tag == 0){
g[5].tag = 0;
ts |= 0x3e /*111110*/;
g[5].i = val.i;
}
g[5].tag = val.tag;
g[5].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getmp_5_3:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[3].p))->data[constant];
if (val.tag == 0){
g[5].tag = 0;
ts |= 0x3e /*111110*/;
g[5].i = val.i;
}
g[5].tag = val.tag;
g[5].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getmp_5_4:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[4].p))->data[constant];
if (val.tag == 0){
g[5].tag = 0;
ts |= 0x3e /*111110*/;
g[5].i = val.i;
}
g[5].tag = val.tag;
g[5].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

getmp_5_5:
{
int16_t constant = program[pc + 1];
value val = ((object *)(g[5].p))->data[constant];
if (val.tag == 0){
g[5].tag = 0;
ts |= 0x3e /*111110*/;
g[5].i = val.i;
}
g[5].tag = val.tag;
g[5].p = val.p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setm_0_0:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[0].p))->data[constant]);
vp->tag =0;
vp->i = g[0].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setm_0_1:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[0].p))->data[constant]);
vp->tag =0;
vp->i = g[1].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setm_0_2:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[0].p))->data[constant]);
vp->tag =0;
vp->i = g[2].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setm_0_3:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[0].p))->data[constant]);
vp->tag =0;
vp->i = g[3].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setm_0_4:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[0].p))->data[constant]);
vp->tag =0;
vp->i = g[4].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setm_0_5:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[0].p))->data[constant]);
vp->tag =0;
vp->i = g[5].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setm_1_0:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[1].p))->data[constant]);
vp->tag =0;
vp->i = g[0].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setm_1_1:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[1].p))->data[constant]);
vp->tag =0;
vp->i = g[1].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setm_1_2:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[1].p))->data[constant]);
vp->tag =0;
vp->i = g[2].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setm_1_3:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[1].p))->data[constant]);
vp->tag =0;
vp->i = g[3].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setm_1_4:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[1].p))->data[constant]);
vp->tag =0;
vp->i = g[4].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setm_1_5:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[1].p))->data[constant]);
vp->tag =0;
vp->i = g[5].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setm_2_0:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[2].p))->data[constant]);
vp->tag =0;
vp->i = g[0].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setm_2_1:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[2].p))->data[constant]);
vp->tag =0;
vp->i = g[1].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setm_2_2:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[2].p))->data[constant]);
vp->tag =0;
vp->i = g[2].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setm_2_3:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[2].p))->data[constant]);
vp->tag =0;
vp->i = g[3].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setm_2_4:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[2].p))->data[constant]);
vp->tag =0;
vp->i = g[4].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setm_2_5:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[2].p))->data[constant]);
vp->tag =0;
vp->i = g[5].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setm_3_0:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[3].p))->data[constant]);
vp->tag =0;
vp->i = g[0].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setm_3_1:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[3].p))->data[constant]);
vp->tag =0;
vp->i = g[1].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setm_3_2:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[3].p))->data[constant]);
vp->tag =0;
vp->i = g[2].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setm_3_3:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[3].p))->data[constant]);
vp->tag =0;
vp->i = g[3].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setm_3_4:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[3].p))->data[constant]);
vp->tag =0;
vp->i = g[4].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setm_3_5:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[3].p))->data[constant]);
vp->tag =0;
vp->i = g[5].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setm_4_0:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[4].p))->data[constant]);
vp->tag =0;
vp->i = g[0].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setm_4_1:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[4].p))->data[constant]);
vp->tag =0;
vp->i = g[1].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setm_4_2:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[4].p))->data[constant]);
vp->tag =0;
vp->i = g[2].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setm_4_3:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[4].p))->data[constant]);
vp->tag =0;
vp->i = g[3].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setm_4_4:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[4].p))->data[constant]);
vp->tag =0;
vp->i = g[4].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setm_4_5:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[4].p))->data[constant]);
vp->tag =0;
vp->i = g[5].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setm_5_0:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[5].p))->data[constant]);
vp->tag =0;
vp->i = g[0].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setm_5_1:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[5].p))->data[constant]);
vp->tag =0;
vp->i = g[1].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setm_5_2:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[5].p))->data[constant]);
vp->tag =0;
vp->i = g[2].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setm_5_3:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[5].p))->data[constant]);
vp->tag =0;
vp->i = g[3].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setm_5_4:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[5].p))->data[constant]);
vp->tag =0;
vp->i = g[4].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setm_5_5:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[5].p))->data[constant]);
vp->tag =0;
vp->i = g[5].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setmp_0_0:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[0].p))->data[constant]);
vp->tag = g[0].tag;
vp->p = g[0].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setmp_0_1:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[0].p))->data[constant]);
vp->tag = g[1].tag;
vp->p = g[1].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setmp_0_2:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[0].p))->data[constant]);
vp->tag = g[2].tag;
vp->p = g[2].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setmp_0_3:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[0].p))->data[constant]);
vp->tag = g[3].tag;
vp->p = g[3].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setmp_0_4:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[0].p))->data[constant]);
vp->tag = g[4].tag;
vp->p = g[4].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setmp_0_5:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[0].p))->data[constant]);
vp->tag = g[5].tag;
vp->p = g[5].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setmp_1_0:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[1].p))->data[constant]);
vp->tag = g[0].tag;
vp->p = g[0].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setmp_1_1:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[1].p))->data[constant]);
vp->tag = g[1].tag;
vp->p = g[1].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setmp_1_2:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[1].p))->data[constant]);
vp->tag = g[2].tag;
vp->p = g[2].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setmp_1_3:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[1].p))->data[constant]);
vp->tag = g[3].tag;
vp->p = g[3].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setmp_1_4:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[1].p))->data[constant]);
vp->tag = g[4].tag;
vp->p = g[4].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setmp_1_5:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[1].p))->data[constant]);
vp->tag = g[5].tag;
vp->p = g[5].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setmp_2_0:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[2].p))->data[constant]);
vp->tag = g[0].tag;
vp->p = g[0].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setmp_2_1:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[2].p))->data[constant]);
vp->tag = g[1].tag;
vp->p = g[1].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setmp_2_2:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[2].p))->data[constant]);
vp->tag = g[2].tag;
vp->p = g[2].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setmp_2_3:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[2].p))->data[constant]);
vp->tag = g[3].tag;
vp->p = g[3].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setmp_2_4:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[2].p))->data[constant]);
vp->tag = g[4].tag;
vp->p = g[4].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setmp_2_5:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[2].p))->data[constant]);
vp->tag = g[5].tag;
vp->p = g[5].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setmp_3_0:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[3].p))->data[constant]);
vp->tag = g[0].tag;
vp->p = g[0].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setmp_3_1:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[3].p))->data[constant]);
vp->tag = g[1].tag;
vp->p = g[1].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setmp_3_2:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[3].p))->data[constant]);
vp->tag = g[2].tag;
vp->p = g[2].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setmp_3_3:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[3].p))->data[constant]);
vp->tag = g[3].tag;
vp->p = g[3].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setmp_3_4:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[3].p))->data[constant]);
vp->tag = g[4].tag;
vp->p = g[4].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setmp_3_5:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[3].p))->data[constant]);
vp->tag = g[5].tag;
vp->p = g[5].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setmp_4_0:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[4].p))->data[constant]);
vp->tag = g[0].tag;
vp->p = g[0].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setmp_4_1:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[4].p))->data[constant]);
vp->tag = g[1].tag;
vp->p = g[1].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setmp_4_2:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[4].p))->data[constant]);
vp->tag = g[2].tag;
vp->p = g[2].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setmp_4_3:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[4].p))->data[constant]);
vp->tag = g[3].tag;
vp->p = g[3].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setmp_4_4:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[4].p))->data[constant]);
vp->tag = g[4].tag;
vp->p = g[4].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setmp_4_5:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[4].p))->data[constant]);
vp->tag = g[5].tag;
vp->p = g[5].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setmp_5_0:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[5].p))->data[constant]);
vp->tag = g[0].tag;
vp->p = g[0].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setmp_5_1:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[5].p))->data[constant]);
vp->tag = g[1].tag;
vp->p = g[1].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setmp_5_2:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[5].p))->data[constant]);
vp->tag = g[2].tag;
vp->p = g[2].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setmp_5_3:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[5].p))->data[constant]);
vp->tag = g[3].tag;
vp->p = g[3].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setmp_5_4:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[5].p))->data[constant]);
vp->tag = g[4].tag;
vp->p = g[4].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

setmp_5_5:
{
int16_t constant = program[pc + 1];
value *vp = &(((object *)(g[5].p))->data[constant]);
vp->tag = g[5].tag;
vp->p = g[5].p;
pc += 2;
goto *dynOpcodes[ts + program[pc]];
}

geta_0_0_1:
{
value val = ((pointeronly *)(g[0].p))->data[g[1].i];
g[0].tag = val.tag;
ts |= 0x20 /*100000*/;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_0_0_2:
{
value val = ((pointeronly *)(g[0].p))->data[g[2].i];
g[0].tag = val.tag;
ts |= 0x20 /*100000*/;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_0_0_3:
{
value val = ((pointeronly *)(g[0].p))->data[g[3].i];
g[0].tag = val.tag;
ts |= 0x20 /*100000*/;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_0_0_4:
{
value val = ((pointeronly *)(g[0].p))->data[g[4].i];
g[0].tag = val.tag;
ts |= 0x20 /*100000*/;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_0_0_5:
{
value val = ((pointeronly *)(g[0].p))->data[g[5].i];
g[0].tag = val.tag;
ts |= 0x20 /*100000*/;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_0_1_0:
{
value val = ((pointeronly *)(g[1].p))->data[g[0].i];
g[0].tag = val.tag;
ts |= 0x20 /*100000*/;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_0_1_2:
{
value val = ((pointeronly *)(g[1].p))->data[g[2].i];
g[0].tag = val.tag;
ts |= 0x20 /*100000*/;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_0_1_3:
{
value val = ((pointeronly *)(g[1].p))->data[g[3].i];
g[0].tag = val.tag;
ts |= 0x20 /*100000*/;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_0_1_4:
{
value val = ((pointeronly *)(g[1].p))->data[g[4].i];
g[0].tag = val.tag;
ts |= 0x20 /*100000*/;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_0_1_5:
{
value val = ((pointeronly *)(g[1].p))->data[g[5].i];
g[0].tag = val.tag;
ts |= 0x20 /*100000*/;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_0_2_0:
{
value val = ((pointeronly *)(g[2].p))->data[g[0].i];
g[0].tag = val.tag;
ts |= 0x20 /*100000*/;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_0_2_1:
{
value val = ((pointeronly *)(g[2].p))->data[g[1].i];
g[0].tag = val.tag;
ts |= 0x20 /*100000*/;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_0_2_3:
{
value val = ((pointeronly *)(g[2].p))->data[g[3].i];
g[0].tag = val.tag;
ts |= 0x20 /*100000*/;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_0_2_4:
{
value val = ((pointeronly *)(g[2].p))->data[g[4].i];
g[0].tag = val.tag;
ts |= 0x20 /*100000*/;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_0_2_5:
{
value val = ((pointeronly *)(g[2].p))->data[g[5].i];
g[0].tag = val.tag;
ts |= 0x20 /*100000*/;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_0_3_0:
{
value val = ((pointeronly *)(g[3].p))->data[g[0].i];
g[0].tag = val.tag;
ts |= 0x20 /*100000*/;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_0_3_1:
{
value val = ((pointeronly *)(g[3].p))->data[g[1].i];
g[0].tag = val.tag;
ts |= 0x20 /*100000*/;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_0_3_2:
{
value val = ((pointeronly *)(g[3].p))->data[g[2].i];
g[0].tag = val.tag;
ts |= 0x20 /*100000*/;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_0_3_4:
{
value val = ((pointeronly *)(g[3].p))->data[g[4].i];
g[0].tag = val.tag;
ts |= 0x20 /*100000*/;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_0_3_5:
{
value val = ((pointeronly *)(g[3].p))->data[g[5].i];
g[0].tag = val.tag;
ts |= 0x20 /*100000*/;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_0_4_0:
{
value val = ((pointeronly *)(g[4].p))->data[g[0].i];
g[0].tag = val.tag;
ts |= 0x20 /*100000*/;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_0_4_1:
{
value val = ((pointeronly *)(g[4].p))->data[g[1].i];
g[0].tag = val.tag;
ts |= 0x20 /*100000*/;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_0_4_2:
{
value val = ((pointeronly *)(g[4].p))->data[g[2].i];
g[0].tag = val.tag;
ts |= 0x20 /*100000*/;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_0_4_3:
{
value val = ((pointeronly *)(g[4].p))->data[g[3].i];
g[0].tag = val.tag;
ts |= 0x20 /*100000*/;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_0_4_5:
{
value val = ((pointeronly *)(g[4].p))->data[g[5].i];
g[0].tag = val.tag;
ts |= 0x20 /*100000*/;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_0_5_0:
{
value val = ((pointeronly *)(g[5].p))->data[g[0].i];
g[0].tag = val.tag;
ts |= 0x20 /*100000*/;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_0_5_1:
{
value val = ((pointeronly *)(g[5].p))->data[g[1].i];
g[0].tag = val.tag;
ts |= 0x20 /*100000*/;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_0_5_2:
{
value val = ((pointeronly *)(g[5].p))->data[g[2].i];
g[0].tag = val.tag;
ts |= 0x20 /*100000*/;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_0_5_3:
{
value val = ((pointeronly *)(g[5].p))->data[g[3].i];
g[0].tag = val.tag;
ts |= 0x20 /*100000*/;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_0_5_4:
{
value val = ((pointeronly *)(g[5].p))->data[g[4].i];
g[0].tag = val.tag;
ts |= 0x20 /*100000*/;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_1_0_1:
{
value val = ((pointeronly *)(g[0].p))->data[g[1].i];
g[1].tag = val.tag;
ts |= 0x10 /*010000*/;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_1_0_2:
{
value val = ((pointeronly *)(g[0].p))->data[g[2].i];
g[1].tag = val.tag;
ts |= 0x10 /*010000*/;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_1_0_3:
{
value val = ((pointeronly *)(g[0].p))->data[g[3].i];
g[1].tag = val.tag;
ts |= 0x10 /*010000*/;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_1_0_4:
{
value val = ((pointeronly *)(g[0].p))->data[g[4].i];
g[1].tag = val.tag;
ts |= 0x10 /*010000*/;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_1_0_5:
{
value val = ((pointeronly *)(g[0].p))->data[g[5].i];
g[1].tag = val.tag;
ts |= 0x10 /*010000*/;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_1_1_0:
{
value val = ((pointeronly *)(g[1].p))->data[g[0].i];
g[1].tag = val.tag;
ts |= 0x10 /*010000*/;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_1_1_2:
{
value val = ((pointeronly *)(g[1].p))->data[g[2].i];
g[1].tag = val.tag;
ts |= 0x10 /*010000*/;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_1_1_3:
{
value val = ((pointeronly *)(g[1].p))->data[g[3].i];
g[1].tag = val.tag;
ts |= 0x10 /*010000*/;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_1_1_4:
{
value val = ((pointeronly *)(g[1].p))->data[g[4].i];
g[1].tag = val.tag;
ts |= 0x10 /*010000*/;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_1_1_5:
{
value val = ((pointeronly *)(g[1].p))->data[g[5].i];
g[1].tag = val.tag;
ts |= 0x10 /*010000*/;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_1_2_0:
{
value val = ((pointeronly *)(g[2].p))->data[g[0].i];
g[1].tag = val.tag;
ts |= 0x10 /*010000*/;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_1_2_1:
{
value val = ((pointeronly *)(g[2].p))->data[g[1].i];
g[1].tag = val.tag;
ts |= 0x10 /*010000*/;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_1_2_3:
{
value val = ((pointeronly *)(g[2].p))->data[g[3].i];
g[1].tag = val.tag;
ts |= 0x10 /*010000*/;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_1_2_4:
{
value val = ((pointeronly *)(g[2].p))->data[g[4].i];
g[1].tag = val.tag;
ts |= 0x10 /*010000*/;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_1_2_5:
{
value val = ((pointeronly *)(g[2].p))->data[g[5].i];
g[1].tag = val.tag;
ts |= 0x10 /*010000*/;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_1_3_0:
{
value val = ((pointeronly *)(g[3].p))->data[g[0].i];
g[1].tag = val.tag;
ts |= 0x10 /*010000*/;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_1_3_1:
{
value val = ((pointeronly *)(g[3].p))->data[g[1].i];
g[1].tag = val.tag;
ts |= 0x10 /*010000*/;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_1_3_2:
{
value val = ((pointeronly *)(g[3].p))->data[g[2].i];
g[1].tag = val.tag;
ts |= 0x10 /*010000*/;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_1_3_4:
{
value val = ((pointeronly *)(g[3].p))->data[g[4].i];
g[1].tag = val.tag;
ts |= 0x10 /*010000*/;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_1_3_5:
{
value val = ((pointeronly *)(g[3].p))->data[g[5].i];
g[1].tag = val.tag;
ts |= 0x10 /*010000*/;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_1_4_0:
{
value val = ((pointeronly *)(g[4].p))->data[g[0].i];
g[1].tag = val.tag;
ts |= 0x10 /*010000*/;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_1_4_1:
{
value val = ((pointeronly *)(g[4].p))->data[g[1].i];
g[1].tag = val.tag;
ts |= 0x10 /*010000*/;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_1_4_2:
{
value val = ((pointeronly *)(g[4].p))->data[g[2].i];
g[1].tag = val.tag;
ts |= 0x10 /*010000*/;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_1_4_3:
{
value val = ((pointeronly *)(g[4].p))->data[g[3].i];
g[1].tag = val.tag;
ts |= 0x10 /*010000*/;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_1_4_5:
{
value val = ((pointeronly *)(g[4].p))->data[g[5].i];
g[1].tag = val.tag;
ts |= 0x10 /*010000*/;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_1_5_0:
{
value val = ((pointeronly *)(g[5].p))->data[g[0].i];
g[1].tag = val.tag;
ts |= 0x10 /*010000*/;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_1_5_1:
{
value val = ((pointeronly *)(g[5].p))->data[g[1].i];
g[1].tag = val.tag;
ts |= 0x10 /*010000*/;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_1_5_2:
{
value val = ((pointeronly *)(g[5].p))->data[g[2].i];
g[1].tag = val.tag;
ts |= 0x10 /*010000*/;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_1_5_3:
{
value val = ((pointeronly *)(g[5].p))->data[g[3].i];
g[1].tag = val.tag;
ts |= 0x10 /*010000*/;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_1_5_4:
{
value val = ((pointeronly *)(g[5].p))->data[g[4].i];
g[1].tag = val.tag;
ts |= 0x10 /*010000*/;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_2_0_1:
{
value val = ((pointeronly *)(g[0].p))->data[g[1].i];
g[2].tag = val.tag;
ts |= 0x8 /*001000*/;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_2_0_2:
{
value val = ((pointeronly *)(g[0].p))->data[g[2].i];
g[2].tag = val.tag;
ts |= 0x8 /*001000*/;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_2_0_3:
{
value val = ((pointeronly *)(g[0].p))->data[g[3].i];
g[2].tag = val.tag;
ts |= 0x8 /*001000*/;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_2_0_4:
{
value val = ((pointeronly *)(g[0].p))->data[g[4].i];
g[2].tag = val.tag;
ts |= 0x8 /*001000*/;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_2_0_5:
{
value val = ((pointeronly *)(g[0].p))->data[g[5].i];
g[2].tag = val.tag;
ts |= 0x8 /*001000*/;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_2_1_0:
{
value val = ((pointeronly *)(g[1].p))->data[g[0].i];
g[2].tag = val.tag;
ts |= 0x8 /*001000*/;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_2_1_2:
{
value val = ((pointeronly *)(g[1].p))->data[g[2].i];
g[2].tag = val.tag;
ts |= 0x8 /*001000*/;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_2_1_3:
{
value val = ((pointeronly *)(g[1].p))->data[g[3].i];
g[2].tag = val.tag;
ts |= 0x8 /*001000*/;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_2_1_4:
{
value val = ((pointeronly *)(g[1].p))->data[g[4].i];
g[2].tag = val.tag;
ts |= 0x8 /*001000*/;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_2_1_5:
{
value val = ((pointeronly *)(g[1].p))->data[g[5].i];
g[2].tag = val.tag;
ts |= 0x8 /*001000*/;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_2_2_0:
{
value val = ((pointeronly *)(g[2].p))->data[g[0].i];
g[2].tag = val.tag;
ts |= 0x8 /*001000*/;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_2_2_1:
{
value val = ((pointeronly *)(g[2].p))->data[g[1].i];
g[2].tag = val.tag;
ts |= 0x8 /*001000*/;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_2_2_3:
{
value val = ((pointeronly *)(g[2].p))->data[g[3].i];
g[2].tag = val.tag;
ts |= 0x8 /*001000*/;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_2_2_4:
{
value val = ((pointeronly *)(g[2].p))->data[g[4].i];
g[2].tag = val.tag;
ts |= 0x8 /*001000*/;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_2_2_5:
{
value val = ((pointeronly *)(g[2].p))->data[g[5].i];
g[2].tag = val.tag;
ts |= 0x8 /*001000*/;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_2_3_0:
{
value val = ((pointeronly *)(g[3].p))->data[g[0].i];
g[2].tag = val.tag;
ts |= 0x8 /*001000*/;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_2_3_1:
{
value val = ((pointeronly *)(g[3].p))->data[g[1].i];
g[2].tag = val.tag;
ts |= 0x8 /*001000*/;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_2_3_2:
{
value val = ((pointeronly *)(g[3].p))->data[g[2].i];
g[2].tag = val.tag;
ts |= 0x8 /*001000*/;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_2_3_4:
{
value val = ((pointeronly *)(g[3].p))->data[g[4].i];
g[2].tag = val.tag;
ts |= 0x8 /*001000*/;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_2_3_5:
{
value val = ((pointeronly *)(g[3].p))->data[g[5].i];
g[2].tag = val.tag;
ts |= 0x8 /*001000*/;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_2_4_0:
{
value val = ((pointeronly *)(g[4].p))->data[g[0].i];
g[2].tag = val.tag;
ts |= 0x8 /*001000*/;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_2_4_1:
{
value val = ((pointeronly *)(g[4].p))->data[g[1].i];
g[2].tag = val.tag;
ts |= 0x8 /*001000*/;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_2_4_2:
{
value val = ((pointeronly *)(g[4].p))->data[g[2].i];
g[2].tag = val.tag;
ts |= 0x8 /*001000*/;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_2_4_3:
{
value val = ((pointeronly *)(g[4].p))->data[g[3].i];
g[2].tag = val.tag;
ts |= 0x8 /*001000*/;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_2_4_5:
{
value val = ((pointeronly *)(g[4].p))->data[g[5].i];
g[2].tag = val.tag;
ts |= 0x8 /*001000*/;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_2_5_0:
{
value val = ((pointeronly *)(g[5].p))->data[g[0].i];
g[2].tag = val.tag;
ts |= 0x8 /*001000*/;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_2_5_1:
{
value val = ((pointeronly *)(g[5].p))->data[g[1].i];
g[2].tag = val.tag;
ts |= 0x8 /*001000*/;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_2_5_2:
{
value val = ((pointeronly *)(g[5].p))->data[g[2].i];
g[2].tag = val.tag;
ts |= 0x8 /*001000*/;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_2_5_3:
{
value val = ((pointeronly *)(g[5].p))->data[g[3].i];
g[2].tag = val.tag;
ts |= 0x8 /*001000*/;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_2_5_4:
{
value val = ((pointeronly *)(g[5].p))->data[g[4].i];
g[2].tag = val.tag;
ts |= 0x8 /*001000*/;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_3_0_1:
{
value val = ((pointeronly *)(g[0].p))->data[g[1].i];
g[3].tag = val.tag;
ts |= 0x4 /*000100*/;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_3_0_2:
{
value val = ((pointeronly *)(g[0].p))->data[g[2].i];
g[3].tag = val.tag;
ts |= 0x4 /*000100*/;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_3_0_3:
{
value val = ((pointeronly *)(g[0].p))->data[g[3].i];
g[3].tag = val.tag;
ts |= 0x4 /*000100*/;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_3_0_4:
{
value val = ((pointeronly *)(g[0].p))->data[g[4].i];
g[3].tag = val.tag;
ts |= 0x4 /*000100*/;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_3_0_5:
{
value val = ((pointeronly *)(g[0].p))->data[g[5].i];
g[3].tag = val.tag;
ts |= 0x4 /*000100*/;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_3_1_0:
{
value val = ((pointeronly *)(g[1].p))->data[g[0].i];
g[3].tag = val.tag;
ts |= 0x4 /*000100*/;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_3_1_2:
{
value val = ((pointeronly *)(g[1].p))->data[g[2].i];
g[3].tag = val.tag;
ts |= 0x4 /*000100*/;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_3_1_3:
{
value val = ((pointeronly *)(g[1].p))->data[g[3].i];
g[3].tag = val.tag;
ts |= 0x4 /*000100*/;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_3_1_4:
{
value val = ((pointeronly *)(g[1].p))->data[g[4].i];
g[3].tag = val.tag;
ts |= 0x4 /*000100*/;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_3_1_5:
{
value val = ((pointeronly *)(g[1].p))->data[g[5].i];
g[3].tag = val.tag;
ts |= 0x4 /*000100*/;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_3_2_0:
{
value val = ((pointeronly *)(g[2].p))->data[g[0].i];
g[3].tag = val.tag;
ts |= 0x4 /*000100*/;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_3_2_1:
{
value val = ((pointeronly *)(g[2].p))->data[g[1].i];
g[3].tag = val.tag;
ts |= 0x4 /*000100*/;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_3_2_3:
{
value val = ((pointeronly *)(g[2].p))->data[g[3].i];
g[3].tag = val.tag;
ts |= 0x4 /*000100*/;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_3_2_4:
{
value val = ((pointeronly *)(g[2].p))->data[g[4].i];
g[3].tag = val.tag;
ts |= 0x4 /*000100*/;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_3_2_5:
{
value val = ((pointeronly *)(g[2].p))->data[g[5].i];
g[3].tag = val.tag;
ts |= 0x4 /*000100*/;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_3_3_0:
{
value val = ((pointeronly *)(g[3].p))->data[g[0].i];
g[3].tag = val.tag;
ts |= 0x4 /*000100*/;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_3_3_1:
{
value val = ((pointeronly *)(g[3].p))->data[g[1].i];
g[3].tag = val.tag;
ts |= 0x4 /*000100*/;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_3_3_2:
{
value val = ((pointeronly *)(g[3].p))->data[g[2].i];
g[3].tag = val.tag;
ts |= 0x4 /*000100*/;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_3_3_4:
{
value val = ((pointeronly *)(g[3].p))->data[g[4].i];
g[3].tag = val.tag;
ts |= 0x4 /*000100*/;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_3_3_5:
{
value val = ((pointeronly *)(g[3].p))->data[g[5].i];
g[3].tag = val.tag;
ts |= 0x4 /*000100*/;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_3_4_0:
{
value val = ((pointeronly *)(g[4].p))->data[g[0].i];
g[3].tag = val.tag;
ts |= 0x4 /*000100*/;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_3_4_1:
{
value val = ((pointeronly *)(g[4].p))->data[g[1].i];
g[3].tag = val.tag;
ts |= 0x4 /*000100*/;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_3_4_2:
{
value val = ((pointeronly *)(g[4].p))->data[g[2].i];
g[3].tag = val.tag;
ts |= 0x4 /*000100*/;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_3_4_3:
{
value val = ((pointeronly *)(g[4].p))->data[g[3].i];
g[3].tag = val.tag;
ts |= 0x4 /*000100*/;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_3_4_5:
{
value val = ((pointeronly *)(g[4].p))->data[g[5].i];
g[3].tag = val.tag;
ts |= 0x4 /*000100*/;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_3_5_0:
{
value val = ((pointeronly *)(g[5].p))->data[g[0].i];
g[3].tag = val.tag;
ts |= 0x4 /*000100*/;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_3_5_1:
{
value val = ((pointeronly *)(g[5].p))->data[g[1].i];
g[3].tag = val.tag;
ts |= 0x4 /*000100*/;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_3_5_2:
{
value val = ((pointeronly *)(g[5].p))->data[g[2].i];
g[3].tag = val.tag;
ts |= 0x4 /*000100*/;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_3_5_3:
{
value val = ((pointeronly *)(g[5].p))->data[g[3].i];
g[3].tag = val.tag;
ts |= 0x4 /*000100*/;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_3_5_4:
{
value val = ((pointeronly *)(g[5].p))->data[g[4].i];
g[3].tag = val.tag;
ts |= 0x4 /*000100*/;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_4_0_1:
{
value val = ((pointeronly *)(g[0].p))->data[g[1].i];
g[4].tag = val.tag;
ts |= 0x2 /*000010*/;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_4_0_2:
{
value val = ((pointeronly *)(g[0].p))->data[g[2].i];
g[4].tag = val.tag;
ts |= 0x2 /*000010*/;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_4_0_3:
{
value val = ((pointeronly *)(g[0].p))->data[g[3].i];
g[4].tag = val.tag;
ts |= 0x2 /*000010*/;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_4_0_4:
{
value val = ((pointeronly *)(g[0].p))->data[g[4].i];
g[4].tag = val.tag;
ts |= 0x2 /*000010*/;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_4_0_5:
{
value val = ((pointeronly *)(g[0].p))->data[g[5].i];
g[4].tag = val.tag;
ts |= 0x2 /*000010*/;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_4_1_0:
{
value val = ((pointeronly *)(g[1].p))->data[g[0].i];
g[4].tag = val.tag;
ts |= 0x2 /*000010*/;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_4_1_2:
{
value val = ((pointeronly *)(g[1].p))->data[g[2].i];
g[4].tag = val.tag;
ts |= 0x2 /*000010*/;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_4_1_3:
{
value val = ((pointeronly *)(g[1].p))->data[g[3].i];
g[4].tag = val.tag;
ts |= 0x2 /*000010*/;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_4_1_4:
{
value val = ((pointeronly *)(g[1].p))->data[g[4].i];
g[4].tag = val.tag;
ts |= 0x2 /*000010*/;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_4_1_5:
{
value val = ((pointeronly *)(g[1].p))->data[g[5].i];
g[4].tag = val.tag;
ts |= 0x2 /*000010*/;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_4_2_0:
{
value val = ((pointeronly *)(g[2].p))->data[g[0].i];
g[4].tag = val.tag;
ts |= 0x2 /*000010*/;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_4_2_1:
{
value val = ((pointeronly *)(g[2].p))->data[g[1].i];
g[4].tag = val.tag;
ts |= 0x2 /*000010*/;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_4_2_3:
{
value val = ((pointeronly *)(g[2].p))->data[g[3].i];
g[4].tag = val.tag;
ts |= 0x2 /*000010*/;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_4_2_4:
{
value val = ((pointeronly *)(g[2].p))->data[g[4].i];
g[4].tag = val.tag;
ts |= 0x2 /*000010*/;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_4_2_5:
{
value val = ((pointeronly *)(g[2].p))->data[g[5].i];
g[4].tag = val.tag;
ts |= 0x2 /*000010*/;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_4_3_0:
{
value val = ((pointeronly *)(g[3].p))->data[g[0].i];
g[4].tag = val.tag;
ts |= 0x2 /*000010*/;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_4_3_1:
{
value val = ((pointeronly *)(g[3].p))->data[g[1].i];
g[4].tag = val.tag;
ts |= 0x2 /*000010*/;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_4_3_2:
{
value val = ((pointeronly *)(g[3].p))->data[g[2].i];
g[4].tag = val.tag;
ts |= 0x2 /*000010*/;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_4_3_4:
{
value val = ((pointeronly *)(g[3].p))->data[g[4].i];
g[4].tag = val.tag;
ts |= 0x2 /*000010*/;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_4_3_5:
{
value val = ((pointeronly *)(g[3].p))->data[g[5].i];
g[4].tag = val.tag;
ts |= 0x2 /*000010*/;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_4_4_0:
{
value val = ((pointeronly *)(g[4].p))->data[g[0].i];
g[4].tag = val.tag;
ts |= 0x2 /*000010*/;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_4_4_1:
{
value val = ((pointeronly *)(g[4].p))->data[g[1].i];
g[4].tag = val.tag;
ts |= 0x2 /*000010*/;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_4_4_2:
{
value val = ((pointeronly *)(g[4].p))->data[g[2].i];
g[4].tag = val.tag;
ts |= 0x2 /*000010*/;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_4_4_3:
{
value val = ((pointeronly *)(g[4].p))->data[g[3].i];
g[4].tag = val.tag;
ts |= 0x2 /*000010*/;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_4_4_5:
{
value val = ((pointeronly *)(g[4].p))->data[g[5].i];
g[4].tag = val.tag;
ts |= 0x2 /*000010*/;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_4_5_0:
{
value val = ((pointeronly *)(g[5].p))->data[g[0].i];
g[4].tag = val.tag;
ts |= 0x2 /*000010*/;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_4_5_1:
{
value val = ((pointeronly *)(g[5].p))->data[g[1].i];
g[4].tag = val.tag;
ts |= 0x2 /*000010*/;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_4_5_2:
{
value val = ((pointeronly *)(g[5].p))->data[g[2].i];
g[4].tag = val.tag;
ts |= 0x2 /*000010*/;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_4_5_3:
{
value val = ((pointeronly *)(g[5].p))->data[g[3].i];
g[4].tag = val.tag;
ts |= 0x2 /*000010*/;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_4_5_4:
{
value val = ((pointeronly *)(g[5].p))->data[g[4].i];
g[4].tag = val.tag;
ts |= 0x2 /*000010*/;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_5_0_1:
{
value val = ((pointeronly *)(g[0].p))->data[g[1].i];
g[5].tag = val.tag;
ts |= 0x1 /*000001*/;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_5_0_2:
{
value val = ((pointeronly *)(g[0].p))->data[g[2].i];
g[5].tag = val.tag;
ts |= 0x1 /*000001*/;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_5_0_3:
{
value val = ((pointeronly *)(g[0].p))->data[g[3].i];
g[5].tag = val.tag;
ts |= 0x1 /*000001*/;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_5_0_4:
{
value val = ((pointeronly *)(g[0].p))->data[g[4].i];
g[5].tag = val.tag;
ts |= 0x1 /*000001*/;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_5_0_5:
{
value val = ((pointeronly *)(g[0].p))->data[g[5].i];
g[5].tag = val.tag;
ts |= 0x1 /*000001*/;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_5_1_0:
{
value val = ((pointeronly *)(g[1].p))->data[g[0].i];
g[5].tag = val.tag;
ts |= 0x1 /*000001*/;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_5_1_2:
{
value val = ((pointeronly *)(g[1].p))->data[g[2].i];
g[5].tag = val.tag;
ts |= 0x1 /*000001*/;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_5_1_3:
{
value val = ((pointeronly *)(g[1].p))->data[g[3].i];
g[5].tag = val.tag;
ts |= 0x1 /*000001*/;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_5_1_4:
{
value val = ((pointeronly *)(g[1].p))->data[g[4].i];
g[5].tag = val.tag;
ts |= 0x1 /*000001*/;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_5_1_5:
{
value val = ((pointeronly *)(g[1].p))->data[g[5].i];
g[5].tag = val.tag;
ts |= 0x1 /*000001*/;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_5_2_0:
{
value val = ((pointeronly *)(g[2].p))->data[g[0].i];
g[5].tag = val.tag;
ts |= 0x1 /*000001*/;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_5_2_1:
{
value val = ((pointeronly *)(g[2].p))->data[g[1].i];
g[5].tag = val.tag;
ts |= 0x1 /*000001*/;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_5_2_3:
{
value val = ((pointeronly *)(g[2].p))->data[g[3].i];
g[5].tag = val.tag;
ts |= 0x1 /*000001*/;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_5_2_4:
{
value val = ((pointeronly *)(g[2].p))->data[g[4].i];
g[5].tag = val.tag;
ts |= 0x1 /*000001*/;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_5_2_5:
{
value val = ((pointeronly *)(g[2].p))->data[g[5].i];
g[5].tag = val.tag;
ts |= 0x1 /*000001*/;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_5_3_0:
{
value val = ((pointeronly *)(g[3].p))->data[g[0].i];
g[5].tag = val.tag;
ts |= 0x1 /*000001*/;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_5_3_1:
{
value val = ((pointeronly *)(g[3].p))->data[g[1].i];
g[5].tag = val.tag;
ts |= 0x1 /*000001*/;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_5_3_2:
{
value val = ((pointeronly *)(g[3].p))->data[g[2].i];
g[5].tag = val.tag;
ts |= 0x1 /*000001*/;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_5_3_4:
{
value val = ((pointeronly *)(g[3].p))->data[g[4].i];
g[5].tag = val.tag;
ts |= 0x1 /*000001*/;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_5_3_5:
{
value val = ((pointeronly *)(g[3].p))->data[g[5].i];
g[5].tag = val.tag;
ts |= 0x1 /*000001*/;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_5_4_0:
{
value val = ((pointeronly *)(g[4].p))->data[g[0].i];
g[5].tag = val.tag;
ts |= 0x1 /*000001*/;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_5_4_1:
{
value val = ((pointeronly *)(g[4].p))->data[g[1].i];
g[5].tag = val.tag;
ts |= 0x1 /*000001*/;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_5_4_2:
{
value val = ((pointeronly *)(g[4].p))->data[g[2].i];
g[5].tag = val.tag;
ts |= 0x1 /*000001*/;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_5_4_3:
{
value val = ((pointeronly *)(g[4].p))->data[g[3].i];
g[5].tag = val.tag;
ts |= 0x1 /*000001*/;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_5_4_5:
{
value val = ((pointeronly *)(g[4].p))->data[g[5].i];
g[5].tag = val.tag;
ts |= 0x1 /*000001*/;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_5_5_0:
{
value val = ((pointeronly *)(g[5].p))->data[g[0].i];
g[5].tag = val.tag;
ts |= 0x1 /*000001*/;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_5_5_1:
{
value val = ((pointeronly *)(g[5].p))->data[g[1].i];
g[5].tag = val.tag;
ts |= 0x1 /*000001*/;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_5_5_2:
{
value val = ((pointeronly *)(g[5].p))->data[g[2].i];
g[5].tag = val.tag;
ts |= 0x1 /*000001*/;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_5_5_3:
{
value val = ((pointeronly *)(g[5].p))->data[g[3].i];
g[5].tag = val.tag;
ts |= 0x1 /*000001*/;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

geta_5_5_4:
{
value val = ((pointeronly *)(g[5].p))->data[g[4].i];
g[5].tag = val.tag;
ts |= 0x1 /*000001*/;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_0_0_1:
{
value val = ((pointeronly *)(g[0].p))->data[g[1].i];
g[0].tag = val.tag;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_0_0_2:
{
value val = ((pointeronly *)(g[0].p))->data[g[2].i];
g[0].tag = val.tag;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_0_0_3:
{
value val = ((pointeronly *)(g[0].p))->data[g[3].i];
g[0].tag = val.tag;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_0_0_4:
{
value val = ((pointeronly *)(g[0].p))->data[g[4].i];
g[0].tag = val.tag;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_0_0_5:
{
value val = ((pointeronly *)(g[0].p))->data[g[5].i];
g[0].tag = val.tag;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_0_1_0:
{
value val = ((pointeronly *)(g[1].p))->data[g[0].i];
g[0].tag = val.tag;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_0_1_2:
{
value val = ((pointeronly *)(g[1].p))->data[g[2].i];
g[0].tag = val.tag;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_0_1_3:
{
value val = ((pointeronly *)(g[1].p))->data[g[3].i];
g[0].tag = val.tag;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_0_1_4:
{
value val = ((pointeronly *)(g[1].p))->data[g[4].i];
g[0].tag = val.tag;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_0_1_5:
{
value val = ((pointeronly *)(g[1].p))->data[g[5].i];
g[0].tag = val.tag;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_0_2_0:
{
value val = ((pointeronly *)(g[2].p))->data[g[0].i];
g[0].tag = val.tag;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_0_2_1:
{
value val = ((pointeronly *)(g[2].p))->data[g[1].i];
g[0].tag = val.tag;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_0_2_3:
{
value val = ((pointeronly *)(g[2].p))->data[g[3].i];
g[0].tag = val.tag;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_0_2_4:
{
value val = ((pointeronly *)(g[2].p))->data[g[4].i];
g[0].tag = val.tag;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_0_2_5:
{
value val = ((pointeronly *)(g[2].p))->data[g[5].i];
g[0].tag = val.tag;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_0_3_0:
{
value val = ((pointeronly *)(g[3].p))->data[g[0].i];
g[0].tag = val.tag;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_0_3_1:
{
value val = ((pointeronly *)(g[3].p))->data[g[1].i];
g[0].tag = val.tag;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_0_3_2:
{
value val = ((pointeronly *)(g[3].p))->data[g[2].i];
g[0].tag = val.tag;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_0_3_4:
{
value val = ((pointeronly *)(g[3].p))->data[g[4].i];
g[0].tag = val.tag;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_0_3_5:
{
value val = ((pointeronly *)(g[3].p))->data[g[5].i];
g[0].tag = val.tag;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_0_4_0:
{
value val = ((pointeronly *)(g[4].p))->data[g[0].i];
g[0].tag = val.tag;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_0_4_1:
{
value val = ((pointeronly *)(g[4].p))->data[g[1].i];
g[0].tag = val.tag;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_0_4_2:
{
value val = ((pointeronly *)(g[4].p))->data[g[2].i];
g[0].tag = val.tag;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_0_4_3:
{
value val = ((pointeronly *)(g[4].p))->data[g[3].i];
g[0].tag = val.tag;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_0_4_5:
{
value val = ((pointeronly *)(g[4].p))->data[g[5].i];
g[0].tag = val.tag;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_0_5_0:
{
value val = ((pointeronly *)(g[5].p))->data[g[0].i];
g[0].tag = val.tag;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_0_5_1:
{
value val = ((pointeronly *)(g[5].p))->data[g[1].i];
g[0].tag = val.tag;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_0_5_2:
{
value val = ((pointeronly *)(g[5].p))->data[g[2].i];
g[0].tag = val.tag;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_0_5_3:
{
value val = ((pointeronly *)(g[5].p))->data[g[3].i];
g[0].tag = val.tag;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_0_5_4:
{
value val = ((pointeronly *)(g[5].p))->data[g[4].i];
g[0].tag = val.tag;
g[0].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_1_0_1:
{
value val = ((pointeronly *)(g[0].p))->data[g[1].i];
g[1].tag = val.tag;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_1_0_2:
{
value val = ((pointeronly *)(g[0].p))->data[g[2].i];
g[1].tag = val.tag;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_1_0_3:
{
value val = ((pointeronly *)(g[0].p))->data[g[3].i];
g[1].tag = val.tag;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_1_0_4:
{
value val = ((pointeronly *)(g[0].p))->data[g[4].i];
g[1].tag = val.tag;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_1_0_5:
{
value val = ((pointeronly *)(g[0].p))->data[g[5].i];
g[1].tag = val.tag;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_1_1_0:
{
value val = ((pointeronly *)(g[1].p))->data[g[0].i];
g[1].tag = val.tag;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_1_1_2:
{
value val = ((pointeronly *)(g[1].p))->data[g[2].i];
g[1].tag = val.tag;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_1_1_3:
{
value val = ((pointeronly *)(g[1].p))->data[g[3].i];
g[1].tag = val.tag;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_1_1_4:
{
value val = ((pointeronly *)(g[1].p))->data[g[4].i];
g[1].tag = val.tag;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_1_1_5:
{
value val = ((pointeronly *)(g[1].p))->data[g[5].i];
g[1].tag = val.tag;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_1_2_0:
{
value val = ((pointeronly *)(g[2].p))->data[g[0].i];
g[1].tag = val.tag;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_1_2_1:
{
value val = ((pointeronly *)(g[2].p))->data[g[1].i];
g[1].tag = val.tag;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_1_2_3:
{
value val = ((pointeronly *)(g[2].p))->data[g[3].i];
g[1].tag = val.tag;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_1_2_4:
{
value val = ((pointeronly *)(g[2].p))->data[g[4].i];
g[1].tag = val.tag;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_1_2_5:
{
value val = ((pointeronly *)(g[2].p))->data[g[5].i];
g[1].tag = val.tag;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_1_3_0:
{
value val = ((pointeronly *)(g[3].p))->data[g[0].i];
g[1].tag = val.tag;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_1_3_1:
{
value val = ((pointeronly *)(g[3].p))->data[g[1].i];
g[1].tag = val.tag;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_1_3_2:
{
value val = ((pointeronly *)(g[3].p))->data[g[2].i];
g[1].tag = val.tag;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_1_3_4:
{
value val = ((pointeronly *)(g[3].p))->data[g[4].i];
g[1].tag = val.tag;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_1_3_5:
{
value val = ((pointeronly *)(g[3].p))->data[g[5].i];
g[1].tag = val.tag;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_1_4_0:
{
value val = ((pointeronly *)(g[4].p))->data[g[0].i];
g[1].tag = val.tag;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_1_4_1:
{
value val = ((pointeronly *)(g[4].p))->data[g[1].i];
g[1].tag = val.tag;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_1_4_2:
{
value val = ((pointeronly *)(g[4].p))->data[g[2].i];
g[1].tag = val.tag;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_1_4_3:
{
value val = ((pointeronly *)(g[4].p))->data[g[3].i];
g[1].tag = val.tag;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_1_4_5:
{
value val = ((pointeronly *)(g[4].p))->data[g[5].i];
g[1].tag = val.tag;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_1_5_0:
{
value val = ((pointeronly *)(g[5].p))->data[g[0].i];
g[1].tag = val.tag;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_1_5_1:
{
value val = ((pointeronly *)(g[5].p))->data[g[1].i];
g[1].tag = val.tag;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_1_5_2:
{
value val = ((pointeronly *)(g[5].p))->data[g[2].i];
g[1].tag = val.tag;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_1_5_3:
{
value val = ((pointeronly *)(g[5].p))->data[g[3].i];
g[1].tag = val.tag;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_1_5_4:
{
value val = ((pointeronly *)(g[5].p))->data[g[4].i];
g[1].tag = val.tag;
g[1].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_2_0_1:
{
value val = ((pointeronly *)(g[0].p))->data[g[1].i];
g[2].tag = val.tag;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_2_0_2:
{
value val = ((pointeronly *)(g[0].p))->data[g[2].i];
g[2].tag = val.tag;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_2_0_3:
{
value val = ((pointeronly *)(g[0].p))->data[g[3].i];
g[2].tag = val.tag;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_2_0_4:
{
value val = ((pointeronly *)(g[0].p))->data[g[4].i];
g[2].tag = val.tag;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_2_0_5:
{
value val = ((pointeronly *)(g[0].p))->data[g[5].i];
g[2].tag = val.tag;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_2_1_0:
{
value val = ((pointeronly *)(g[1].p))->data[g[0].i];
g[2].tag = val.tag;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_2_1_2:
{
value val = ((pointeronly *)(g[1].p))->data[g[2].i];
g[2].tag = val.tag;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_2_1_3:
{
value val = ((pointeronly *)(g[1].p))->data[g[3].i];
g[2].tag = val.tag;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_2_1_4:
{
value val = ((pointeronly *)(g[1].p))->data[g[4].i];
g[2].tag = val.tag;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_2_1_5:
{
value val = ((pointeronly *)(g[1].p))->data[g[5].i];
g[2].tag = val.tag;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_2_2_0:
{
value val = ((pointeronly *)(g[2].p))->data[g[0].i];
g[2].tag = val.tag;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_2_2_1:
{
value val = ((pointeronly *)(g[2].p))->data[g[1].i];
g[2].tag = val.tag;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_2_2_3:
{
value val = ((pointeronly *)(g[2].p))->data[g[3].i];
g[2].tag = val.tag;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_2_2_4:
{
value val = ((pointeronly *)(g[2].p))->data[g[4].i];
g[2].tag = val.tag;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_2_2_5:
{
value val = ((pointeronly *)(g[2].p))->data[g[5].i];
g[2].tag = val.tag;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_2_3_0:
{
value val = ((pointeronly *)(g[3].p))->data[g[0].i];
g[2].tag = val.tag;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_2_3_1:
{
value val = ((pointeronly *)(g[3].p))->data[g[1].i];
g[2].tag = val.tag;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_2_3_2:
{
value val = ((pointeronly *)(g[3].p))->data[g[2].i];
g[2].tag = val.tag;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_2_3_4:
{
value val = ((pointeronly *)(g[3].p))->data[g[4].i];
g[2].tag = val.tag;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_2_3_5:
{
value val = ((pointeronly *)(g[3].p))->data[g[5].i];
g[2].tag = val.tag;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_2_4_0:
{
value val = ((pointeronly *)(g[4].p))->data[g[0].i];
g[2].tag = val.tag;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_2_4_1:
{
value val = ((pointeronly *)(g[4].p))->data[g[1].i];
g[2].tag = val.tag;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_2_4_2:
{
value val = ((pointeronly *)(g[4].p))->data[g[2].i];
g[2].tag = val.tag;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_2_4_3:
{
value val = ((pointeronly *)(g[4].p))->data[g[3].i];
g[2].tag = val.tag;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_2_4_5:
{
value val = ((pointeronly *)(g[4].p))->data[g[5].i];
g[2].tag = val.tag;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_2_5_0:
{
value val = ((pointeronly *)(g[5].p))->data[g[0].i];
g[2].tag = val.tag;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_2_5_1:
{
value val = ((pointeronly *)(g[5].p))->data[g[1].i];
g[2].tag = val.tag;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_2_5_2:
{
value val = ((pointeronly *)(g[5].p))->data[g[2].i];
g[2].tag = val.tag;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_2_5_3:
{
value val = ((pointeronly *)(g[5].p))->data[g[3].i];
g[2].tag = val.tag;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_2_5_4:
{
value val = ((pointeronly *)(g[5].p))->data[g[4].i];
g[2].tag = val.tag;
g[2].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_3_0_1:
{
value val = ((pointeronly *)(g[0].p))->data[g[1].i];
g[3].tag = val.tag;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_3_0_2:
{
value val = ((pointeronly *)(g[0].p))->data[g[2].i];
g[3].tag = val.tag;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_3_0_3:
{
value val = ((pointeronly *)(g[0].p))->data[g[3].i];
g[3].tag = val.tag;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_3_0_4:
{
value val = ((pointeronly *)(g[0].p))->data[g[4].i];
g[3].tag = val.tag;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_3_0_5:
{
value val = ((pointeronly *)(g[0].p))->data[g[5].i];
g[3].tag = val.tag;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_3_1_0:
{
value val = ((pointeronly *)(g[1].p))->data[g[0].i];
g[3].tag = val.tag;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_3_1_2:
{
value val = ((pointeronly *)(g[1].p))->data[g[2].i];
g[3].tag = val.tag;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_3_1_3:
{
value val = ((pointeronly *)(g[1].p))->data[g[3].i];
g[3].tag = val.tag;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_3_1_4:
{
value val = ((pointeronly *)(g[1].p))->data[g[4].i];
g[3].tag = val.tag;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_3_1_5:
{
value val = ((pointeronly *)(g[1].p))->data[g[5].i];
g[3].tag = val.tag;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_3_2_0:
{
value val = ((pointeronly *)(g[2].p))->data[g[0].i];
g[3].tag = val.tag;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_3_2_1:
{
value val = ((pointeronly *)(g[2].p))->data[g[1].i];
g[3].tag = val.tag;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_3_2_3:
{
value val = ((pointeronly *)(g[2].p))->data[g[3].i];
g[3].tag = val.tag;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_3_2_4:
{
value val = ((pointeronly *)(g[2].p))->data[g[4].i];
g[3].tag = val.tag;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_3_2_5:
{
value val = ((pointeronly *)(g[2].p))->data[g[5].i];
g[3].tag = val.tag;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_3_3_0:
{
value val = ((pointeronly *)(g[3].p))->data[g[0].i];
g[3].tag = val.tag;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_3_3_1:
{
value val = ((pointeronly *)(g[3].p))->data[g[1].i];
g[3].tag = val.tag;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_3_3_2:
{
value val = ((pointeronly *)(g[3].p))->data[g[2].i];
g[3].tag = val.tag;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_3_3_4:
{
value val = ((pointeronly *)(g[3].p))->data[g[4].i];
g[3].tag = val.tag;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_3_3_5:
{
value val = ((pointeronly *)(g[3].p))->data[g[5].i];
g[3].tag = val.tag;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_3_4_0:
{
value val = ((pointeronly *)(g[4].p))->data[g[0].i];
g[3].tag = val.tag;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_3_4_1:
{
value val = ((pointeronly *)(g[4].p))->data[g[1].i];
g[3].tag = val.tag;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_3_4_2:
{
value val = ((pointeronly *)(g[4].p))->data[g[2].i];
g[3].tag = val.tag;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_3_4_3:
{
value val = ((pointeronly *)(g[4].p))->data[g[3].i];
g[3].tag = val.tag;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_3_4_5:
{
value val = ((pointeronly *)(g[4].p))->data[g[5].i];
g[3].tag = val.tag;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_3_5_0:
{
value val = ((pointeronly *)(g[5].p))->data[g[0].i];
g[3].tag = val.tag;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_3_5_1:
{
value val = ((pointeronly *)(g[5].p))->data[g[1].i];
g[3].tag = val.tag;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_3_5_2:
{
value val = ((pointeronly *)(g[5].p))->data[g[2].i];
g[3].tag = val.tag;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_3_5_3:
{
value val = ((pointeronly *)(g[5].p))->data[g[3].i];
g[3].tag = val.tag;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_3_5_4:
{
value val = ((pointeronly *)(g[5].p))->data[g[4].i];
g[3].tag = val.tag;
g[3].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_4_0_1:
{
value val = ((pointeronly *)(g[0].p))->data[g[1].i];
g[4].tag = val.tag;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_4_0_2:
{
value val = ((pointeronly *)(g[0].p))->data[g[2].i];
g[4].tag = val.tag;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_4_0_3:
{
value val = ((pointeronly *)(g[0].p))->data[g[3].i];
g[4].tag = val.tag;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_4_0_4:
{
value val = ((pointeronly *)(g[0].p))->data[g[4].i];
g[4].tag = val.tag;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_4_0_5:
{
value val = ((pointeronly *)(g[0].p))->data[g[5].i];
g[4].tag = val.tag;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_4_1_0:
{
value val = ((pointeronly *)(g[1].p))->data[g[0].i];
g[4].tag = val.tag;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_4_1_2:
{
value val = ((pointeronly *)(g[1].p))->data[g[2].i];
g[4].tag = val.tag;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_4_1_3:
{
value val = ((pointeronly *)(g[1].p))->data[g[3].i];
g[4].tag = val.tag;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_4_1_4:
{
value val = ((pointeronly *)(g[1].p))->data[g[4].i];
g[4].tag = val.tag;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_4_1_5:
{
value val = ((pointeronly *)(g[1].p))->data[g[5].i];
g[4].tag = val.tag;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_4_2_0:
{
value val = ((pointeronly *)(g[2].p))->data[g[0].i];
g[4].tag = val.tag;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_4_2_1:
{
value val = ((pointeronly *)(g[2].p))->data[g[1].i];
g[4].tag = val.tag;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_4_2_3:
{
value val = ((pointeronly *)(g[2].p))->data[g[3].i];
g[4].tag = val.tag;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_4_2_4:
{
value val = ((pointeronly *)(g[2].p))->data[g[4].i];
g[4].tag = val.tag;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_4_2_5:
{
value val = ((pointeronly *)(g[2].p))->data[g[5].i];
g[4].tag = val.tag;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_4_3_0:
{
value val = ((pointeronly *)(g[3].p))->data[g[0].i];
g[4].tag = val.tag;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_4_3_1:
{
value val = ((pointeronly *)(g[3].p))->data[g[1].i];
g[4].tag = val.tag;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_4_3_2:
{
value val = ((pointeronly *)(g[3].p))->data[g[2].i];
g[4].tag = val.tag;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_4_3_4:
{
value val = ((pointeronly *)(g[3].p))->data[g[4].i];
g[4].tag = val.tag;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_4_3_5:
{
value val = ((pointeronly *)(g[3].p))->data[g[5].i];
g[4].tag = val.tag;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_4_4_0:
{
value val = ((pointeronly *)(g[4].p))->data[g[0].i];
g[4].tag = val.tag;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_4_4_1:
{
value val = ((pointeronly *)(g[4].p))->data[g[1].i];
g[4].tag = val.tag;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_4_4_2:
{
value val = ((pointeronly *)(g[4].p))->data[g[2].i];
g[4].tag = val.tag;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_4_4_3:
{
value val = ((pointeronly *)(g[4].p))->data[g[3].i];
g[4].tag = val.tag;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_4_4_5:
{
value val = ((pointeronly *)(g[4].p))->data[g[5].i];
g[4].tag = val.tag;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_4_5_0:
{
value val = ((pointeronly *)(g[5].p))->data[g[0].i];
g[4].tag = val.tag;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_4_5_1:
{
value val = ((pointeronly *)(g[5].p))->data[g[1].i];
g[4].tag = val.tag;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_4_5_2:
{
value val = ((pointeronly *)(g[5].p))->data[g[2].i];
g[4].tag = val.tag;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_4_5_3:
{
value val = ((pointeronly *)(g[5].p))->data[g[3].i];
g[4].tag = val.tag;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_4_5_4:
{
value val = ((pointeronly *)(g[5].p))->data[g[4].i];
g[4].tag = val.tag;
g[4].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_5_0_1:
{
value val = ((pointeronly *)(g[0].p))->data[g[1].i];
g[5].tag = val.tag;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_5_0_2:
{
value val = ((pointeronly *)(g[0].p))->data[g[2].i];
g[5].tag = val.tag;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_5_0_3:
{
value val = ((pointeronly *)(g[0].p))->data[g[3].i];
g[5].tag = val.tag;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_5_0_4:
{
value val = ((pointeronly *)(g[0].p))->data[g[4].i];
g[5].tag = val.tag;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_5_0_5:
{
value val = ((pointeronly *)(g[0].p))->data[g[5].i];
g[5].tag = val.tag;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_5_1_0:
{
value val = ((pointeronly *)(g[1].p))->data[g[0].i];
g[5].tag = val.tag;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_5_1_2:
{
value val = ((pointeronly *)(g[1].p))->data[g[2].i];
g[5].tag = val.tag;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_5_1_3:
{
value val = ((pointeronly *)(g[1].p))->data[g[3].i];
g[5].tag = val.tag;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_5_1_4:
{
value val = ((pointeronly *)(g[1].p))->data[g[4].i];
g[5].tag = val.tag;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_5_1_5:
{
value val = ((pointeronly *)(g[1].p))->data[g[5].i];
g[5].tag = val.tag;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_5_2_0:
{
value val = ((pointeronly *)(g[2].p))->data[g[0].i];
g[5].tag = val.tag;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_5_2_1:
{
value val = ((pointeronly *)(g[2].p))->data[g[1].i];
g[5].tag = val.tag;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_5_2_3:
{
value val = ((pointeronly *)(g[2].p))->data[g[3].i];
g[5].tag = val.tag;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_5_2_4:
{
value val = ((pointeronly *)(g[2].p))->data[g[4].i];
g[5].tag = val.tag;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_5_2_5:
{
value val = ((pointeronly *)(g[2].p))->data[g[5].i];
g[5].tag = val.tag;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_5_3_0:
{
value val = ((pointeronly *)(g[3].p))->data[g[0].i];
g[5].tag = val.tag;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_5_3_1:
{
value val = ((pointeronly *)(g[3].p))->data[g[1].i];
g[5].tag = val.tag;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_5_3_2:
{
value val = ((pointeronly *)(g[3].p))->data[g[2].i];
g[5].tag = val.tag;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_5_3_4:
{
value val = ((pointeronly *)(g[3].p))->data[g[4].i];
g[5].tag = val.tag;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_5_3_5:
{
value val = ((pointeronly *)(g[3].p))->data[g[5].i];
g[5].tag = val.tag;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_5_4_0:
{
value val = ((pointeronly *)(g[4].p))->data[g[0].i];
g[5].tag = val.tag;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_5_4_1:
{
value val = ((pointeronly *)(g[4].p))->data[g[1].i];
g[5].tag = val.tag;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_5_4_2:
{
value val = ((pointeronly *)(g[4].p))->data[g[2].i];
g[5].tag = val.tag;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_5_4_3:
{
value val = ((pointeronly *)(g[4].p))->data[g[3].i];
g[5].tag = val.tag;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_5_4_5:
{
value val = ((pointeronly *)(g[4].p))->data[g[5].i];
g[5].tag = val.tag;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_5_5_0:
{
value val = ((pointeronly *)(g[5].p))->data[g[0].i];
g[5].tag = val.tag;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_5_5_1:
{
value val = ((pointeronly *)(g[5].p))->data[g[1].i];
g[5].tag = val.tag;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_5_5_2:
{
value val = ((pointeronly *)(g[5].p))->data[g[2].i];
g[5].tag = val.tag;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_5_5_3:
{
value val = ((pointeronly *)(g[5].p))->data[g[3].i];
g[5].tag = val.tag;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

getap_5_5_4:
{
value val = ((pointeronly *)(g[5].p))->data[g[4].i];
g[5].tag = val.tag;
g[5].p = val.p;
goto *dynOpcodes[ts + program[pc]];
}

setap_0_1_0:
{
value *vp = &(((pointeronly *)(g[0].p))->data[g[1].i]);
vp->tag = g[0].tag;
vp->p = g[0].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_0_1_1:
{
value *vp = &(((pointeronly *)(g[0].p))->data[g[1].i]);
vp->tag = g[1].tag;
vp->p = g[1].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_0_1_2:
{
value *vp = &(((pointeronly *)(g[0].p))->data[g[1].i]);
vp->tag = g[2].tag;
vp->p = g[2].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_0_1_3:
{
value *vp = &(((pointeronly *)(g[0].p))->data[g[1].i]);
vp->tag = g[3].tag;
vp->p = g[3].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_0_1_4:
{
value *vp = &(((pointeronly *)(g[0].p))->data[g[1].i]);
vp->tag = g[4].tag;
vp->p = g[4].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_0_1_5:
{
value *vp = &(((pointeronly *)(g[0].p))->data[g[1].i]);
vp->tag = g[5].tag;
vp->p = g[5].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_0_2_0:
{
value *vp = &(((pointeronly *)(g[0].p))->data[g[2].i]);
vp->tag = g[0].tag;
vp->p = g[0].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_0_2_1:
{
value *vp = &(((pointeronly *)(g[0].p))->data[g[2].i]);
vp->tag = g[1].tag;
vp->p = g[1].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_0_2_2:
{
value *vp = &(((pointeronly *)(g[0].p))->data[g[2].i]);
vp->tag = g[2].tag;
vp->p = g[2].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_0_2_3:
{
value *vp = &(((pointeronly *)(g[0].p))->data[g[2].i]);
vp->tag = g[3].tag;
vp->p = g[3].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_0_2_4:
{
value *vp = &(((pointeronly *)(g[0].p))->data[g[2].i]);
vp->tag = g[4].tag;
vp->p = g[4].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_0_2_5:
{
value *vp = &(((pointeronly *)(g[0].p))->data[g[2].i]);
vp->tag = g[5].tag;
vp->p = g[5].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_0_3_0:
{
value *vp = &(((pointeronly *)(g[0].p))->data[g[3].i]);
vp->tag = g[0].tag;
vp->p = g[0].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_0_3_1:
{
value *vp = &(((pointeronly *)(g[0].p))->data[g[3].i]);
vp->tag = g[1].tag;
vp->p = g[1].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_0_3_2:
{
value *vp = &(((pointeronly *)(g[0].p))->data[g[3].i]);
vp->tag = g[2].tag;
vp->p = g[2].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_0_3_3:
{
value *vp = &(((pointeronly *)(g[0].p))->data[g[3].i]);
vp->tag = g[3].tag;
vp->p = g[3].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_0_3_4:
{
value *vp = &(((pointeronly *)(g[0].p))->data[g[3].i]);
vp->tag = g[4].tag;
vp->p = g[4].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_0_3_5:
{
value *vp = &(((pointeronly *)(g[0].p))->data[g[3].i]);
vp->tag = g[5].tag;
vp->p = g[5].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_0_4_0:
{
value *vp = &(((pointeronly *)(g[0].p))->data[g[4].i]);
vp->tag = g[0].tag;
vp->p = g[0].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_0_4_1:
{
value *vp = &(((pointeronly *)(g[0].p))->data[g[4].i]);
vp->tag = g[1].tag;
vp->p = g[1].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_0_4_2:
{
value *vp = &(((pointeronly *)(g[0].p))->data[g[4].i]);
vp->tag = g[2].tag;
vp->p = g[2].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_0_4_3:
{
value *vp = &(((pointeronly *)(g[0].p))->data[g[4].i]);
vp->tag = g[3].tag;
vp->p = g[3].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_0_4_4:
{
value *vp = &(((pointeronly *)(g[0].p))->data[g[4].i]);
vp->tag = g[4].tag;
vp->p = g[4].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_0_4_5:
{
value *vp = &(((pointeronly *)(g[0].p))->data[g[4].i]);
vp->tag = g[5].tag;
vp->p = g[5].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_0_5_0:
{
value *vp = &(((pointeronly *)(g[0].p))->data[g[5].i]);
vp->tag = g[0].tag;
vp->p = g[0].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_0_5_1:
{
value *vp = &(((pointeronly *)(g[0].p))->data[g[5].i]);
vp->tag = g[1].tag;
vp->p = g[1].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_0_5_2:
{
value *vp = &(((pointeronly *)(g[0].p))->data[g[5].i]);
vp->tag = g[2].tag;
vp->p = g[2].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_0_5_3:
{
value *vp = &(((pointeronly *)(g[0].p))->data[g[5].i]);
vp->tag = g[3].tag;
vp->p = g[3].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_0_5_4:
{
value *vp = &(((pointeronly *)(g[0].p))->data[g[5].i]);
vp->tag = g[4].tag;
vp->p = g[4].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_0_5_5:
{
value *vp = &(((pointeronly *)(g[0].p))->data[g[5].i]);
vp->tag = g[5].tag;
vp->p = g[5].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_1_0_0:
{
value *vp = &(((pointeronly *)(g[1].p))->data[g[0].i]);
vp->tag = g[0].tag;
vp->p = g[0].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_1_0_1:
{
value *vp = &(((pointeronly *)(g[1].p))->data[g[0].i]);
vp->tag = g[1].tag;
vp->p = g[1].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_1_0_2:
{
value *vp = &(((pointeronly *)(g[1].p))->data[g[0].i]);
vp->tag = g[2].tag;
vp->p = g[2].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_1_0_3:
{
value *vp = &(((pointeronly *)(g[1].p))->data[g[0].i]);
vp->tag = g[3].tag;
vp->p = g[3].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_1_0_4:
{
value *vp = &(((pointeronly *)(g[1].p))->data[g[0].i]);
vp->tag = g[4].tag;
vp->p = g[4].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_1_0_5:
{
value *vp = &(((pointeronly *)(g[1].p))->data[g[0].i]);
vp->tag = g[5].tag;
vp->p = g[5].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_1_2_0:
{
value *vp = &(((pointeronly *)(g[1].p))->data[g[2].i]);
vp->tag = g[0].tag;
vp->p = g[0].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_1_2_1:
{
value *vp = &(((pointeronly *)(g[1].p))->data[g[2].i]);
vp->tag = g[1].tag;
vp->p = g[1].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_1_2_2:
{
value *vp = &(((pointeronly *)(g[1].p))->data[g[2].i]);
vp->tag = g[2].tag;
vp->p = g[2].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_1_2_3:
{
value *vp = &(((pointeronly *)(g[1].p))->data[g[2].i]);
vp->tag = g[3].tag;
vp->p = g[3].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_1_2_4:
{
value *vp = &(((pointeronly *)(g[1].p))->data[g[2].i]);
vp->tag = g[4].tag;
vp->p = g[4].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_1_2_5:
{
value *vp = &(((pointeronly *)(g[1].p))->data[g[2].i]);
vp->tag = g[5].tag;
vp->p = g[5].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_1_3_0:
{
value *vp = &(((pointeronly *)(g[1].p))->data[g[3].i]);
vp->tag = g[0].tag;
vp->p = g[0].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_1_3_1:
{
value *vp = &(((pointeronly *)(g[1].p))->data[g[3].i]);
vp->tag = g[1].tag;
vp->p = g[1].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_1_3_2:
{
value *vp = &(((pointeronly *)(g[1].p))->data[g[3].i]);
vp->tag = g[2].tag;
vp->p = g[2].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_1_3_3:
{
value *vp = &(((pointeronly *)(g[1].p))->data[g[3].i]);
vp->tag = g[3].tag;
vp->p = g[3].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_1_3_4:
{
value *vp = &(((pointeronly *)(g[1].p))->data[g[3].i]);
vp->tag = g[4].tag;
vp->p = g[4].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_1_3_5:
{
value *vp = &(((pointeronly *)(g[1].p))->data[g[3].i]);
vp->tag = g[5].tag;
vp->p = g[5].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_1_4_0:
{
value *vp = &(((pointeronly *)(g[1].p))->data[g[4].i]);
vp->tag = g[0].tag;
vp->p = g[0].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_1_4_1:
{
value *vp = &(((pointeronly *)(g[1].p))->data[g[4].i]);
vp->tag = g[1].tag;
vp->p = g[1].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_1_4_2:
{
value *vp = &(((pointeronly *)(g[1].p))->data[g[4].i]);
vp->tag = g[2].tag;
vp->p = g[2].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_1_4_3:
{
value *vp = &(((pointeronly *)(g[1].p))->data[g[4].i]);
vp->tag = g[3].tag;
vp->p = g[3].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_1_4_4:
{
value *vp = &(((pointeronly *)(g[1].p))->data[g[4].i]);
vp->tag = g[4].tag;
vp->p = g[4].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_1_4_5:
{
value *vp = &(((pointeronly *)(g[1].p))->data[g[4].i]);
vp->tag = g[5].tag;
vp->p = g[5].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_1_5_0:
{
value *vp = &(((pointeronly *)(g[1].p))->data[g[5].i]);
vp->tag = g[0].tag;
vp->p = g[0].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_1_5_1:
{
value *vp = &(((pointeronly *)(g[1].p))->data[g[5].i]);
vp->tag = g[1].tag;
vp->p = g[1].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_1_5_2:
{
value *vp = &(((pointeronly *)(g[1].p))->data[g[5].i]);
vp->tag = g[2].tag;
vp->p = g[2].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_1_5_3:
{
value *vp = &(((pointeronly *)(g[1].p))->data[g[5].i]);
vp->tag = g[3].tag;
vp->p = g[3].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_1_5_4:
{
value *vp = &(((pointeronly *)(g[1].p))->data[g[5].i]);
vp->tag = g[4].tag;
vp->p = g[4].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_1_5_5:
{
value *vp = &(((pointeronly *)(g[1].p))->data[g[5].i]);
vp->tag = g[5].tag;
vp->p = g[5].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_2_0_0:
{
value *vp = &(((pointeronly *)(g[2].p))->data[g[0].i]);
vp->tag = g[0].tag;
vp->p = g[0].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_2_0_1:
{
value *vp = &(((pointeronly *)(g[2].p))->data[g[0].i]);
vp->tag = g[1].tag;
vp->p = g[1].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_2_0_2:
{
value *vp = &(((pointeronly *)(g[2].p))->data[g[0].i]);
vp->tag = g[2].tag;
vp->p = g[2].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_2_0_3:
{
value *vp = &(((pointeronly *)(g[2].p))->data[g[0].i]);
vp->tag = g[3].tag;
vp->p = g[3].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_2_0_4:
{
value *vp = &(((pointeronly *)(g[2].p))->data[g[0].i]);
vp->tag = g[4].tag;
vp->p = g[4].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_2_0_5:
{
value *vp = &(((pointeronly *)(g[2].p))->data[g[0].i]);
vp->tag = g[5].tag;
vp->p = g[5].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_2_1_0:
{
value *vp = &(((pointeronly *)(g[2].p))->data[g[1].i]);
vp->tag = g[0].tag;
vp->p = g[0].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_2_1_1:
{
value *vp = &(((pointeronly *)(g[2].p))->data[g[1].i]);
vp->tag = g[1].tag;
vp->p = g[1].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_2_1_2:
{
value *vp = &(((pointeronly *)(g[2].p))->data[g[1].i]);
vp->tag = g[2].tag;
vp->p = g[2].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_2_1_3:
{
value *vp = &(((pointeronly *)(g[2].p))->data[g[1].i]);
vp->tag = g[3].tag;
vp->p = g[3].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_2_1_4:
{
value *vp = &(((pointeronly *)(g[2].p))->data[g[1].i]);
vp->tag = g[4].tag;
vp->p = g[4].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_2_1_5:
{
value *vp = &(((pointeronly *)(g[2].p))->data[g[1].i]);
vp->tag = g[5].tag;
vp->p = g[5].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_2_3_0:
{
value *vp = &(((pointeronly *)(g[2].p))->data[g[3].i]);
vp->tag = g[0].tag;
vp->p = g[0].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_2_3_1:
{
value *vp = &(((pointeronly *)(g[2].p))->data[g[3].i]);
vp->tag = g[1].tag;
vp->p = g[1].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_2_3_2:
{
value *vp = &(((pointeronly *)(g[2].p))->data[g[3].i]);
vp->tag = g[2].tag;
vp->p = g[2].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_2_3_3:
{
value *vp = &(((pointeronly *)(g[2].p))->data[g[3].i]);
vp->tag = g[3].tag;
vp->p = g[3].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_2_3_4:
{
value *vp = &(((pointeronly *)(g[2].p))->data[g[3].i]);
vp->tag = g[4].tag;
vp->p = g[4].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_2_3_5:
{
value *vp = &(((pointeronly *)(g[2].p))->data[g[3].i]);
vp->tag = g[5].tag;
vp->p = g[5].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_2_4_0:
{
value *vp = &(((pointeronly *)(g[2].p))->data[g[4].i]);
vp->tag = g[0].tag;
vp->p = g[0].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_2_4_1:
{
value *vp = &(((pointeronly *)(g[2].p))->data[g[4].i]);
vp->tag = g[1].tag;
vp->p = g[1].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_2_4_2:
{
value *vp = &(((pointeronly *)(g[2].p))->data[g[4].i]);
vp->tag = g[2].tag;
vp->p = g[2].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_2_4_3:
{
value *vp = &(((pointeronly *)(g[2].p))->data[g[4].i]);
vp->tag = g[3].tag;
vp->p = g[3].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_2_4_4:
{
value *vp = &(((pointeronly *)(g[2].p))->data[g[4].i]);
vp->tag = g[4].tag;
vp->p = g[4].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_2_4_5:
{
value *vp = &(((pointeronly *)(g[2].p))->data[g[4].i]);
vp->tag = g[5].tag;
vp->p = g[5].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_2_5_0:
{
value *vp = &(((pointeronly *)(g[2].p))->data[g[5].i]);
vp->tag = g[0].tag;
vp->p = g[0].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_2_5_1:
{
value *vp = &(((pointeronly *)(g[2].p))->data[g[5].i]);
vp->tag = g[1].tag;
vp->p = g[1].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_2_5_2:
{
value *vp = &(((pointeronly *)(g[2].p))->data[g[5].i]);
vp->tag = g[2].tag;
vp->p = g[2].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_2_5_3:
{
value *vp = &(((pointeronly *)(g[2].p))->data[g[5].i]);
vp->tag = g[3].tag;
vp->p = g[3].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_2_5_4:
{
value *vp = &(((pointeronly *)(g[2].p))->data[g[5].i]);
vp->tag = g[4].tag;
vp->p = g[4].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_2_5_5:
{
value *vp = &(((pointeronly *)(g[2].p))->data[g[5].i]);
vp->tag = g[5].tag;
vp->p = g[5].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_3_0_0:
{
value *vp = &(((pointeronly *)(g[3].p))->data[g[0].i]);
vp->tag = g[0].tag;
vp->p = g[0].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_3_0_1:
{
value *vp = &(((pointeronly *)(g[3].p))->data[g[0].i]);
vp->tag = g[1].tag;
vp->p = g[1].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_3_0_2:
{
value *vp = &(((pointeronly *)(g[3].p))->data[g[0].i]);
vp->tag = g[2].tag;
vp->p = g[2].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_3_0_3:
{
value *vp = &(((pointeronly *)(g[3].p))->data[g[0].i]);
vp->tag = g[3].tag;
vp->p = g[3].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_3_0_4:
{
value *vp = &(((pointeronly *)(g[3].p))->data[g[0].i]);
vp->tag = g[4].tag;
vp->p = g[4].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_3_0_5:
{
value *vp = &(((pointeronly *)(g[3].p))->data[g[0].i]);
vp->tag = g[5].tag;
vp->p = g[5].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_3_1_0:
{
value *vp = &(((pointeronly *)(g[3].p))->data[g[1].i]);
vp->tag = g[0].tag;
vp->p = g[0].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_3_1_1:
{
value *vp = &(((pointeronly *)(g[3].p))->data[g[1].i]);
vp->tag = g[1].tag;
vp->p = g[1].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_3_1_2:
{
value *vp = &(((pointeronly *)(g[3].p))->data[g[1].i]);
vp->tag = g[2].tag;
vp->p = g[2].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_3_1_3:
{
value *vp = &(((pointeronly *)(g[3].p))->data[g[1].i]);
vp->tag = g[3].tag;
vp->p = g[3].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_3_1_4:
{
value *vp = &(((pointeronly *)(g[3].p))->data[g[1].i]);
vp->tag = g[4].tag;
vp->p = g[4].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_3_1_5:
{
value *vp = &(((pointeronly *)(g[3].p))->data[g[1].i]);
vp->tag = g[5].tag;
vp->p = g[5].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_3_2_0:
{
value *vp = &(((pointeronly *)(g[3].p))->data[g[2].i]);
vp->tag = g[0].tag;
vp->p = g[0].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_3_2_1:
{
value *vp = &(((pointeronly *)(g[3].p))->data[g[2].i]);
vp->tag = g[1].tag;
vp->p = g[1].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_3_2_2:
{
value *vp = &(((pointeronly *)(g[3].p))->data[g[2].i]);
vp->tag = g[2].tag;
vp->p = g[2].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_3_2_3:
{
value *vp = &(((pointeronly *)(g[3].p))->data[g[2].i]);
vp->tag = g[3].tag;
vp->p = g[3].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_3_2_4:
{
value *vp = &(((pointeronly *)(g[3].p))->data[g[2].i]);
vp->tag = g[4].tag;
vp->p = g[4].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_3_2_5:
{
value *vp = &(((pointeronly *)(g[3].p))->data[g[2].i]);
vp->tag = g[5].tag;
vp->p = g[5].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_3_4_0:
{
value *vp = &(((pointeronly *)(g[3].p))->data[g[4].i]);
vp->tag = g[0].tag;
vp->p = g[0].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_3_4_1:
{
value *vp = &(((pointeronly *)(g[3].p))->data[g[4].i]);
vp->tag = g[1].tag;
vp->p = g[1].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_3_4_2:
{
value *vp = &(((pointeronly *)(g[3].p))->data[g[4].i]);
vp->tag = g[2].tag;
vp->p = g[2].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_3_4_3:
{
value *vp = &(((pointeronly *)(g[3].p))->data[g[4].i]);
vp->tag = g[3].tag;
vp->p = g[3].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_3_4_4:
{
value *vp = &(((pointeronly *)(g[3].p))->data[g[4].i]);
vp->tag = g[4].tag;
vp->p = g[4].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_3_4_5:
{
value *vp = &(((pointeronly *)(g[3].p))->data[g[4].i]);
vp->tag = g[5].tag;
vp->p = g[5].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_3_5_0:
{
value *vp = &(((pointeronly *)(g[3].p))->data[g[5].i]);
vp->tag = g[0].tag;
vp->p = g[0].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_3_5_1:
{
value *vp = &(((pointeronly *)(g[3].p))->data[g[5].i]);
vp->tag = g[1].tag;
vp->p = g[1].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_3_5_2:
{
value *vp = &(((pointeronly *)(g[3].p))->data[g[5].i]);
vp->tag = g[2].tag;
vp->p = g[2].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_3_5_3:
{
value *vp = &(((pointeronly *)(g[3].p))->data[g[5].i]);
vp->tag = g[3].tag;
vp->p = g[3].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_3_5_4:
{
value *vp = &(((pointeronly *)(g[3].p))->data[g[5].i]);
vp->tag = g[4].tag;
vp->p = g[4].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_3_5_5:
{
value *vp = &(((pointeronly *)(g[3].p))->data[g[5].i]);
vp->tag = g[5].tag;
vp->p = g[5].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_4_0_0:
{
value *vp = &(((pointeronly *)(g[4].p))->data[g[0].i]);
vp->tag = g[0].tag;
vp->p = g[0].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_4_0_1:
{
value *vp = &(((pointeronly *)(g[4].p))->data[g[0].i]);
vp->tag = g[1].tag;
vp->p = g[1].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_4_0_2:
{
value *vp = &(((pointeronly *)(g[4].p))->data[g[0].i]);
vp->tag = g[2].tag;
vp->p = g[2].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_4_0_3:
{
value *vp = &(((pointeronly *)(g[4].p))->data[g[0].i]);
vp->tag = g[3].tag;
vp->p = g[3].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_4_0_4:
{
value *vp = &(((pointeronly *)(g[4].p))->data[g[0].i]);
vp->tag = g[4].tag;
vp->p = g[4].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_4_0_5:
{
value *vp = &(((pointeronly *)(g[4].p))->data[g[0].i]);
vp->tag = g[5].tag;
vp->p = g[5].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_4_1_0:
{
value *vp = &(((pointeronly *)(g[4].p))->data[g[1].i]);
vp->tag = g[0].tag;
vp->p = g[0].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_4_1_1:
{
value *vp = &(((pointeronly *)(g[4].p))->data[g[1].i]);
vp->tag = g[1].tag;
vp->p = g[1].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_4_1_2:
{
value *vp = &(((pointeronly *)(g[4].p))->data[g[1].i]);
vp->tag = g[2].tag;
vp->p = g[2].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_4_1_3:
{
value *vp = &(((pointeronly *)(g[4].p))->data[g[1].i]);
vp->tag = g[3].tag;
vp->p = g[3].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_4_1_4:
{
value *vp = &(((pointeronly *)(g[4].p))->data[g[1].i]);
vp->tag = g[4].tag;
vp->p = g[4].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_4_1_5:
{
value *vp = &(((pointeronly *)(g[4].p))->data[g[1].i]);
vp->tag = g[5].tag;
vp->p = g[5].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_4_2_0:
{
value *vp = &(((pointeronly *)(g[4].p))->data[g[2].i]);
vp->tag = g[0].tag;
vp->p = g[0].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_4_2_1:
{
value *vp = &(((pointeronly *)(g[4].p))->data[g[2].i]);
vp->tag = g[1].tag;
vp->p = g[1].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_4_2_2:
{
value *vp = &(((pointeronly *)(g[4].p))->data[g[2].i]);
vp->tag = g[2].tag;
vp->p = g[2].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_4_2_3:
{
value *vp = &(((pointeronly *)(g[4].p))->data[g[2].i]);
vp->tag = g[3].tag;
vp->p = g[3].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_4_2_4:
{
value *vp = &(((pointeronly *)(g[4].p))->data[g[2].i]);
vp->tag = g[4].tag;
vp->p = g[4].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_4_2_5:
{
value *vp = &(((pointeronly *)(g[4].p))->data[g[2].i]);
vp->tag = g[5].tag;
vp->p = g[5].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_4_3_0:
{
value *vp = &(((pointeronly *)(g[4].p))->data[g[3].i]);
vp->tag = g[0].tag;
vp->p = g[0].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_4_3_1:
{
value *vp = &(((pointeronly *)(g[4].p))->data[g[3].i]);
vp->tag = g[1].tag;
vp->p = g[1].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_4_3_2:
{
value *vp = &(((pointeronly *)(g[4].p))->data[g[3].i]);
vp->tag = g[2].tag;
vp->p = g[2].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_4_3_3:
{
value *vp = &(((pointeronly *)(g[4].p))->data[g[3].i]);
vp->tag = g[3].tag;
vp->p = g[3].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_4_3_4:
{
value *vp = &(((pointeronly *)(g[4].p))->data[g[3].i]);
vp->tag = g[4].tag;
vp->p = g[4].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_4_3_5:
{
value *vp = &(((pointeronly *)(g[4].p))->data[g[3].i]);
vp->tag = g[5].tag;
vp->p = g[5].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_4_5_0:
{
value *vp = &(((pointeronly *)(g[4].p))->data[g[5].i]);
vp->tag = g[0].tag;
vp->p = g[0].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_4_5_1:
{
value *vp = &(((pointeronly *)(g[4].p))->data[g[5].i]);
vp->tag = g[1].tag;
vp->p = g[1].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_4_5_2:
{
value *vp = &(((pointeronly *)(g[4].p))->data[g[5].i]);
vp->tag = g[2].tag;
vp->p = g[2].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_4_5_3:
{
value *vp = &(((pointeronly *)(g[4].p))->data[g[5].i]);
vp->tag = g[3].tag;
vp->p = g[3].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_4_5_4:
{
value *vp = &(((pointeronly *)(g[4].p))->data[g[5].i]);
vp->tag = g[4].tag;
vp->p = g[4].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_4_5_5:
{
value *vp = &(((pointeronly *)(g[4].p))->data[g[5].i]);
vp->tag = g[5].tag;
vp->p = g[5].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_5_0_0:
{
value *vp = &(((pointeronly *)(g[5].p))->data[g[0].i]);
vp->tag = g[0].tag;
vp->p = g[0].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_5_0_1:
{
value *vp = &(((pointeronly *)(g[5].p))->data[g[0].i]);
vp->tag = g[1].tag;
vp->p = g[1].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_5_0_2:
{
value *vp = &(((pointeronly *)(g[5].p))->data[g[0].i]);
vp->tag = g[2].tag;
vp->p = g[2].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_5_0_3:
{
value *vp = &(((pointeronly *)(g[5].p))->data[g[0].i]);
vp->tag = g[3].tag;
vp->p = g[3].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_5_0_4:
{
value *vp = &(((pointeronly *)(g[5].p))->data[g[0].i]);
vp->tag = g[4].tag;
vp->p = g[4].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_5_0_5:
{
value *vp = &(((pointeronly *)(g[5].p))->data[g[0].i]);
vp->tag = g[5].tag;
vp->p = g[5].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_5_1_0:
{
value *vp = &(((pointeronly *)(g[5].p))->data[g[1].i]);
vp->tag = g[0].tag;
vp->p = g[0].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_5_1_1:
{
value *vp = &(((pointeronly *)(g[5].p))->data[g[1].i]);
vp->tag = g[1].tag;
vp->p = g[1].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_5_1_2:
{
value *vp = &(((pointeronly *)(g[5].p))->data[g[1].i]);
vp->tag = g[2].tag;
vp->p = g[2].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_5_1_3:
{
value *vp = &(((pointeronly *)(g[5].p))->data[g[1].i]);
vp->tag = g[3].tag;
vp->p = g[3].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_5_1_4:
{
value *vp = &(((pointeronly *)(g[5].p))->data[g[1].i]);
vp->tag = g[4].tag;
vp->p = g[4].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_5_1_5:
{
value *vp = &(((pointeronly *)(g[5].p))->data[g[1].i]);
vp->tag = g[5].tag;
vp->p = g[5].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_5_2_0:
{
value *vp = &(((pointeronly *)(g[5].p))->data[g[2].i]);
vp->tag = g[0].tag;
vp->p = g[0].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_5_2_1:
{
value *vp = &(((pointeronly *)(g[5].p))->data[g[2].i]);
vp->tag = g[1].tag;
vp->p = g[1].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_5_2_2:
{
value *vp = &(((pointeronly *)(g[5].p))->data[g[2].i]);
vp->tag = g[2].tag;
vp->p = g[2].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_5_2_3:
{
value *vp = &(((pointeronly *)(g[5].p))->data[g[2].i]);
vp->tag = g[3].tag;
vp->p = g[3].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_5_2_4:
{
value *vp = &(((pointeronly *)(g[5].p))->data[g[2].i]);
vp->tag = g[4].tag;
vp->p = g[4].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_5_2_5:
{
value *vp = &(((pointeronly *)(g[5].p))->data[g[2].i]);
vp->tag = g[5].tag;
vp->p = g[5].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_5_3_0:
{
value *vp = &(((pointeronly *)(g[5].p))->data[g[3].i]);
vp->tag = g[0].tag;
vp->p = g[0].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_5_3_1:
{
value *vp = &(((pointeronly *)(g[5].p))->data[g[3].i]);
vp->tag = g[1].tag;
vp->p = g[1].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_5_3_2:
{
value *vp = &(((pointeronly *)(g[5].p))->data[g[3].i]);
vp->tag = g[2].tag;
vp->p = g[2].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_5_3_3:
{
value *vp = &(((pointeronly *)(g[5].p))->data[g[3].i]);
vp->tag = g[3].tag;
vp->p = g[3].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_5_3_4:
{
value *vp = &(((pointeronly *)(g[5].p))->data[g[3].i]);
vp->tag = g[4].tag;
vp->p = g[4].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_5_3_5:
{
value *vp = &(((pointeronly *)(g[5].p))->data[g[3].i]);
vp->tag = g[5].tag;
vp->p = g[5].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_5_4_0:
{
value *vp = &(((pointeronly *)(g[5].p))->data[g[4].i]);
vp->tag = g[0].tag;
vp->p = g[0].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_5_4_1:
{
value *vp = &(((pointeronly *)(g[5].p))->data[g[4].i]);
vp->tag = g[1].tag;
vp->p = g[1].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_5_4_2:
{
value *vp = &(((pointeronly *)(g[5].p))->data[g[4].i]);
vp->tag = g[2].tag;
vp->p = g[2].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_5_4_3:
{
value *vp = &(((pointeronly *)(g[5].p))->data[g[4].i]);
vp->tag = g[3].tag;
vp->p = g[3].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_5_4_4:
{
value *vp = &(((pointeronly *)(g[5].p))->data[g[4].i]);
vp->tag = g[4].tag;
vp->p = g[4].p;
goto *dynOpcodes[ts + program[pc]];
}

setap_5_4_5:
{
value *vp = &(((pointeronly *)(g[5].p))->data[g[4].i]);
vp->tag = g[5].tag;
vp->p = g[5].p;
goto *dynOpcodes[ts + program[pc]];
}

getb_0_0_1:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[1].i];
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_0_0_2:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[2].i];
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_0_0_3:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[3].i];
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_0_0_4:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[4].i];
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_0_0_5:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[5].i];
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_0_1_0:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[0].i];
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_0_1_2:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[2].i];
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_0_1_3:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[3].i];
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_0_1_4:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[4].i];
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_0_1_5:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[5].i];
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_0_2_0:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[0].i];
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_0_2_1:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[1].i];
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_0_2_3:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[3].i];
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_0_2_4:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[4].i];
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_0_2_5:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[5].i];
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_0_3_0:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[0].i];
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_0_3_1:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[1].i];
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_0_3_2:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[2].i];
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_0_3_4:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[4].i];
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_0_3_5:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[5].i];
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_0_4_0:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[0].i];
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_0_4_1:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[1].i];
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_0_4_2:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[2].i];
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_0_4_3:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[3].i];
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_0_4_5:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[5].i];
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_0_5_0:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[0].i];
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_0_5_1:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[1].i];
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_0_5_2:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[2].i];
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_0_5_3:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[3].i];
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_0_5_4:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[4].i];
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_1_0_1:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[1].i];
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_1_0_2:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[2].i];
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_1_0_3:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[3].i];
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_1_0_4:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[4].i];
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_1_0_5:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[5].i];
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_1_1_0:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[0].i];
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_1_1_2:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[2].i];
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_1_1_3:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[3].i];
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_1_1_4:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[4].i];
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_1_1_5:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[5].i];
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_1_2_0:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[0].i];
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_1_2_1:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[1].i];
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_1_2_3:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[3].i];
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_1_2_4:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[4].i];
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_1_2_5:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[5].i];
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_1_3_0:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[0].i];
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_1_3_1:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[1].i];
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_1_3_2:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[2].i];
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_1_3_4:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[4].i];
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_1_3_5:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[5].i];
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_1_4_0:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[0].i];
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_1_4_1:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[1].i];
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_1_4_2:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[2].i];
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_1_4_3:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[3].i];
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_1_4_5:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[5].i];
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_1_5_0:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[0].i];
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_1_5_1:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[1].i];
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_1_5_2:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[2].i];
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_1_5_3:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[3].i];
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_1_5_4:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[4].i];
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_2_0_1:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[1].i];
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_2_0_2:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[2].i];
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_2_0_3:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[3].i];
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_2_0_4:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[4].i];
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_2_0_5:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[5].i];
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_2_1_0:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[0].i];
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_2_1_2:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[2].i];
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_2_1_3:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[3].i];
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_2_1_4:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[4].i];
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_2_1_5:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[5].i];
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_2_2_0:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[0].i];
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_2_2_1:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[1].i];
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_2_2_3:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[3].i];
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_2_2_4:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[4].i];
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_2_2_5:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[5].i];
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_2_3_0:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[0].i];
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_2_3_1:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[1].i];
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_2_3_2:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[2].i];
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_2_3_4:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[4].i];
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_2_3_5:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[5].i];
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_2_4_0:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[0].i];
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_2_4_1:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[1].i];
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_2_4_2:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[2].i];
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_2_4_3:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[3].i];
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_2_4_5:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[5].i];
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_2_5_0:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[0].i];
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_2_5_1:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[1].i];
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_2_5_2:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[2].i];
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_2_5_3:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[3].i];
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_2_5_4:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[4].i];
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_3_0_1:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[1].i];
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_3_0_2:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[2].i];
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_3_0_3:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[3].i];
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_3_0_4:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[4].i];
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_3_0_5:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[5].i];
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_3_1_0:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[0].i];
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_3_1_2:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[2].i];
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_3_1_3:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[3].i];
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_3_1_4:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[4].i];
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_3_1_5:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[5].i];
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_3_2_0:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[0].i];
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_3_2_1:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[1].i];
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_3_2_3:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[3].i];
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_3_2_4:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[4].i];
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_3_2_5:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[5].i];
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_3_3_0:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[0].i];
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_3_3_1:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[1].i];
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_3_3_2:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[2].i];
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_3_3_4:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[4].i];
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_3_3_5:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[5].i];
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_3_4_0:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[0].i];
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_3_4_1:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[1].i];
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_3_4_2:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[2].i];
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_3_4_3:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[3].i];
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_3_4_5:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[5].i];
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_3_5_0:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[0].i];
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_3_5_1:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[1].i];
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_3_5_2:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[2].i];
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_3_5_3:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[3].i];
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_3_5_4:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[4].i];
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_4_0_1:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[1].i];
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_4_0_2:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[2].i];
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_4_0_3:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[3].i];
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_4_0_4:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[4].i];
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_4_0_5:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[5].i];
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_4_1_0:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[0].i];
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_4_1_2:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[2].i];
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_4_1_3:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[3].i];
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_4_1_4:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[4].i];
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_4_1_5:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[5].i];
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_4_2_0:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[0].i];
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_4_2_1:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[1].i];
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_4_2_3:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[3].i];
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_4_2_4:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[4].i];
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_4_2_5:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[5].i];
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_4_3_0:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[0].i];
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_4_3_1:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[1].i];
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_4_3_2:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[2].i];
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_4_3_4:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[4].i];
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_4_3_5:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[5].i];
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_4_4_0:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[0].i];
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_4_4_1:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[1].i];
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_4_4_2:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[2].i];
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_4_4_3:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[3].i];
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_4_4_5:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[5].i];
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_4_5_0:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[0].i];
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_4_5_1:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[1].i];
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_4_5_2:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[2].i];
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_4_5_3:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[3].i];
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_4_5_4:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[4].i];
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_5_0_1:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[1].i];
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_5_0_2:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[2].i];
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_5_0_3:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[3].i];
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_5_0_4:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[4].i];
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_5_0_5:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[5].i];
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_5_1_0:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[0].i];
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_5_1_2:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[2].i];
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_5_1_3:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[3].i];
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_5_1_4:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[4].i];
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_5_1_5:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[5].i];
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_5_2_0:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[0].i];
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_5_2_1:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[1].i];
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_5_2_3:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[3].i];
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_5_2_4:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[4].i];
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_5_2_5:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[5].i];
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_5_3_0:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[0].i];
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_5_3_1:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[1].i];
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_5_3_2:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[2].i];
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_5_3_4:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[4].i];
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_5_3_5:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[5].i];
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_5_4_0:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[0].i];
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_5_4_1:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[1].i];
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_5_4_2:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[2].i];
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_5_4_3:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[3].i];
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_5_4_5:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[5].i];
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_5_5_0:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[0].i];
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_5_5_1:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[1].i];
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_5_5_2:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[2].i];
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_5_5_3:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[3].i];
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getb_5_5_4:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[4].i];
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_0_0_1:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[1].i];
g[0].tag = 0;
ts |= 0x1f /*011111*/;
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_0_0_2:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[2].i];
g[0].tag = 0;
ts |= 0x1f /*011111*/;
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_0_0_3:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[3].i];
g[0].tag = 0;
ts |= 0x1f /*011111*/;
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_0_0_4:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[4].i];
g[0].tag = 0;
ts |= 0x1f /*011111*/;
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_0_0_5:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[5].i];
g[0].tag = 0;
ts |= 0x1f /*011111*/;
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_0_1_0:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[0].i];
g[0].tag = 0;
ts |= 0x1f /*011111*/;
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_0_1_2:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[2].i];
g[0].tag = 0;
ts |= 0x1f /*011111*/;
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_0_1_3:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[3].i];
g[0].tag = 0;
ts |= 0x1f /*011111*/;
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_0_1_4:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[4].i];
g[0].tag = 0;
ts |= 0x1f /*011111*/;
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_0_1_5:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[5].i];
g[0].tag = 0;
ts |= 0x1f /*011111*/;
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_0_2_0:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[0].i];
g[0].tag = 0;
ts |= 0x1f /*011111*/;
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_0_2_1:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[1].i];
g[0].tag = 0;
ts |= 0x1f /*011111*/;
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_0_2_3:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[3].i];
g[0].tag = 0;
ts |= 0x1f /*011111*/;
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_0_2_4:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[4].i];
g[0].tag = 0;
ts |= 0x1f /*011111*/;
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_0_2_5:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[5].i];
g[0].tag = 0;
ts |= 0x1f /*011111*/;
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_0_3_0:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[0].i];
g[0].tag = 0;
ts |= 0x1f /*011111*/;
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_0_3_1:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[1].i];
g[0].tag = 0;
ts |= 0x1f /*011111*/;
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_0_3_2:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[2].i];
g[0].tag = 0;
ts |= 0x1f /*011111*/;
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_0_3_4:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[4].i];
g[0].tag = 0;
ts |= 0x1f /*011111*/;
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_0_3_5:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[5].i];
g[0].tag = 0;
ts |= 0x1f /*011111*/;
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_0_4_0:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[0].i];
g[0].tag = 0;
ts |= 0x1f /*011111*/;
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_0_4_1:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[1].i];
g[0].tag = 0;
ts |= 0x1f /*011111*/;
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_0_4_2:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[2].i];
g[0].tag = 0;
ts |= 0x1f /*011111*/;
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_0_4_3:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[3].i];
g[0].tag = 0;
ts |= 0x1f /*011111*/;
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_0_4_5:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[5].i];
g[0].tag = 0;
ts |= 0x1f /*011111*/;
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_0_5_0:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[0].i];
g[0].tag = 0;
ts |= 0x1f /*011111*/;
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_0_5_1:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[1].i];
g[0].tag = 0;
ts |= 0x1f /*011111*/;
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_0_5_2:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[2].i];
g[0].tag = 0;
ts |= 0x1f /*011111*/;
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_0_5_3:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[3].i];
g[0].tag = 0;
ts |= 0x1f /*011111*/;
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_0_5_4:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[4].i];
g[0].tag = 0;
ts |= 0x1f /*011111*/;
g[0].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_1_0_1:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[1].i];
g[1].tag = 0;
ts |= 0x2f /*101111*/;
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_1_0_2:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[2].i];
g[1].tag = 0;
ts |= 0x2f /*101111*/;
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_1_0_3:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[3].i];
g[1].tag = 0;
ts |= 0x2f /*101111*/;
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_1_0_4:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[4].i];
g[1].tag = 0;
ts |= 0x2f /*101111*/;
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_1_0_5:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[5].i];
g[1].tag = 0;
ts |= 0x2f /*101111*/;
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_1_1_0:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[0].i];
g[1].tag = 0;
ts |= 0x2f /*101111*/;
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_1_1_2:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[2].i];
g[1].tag = 0;
ts |= 0x2f /*101111*/;
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_1_1_3:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[3].i];
g[1].tag = 0;
ts |= 0x2f /*101111*/;
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_1_1_4:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[4].i];
g[1].tag = 0;
ts |= 0x2f /*101111*/;
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_1_1_5:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[5].i];
g[1].tag = 0;
ts |= 0x2f /*101111*/;
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_1_2_0:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[0].i];
g[1].tag = 0;
ts |= 0x2f /*101111*/;
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_1_2_1:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[1].i];
g[1].tag = 0;
ts |= 0x2f /*101111*/;
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_1_2_3:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[3].i];
g[1].tag = 0;
ts |= 0x2f /*101111*/;
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_1_2_4:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[4].i];
g[1].tag = 0;
ts |= 0x2f /*101111*/;
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_1_2_5:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[5].i];
g[1].tag = 0;
ts |= 0x2f /*101111*/;
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_1_3_0:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[0].i];
g[1].tag = 0;
ts |= 0x2f /*101111*/;
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_1_3_1:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[1].i];
g[1].tag = 0;
ts |= 0x2f /*101111*/;
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_1_3_2:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[2].i];
g[1].tag = 0;
ts |= 0x2f /*101111*/;
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_1_3_4:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[4].i];
g[1].tag = 0;
ts |= 0x2f /*101111*/;
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_1_3_5:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[5].i];
g[1].tag = 0;
ts |= 0x2f /*101111*/;
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_1_4_0:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[0].i];
g[1].tag = 0;
ts |= 0x2f /*101111*/;
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_1_4_1:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[1].i];
g[1].tag = 0;
ts |= 0x2f /*101111*/;
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_1_4_2:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[2].i];
g[1].tag = 0;
ts |= 0x2f /*101111*/;
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_1_4_3:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[3].i];
g[1].tag = 0;
ts |= 0x2f /*101111*/;
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_1_4_5:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[5].i];
g[1].tag = 0;
ts |= 0x2f /*101111*/;
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_1_5_0:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[0].i];
g[1].tag = 0;
ts |= 0x2f /*101111*/;
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_1_5_1:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[1].i];
g[1].tag = 0;
ts |= 0x2f /*101111*/;
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_1_5_2:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[2].i];
g[1].tag = 0;
ts |= 0x2f /*101111*/;
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_1_5_3:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[3].i];
g[1].tag = 0;
ts |= 0x2f /*101111*/;
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_1_5_4:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[4].i];
g[1].tag = 0;
ts |= 0x2f /*101111*/;
g[1].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_2_0_1:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[1].i];
g[2].tag = 0;
ts |= 0x37 /*110111*/;
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_2_0_2:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[2].i];
g[2].tag = 0;
ts |= 0x37 /*110111*/;
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_2_0_3:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[3].i];
g[2].tag = 0;
ts |= 0x37 /*110111*/;
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_2_0_4:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[4].i];
g[2].tag = 0;
ts |= 0x37 /*110111*/;
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_2_0_5:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[5].i];
g[2].tag = 0;
ts |= 0x37 /*110111*/;
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_2_1_0:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[0].i];
g[2].tag = 0;
ts |= 0x37 /*110111*/;
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_2_1_2:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[2].i];
g[2].tag = 0;
ts |= 0x37 /*110111*/;
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_2_1_3:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[3].i];
g[2].tag = 0;
ts |= 0x37 /*110111*/;
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_2_1_4:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[4].i];
g[2].tag = 0;
ts |= 0x37 /*110111*/;
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_2_1_5:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[5].i];
g[2].tag = 0;
ts |= 0x37 /*110111*/;
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_2_2_0:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[0].i];
g[2].tag = 0;
ts |= 0x37 /*110111*/;
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_2_2_1:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[1].i];
g[2].tag = 0;
ts |= 0x37 /*110111*/;
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_2_2_3:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[3].i];
g[2].tag = 0;
ts |= 0x37 /*110111*/;
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_2_2_4:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[4].i];
g[2].tag = 0;
ts |= 0x37 /*110111*/;
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_2_2_5:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[5].i];
g[2].tag = 0;
ts |= 0x37 /*110111*/;
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_2_3_0:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[0].i];
g[2].tag = 0;
ts |= 0x37 /*110111*/;
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_2_3_1:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[1].i];
g[2].tag = 0;
ts |= 0x37 /*110111*/;
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_2_3_2:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[2].i];
g[2].tag = 0;
ts |= 0x37 /*110111*/;
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_2_3_4:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[4].i];
g[2].tag = 0;
ts |= 0x37 /*110111*/;
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_2_3_5:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[5].i];
g[2].tag = 0;
ts |= 0x37 /*110111*/;
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_2_4_0:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[0].i];
g[2].tag = 0;
ts |= 0x37 /*110111*/;
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_2_4_1:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[1].i];
g[2].tag = 0;
ts |= 0x37 /*110111*/;
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_2_4_2:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[2].i];
g[2].tag = 0;
ts |= 0x37 /*110111*/;
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_2_4_3:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[3].i];
g[2].tag = 0;
ts |= 0x37 /*110111*/;
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_2_4_5:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[5].i];
g[2].tag = 0;
ts |= 0x37 /*110111*/;
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_2_5_0:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[0].i];
g[2].tag = 0;
ts |= 0x37 /*110111*/;
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_2_5_1:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[1].i];
g[2].tag = 0;
ts |= 0x37 /*110111*/;
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_2_5_2:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[2].i];
g[2].tag = 0;
ts |= 0x37 /*110111*/;
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_2_5_3:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[3].i];
g[2].tag = 0;
ts |= 0x37 /*110111*/;
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_2_5_4:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[4].i];
g[2].tag = 0;
ts |= 0x37 /*110111*/;
g[2].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_3_0_1:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[1].i];
g[3].tag = 0;
ts |= 0x3b /*111011*/;
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_3_0_2:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[2].i];
g[3].tag = 0;
ts |= 0x3b /*111011*/;
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_3_0_3:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[3].i];
g[3].tag = 0;
ts |= 0x3b /*111011*/;
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_3_0_4:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[4].i];
g[3].tag = 0;
ts |= 0x3b /*111011*/;
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_3_0_5:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[5].i];
g[3].tag = 0;
ts |= 0x3b /*111011*/;
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_3_1_0:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[0].i];
g[3].tag = 0;
ts |= 0x3b /*111011*/;
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_3_1_2:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[2].i];
g[3].tag = 0;
ts |= 0x3b /*111011*/;
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_3_1_3:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[3].i];
g[3].tag = 0;
ts |= 0x3b /*111011*/;
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_3_1_4:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[4].i];
g[3].tag = 0;
ts |= 0x3b /*111011*/;
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_3_1_5:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[5].i];
g[3].tag = 0;
ts |= 0x3b /*111011*/;
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_3_2_0:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[0].i];
g[3].tag = 0;
ts |= 0x3b /*111011*/;
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_3_2_1:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[1].i];
g[3].tag = 0;
ts |= 0x3b /*111011*/;
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_3_2_3:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[3].i];
g[3].tag = 0;
ts |= 0x3b /*111011*/;
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_3_2_4:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[4].i];
g[3].tag = 0;
ts |= 0x3b /*111011*/;
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_3_2_5:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[5].i];
g[3].tag = 0;
ts |= 0x3b /*111011*/;
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_3_3_0:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[0].i];
g[3].tag = 0;
ts |= 0x3b /*111011*/;
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_3_3_1:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[1].i];
g[3].tag = 0;
ts |= 0x3b /*111011*/;
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_3_3_2:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[2].i];
g[3].tag = 0;
ts |= 0x3b /*111011*/;
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_3_3_4:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[4].i];
g[3].tag = 0;
ts |= 0x3b /*111011*/;
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_3_3_5:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[5].i];
g[3].tag = 0;
ts |= 0x3b /*111011*/;
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_3_4_0:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[0].i];
g[3].tag = 0;
ts |= 0x3b /*111011*/;
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_3_4_1:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[1].i];
g[3].tag = 0;
ts |= 0x3b /*111011*/;
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_3_4_2:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[2].i];
g[3].tag = 0;
ts |= 0x3b /*111011*/;
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_3_4_3:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[3].i];
g[3].tag = 0;
ts |= 0x3b /*111011*/;
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_3_4_5:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[5].i];
g[3].tag = 0;
ts |= 0x3b /*111011*/;
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_3_5_0:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[0].i];
g[3].tag = 0;
ts |= 0x3b /*111011*/;
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_3_5_1:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[1].i];
g[3].tag = 0;
ts |= 0x3b /*111011*/;
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_3_5_2:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[2].i];
g[3].tag = 0;
ts |= 0x3b /*111011*/;
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_3_5_3:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[3].i];
g[3].tag = 0;
ts |= 0x3b /*111011*/;
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_3_5_4:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[4].i];
g[3].tag = 0;
ts |= 0x3b /*111011*/;
g[3].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_4_0_1:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[1].i];
g[4].tag = 0;
ts |= 0x3d /*111101*/;
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_4_0_2:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[2].i];
g[4].tag = 0;
ts |= 0x3d /*111101*/;
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_4_0_3:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[3].i];
g[4].tag = 0;
ts |= 0x3d /*111101*/;
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_4_0_4:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[4].i];
g[4].tag = 0;
ts |= 0x3d /*111101*/;
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_4_0_5:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[5].i];
g[4].tag = 0;
ts |= 0x3d /*111101*/;
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_4_1_0:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[0].i];
g[4].tag = 0;
ts |= 0x3d /*111101*/;
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_4_1_2:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[2].i];
g[4].tag = 0;
ts |= 0x3d /*111101*/;
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_4_1_3:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[3].i];
g[4].tag = 0;
ts |= 0x3d /*111101*/;
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_4_1_4:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[4].i];
g[4].tag = 0;
ts |= 0x3d /*111101*/;
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_4_1_5:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[5].i];
g[4].tag = 0;
ts |= 0x3d /*111101*/;
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_4_2_0:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[0].i];
g[4].tag = 0;
ts |= 0x3d /*111101*/;
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_4_2_1:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[1].i];
g[4].tag = 0;
ts |= 0x3d /*111101*/;
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_4_2_3:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[3].i];
g[4].tag = 0;
ts |= 0x3d /*111101*/;
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_4_2_4:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[4].i];
g[4].tag = 0;
ts |= 0x3d /*111101*/;
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_4_2_5:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[5].i];
g[4].tag = 0;
ts |= 0x3d /*111101*/;
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_4_3_0:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[0].i];
g[4].tag = 0;
ts |= 0x3d /*111101*/;
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_4_3_1:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[1].i];
g[4].tag = 0;
ts |= 0x3d /*111101*/;
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_4_3_2:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[2].i];
g[4].tag = 0;
ts |= 0x3d /*111101*/;
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_4_3_4:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[4].i];
g[4].tag = 0;
ts |= 0x3d /*111101*/;
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_4_3_5:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[5].i];
g[4].tag = 0;
ts |= 0x3d /*111101*/;
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_4_4_0:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[0].i];
g[4].tag = 0;
ts |= 0x3d /*111101*/;
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_4_4_1:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[1].i];
g[4].tag = 0;
ts |= 0x3d /*111101*/;
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_4_4_2:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[2].i];
g[4].tag = 0;
ts |= 0x3d /*111101*/;
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_4_4_3:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[3].i];
g[4].tag = 0;
ts |= 0x3d /*111101*/;
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_4_4_5:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[5].i];
g[4].tag = 0;
ts |= 0x3d /*111101*/;
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_4_5_0:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[0].i];
g[4].tag = 0;
ts |= 0x3d /*111101*/;
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_4_5_1:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[1].i];
g[4].tag = 0;
ts |= 0x3d /*111101*/;
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_4_5_2:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[2].i];
g[4].tag = 0;
ts |= 0x3d /*111101*/;
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_4_5_3:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[3].i];
g[4].tag = 0;
ts |= 0x3d /*111101*/;
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_4_5_4:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[4].i];
g[4].tag = 0;
ts |= 0x3d /*111101*/;
g[4].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_5_0_1:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[1].i];
g[5].tag = 0;
ts |= 0x3e /*111110*/;
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_5_0_2:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[2].i];
g[5].tag = 0;
ts |= 0x3e /*111110*/;
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_5_0_3:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[3].i];
g[5].tag = 0;
ts |= 0x3e /*111110*/;
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_5_0_4:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[4].i];
g[5].tag = 0;
ts |= 0x3e /*111110*/;
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_5_0_5:
{
uint8_t val = ((buffer *)(g[0].p))->data[g[5].i];
g[5].tag = 0;
ts |= 0x3e /*111110*/;
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_5_1_0:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[0].i];
g[5].tag = 0;
ts |= 0x3e /*111110*/;
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_5_1_2:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[2].i];
g[5].tag = 0;
ts |= 0x3e /*111110*/;
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_5_1_3:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[3].i];
g[5].tag = 0;
ts |= 0x3e /*111110*/;
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_5_1_4:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[4].i];
g[5].tag = 0;
ts |= 0x3e /*111110*/;
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_5_1_5:
{
uint8_t val = ((buffer *)(g[1].p))->data[g[5].i];
g[5].tag = 0;
ts |= 0x3e /*111110*/;
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_5_2_0:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[0].i];
g[5].tag = 0;
ts |= 0x3e /*111110*/;
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_5_2_1:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[1].i];
g[5].tag = 0;
ts |= 0x3e /*111110*/;
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_5_2_3:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[3].i];
g[5].tag = 0;
ts |= 0x3e /*111110*/;
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_5_2_4:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[4].i];
g[5].tag = 0;
ts |= 0x3e /*111110*/;
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_5_2_5:
{
uint8_t val = ((buffer *)(g[2].p))->data[g[5].i];
g[5].tag = 0;
ts |= 0x3e /*111110*/;
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_5_3_0:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[0].i];
g[5].tag = 0;
ts |= 0x3e /*111110*/;
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_5_3_1:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[1].i];
g[5].tag = 0;
ts |= 0x3e /*111110*/;
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_5_3_2:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[2].i];
g[5].tag = 0;
ts |= 0x3e /*111110*/;
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_5_3_4:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[4].i];
g[5].tag = 0;
ts |= 0x3e /*111110*/;
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_5_3_5:
{
uint8_t val = ((buffer *)(g[3].p))->data[g[5].i];
g[5].tag = 0;
ts |= 0x3e /*111110*/;
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_5_4_0:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[0].i];
g[5].tag = 0;
ts |= 0x3e /*111110*/;
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_5_4_1:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[1].i];
g[5].tag = 0;
ts |= 0x3e /*111110*/;
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_5_4_2:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[2].i];
g[5].tag = 0;
ts |= 0x3e /*111110*/;
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_5_4_3:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[3].i];
g[5].tag = 0;
ts |= 0x3e /*111110*/;
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_5_4_5:
{
uint8_t val = ((buffer *)(g[4].p))->data[g[5].i];
g[5].tag = 0;
ts |= 0x3e /*111110*/;
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_5_5_0:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[0].i];
g[5].tag = 0;
ts |= 0x3e /*111110*/;
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_5_5_1:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[1].i];
g[5].tag = 0;
ts |= 0x3e /*111110*/;
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_5_5_2:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[2].i];
g[5].tag = 0;
ts |= 0x3e /*111110*/;
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_5_5_3:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[3].i];
g[5].tag = 0;
ts |= 0x3e /*111110*/;
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

getbp_5_5_4:
{
uint8_t val = ((buffer *)(g[5].p))->data[g[4].i];
g[5].tag = 0;
ts |= 0x3e /*111110*/;
g[5].i = val;
goto *dynOpcodes[ts + program[pc]];
}

setb_0_0_1:
{
uint8_t *vp = &(((buffer *)(g[0].p))->data[g[0].i]);
*vp = g[0].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_0_0_2:
{
uint8_t *vp = &(((buffer *)(g[0].p))->data[g[0].i]);
*vp = g[0].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_0_0_3:
{
uint8_t *vp = &(((buffer *)(g[0].p))->data[g[0].i]);
*vp = g[0].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_0_0_4:
{
uint8_t *vp = &(((buffer *)(g[0].p))->data[g[0].i]);
*vp = g[0].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_0_0_5:
{
uint8_t *vp = &(((buffer *)(g[0].p))->data[g[0].i]);
*vp = g[0].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_0_1_0:
{
uint8_t *vp = &(((buffer *)(g[0].p))->data[g[1].i]);
*vp = g[0].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_0_1_2:
{
uint8_t *vp = &(((buffer *)(g[0].p))->data[g[1].i]);
*vp = g[0].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_0_1_3:
{
uint8_t *vp = &(((buffer *)(g[0].p))->data[g[1].i]);
*vp = g[0].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_0_1_4:
{
uint8_t *vp = &(((buffer *)(g[0].p))->data[g[1].i]);
*vp = g[0].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_0_1_5:
{
uint8_t *vp = &(((buffer *)(g[0].p))->data[g[1].i]);
*vp = g[0].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_0_2_0:
{
uint8_t *vp = &(((buffer *)(g[0].p))->data[g[2].i]);
*vp = g[0].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_0_2_1:
{
uint8_t *vp = &(((buffer *)(g[0].p))->data[g[2].i]);
*vp = g[0].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_0_2_3:
{
uint8_t *vp = &(((buffer *)(g[0].p))->data[g[2].i]);
*vp = g[0].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_0_2_4:
{
uint8_t *vp = &(((buffer *)(g[0].p))->data[g[2].i]);
*vp = g[0].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_0_2_5:
{
uint8_t *vp = &(((buffer *)(g[0].p))->data[g[2].i]);
*vp = g[0].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_0_3_0:
{
uint8_t *vp = &(((buffer *)(g[0].p))->data[g[3].i]);
*vp = g[0].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_0_3_1:
{
uint8_t *vp = &(((buffer *)(g[0].p))->data[g[3].i]);
*vp = g[0].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_0_3_2:
{
uint8_t *vp = &(((buffer *)(g[0].p))->data[g[3].i]);
*vp = g[0].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_0_3_4:
{
uint8_t *vp = &(((buffer *)(g[0].p))->data[g[3].i]);
*vp = g[0].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_0_3_5:
{
uint8_t *vp = &(((buffer *)(g[0].p))->data[g[3].i]);
*vp = g[0].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_0_4_0:
{
uint8_t *vp = &(((buffer *)(g[0].p))->data[g[4].i]);
*vp = g[0].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_0_4_1:
{
uint8_t *vp = &(((buffer *)(g[0].p))->data[g[4].i]);
*vp = g[0].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_0_4_2:
{
uint8_t *vp = &(((buffer *)(g[0].p))->data[g[4].i]);
*vp = g[0].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_0_4_3:
{
uint8_t *vp = &(((buffer *)(g[0].p))->data[g[4].i]);
*vp = g[0].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_0_4_5:
{
uint8_t *vp = &(((buffer *)(g[0].p))->data[g[4].i]);
*vp = g[0].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_0_5_0:
{
uint8_t *vp = &(((buffer *)(g[0].p))->data[g[5].i]);
*vp = g[0].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_0_5_1:
{
uint8_t *vp = &(((buffer *)(g[0].p))->data[g[5].i]);
*vp = g[0].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_0_5_2:
{
uint8_t *vp = &(((buffer *)(g[0].p))->data[g[5].i]);
*vp = g[0].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_0_5_3:
{
uint8_t *vp = &(((buffer *)(g[0].p))->data[g[5].i]);
*vp = g[0].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_0_5_4:
{
uint8_t *vp = &(((buffer *)(g[0].p))->data[g[5].i]);
*vp = g[0].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_1_0_1:
{
uint8_t *vp = &(((buffer *)(g[1].p))->data[g[0].i]);
*vp = g[1].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_1_0_2:
{
uint8_t *vp = &(((buffer *)(g[1].p))->data[g[0].i]);
*vp = g[1].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_1_0_3:
{
uint8_t *vp = &(((buffer *)(g[1].p))->data[g[0].i]);
*vp = g[1].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_1_0_4:
{
uint8_t *vp = &(((buffer *)(g[1].p))->data[g[0].i]);
*vp = g[1].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_1_0_5:
{
uint8_t *vp = &(((buffer *)(g[1].p))->data[g[0].i]);
*vp = g[1].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_1_1_0:
{
uint8_t *vp = &(((buffer *)(g[1].p))->data[g[1].i]);
*vp = g[1].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_1_1_2:
{
uint8_t *vp = &(((buffer *)(g[1].p))->data[g[1].i]);
*vp = g[1].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_1_1_3:
{
uint8_t *vp = &(((buffer *)(g[1].p))->data[g[1].i]);
*vp = g[1].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_1_1_4:
{
uint8_t *vp = &(((buffer *)(g[1].p))->data[g[1].i]);
*vp = g[1].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_1_1_5:
{
uint8_t *vp = &(((buffer *)(g[1].p))->data[g[1].i]);
*vp = g[1].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_1_2_0:
{
uint8_t *vp = &(((buffer *)(g[1].p))->data[g[2].i]);
*vp = g[1].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_1_2_1:
{
uint8_t *vp = &(((buffer *)(g[1].p))->data[g[2].i]);
*vp = g[1].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_1_2_3:
{
uint8_t *vp = &(((buffer *)(g[1].p))->data[g[2].i]);
*vp = g[1].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_1_2_4:
{
uint8_t *vp = &(((buffer *)(g[1].p))->data[g[2].i]);
*vp = g[1].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_1_2_5:
{
uint8_t *vp = &(((buffer *)(g[1].p))->data[g[2].i]);
*vp = g[1].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_1_3_0:
{
uint8_t *vp = &(((buffer *)(g[1].p))->data[g[3].i]);
*vp = g[1].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_1_3_1:
{
uint8_t *vp = &(((buffer *)(g[1].p))->data[g[3].i]);
*vp = g[1].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_1_3_2:
{
uint8_t *vp = &(((buffer *)(g[1].p))->data[g[3].i]);
*vp = g[1].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_1_3_4:
{
uint8_t *vp = &(((buffer *)(g[1].p))->data[g[3].i]);
*vp = g[1].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_1_3_5:
{
uint8_t *vp = &(((buffer *)(g[1].p))->data[g[3].i]);
*vp = g[1].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_1_4_0:
{
uint8_t *vp = &(((buffer *)(g[1].p))->data[g[4].i]);
*vp = g[1].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_1_4_1:
{
uint8_t *vp = &(((buffer *)(g[1].p))->data[g[4].i]);
*vp = g[1].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_1_4_2:
{
uint8_t *vp = &(((buffer *)(g[1].p))->data[g[4].i]);
*vp = g[1].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_1_4_3:
{
uint8_t *vp = &(((buffer *)(g[1].p))->data[g[4].i]);
*vp = g[1].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_1_4_5:
{
uint8_t *vp = &(((buffer *)(g[1].p))->data[g[4].i]);
*vp = g[1].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_1_5_0:
{
uint8_t *vp = &(((buffer *)(g[1].p))->data[g[5].i]);
*vp = g[1].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_1_5_1:
{
uint8_t *vp = &(((buffer *)(g[1].p))->data[g[5].i]);
*vp = g[1].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_1_5_2:
{
uint8_t *vp = &(((buffer *)(g[1].p))->data[g[5].i]);
*vp = g[1].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_1_5_3:
{
uint8_t *vp = &(((buffer *)(g[1].p))->data[g[5].i]);
*vp = g[1].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_1_5_4:
{
uint8_t *vp = &(((buffer *)(g[1].p))->data[g[5].i]);
*vp = g[1].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_2_0_1:
{
uint8_t *vp = &(((buffer *)(g[2].p))->data[g[0].i]);
*vp = g[2].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_2_0_2:
{
uint8_t *vp = &(((buffer *)(g[2].p))->data[g[0].i]);
*vp = g[2].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_2_0_3:
{
uint8_t *vp = &(((buffer *)(g[2].p))->data[g[0].i]);
*vp = g[2].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_2_0_4:
{
uint8_t *vp = &(((buffer *)(g[2].p))->data[g[0].i]);
*vp = g[2].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_2_0_5:
{
uint8_t *vp = &(((buffer *)(g[2].p))->data[g[0].i]);
*vp = g[2].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_2_1_0:
{
uint8_t *vp = &(((buffer *)(g[2].p))->data[g[1].i]);
*vp = g[2].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_2_1_2:
{
uint8_t *vp = &(((buffer *)(g[2].p))->data[g[1].i]);
*vp = g[2].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_2_1_3:
{
uint8_t *vp = &(((buffer *)(g[2].p))->data[g[1].i]);
*vp = g[2].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_2_1_4:
{
uint8_t *vp = &(((buffer *)(g[2].p))->data[g[1].i]);
*vp = g[2].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_2_1_5:
{
uint8_t *vp = &(((buffer *)(g[2].p))->data[g[1].i]);
*vp = g[2].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_2_2_0:
{
uint8_t *vp = &(((buffer *)(g[2].p))->data[g[2].i]);
*vp = g[2].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_2_2_1:
{
uint8_t *vp = &(((buffer *)(g[2].p))->data[g[2].i]);
*vp = g[2].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_2_2_3:
{
uint8_t *vp = &(((buffer *)(g[2].p))->data[g[2].i]);
*vp = g[2].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_2_2_4:
{
uint8_t *vp = &(((buffer *)(g[2].p))->data[g[2].i]);
*vp = g[2].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_2_2_5:
{
uint8_t *vp = &(((buffer *)(g[2].p))->data[g[2].i]);
*vp = g[2].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_2_3_0:
{
uint8_t *vp = &(((buffer *)(g[2].p))->data[g[3].i]);
*vp = g[2].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_2_3_1:
{
uint8_t *vp = &(((buffer *)(g[2].p))->data[g[3].i]);
*vp = g[2].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_2_3_2:
{
uint8_t *vp = &(((buffer *)(g[2].p))->data[g[3].i]);
*vp = g[2].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_2_3_4:
{
uint8_t *vp = &(((buffer *)(g[2].p))->data[g[3].i]);
*vp = g[2].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_2_3_5:
{
uint8_t *vp = &(((buffer *)(g[2].p))->data[g[3].i]);
*vp = g[2].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_2_4_0:
{
uint8_t *vp = &(((buffer *)(g[2].p))->data[g[4].i]);
*vp = g[2].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_2_4_1:
{
uint8_t *vp = &(((buffer *)(g[2].p))->data[g[4].i]);
*vp = g[2].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_2_4_2:
{
uint8_t *vp = &(((buffer *)(g[2].p))->data[g[4].i]);
*vp = g[2].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_2_4_3:
{
uint8_t *vp = &(((buffer *)(g[2].p))->data[g[4].i]);
*vp = g[2].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_2_4_5:
{
uint8_t *vp = &(((buffer *)(g[2].p))->data[g[4].i]);
*vp = g[2].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_2_5_0:
{
uint8_t *vp = &(((buffer *)(g[2].p))->data[g[5].i]);
*vp = g[2].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_2_5_1:
{
uint8_t *vp = &(((buffer *)(g[2].p))->data[g[5].i]);
*vp = g[2].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_2_5_2:
{
uint8_t *vp = &(((buffer *)(g[2].p))->data[g[5].i]);
*vp = g[2].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_2_5_3:
{
uint8_t *vp = &(((buffer *)(g[2].p))->data[g[5].i]);
*vp = g[2].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_2_5_4:
{
uint8_t *vp = &(((buffer *)(g[2].p))->data[g[5].i]);
*vp = g[2].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_3_0_1:
{
uint8_t *vp = &(((buffer *)(g[3].p))->data[g[0].i]);
*vp = g[3].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_3_0_2:
{
uint8_t *vp = &(((buffer *)(g[3].p))->data[g[0].i]);
*vp = g[3].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_3_0_3:
{
uint8_t *vp = &(((buffer *)(g[3].p))->data[g[0].i]);
*vp = g[3].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_3_0_4:
{
uint8_t *vp = &(((buffer *)(g[3].p))->data[g[0].i]);
*vp = g[3].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_3_0_5:
{
uint8_t *vp = &(((buffer *)(g[3].p))->data[g[0].i]);
*vp = g[3].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_3_1_0:
{
uint8_t *vp = &(((buffer *)(g[3].p))->data[g[1].i]);
*vp = g[3].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_3_1_2:
{
uint8_t *vp = &(((buffer *)(g[3].p))->data[g[1].i]);
*vp = g[3].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_3_1_3:
{
uint8_t *vp = &(((buffer *)(g[3].p))->data[g[1].i]);
*vp = g[3].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_3_1_4:
{
uint8_t *vp = &(((buffer *)(g[3].p))->data[g[1].i]);
*vp = g[3].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_3_1_5:
{
uint8_t *vp = &(((buffer *)(g[3].p))->data[g[1].i]);
*vp = g[3].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_3_2_0:
{
uint8_t *vp = &(((buffer *)(g[3].p))->data[g[2].i]);
*vp = g[3].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_3_2_1:
{
uint8_t *vp = &(((buffer *)(g[3].p))->data[g[2].i]);
*vp = g[3].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_3_2_3:
{
uint8_t *vp = &(((buffer *)(g[3].p))->data[g[2].i]);
*vp = g[3].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_3_2_4:
{
uint8_t *vp = &(((buffer *)(g[3].p))->data[g[2].i]);
*vp = g[3].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_3_2_5:
{
uint8_t *vp = &(((buffer *)(g[3].p))->data[g[2].i]);
*vp = g[3].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_3_3_0:
{
uint8_t *vp = &(((buffer *)(g[3].p))->data[g[3].i]);
*vp = g[3].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_3_3_1:
{
uint8_t *vp = &(((buffer *)(g[3].p))->data[g[3].i]);
*vp = g[3].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_3_3_2:
{
uint8_t *vp = &(((buffer *)(g[3].p))->data[g[3].i]);
*vp = g[3].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_3_3_4:
{
uint8_t *vp = &(((buffer *)(g[3].p))->data[g[3].i]);
*vp = g[3].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_3_3_5:
{
uint8_t *vp = &(((buffer *)(g[3].p))->data[g[3].i]);
*vp = g[3].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_3_4_0:
{
uint8_t *vp = &(((buffer *)(g[3].p))->data[g[4].i]);
*vp = g[3].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_3_4_1:
{
uint8_t *vp = &(((buffer *)(g[3].p))->data[g[4].i]);
*vp = g[3].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_3_4_2:
{
uint8_t *vp = &(((buffer *)(g[3].p))->data[g[4].i]);
*vp = g[3].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_3_4_3:
{
uint8_t *vp = &(((buffer *)(g[3].p))->data[g[4].i]);
*vp = g[3].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_3_4_5:
{
uint8_t *vp = &(((buffer *)(g[3].p))->data[g[4].i]);
*vp = g[3].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_3_5_0:
{
uint8_t *vp = &(((buffer *)(g[3].p))->data[g[5].i]);
*vp = g[3].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_3_5_1:
{
uint8_t *vp = &(((buffer *)(g[3].p))->data[g[5].i]);
*vp = g[3].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_3_5_2:
{
uint8_t *vp = &(((buffer *)(g[3].p))->data[g[5].i]);
*vp = g[3].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_3_5_3:
{
uint8_t *vp = &(((buffer *)(g[3].p))->data[g[5].i]);
*vp = g[3].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_3_5_4:
{
uint8_t *vp = &(((buffer *)(g[3].p))->data[g[5].i]);
*vp = g[3].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_4_0_1:
{
uint8_t *vp = &(((buffer *)(g[4].p))->data[g[0].i]);
*vp = g[4].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_4_0_2:
{
uint8_t *vp = &(((buffer *)(g[4].p))->data[g[0].i]);
*vp = g[4].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_4_0_3:
{
uint8_t *vp = &(((buffer *)(g[4].p))->data[g[0].i]);
*vp = g[4].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_4_0_4:
{
uint8_t *vp = &(((buffer *)(g[4].p))->data[g[0].i]);
*vp = g[4].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_4_0_5:
{
uint8_t *vp = &(((buffer *)(g[4].p))->data[g[0].i]);
*vp = g[4].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_4_1_0:
{
uint8_t *vp = &(((buffer *)(g[4].p))->data[g[1].i]);
*vp = g[4].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_4_1_2:
{
uint8_t *vp = &(((buffer *)(g[4].p))->data[g[1].i]);
*vp = g[4].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_4_1_3:
{
uint8_t *vp = &(((buffer *)(g[4].p))->data[g[1].i]);
*vp = g[4].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_4_1_4:
{
uint8_t *vp = &(((buffer *)(g[4].p))->data[g[1].i]);
*vp = g[4].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_4_1_5:
{
uint8_t *vp = &(((buffer *)(g[4].p))->data[g[1].i]);
*vp = g[4].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_4_2_0:
{
uint8_t *vp = &(((buffer *)(g[4].p))->data[g[2].i]);
*vp = g[4].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_4_2_1:
{
uint8_t *vp = &(((buffer *)(g[4].p))->data[g[2].i]);
*vp = g[4].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_4_2_3:
{
uint8_t *vp = &(((buffer *)(g[4].p))->data[g[2].i]);
*vp = g[4].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_4_2_4:
{
uint8_t *vp = &(((buffer *)(g[4].p))->data[g[2].i]);
*vp = g[4].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_4_2_5:
{
uint8_t *vp = &(((buffer *)(g[4].p))->data[g[2].i]);
*vp = g[4].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_4_3_0:
{
uint8_t *vp = &(((buffer *)(g[4].p))->data[g[3].i]);
*vp = g[4].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_4_3_1:
{
uint8_t *vp = &(((buffer *)(g[4].p))->data[g[3].i]);
*vp = g[4].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_4_3_2:
{
uint8_t *vp = &(((buffer *)(g[4].p))->data[g[3].i]);
*vp = g[4].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_4_3_4:
{
uint8_t *vp = &(((buffer *)(g[4].p))->data[g[3].i]);
*vp = g[4].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_4_3_5:
{
uint8_t *vp = &(((buffer *)(g[4].p))->data[g[3].i]);
*vp = g[4].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_4_4_0:
{
uint8_t *vp = &(((buffer *)(g[4].p))->data[g[4].i]);
*vp = g[4].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_4_4_1:
{
uint8_t *vp = &(((buffer *)(g[4].p))->data[g[4].i]);
*vp = g[4].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_4_4_2:
{
uint8_t *vp = &(((buffer *)(g[4].p))->data[g[4].i]);
*vp = g[4].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_4_4_3:
{
uint8_t *vp = &(((buffer *)(g[4].p))->data[g[4].i]);
*vp = g[4].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_4_4_5:
{
uint8_t *vp = &(((buffer *)(g[4].p))->data[g[4].i]);
*vp = g[4].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_4_5_0:
{
uint8_t *vp = &(((buffer *)(g[4].p))->data[g[5].i]);
*vp = g[4].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_4_5_1:
{
uint8_t *vp = &(((buffer *)(g[4].p))->data[g[5].i]);
*vp = g[4].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_4_5_2:
{
uint8_t *vp = &(((buffer *)(g[4].p))->data[g[5].i]);
*vp = g[4].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_4_5_3:
{
uint8_t *vp = &(((buffer *)(g[4].p))->data[g[5].i]);
*vp = g[4].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_4_5_4:
{
uint8_t *vp = &(((buffer *)(g[4].p))->data[g[5].i]);
*vp = g[4].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_5_0_1:
{
uint8_t *vp = &(((buffer *)(g[5].p))->data[g[0].i]);
*vp = g[5].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_5_0_2:
{
uint8_t *vp = &(((buffer *)(g[5].p))->data[g[0].i]);
*vp = g[5].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_5_0_3:
{
uint8_t *vp = &(((buffer *)(g[5].p))->data[g[0].i]);
*vp = g[5].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_5_0_4:
{
uint8_t *vp = &(((buffer *)(g[5].p))->data[g[0].i]);
*vp = g[5].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_5_0_5:
{
uint8_t *vp = &(((buffer *)(g[5].p))->data[g[0].i]);
*vp = g[5].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_5_1_0:
{
uint8_t *vp = &(((buffer *)(g[5].p))->data[g[1].i]);
*vp = g[5].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_5_1_2:
{
uint8_t *vp = &(((buffer *)(g[5].p))->data[g[1].i]);
*vp = g[5].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_5_1_3:
{
uint8_t *vp = &(((buffer *)(g[5].p))->data[g[1].i]);
*vp = g[5].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_5_1_4:
{
uint8_t *vp = &(((buffer *)(g[5].p))->data[g[1].i]);
*vp = g[5].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_5_1_5:
{
uint8_t *vp = &(((buffer *)(g[5].p))->data[g[1].i]);
*vp = g[5].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_5_2_0:
{
uint8_t *vp = &(((buffer *)(g[5].p))->data[g[2].i]);
*vp = g[5].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_5_2_1:
{
uint8_t *vp = &(((buffer *)(g[5].p))->data[g[2].i]);
*vp = g[5].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_5_2_3:
{
uint8_t *vp = &(((buffer *)(g[5].p))->data[g[2].i]);
*vp = g[5].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_5_2_4:
{
uint8_t *vp = &(((buffer *)(g[5].p))->data[g[2].i]);
*vp = g[5].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_5_2_5:
{
uint8_t *vp = &(((buffer *)(g[5].p))->data[g[2].i]);
*vp = g[5].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_5_3_0:
{
uint8_t *vp = &(((buffer *)(g[5].p))->data[g[3].i]);
*vp = g[5].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_5_3_1:
{
uint8_t *vp = &(((buffer *)(g[5].p))->data[g[3].i]);
*vp = g[5].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_5_3_2:
{
uint8_t *vp = &(((buffer *)(g[5].p))->data[g[3].i]);
*vp = g[5].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_5_3_4:
{
uint8_t *vp = &(((buffer *)(g[5].p))->data[g[3].i]);
*vp = g[5].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_5_3_5:
{
uint8_t *vp = &(((buffer *)(g[5].p))->data[g[3].i]);
*vp = g[5].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_5_4_0:
{
uint8_t *vp = &(((buffer *)(g[5].p))->data[g[4].i]);
*vp = g[5].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_5_4_1:
{
uint8_t *vp = &(((buffer *)(g[5].p))->data[g[4].i]);
*vp = g[5].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_5_4_2:
{
uint8_t *vp = &(((buffer *)(g[5].p))->data[g[4].i]);
*vp = g[5].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_5_4_3:
{
uint8_t *vp = &(((buffer *)(g[5].p))->data[g[4].i]);
*vp = g[5].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_5_4_5:
{
uint8_t *vp = &(((buffer *)(g[5].p))->data[g[4].i]);
*vp = g[5].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_5_5_0:
{
uint8_t *vp = &(((buffer *)(g[5].p))->data[g[5].i]);
*vp = g[5].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_5_5_1:
{
uint8_t *vp = &(((buffer *)(g[5].p))->data[g[5].i]);
*vp = g[5].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_5_5_2:
{
uint8_t *vp = &(((buffer *)(g[5].p))->data[g[5].i]);
*vp = g[5].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_5_5_3:
{
uint8_t *vp = &(((buffer *)(g[5].p))->data[g[5].i]);
*vp = g[5].i;
goto *dynOpcodes[ts + program[pc]];
}

setb_5_5_4:
{
uint8_t *vp = &(((buffer *)(g[5].p))->data[g[5].i]);
*vp = g[5].i;
goto *dynOpcodes[ts + program[pc]];
}

jmp:
{
pc += program[pc+1];
goto *dynOpcodes[ts + program[pc]];
}

jmpf:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
pc += constant;
goto *dynOpcodes[ts + program[pc]];
}

jsw_0:
{
int16_t tableSize = program[pc + 1];
if(g[0].i < 0 || g[0].i >= tableSize) {
int16_t defaultJump = program[pc + tableSize + 2];
pc += defaultJump;
}
else {
int16_t jump = program[pc + g[0].i + 2];
pc += jump;
 }
goto *dynOpcodes[ts + program[pc]];
}

jsw_1:
{
int16_t tableSize = program[pc + 1];
if(g[1].i < 0 || g[1].i >= tableSize) {
int16_t defaultJump = program[pc + tableSize + 2];
pc += defaultJump;
}
else {
int16_t jump = program[pc + g[1].i + 2];
pc += jump;
 }
goto *dynOpcodes[ts + program[pc]];
}

jsw_2:
{
int16_t tableSize = program[pc + 1];
if(g[2].i < 0 || g[2].i >= tableSize) {
int16_t defaultJump = program[pc + tableSize + 2];
pc += defaultJump;
}
else {
int16_t jump = program[pc + g[2].i + 2];
pc += jump;
 }
goto *dynOpcodes[ts + program[pc]];
}

jsw_3:
{
int16_t tableSize = program[pc + 1];
if(g[3].i < 0 || g[3].i >= tableSize) {
int16_t defaultJump = program[pc + tableSize + 2];
pc += defaultJump;
}
else {
int16_t jump = program[pc + g[3].i + 2];
pc += jump;
 }
goto *dynOpcodes[ts + program[pc]];
}

jsw_4:
{
int16_t tableSize = program[pc + 1];
if(g[4].i < 0 || g[4].i >= tableSize) {
int16_t defaultJump = program[pc + tableSize + 2];
pc += defaultJump;
}
else {
int16_t jump = program[pc + g[4].i + 2];
pc += jump;
 }
goto *dynOpcodes[ts + program[pc]];
}

jsw_5:
{
int16_t tableSize = program[pc + 1];
if(g[5].i < 0 || g[5].i >= tableSize) {
int16_t defaultJump = program[pc + tableSize + 2];
pc += defaultJump;
}
else {
int16_t jump = program[pc + g[5].i + 2];
pc += jump;
 }
goto *dynOpcodes[ts + program[pc]];
}

cabii_0_1:
{
if (g[0].i < g[1].i)
pc += program[pc + 1];
else if(g[0].i == g[1].i)
pc += program[pc + 2];
else
pc += program[pc + 3];
goto *dynOpcodes[ts + program[pc]];
}

cabii_0_2:
{
if (g[0].i < g[2].i)
pc += program[pc + 1];
else if(g[0].i == g[2].i)
pc += program[pc + 2];
else
pc += program[pc + 3];
goto *dynOpcodes[ts + program[pc]];
}

cabii_0_3:
{
if (g[0].i < g[3].i)
pc += program[pc + 1];
else if(g[0].i == g[3].i)
pc += program[pc + 2];
else
pc += program[pc + 3];
goto *dynOpcodes[ts + program[pc]];
}

cabii_0_4:
{
if (g[0].i < g[4].i)
pc += program[pc + 1];
else if(g[0].i == g[4].i)
pc += program[pc + 2];
else
pc += program[pc + 3];
goto *dynOpcodes[ts + program[pc]];
}

cabii_0_5:
{
if (g[0].i < g[5].i)
pc += program[pc + 1];
else if(g[0].i == g[5].i)
pc += program[pc + 2];
else
pc += program[pc + 3];
goto *dynOpcodes[ts + program[pc]];
}

cabii_1_0:
{
if (g[1].i < g[0].i)
pc += program[pc + 1];
else if(g[1].i == g[0].i)
pc += program[pc + 2];
else
pc += program[pc + 3];
goto *dynOpcodes[ts + program[pc]];
}

cabii_1_2:
{
if (g[1].i < g[2].i)
pc += program[pc + 1];
else if(g[1].i == g[2].i)
pc += program[pc + 2];
else
pc += program[pc + 3];
goto *dynOpcodes[ts + program[pc]];
}

cabii_1_3:
{
if (g[1].i < g[3].i)
pc += program[pc + 1];
else if(g[1].i == g[3].i)
pc += program[pc + 2];
else
pc += program[pc + 3];
goto *dynOpcodes[ts + program[pc]];
}

cabii_1_4:
{
if (g[1].i < g[4].i)
pc += program[pc + 1];
else if(g[1].i == g[4].i)
pc += program[pc + 2];
else
pc += program[pc + 3];
goto *dynOpcodes[ts + program[pc]];
}

cabii_1_5:
{
if (g[1].i < g[5].i)
pc += program[pc + 1];
else if(g[1].i == g[5].i)
pc += program[pc + 2];
else
pc += program[pc + 3];
goto *dynOpcodes[ts + program[pc]];
}

cabii_2_0:
{
if (g[2].i < g[0].i)
pc += program[pc + 1];
else if(g[2].i == g[0].i)
pc += program[pc + 2];
else
pc += program[pc + 3];
goto *dynOpcodes[ts + program[pc]];
}

cabii_2_1:
{
if (g[2].i < g[1].i)
pc += program[pc + 1];
else if(g[2].i == g[1].i)
pc += program[pc + 2];
else
pc += program[pc + 3];
goto *dynOpcodes[ts + program[pc]];
}

cabii_2_3:
{
if (g[2].i < g[3].i)
pc += program[pc + 1];
else if(g[2].i == g[3].i)
pc += program[pc + 2];
else
pc += program[pc + 3];
goto *dynOpcodes[ts + program[pc]];
}

cabii_2_4:
{
if (g[2].i < g[4].i)
pc += program[pc + 1];
else if(g[2].i == g[4].i)
pc += program[pc + 2];
else
pc += program[pc + 3];
goto *dynOpcodes[ts + program[pc]];
}

cabii_2_5:
{
if (g[2].i < g[5].i)
pc += program[pc + 1];
else if(g[2].i == g[5].i)
pc += program[pc + 2];
else
pc += program[pc + 3];
goto *dynOpcodes[ts + program[pc]];
}

cabii_3_0:
{
if (g[3].i < g[0].i)
pc += program[pc + 1];
else if(g[3].i == g[0].i)
pc += program[pc + 2];
else
pc += program[pc + 3];
goto *dynOpcodes[ts + program[pc]];
}

cabii_3_1:
{
if (g[3].i < g[1].i)
pc += program[pc + 1];
else if(g[3].i == g[1].i)
pc += program[pc + 2];
else
pc += program[pc + 3];
goto *dynOpcodes[ts + program[pc]];
}

cabii_3_2:
{
if (g[3].i < g[2].i)
pc += program[pc + 1];
else if(g[3].i == g[2].i)
pc += program[pc + 2];
else
pc += program[pc + 3];
goto *dynOpcodes[ts + program[pc]];
}

cabii_3_4:
{
if (g[3].i < g[4].i)
pc += program[pc + 1];
else if(g[3].i == g[4].i)
pc += program[pc + 2];
else
pc += program[pc + 3];
goto *dynOpcodes[ts + program[pc]];
}

cabii_3_5:
{
if (g[3].i < g[5].i)
pc += program[pc + 1];
else if(g[3].i == g[5].i)
pc += program[pc + 2];
else
pc += program[pc + 3];
goto *dynOpcodes[ts + program[pc]];
}

cabii_4_0:
{
if (g[4].i < g[0].i)
pc += program[pc + 1];
else if(g[4].i == g[0].i)
pc += program[pc + 2];
else
pc += program[pc + 3];
goto *dynOpcodes[ts + program[pc]];
}

cabii_4_1:
{
if (g[4].i < g[1].i)
pc += program[pc + 1];
else if(g[4].i == g[1].i)
pc += program[pc + 2];
else
pc += program[pc + 3];
goto *dynOpcodes[ts + program[pc]];
}

cabii_4_2:
{
if (g[4].i < g[2].i)
pc += program[pc + 1];
else if(g[4].i == g[2].i)
pc += program[pc + 2];
else
pc += program[pc + 3];
goto *dynOpcodes[ts + program[pc]];
}

cabii_4_3:
{
if (g[4].i < g[3].i)
pc += program[pc + 1];
else if(g[4].i == g[3].i)
pc += program[pc + 2];
else
pc += program[pc + 3];
goto *dynOpcodes[ts + program[pc]];
}

cabii_4_5:
{
if (g[4].i < g[5].i)
pc += program[pc + 1];
else if(g[4].i == g[5].i)
pc += program[pc + 2];
else
pc += program[pc + 3];
goto *dynOpcodes[ts + program[pc]];
}

cabii_5_0:
{
if (g[5].i < g[0].i)
pc += program[pc + 1];
else if(g[5].i == g[0].i)
pc += program[pc + 2];
else
pc += program[pc + 3];
goto *dynOpcodes[ts + program[pc]];
}

cabii_5_1:
{
if (g[5].i < g[1].i)
pc += program[pc + 1];
else if(g[5].i == g[1].i)
pc += program[pc + 2];
else
pc += program[pc + 3];
goto *dynOpcodes[ts + program[pc]];
}

cabii_5_2:
{
if (g[5].i < g[2].i)
pc += program[pc + 1];
else if(g[5].i == g[2].i)
pc += program[pc + 2];
else
pc += program[pc + 3];
goto *dynOpcodes[ts + program[pc]];
}

cabii_5_3:
{
if (g[5].i < g[3].i)
pc += program[pc + 1];
else if(g[5].i == g[3].i)
pc += program[pc + 2];
else
pc += program[pc + 3];
goto *dynOpcodes[ts + program[pc]];
}

cabii_5_4:
{
if (g[5].i < g[4].i)
pc += program[pc + 1];
else if(g[5].i == g[4].i)
pc += program[pc + 2];
else
pc += program[pc + 3];
goto *dynOpcodes[ts + program[pc]];
}

cabpp_0_1:
{
if (g[0].p == g[1].p)
pc += program[pc + 2];
else
pc += program[pc + 4];
goto *dynOpcodes[ts + program[pc]];
}

cabpp_0_2:
{
if (g[0].p == g[2].p)
pc += program[pc + 2];
else
pc += program[pc + 4];
goto *dynOpcodes[ts + program[pc]];
}

cabpp_0_3:
{
if (g[0].p == g[3].p)
pc += program[pc + 2];
else
pc += program[pc + 4];
goto *dynOpcodes[ts + program[pc]];
}

cabpp_0_4:
{
if (g[0].p == g[4].p)
pc += program[pc + 2];
else
pc += program[pc + 4];
goto *dynOpcodes[ts + program[pc]];
}

cabpp_0_5:
{
if (g[0].p == g[5].p)
pc += program[pc + 2];
else
pc += program[pc + 4];
goto *dynOpcodes[ts + program[pc]];
}

cabpp_1_0:
{
if (g[1].p == g[0].p)
pc += program[pc + 2];
else
pc += program[pc + 4];
goto *dynOpcodes[ts + program[pc]];
}

cabpp_1_2:
{
if (g[1].p == g[2].p)
pc += program[pc + 2];
else
pc += program[pc + 4];
goto *dynOpcodes[ts + program[pc]];
}

cabpp_1_3:
{
if (g[1].p == g[3].p)
pc += program[pc + 2];
else
pc += program[pc + 4];
goto *dynOpcodes[ts + program[pc]];
}

cabpp_1_4:
{
if (g[1].p == g[4].p)
pc += program[pc + 2];
else
pc += program[pc + 4];
goto *dynOpcodes[ts + program[pc]];
}

cabpp_1_5:
{
if (g[1].p == g[5].p)
pc += program[pc + 2];
else
pc += program[pc + 4];
goto *dynOpcodes[ts + program[pc]];
}

cabpp_2_0:
{
if (g[2].p == g[0].p)
pc += program[pc + 2];
else
pc += program[pc + 4];
goto *dynOpcodes[ts + program[pc]];
}

cabpp_2_1:
{
if (g[2].p == g[1].p)
pc += program[pc + 2];
else
pc += program[pc + 4];
goto *dynOpcodes[ts + program[pc]];
}

cabpp_2_3:
{
if (g[2].p == g[3].p)
pc += program[pc + 2];
else
pc += program[pc + 4];
goto *dynOpcodes[ts + program[pc]];
}

cabpp_2_4:
{
if (g[2].p == g[4].p)
pc += program[pc + 2];
else
pc += program[pc + 4];
goto *dynOpcodes[ts + program[pc]];
}

cabpp_2_5:
{
if (g[2].p == g[5].p)
pc += program[pc + 2];
else
pc += program[pc + 4];
goto *dynOpcodes[ts + program[pc]];
}

cabpp_3_0:
{
if (g[3].p == g[0].p)
pc += program[pc + 2];
else
pc += program[pc + 4];
goto *dynOpcodes[ts + program[pc]];
}

cabpp_3_1:
{
if (g[3].p == g[1].p)
pc += program[pc + 2];
else
pc += program[pc + 4];
goto *dynOpcodes[ts + program[pc]];
}

cabpp_3_2:
{
if (g[3].p == g[2].p)
pc += program[pc + 2];
else
pc += program[pc + 4];
goto *dynOpcodes[ts + program[pc]];
}

cabpp_3_4:
{
if (g[3].p == g[4].p)
pc += program[pc + 2];
else
pc += program[pc + 4];
goto *dynOpcodes[ts + program[pc]];
}

cabpp_3_5:
{
if (g[3].p == g[5].p)
pc += program[pc + 2];
else
pc += program[pc + 4];
goto *dynOpcodes[ts + program[pc]];
}

cabpp_4_0:
{
if (g[4].p == g[0].p)
pc += program[pc + 2];
else
pc += program[pc + 4];
goto *dynOpcodes[ts + program[pc]];
}

cabpp_4_1:
{
if (g[4].p == g[1].p)
pc += program[pc + 2];
else
pc += program[pc + 4];
goto *dynOpcodes[ts + program[pc]];
}

cabpp_4_2:
{
if (g[4].p == g[2].p)
pc += program[pc + 2];
else
pc += program[pc + 4];
goto *dynOpcodes[ts + program[pc]];
}

cabpp_4_3:
{
if (g[4].p == g[3].p)
pc += program[pc + 2];
else
pc += program[pc + 4];
goto *dynOpcodes[ts + program[pc]];
}

cabpp_4_5:
{
if (g[4].p == g[5].p)
pc += program[pc + 2];
else
pc += program[pc + 4];
goto *dynOpcodes[ts + program[pc]];
}

cabpp_5_0:
{
if (g[5].p == g[0].p)
pc += program[pc + 2];
else
pc += program[pc + 4];
goto *dynOpcodes[ts + program[pc]];
}

cabpp_5_1:
{
if (g[5].p == g[1].p)
pc += program[pc + 2];
else
pc += program[pc + 4];
goto *dynOpcodes[ts + program[pc]];
}

cabpp_5_2:
{
if (g[5].p == g[2].p)
pc += program[pc + 2];
else
pc += program[pc + 4];
goto *dynOpcodes[ts + program[pc]];
}

cabpp_5_3:
{
if (g[5].p == g[3].p)
pc += program[pc + 2];
else
pc += program[pc + 4];
goto *dynOpcodes[ts + program[pc]];
}

cabpp_5_4:
{
if (g[5].p == g[4].p)
pc += program[pc + 2];
else
pc += program[pc + 4];
goto *dynOpcodes[ts + program[pc]];
}

cabft_0_1:
{
pc += 5;
goto *dynOpcodes[ts + program[pc]];
}

cabft_0_2:
{
pc += 5;
goto *dynOpcodes[ts + program[pc]];
}

cabft_0_3:
{
pc += 5;
goto *dynOpcodes[ts + program[pc]];
}

cabft_0_4:
{
pc += 5;
goto *dynOpcodes[ts + program[pc]];
}

cabft_0_5:
{
pc += 5;
goto *dynOpcodes[ts + program[pc]];
}

cabft_1_0:
{
pc += 5;
goto *dynOpcodes[ts + program[pc]];
}

cabft_1_2:
{
pc += 5;
goto *dynOpcodes[ts + program[pc]];
}

cabft_1_3:
{
pc += 5;
goto *dynOpcodes[ts + program[pc]];
}

cabft_1_4:
{
pc += 5;
goto *dynOpcodes[ts + program[pc]];
}

cabft_1_5:
{
pc += 5;
goto *dynOpcodes[ts + program[pc]];
}

cabft_2_0:
{
pc += 5;
goto *dynOpcodes[ts + program[pc]];
}

cabft_2_1:
{
pc += 5;
goto *dynOpcodes[ts + program[pc]];
}

cabft_2_3:
{
pc += 5;
goto *dynOpcodes[ts + program[pc]];
}

cabft_2_4:
{
pc += 5;
goto *dynOpcodes[ts + program[pc]];
}

cabft_2_5:
{
pc += 5;
goto *dynOpcodes[ts + program[pc]];
}

cabft_3_0:
{
pc += 5;
goto *dynOpcodes[ts + program[pc]];
}

cabft_3_1:
{
pc += 5;
goto *dynOpcodes[ts + program[pc]];
}

cabft_3_2:
{
pc += 5;
goto *dynOpcodes[ts + program[pc]];
}

cabft_3_4:
{
pc += 5;
goto *dynOpcodes[ts + program[pc]];
}

cabft_3_5:
{
pc += 5;
goto *dynOpcodes[ts + program[pc]];
}

cabft_4_0:
{
pc += 5;
goto *dynOpcodes[ts + program[pc]];
}

cabft_4_1:
{
pc += 5;
goto *dynOpcodes[ts + program[pc]];
}

cabft_4_2:
{
pc += 5;
goto *dynOpcodes[ts + program[pc]];
}

cabft_4_3:
{
pc += 5;
goto *dynOpcodes[ts + program[pc]];
}

cabft_4_5:
{
pc += 5;
goto *dynOpcodes[ts + program[pc]];
}

cabft_5_0:
{
pc += 5;
goto *dynOpcodes[ts + program[pc]];
}

cabft_5_1:
{
pc += 5;
goto *dynOpcodes[ts + program[pc]];
}

cabft_5_2:
{
pc += 5;
goto *dynOpcodes[ts + program[pc]];
}

cabft_5_3:
{
pc += 5;
goto *dynOpcodes[ts + program[pc]];
}

cabft_5_4:
{
pc += 5;
goto *dynOpcodes[ts + program[pc]];
}

cabik_0:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
if (g[0].i < constant)
pc += program[pc + 2];
else if(g[0].i == constant)
pc += program[pc + 3];
else
pc += program[pc + 4];
goto *dynOpcodes[ts + program[pc]];
}

cabik_1:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
if (g[1].i < constant)
pc += program[pc + 2];
else if(g[1].i == constant)
pc += program[pc + 3];
else
pc += program[pc + 4];
goto *dynOpcodes[ts + program[pc]];
}

cabik_2:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
if (g[2].i < constant)
pc += program[pc + 2];
else if(g[2].i == constant)
pc += program[pc + 3];
else
pc += program[pc + 4];
goto *dynOpcodes[ts + program[pc]];
}

cabik_3:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
if (g[3].i < constant)
pc += program[pc + 2];
else if(g[3].i == constant)
pc += program[pc + 3];
else
pc += program[pc + 4];
goto *dynOpcodes[ts + program[pc]];
}

cabik_4:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
if (g[4].i < constant)
pc += program[pc + 2];
else if(g[4].i == constant)
pc += program[pc + 3];
else
pc += program[pc + 4];
goto *dynOpcodes[ts + program[pc]];
}

cabik_5:
{
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
if (g[5].i < constant)
pc += program[pc + 2];
else if(g[5].i == constant)
pc += program[pc + 3];
else
pc += program[pc + 4];
goto *dynOpcodes[ts + program[pc]];
}

cabft_0:
{
pc += 5;
goto *dynOpcodes[ts + program[pc]];
}

cabft_1:
{
pc += 5;
goto *dynOpcodes[ts + program[pc]];
}

cabft_2:
{
pc += 5;
goto *dynOpcodes[ts + program[pc]];
}

cabft_3:
{
pc += 5;
goto *dynOpcodes[ts + program[pc]];
}

cabft_4:
{
pc += 5;
goto *dynOpcodes[ts + program[pc]];
}

cabft_5:
{
pc += 5;
goto *dynOpcodes[ts + program[pc]];
}

cabpN_0:
{
if (g[0].p == NULL)
pc += program[pc + 2];
else
pc += program[pc + 3];
goto *dynOpcodes[ts + program[pc]];
}

cabpN_1:
{
if (g[1].p == NULL)
pc += program[pc + 2];
else
pc += program[pc + 3];
goto *dynOpcodes[ts + program[pc]];
}

cabpN_2:
{
if (g[2].p == NULL)
pc += program[pc + 2];
else
pc += program[pc + 3];
goto *dynOpcodes[ts + program[pc]];
}

cabpN_3:
{
if (g[3].p == NULL)
pc += program[pc + 2];
else
pc += program[pc + 3];
goto *dynOpcodes[ts + program[pc]];
}

cabpN_4:
{
if (g[4].p == NULL)
pc += program[pc + 2];
else
pc += program[pc + 3];
goto *dynOpcodes[ts + program[pc]];
}

cabpN_5:
{
if (g[5].p == NULL)
pc += program[pc + 2];
else
pc += program[pc + 3];
goto *dynOpcodes[ts + program[pc]];
}

call:
{
int64_t newpc = pc + program[pc + 1];
size_t size = sizeof(stackframe) + sizeof(value) * program[newpc];
stackframe *base = (stackframe*)malloc(size);
base->fp = fp; base->pc = pc; base->ts = ts;
SaveRegisters(base->g);
value *newfp = base->l;
memcpy(newfp, fp + program[pc + 2], program[pc + 3]*sizeof(value));
fp = newfp;
pc = newpc + 1;
goto *dynOpcodes[ts + program[pc]];
}

ret:
{
stackframe *cur = (stackframe*)(fp - offsetof(stackframe, fp));
fp = cur->fp; pc = cur->pc; ts = (cur->ts & 0xF000) | (ts & 0x10800);
RestoreRegisters(cur->g);
free(cur);//probably does a thing 
if (fp == NULL)
return 0;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

newp_0:
{
int16_t dsize = program[pc + 1];
int64_t size = *((int64_t*)(&program[pc + dsize]));
object *base = (object*)malloc(sizeof(object) + sizeof(value)*size);
base->sf = MakeSizeAndFlags(size,0);
g[0].tag = 2;
ts |= 0x20 /*100000*/;
g[0].p = base;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

newp_1:
{
int16_t dsize = program[pc + 1];
int64_t size = *((int64_t*)(&program[pc + dsize]));
object *base = (object*)malloc(sizeof(object) + sizeof(value)*size);
base->sf = MakeSizeAndFlags(size,0);
g[1].tag = 2;
ts |= 0x10 /*010000*/;
g[1].p = base;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

newp_2:
{
int16_t dsize = program[pc + 1];
int64_t size = *((int64_t*)(&program[pc + dsize]));
object *base = (object*)malloc(sizeof(object) + sizeof(value)*size);
base->sf = MakeSizeAndFlags(size,0);
g[2].tag = 2;
ts |= 0x8 /*001000*/;
g[2].p = base;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

newp_3:
{
int16_t dsize = program[pc + 1];
int64_t size = *((int64_t*)(&program[pc + dsize]));
object *base = (object*)malloc(sizeof(object) + sizeof(value)*size);
base->sf = MakeSizeAndFlags(size,0);
g[3].tag = 2;
ts |= 0x4 /*000100*/;
g[3].p = base;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

newp_4:
{
int16_t dsize = program[pc + 1];
int64_t size = *((int64_t*)(&program[pc + dsize]));
object *base = (object*)malloc(sizeof(object) + sizeof(value)*size);
base->sf = MakeSizeAndFlags(size,0);
g[4].tag = 2;
ts |= 0x2 /*000010*/;
g[4].p = base;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

newp_5:
{
int16_t dsize = program[pc + 1];
int64_t size = *((int64_t*)(&program[pc + dsize]));
object *base = (object*)malloc(sizeof(object) + sizeof(value)*size);
base->sf = MakeSizeAndFlags(size,0);
g[5].tag = 2;
ts |= 0x1 /*000001*/;
g[5].p = base;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

newpa_0:
{
int16_t dsize = program[pc + 1];
int64_t size = *((int64_t*)(&program[pc + dsize]));
pointeronly *base = (pointeronly*)malloc(sizeof(pointeronly) + sizeof(value)*size);
base->sf = MakeSizeAndFlags(size,0);
g[0].tag = 3;
ts |= 0x20 /*100000*/;
g[0].p = base;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

newpa_1:
{
int16_t dsize = program[pc + 1];
int64_t size = *((int64_t*)(&program[pc + dsize]));
pointeronly *base = (pointeronly*)malloc(sizeof(pointeronly) + sizeof(value)*size);
base->sf = MakeSizeAndFlags(size,0);
g[1].tag = 3;
ts |= 0x10 /*010000*/;
g[1].p = base;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

newpa_2:
{
int16_t dsize = program[pc + 1];
int64_t size = *((int64_t*)(&program[pc + dsize]));
pointeronly *base = (pointeronly*)malloc(sizeof(pointeronly) + sizeof(value)*size);
base->sf = MakeSizeAndFlags(size,0);
g[2].tag = 3;
ts |= 0x8 /*001000*/;
g[2].p = base;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

newpa_3:
{
int16_t dsize = program[pc + 1];
int64_t size = *((int64_t*)(&program[pc + dsize]));
pointeronly *base = (pointeronly*)malloc(sizeof(pointeronly) + sizeof(value)*size);
base->sf = MakeSizeAndFlags(size,0);
g[3].tag = 3;
ts |= 0x4 /*000100*/;
g[3].p = base;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

newpa_4:
{
int16_t dsize = program[pc + 1];
int64_t size = *((int64_t*)(&program[pc + dsize]));
pointeronly *base = (pointeronly*)malloc(sizeof(pointeronly) + sizeof(value)*size);
base->sf = MakeSizeAndFlags(size,0);
g[4].tag = 3;
ts |= 0x2 /*000010*/;
g[4].p = base;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

newpa_5:
{
int16_t dsize = program[pc + 1];
int64_t size = *((int64_t*)(&program[pc + dsize]));
pointeronly *base = (pointeronly*)malloc(sizeof(pointeronly) + sizeof(value)*size);
base->sf = MakeSizeAndFlags(size,0);
g[5].tag = 3;
ts |= 0x1 /*000001*/;
g[5].p = base;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

newa_0:
{
int16_t dsize = program[pc + 1];
int64_t size = *((int64_t*)(&program[pc + dsize]));
buffer *base = (buffer*)malloc(sizeof(buffer) + sizeof(int8_t)*size);
base->sf = MakeSizeAndFlags(size,0);
g[0].tag = 4;
ts |= 0x20 /*100000*/;
g[0].p = base;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

newa_1:
{
int16_t dsize = program[pc + 1];
int64_t size = *((int64_t*)(&program[pc + dsize]));
buffer *base = (buffer*)malloc(sizeof(buffer) + sizeof(int8_t)*size);
base->sf = MakeSizeAndFlags(size,0);
g[1].tag = 4;
ts |= 0x10 /*010000*/;
g[1].p = base;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

newa_2:
{
int16_t dsize = program[pc + 1];
int64_t size = *((int64_t*)(&program[pc + dsize]));
buffer *base = (buffer*)malloc(sizeof(buffer) + sizeof(int8_t)*size);
base->sf = MakeSizeAndFlags(size,0);
g[2].tag = 4;
ts |= 0x8 /*001000*/;
g[2].p = base;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

newa_3:
{
int16_t dsize = program[pc + 1];
int64_t size = *((int64_t*)(&program[pc + dsize]));
buffer *base = (buffer*)malloc(sizeof(buffer) + sizeof(int8_t)*size);
base->sf = MakeSizeAndFlags(size,0);
g[3].tag = 4;
ts |= 0x4 /*000100*/;
g[3].p = base;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

newa_4:
{
int16_t dsize = program[pc + 1];
int64_t size = *((int64_t*)(&program[pc + dsize]));
buffer *base = (buffer*)malloc(sizeof(buffer) + sizeof(int8_t)*size);
base->sf = MakeSizeAndFlags(size,0);
g[4].tag = 4;
ts |= 0x2 /*000010*/;
g[4].p = base;
pc++;
goto *dynOpcodes[ts + program[pc]];
}

newa_5:
{
int16_t dsize = program[pc + 1];
int64_t size = *((int64_t*)(&program[pc + dsize]));
buffer *base = (buffer*)malloc(sizeof(buffer) + sizeof(int8_t)*size);
base->sf = MakeSizeAndFlags(size,0);
g[5].tag = 4;
ts |= 0x1 /*000001*/;
g[5].p = base;
pc++;
goto *dynOpcodes[ts + program[pc]];
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

