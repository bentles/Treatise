addii_0_0:
{
    g[0].i += g[0].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

addii_0_1:
{
    g[0].i += g[1].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

addii_0_2:
{
    g[0].i += g[2].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

addii_0_3:
{
    g[0].i += g[3].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

addii_0_4:
{
    g[0].i += g[4].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

addii_0_5:
{
    g[0].i += g[5].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

addii_1_0:
{
    g[1].i += g[0].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

addii_1_1:
{
    g[1].i += g[1].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

addii_1_2:
{
    g[1].i += g[2].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

addii_1_3:
{
    g[1].i += g[3].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

addii_1_4:
{
    g[1].i += g[4].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

addii_1_5:
{
    g[1].i += g[5].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

addii_2_0:
{
    g[2].i += g[0].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

addii_2_1:
{
    g[2].i += g[1].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

addii_2_2:
{
    g[2].i += g[2].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

addii_2_3:
{
    g[2].i += g[3].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

addii_2_4:
{
    g[2].i += g[4].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

addii_2_5:
{
    g[2].i += g[5].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

addii_3_0:
{
    g[3].i += g[0].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

addii_3_1:
{
    g[3].i += g[1].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

addii_3_2:
{
    g[3].i += g[2].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

addii_3_3:
{
    g[3].i += g[3].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

addii_3_4:
{
    g[3].i += g[4].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

addii_3_5:
{
    g[3].i += g[5].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

addii_4_0:
{
    g[4].i += g[0].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

addii_4_1:
{
    g[4].i += g[1].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

addii_4_2:
{
    g[4].i += g[2].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

addii_4_3:
{
    g[4].i += g[3].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

addii_4_4:
{
    g[4].i += g[4].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

addii_4_5:
{
    g[4].i += g[5].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

addii_5_0:
{
    g[5].i += g[0].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

addii_5_1:
{
    g[5].i += g[1].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

addii_5_2:
{
    g[5].i += g[2].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

addii_5_3:
{
    g[5].i += g[3].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

addii_5_4:
{
    g[5].i += g[4].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

addii_5_5:
{
    g[5].i += g[5].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

addik_0:
{
    int16_t dconstant = program[pc + 1];
    int64_t constant = *((int64_t*)(&program[pc + dconstant]));
    g[0].i += constant;
    pc += 2;
    goto *dynOpcodes[ts + program[pc]];
}
break;

addik_1:
{
    int16_t dconstant = program[pc + 1];
    int64_t constant = *((int64_t*)(&program[pc + dconstant]));
    g[1].i += constant;
    pc += 2;
    goto *dynOpcodes[ts + program[pc]];
}
break;

addik_2:
{
    int16_t dconstant = program[pc + 1];
    int64_t constant = *((int64_t*)(&program[pc + dconstant]));
    g[2].i += constant;
    pc += 2;
    goto *dynOpcodes[ts + program[pc]];
}
break;

addik_3:
{
    int16_t dconstant = program[pc + 1];
    int64_t constant = *((int64_t*)(&program[pc + dconstant]));
    g[3].i += constant;
    pc += 2;
    goto *dynOpcodes[ts + program[pc]];
}
break;

addik_4:
{
    int16_t dconstant = program[pc + 1];
    int64_t constant = *((int64_t*)(&program[pc + dconstant]));
    g[4].i += constant;
    pc += 2;
    goto *dynOpcodes[ts + program[pc]];
}
break;

addik_5:
{
    int16_t dconstant = program[pc + 1];
    int64_t constant = *((int64_t*)(&program[pc + dconstant]));
    g[5].i += constant;
    pc += 2;
    goto *dynOpcodes[ts + program[pc]];
}
break;

subii_0_1:
{
    g[0].i -= g[1].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

subii_0_2:
{
    g[0].i -= g[2].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

subii_0_3:
{
    g[0].i -= g[3].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

subii_0_4:
{
    g[0].i -= g[4].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

subii_0_5:
{
    g[0].i -= g[5].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

subii_1_0:
{
    g[1].i -= g[0].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

subii_1_2:
{
    g[1].i -= g[2].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

subii_1_3:
{
    g[1].i -= g[3].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

subii_1_4:
{
    g[1].i -= g[4].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

subii_1_5:
{
    g[1].i -= g[5].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

subii_2_0:
{
    g[2].i -= g[0].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

subii_2_1:
{
    g[2].i -= g[1].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

subii_2_3:
{
    g[2].i -= g[3].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

subii_2_4:
{
    g[2].i -= g[4].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

subii_2_5:
{
    g[2].i -= g[5].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

subii_3_0:
{
    g[3].i -= g[0].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

subii_3_1:
{
    g[3].i -= g[1].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

subii_3_2:
{
    g[3].i -= g[2].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

subii_3_4:
{
    g[3].i -= g[4].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

subii_3_5:
{
    g[3].i -= g[5].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

subii_4_0:
{
    g[4].i -= g[0].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

subii_4_1:
{
    g[4].i -= g[1].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

subii_4_2:
{
    g[4].i -= g[2].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

subii_4_3:
{
    g[4].i -= g[3].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

subii_4_5:
{
    g[4].i -= g[5].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

subii_5_0:
{
    g[5].i -= g[0].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

subii_5_1:
{
    g[5].i -= g[1].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

subii_5_2:
{
    g[5].i -= g[2].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

subii_5_3:
{
    g[5].i -= g[3].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

subii_5_4:
{
    g[5].i -= g[4].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

subki_0:
{
    int16_t dconstant = program[pc + 1];
    int64_t constant = *((int64_t*)(&program[pc + dconstant]));
    g[0].i = constant - g[0].i;
    pc += 2;
    goto *dynOpcodes[ts + program[pc]];
}
break;

subki_1:
{
    int16_t dconstant = program[pc + 1];
    int64_t constant = *((int64_t*)(&program[pc + dconstant]));
    g[1].i = constant - g[1].i;
    pc += 2;
    goto *dynOpcodes[ts + program[pc]];
}
break;

subki_2:
{
    int16_t dconstant = program[pc + 1];
    int64_t constant = *((int64_t*)(&program[pc + dconstant]));
    g[2].i = constant - g[2].i;
    pc += 2;
    goto *dynOpcodes[ts + program[pc]];
}
break;

subki_3:
{
    int16_t dconstant = program[pc + 1];
    int64_t constant = *((int64_t*)(&program[pc + dconstant]));
    g[3].i = constant - g[3].i;
    pc += 2;
    goto *dynOpcodes[ts + program[pc]];
}
break;

subki_4:
{
    int16_t dconstant = program[pc + 1];
    int64_t constant = *((int64_t*)(&program[pc + dconstant]));
    g[4].i = constant - g[4].i;
    pc += 2;
    goto *dynOpcodes[ts + program[pc]];
}
break;

subki_5:
{
    int16_t dconstant = program[pc + 1];
    int64_t constant = *((int64_t*)(&program[pc + dconstant]));
    g[5].i = constant - g[5].i;
    pc += 2;
    goto *dynOpcodes[ts + program[pc]];
}
break;

orii_0_1:
{
    g[0].i |= g[1].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

orii_0_2:
{
    g[0].i |= g[2].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

orii_0_3:
{
    g[0].i |= g[3].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

orii_0_4:
{
    g[0].i |= g[4].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

orii_0_5:
{
    g[0].i |= g[5].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

orii_1_0:
{
    g[1].i |= g[0].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

orii_1_2:
{
    g[1].i |= g[2].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

orii_1_3:
{
    g[1].i |= g[3].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

orii_1_4:
{
    g[1].i |= g[4].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

orii_1_5:
{
    g[1].i |= g[5].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

orii_2_0:
{
    g[2].i |= g[0].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

orii_2_1:
{
    g[2].i |= g[1].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

orii_2_3:
{
    g[2].i |= g[3].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

orii_2_4:
{
    g[2].i |= g[4].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

orii_2_5:
{
    g[2].i |= g[5].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

orii_3_0:
{
    g[3].i |= g[0].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

orii_3_1:
{
    g[3].i |= g[1].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

orii_3_2:
{
    g[3].i |= g[2].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

orii_3_4:
{
    g[3].i |= g[4].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

orii_3_5:
{
    g[3].i |= g[5].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

orii_4_0:
{
    g[4].i |= g[0].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

orii_4_1:
{
    g[4].i |= g[1].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

orii_4_2:
{
    g[4].i |= g[2].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

orii_4_3:
{
    g[4].i |= g[3].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

orii_4_5:
{
    g[4].i |= g[5].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

orii_5_0:
{
    g[5].i |= g[0].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

orii_5_1:
{
    g[5].i |= g[1].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

orii_5_2:
{
    g[5].i |= g[2].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

orii_5_3:
{
    g[5].i |= g[3].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

orii_5_4:
{
    g[5].i |= g[4].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

orki_0:
{
    int16_t dconstant = program[pc + 1];
    int64_t constant = *((int64_t*)(&program[pc + dconstant]));
    g[0].i |= constant
        pc += 2;
    goto *dynOpcodes[ts + program[pc]];
}
break;

orki_1:
{
    int16_t dconstant = program[pc + 1];
    int64_t constant = *((int64_t*)(&program[pc + dconstant]));
    g[1].i |= constant
        pc += 2;
    goto *dynOpcodes[ts + program[pc]];
}
break;

orki_2:
{
    int16_t dconstant = program[pc + 1];
    int64_t constant = *((int64_t*)(&program[pc + dconstant]));
    g[2].i |= constant
        pc += 2;
    goto *dynOpcodes[ts + program[pc]];
}
break;

orki_3:
{
    int16_t dconstant = program[pc + 1];
    int64_t constant = *((int64_t*)(&program[pc + dconstant]));
    g[3].i |= constant
        pc += 2;
    goto *dynOpcodes[ts + program[pc]];
}
break;

orki_4:
{
    int16_t dconstant = program[pc + 1];
    int64_t constant = *((int64_t*)(&program[pc + dconstant]));
    g[4].i |= constant
        pc += 2;
    goto *dynOpcodes[ts + program[pc]];
}
break;

orki_5:
{
    int16_t dconstant = program[pc + 1];
    int64_t constant = *((int64_t*)(&program[pc + dconstant]));
    g[5].i |= constant
        pc += 2;
    goto *dynOpcodes[ts + program[pc]];
}
break;

xorii_0_1:
{
    g[0].i ^= g[1].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

xorii_0_2:
{
    g[0].i ^= g[2].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

xorii_0_3:
{
    g[0].i ^= g[3].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

xorii_0_4:
{
    g[0].i ^= g[4].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

xorii_0_5:
{
    g[0].i ^= g[5].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

xorii_1_0:
{
    g[1].i ^= g[0].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

xorii_1_2:
{
    g[1].i ^= g[2].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

xorii_1_3:
{
    g[1].i ^= g[3].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

xorii_1_4:
{
    g[1].i ^= g[4].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

xorii_1_5:
{
    g[1].i ^= g[5].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

xorii_2_0:
{
    g[2].i ^= g[0].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

xorii_2_1:
{
    g[2].i ^= g[1].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

xorii_2_3:
{
    g[2].i ^= g[3].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

xorii_2_4:
{
    g[2].i ^= g[4].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

xorii_2_5:
{
    g[2].i ^= g[5].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

xorii_3_0:
{
    g[3].i ^= g[0].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

xorii_3_1:
{
    g[3].i ^= g[1].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

xorii_3_2:
{
    g[3].i ^= g[2].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

xorii_3_4:
{
    g[3].i ^= g[4].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

xorii_3_5:
{
    g[3].i ^= g[5].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

xorii_4_0:
{
    g[4].i ^= g[0].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

xorii_4_1:
{
    g[4].i ^= g[1].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

xorii_4_2:
{
    g[4].i ^= g[2].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

xorii_4_3:
{
    g[4].i ^= g[3].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

xorii_4_5:
{
    g[4].i ^= g[5].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

xorii_5_0:
{
    g[5].i ^= g[0].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

xorii_5_1:
{
    g[5].i ^= g[1].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

xorii_5_2:
{
    g[5].i ^= g[2].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

xorii_5_3:
{
    g[5].i ^= g[3].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

xorii_5_4:
{
    g[5].i ^= g[4].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

shlii_0_1:
{
    g[0].i <<= g[1].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

shlii_0_2:
{
    g[0].i <<= g[2].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

shlii_0_3:
{
    g[0].i <<= g[3].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

shlii_0_4:
{
    g[0].i <<= g[4].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

shlii_0_5:
{
    g[0].i <<= g[5].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

shlii_1_0:
{
    g[1].i <<= g[0].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

shlii_1_2:
{
    g[1].i <<= g[2].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

shlii_1_3:
{
    g[1].i <<= g[3].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

shlii_1_4:
{
    g[1].i <<= g[4].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

shlii_1_5:
{
    g[1].i <<= g[5].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

shlii_2_0:
{
    g[2].i <<= g[0].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

shlii_2_1:
{
    g[2].i <<= g[1].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

shlii_2_3:
{
    g[2].i <<= g[3].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

shlii_2_4:
{
    g[2].i <<= g[4].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

shlii_2_5:
{
    g[2].i <<= g[5].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

shlii_3_0:
{
    g[3].i <<= g[0].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

shlii_3_1:
{
    g[3].i <<= g[1].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

shlii_3_2:
{
    g[3].i <<= g[2].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

shlii_3_4:
{
    g[3].i <<= g[4].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

shlii_3_5:
{
    g[3].i <<= g[5].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

shlii_4_0:
{
    g[4].i <<= g[0].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

shlii_4_1:
{
    g[4].i <<= g[1].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

shlii_4_2:
{
    g[4].i <<= g[2].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

shlii_4_3:
{
    g[4].i <<= g[3].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

shlii_4_5:
{
    g[4].i <<= g[5].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

shlii_5_0:
{
    g[5].i <<= g[0].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

shlii_5_1:
{
    g[5].i <<= g[1].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

shlii_5_2:
{
    g[5].i <<= g[2].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

shlii_5_3:
{
    g[5].i <<= g[3].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

shlii_5_4:
{
    g[5].i <<= g[4].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

shlik_0:
{
    int16_t dconstant = program[pc + 1];
    int64_t constant = *((int64_t*)(&program[pc + dconstant]));
    g[0].i <<= constantpc += 2;
    goto *dynOpcodes[ts + program[pc]];
}
break;

shlik_1:
{
    int16_t dconstant = program[pc + 1];
    int64_t constant = *((int64_t*)(&program[pc + dconstant]));
    g[1].i <<= constantpc += 2;
    goto *dynOpcodes[ts + program[pc]];
}
break;

shlik_2:
{
    int16_t dconstant = program[pc + 1];
    int64_t constant = *((int64_t*)(&program[pc + dconstant]));
    g[2].i <<= constantpc += 2;
    goto *dynOpcodes[ts + program[pc]];
}
break;

shlik_3:
{
    int16_t dconstant = program[pc + 1];
    int64_t constant = *((int64_t*)(&program[pc + dconstant]));
    g[3].i <<= constantpc += 2;
    goto *dynOpcodes[ts + program[pc]];
}
break;

shlik_4:
{
    int16_t dconstant = program[pc + 1];
    int64_t constant = *((int64_t*)(&program[pc + dconstant]));
    g[4].i <<= constantpc += 2;
    goto *dynOpcodes[ts + program[pc]];
}
break;

shlik_5:
{
    int16_t dconstant = program[pc + 1];
    int64_t constant = *((int64_t*)(&program[pc + dconstant]));
    g[5].i <<= constantpc += 2;
    goto *dynOpcodes[ts + program[pc]];
}
break;

shlki_0:
{
    int16_t dconstant = program[pc + 1];
    int64_t constant = *((int64_t*)(&program[pc + dconstant]));
    g[0].i = constant << g[0].ipc += 2;
    goto *dynOpcodes[ts + program[pc]];
}
break;

shlki_1:
{
    int16_t dconstant = program[pc + 1];
    int64_t constant = *((int64_t*)(&program[pc + dconstant]));
    g[1].i = constant << g[1].ipc += 2;
    goto *dynOpcodes[ts + program[pc]];
}
break;

shlki_2:
{
    int16_t dconstant = program[pc + 1];
    int64_t constant = *((int64_t*)(&program[pc + dconstant]));
    g[2].i = constant << g[2].ipc += 2;
    goto *dynOpcodes[ts + program[pc]];
}
break;

shlki_3:
{
    int16_t dconstant = program[pc + 1];
    int64_t constant = *((int64_t*)(&program[pc + dconstant]));
    g[3].i = constant << g[3].ipc += 2;
    goto *dynOpcodes[ts + program[pc]];
}
break;

shlki_4:
{
    int16_t dconstant = program[pc + 1];
    int64_t constant = *((int64_t*)(&program[pc + dconstant]));
    g[4].i = constant << g[4].ipc += 2;
    goto *dynOpcodes[ts + program[pc]];
}
break;

shlki_5:
{
    int16_t dconstant = program[pc + 1];
    int64_t constant = *((int64_t*)(&program[pc + dconstant]));
    g[5].i = constant << g[5].ipc += 2;
    goto *dynOpcodes[ts + program[pc]];
}
break;

shrii_0_1:
{
    g[0].i = (uint64_t)g[0].i >> g[1].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

shrii_0_2:
{
    g[0].i = (uint64_t)g[0].i >> g[2].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

shrii_0_3:
{
    g[0].i = (uint64_t)g[0].i >> g[3].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

shrii_0_4:
{
    g[0].i = (uint64_t)g[0].i >> g[4].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

shrii_0_5:
{
    g[0].i = (uint64_t)g[0].i >> g[5].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

shrii_1_0:
{
    g[1].i = (uint64_t)g[1].i >> g[0].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

shrii_1_2:
{
    g[1].i = (uint64_t)g[1].i >> g[2].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

shrii_1_3:
{
    g[1].i = (uint64_t)g[1].i >> g[3].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

shrii_1_4:
{
    g[1].i = (uint64_t)g[1].i >> g[4].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

shrii_1_5:
{
    g[1].i = (uint64_t)g[1].i >> g[5].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

shrii_2_0:
{
    g[2].i = (uint64_t)g[2].i >> g[0].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

shrii_2_1:
{
    g[2].i = (uint64_t)g[2].i >> g[1].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

shrii_2_3:
{
    g[2].i = (uint64_t)g[2].i >> g[3].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

shrii_2_4:
{
    g[2].i = (uint64_t)g[2].i >> g[4].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

shrii_2_5:
{
    g[2].i = (uint64_t)g[2].i >> g[5].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

shrii_3_0:
{
    g[3].i = (uint64_t)g[3].i >> g[0].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

shrii_3_1:
{
    g[3].i = (uint64_t)g[3].i >> g[1].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

shrii_3_2:
{
    g[3].i = (uint64_t)g[3].i >> g[2].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

shrii_3_4:
{
    g[3].i = (uint64_t)g[3].i >> g[4].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

shrii_3_5:
{
    g[3].i = (uint64_t)g[3].i >> g[5].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

shrii_4_0:
{
    g[4].i = (uint64_t)g[4].i >> g[0].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

shrii_4_1:
{
    g[4].i = (uint64_t)g[4].i >> g[1].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

shrii_4_2:
{
    g[4].i = (uint64_t)g[4].i >> g[2].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

shrii_4_3:
{
    g[4].i = (uint64_t)g[4].i >> g[3].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

shrii_4_5:
{
    g[4].i = (uint64_t)g[4].i >> g[5].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

shrii_5_0:
{
    g[5].i = (uint64_t)g[5].i >> g[0].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

shrii_5_1:
{
    g[5].i = (uint64_t)g[5].i >> g[1].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

shrii_5_2:
{
    g[5].i = (uint64_t)g[5].i >> g[2].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

shrii_5_3:
{
    g[5].i = (uint64_t)g[5].i >> g[3].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

shrii_5_4:
{
    g[5].i = (uint64_t)g[5].i >> g[4].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

shrik_0:
{
    int16_t dconstant = program[pc + 1];
    int64_t constant = *((int64_t*)(&program[pc + dconstant]));
    g[0].i = (uint64_t)g[0].i >> constant;
    pc += 2;
    goto *dynOpcodes[ts + program[pc]];
}
break;

shrik_1:
{
    int16_t dconstant = program[pc + 1];
    int64_t constant = *((int64_t*)(&program[pc + dconstant]));
    g[1].i = (uint64_t)g[1].i >> constant;
    pc += 2;
    goto *dynOpcodes[ts + program[pc]];
}
break;

shrik_2:
{
    int16_t dconstant = program[pc + 1];
    int64_t constant = *((int64_t*)(&program[pc + dconstant]));
    g[2].i = (uint64_t)g[2].i >> constant;
    pc += 2;
    goto *dynOpcodes[ts + program[pc]];
}
break;

shrik_3:
{
    int16_t dconstant = program[pc + 1];
    int64_t constant = *((int64_t*)(&program[pc + dconstant]));
    g[3].i = (uint64_t)g[3].i >> constant;
    pc += 2;
    goto *dynOpcodes[ts + program[pc]];
}
break;

shrik_4:
{
    int16_t dconstant = program[pc + 1];
    int64_t constant = *((int64_t*)(&program[pc + dconstant]));
    g[4].i = (uint64_t)g[4].i >> constant;
    pc += 2;
    goto *dynOpcodes[ts + program[pc]];
}
break;

shrik_5:
{
    int16_t dconstant = program[pc + 1];
    int64_t constant = *((int64_t*)(&program[pc + dconstant]));
    g[5].i = (uint64_t)g[5].i >> constant;
    pc += 2;
    goto *dynOpcodes[ts + program[pc]];
}
break;

shrki_0:
{
    int16_t dconstant = program[pc + 1];
    int64_t constant = *((int64_t*)(&program[pc + dconstant]));
    g[0].i = (uint64_t)constant >> /*<1>*/.i;
    pc += 2;
    goto *dynOpcodes[ts + program[pc]];
}
break;

shrki_1:
{
    int16_t dconstant = program[pc + 1];
    int64_t constant = *((int64_t*)(&program[pc + dconstant]));
    g[1].i = (uint64_t)constant >> /*<1>*/.i;
    pc += 2;
    goto *dynOpcodes[ts + program[pc]];
}
break;

shrki_2:
{
    int16_t dconstant = program[pc + 1];
    int64_t constant = *((int64_t*)(&program[pc + dconstant]));
    g[2].i = (uint64_t)constant >> /*<1>*/.i;
    pc += 2;
    goto *dynOpcodes[ts + program[pc]];
}
break;

shrki_3:
{
    int16_t dconstant = program[pc + 1];
    int64_t constant = *((int64_t*)(&program[pc + dconstant]));
    g[3].i = (uint64_t)constant >> /*<1>*/.i;
    pc += 2;
    goto *dynOpcodes[ts + program[pc]];
}
break;

shrki_4:
{
    int16_t dconstant = program[pc + 1];
    int64_t constant = *((int64_t*)(&program[pc + dconstant]));
    g[4].i = (uint64_t)constant >> /*<1>*/.i;
    pc += 2;
    goto *dynOpcodes[ts + program[pc]];
}
break;

shrki_5:
{
    int16_t dconstant = program[pc + 1];
    int64_t constant = *((int64_t*)(&program[pc + dconstant]));
    g[5].i = (uint64_t)constant >> /*<1>*/.i;
    pc += 2;
    goto *dynOpcodes[ts + program[pc]];
}
break;

sarii_0_1:
{
    g[0].i >>= g[1].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

sarii_0_2:
{
    g[0].i >>= g[2].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

sarii_0_3:
{
    g[0].i >>= g[3].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

sarii_0_4:
{
    g[0].i >>= g[4].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

sarii_0_5:
{
    g[0].i >>= g[5].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

sarii_1_0:
{
    g[1].i >>= g[0].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

sarii_1_2:
{
    g[1].i >>= g[2].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

sarii_1_3:
{
    g[1].i >>= g[3].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

sarii_1_4:
{
    g[1].i >>= g[4].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

sarii_1_5:
{
    g[1].i >>= g[5].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

sarii_2_0:
{
    g[2].i >>= g[0].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

sarii_2_1:
{
    g[2].i >>= g[1].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

sarii_2_3:
{
    g[2].i >>= g[3].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

sarii_2_4:
{
    g[2].i >>= g[4].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

sarii_2_5:
{
    g[2].i >>= g[5].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

sarii_3_0:
{
    g[3].i >>= g[0].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

sarii_3_1:
{
    g[3].i >>= g[1].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

sarii_3_2:
{
    g[3].i >>= g[2].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

sarii_3_4:
{
    g[3].i >>= g[4].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

sarii_3_5:
{
    g[3].i >>= g[5].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

sarii_4_0:
{
    g[4].i >>= g[0].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

sarii_4_1:
{
    g[4].i >>= g[1].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

sarii_4_2:
{
    g[4].i >>= g[2].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

sarii_4_3:
{
    g[4].i >>= g[3].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

sarii_4_5:
{
    g[4].i >>= g[5].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

sarii_5_0:
{
    g[5].i >>= g[0].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

sarii_5_1:
{
    g[5].i >>= g[1].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

sarii_5_2:
{
    g[5].i >>= g[2].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

sarii_5_3:
{
    g[5].i >>= g[3].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

sarii_5_4:
{
    g[5].i >>= g[4].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

sarik_0:
{
    int16_t dconstant = program[pc + 1];
    int64_t constant = *((int64_t*)(&program[pc + dconstant]));
    g[0].i >>= constantpc += 2;
    goto *dynOpcodes[ts + program[pc]];
}
break;

sarik_1:
{
    int16_t dconstant = program[pc + 1];
    int64_t constant = *((int64_t*)(&program[pc + dconstant]));
    g[1].i >>= constantpc += 2;
    goto *dynOpcodes[ts + program[pc]];
}
break;

sarik_2:
{
    int16_t dconstant = program[pc + 1];
    int64_t constant = *((int64_t*)(&program[pc + dconstant]));
    g[2].i >>= constantpc += 2;
    goto *dynOpcodes[ts + program[pc]];
}
break;

sarik_3:
{
    int16_t dconstant = program[pc + 1];
    int64_t constant = *((int64_t*)(&program[pc + dconstant]));
    g[3].i >>= constantpc += 2;
    goto *dynOpcodes[ts + program[pc]];
}
break;

sarik_4:
{
    int16_t dconstant = program[pc + 1];
    int64_t constant = *((int64_t*)(&program[pc + dconstant]));
    g[4].i >>= constantpc += 2;
    goto *dynOpcodes[ts + program[pc]];
}
break;

sarik_5:
{
    int16_t dconstant = program[pc + 1];
    int64_t constant = *((int64_t*)(&program[pc + dconstant]));
    g[5].i >>= constantpc += 2;
    goto *dynOpcodes[ts + program[pc]];
}
break;

sarik_0:
{
    int16_t dconstant = program[pc + 1];
    int64_t constant = *((int64_t*)(&program[pc + dconstant]));
    g[0].i = constant >> g[0].ipc += 2;
    goto *dynOpcodes[ts + program[pc]];
}
break;

sarik_1:
{
    int16_t dconstant = program[pc + 1];
    int64_t constant = *((int64_t*)(&program[pc + dconstant]));
    g[1].i = constant >> g[1].ipc += 2;
    goto *dynOpcodes[ts + program[pc]];
}
break;

sarik_2:
{
    int16_t dconstant = program[pc + 1];
    int64_t constant = *((int64_t*)(&program[pc + dconstant]));
    g[2].i = constant >> g[2].ipc += 2;
    goto *dynOpcodes[ts + program[pc]];
}
break;

sarik_3:
{
    int16_t dconstant = program[pc + 1];
    int64_t constant = *((int64_t*)(&program[pc + dconstant]));
    g[3].i = constant >> g[3].ipc += 2;
    goto *dynOpcodes[ts + program[pc]];
}
break;

sarik_4:
{
    int16_t dconstant = program[pc + 1];
    int64_t constant = *((int64_t*)(&program[pc + dconstant]));
    g[4].i = constant >> g[4].ipc += 2;
    goto *dynOpcodes[ts + program[pc]];
}
break;

sarik_5:
{
    int16_t dconstant = program[pc + 1];
    int64_t constant = *((int64_t*)(&program[pc + dconstant]));
    g[5].i = constant >> g[5].ipc += 2;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movii_0_1:
{
    g[0].i = g[1].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movii_0_2:
{
    g[0].i = g[2].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movii_0_3:
{
    g[0].i = g[3].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movii_0_4:
{
    g[0].i = g[4].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movii_0_5:
{
    g[0].i = g[5].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movii_1_0:
{
    g[1].i = g[0].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movii_1_2:
{
    g[1].i = g[2].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movii_1_3:
{
    g[1].i = g[3].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movii_1_4:
{
    g[1].i = g[4].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movii_1_5:
{
    g[1].i = g[5].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movii_2_0:
{
    g[2].i = g[0].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movii_2_1:
{
    g[2].i = g[1].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movii_2_3:
{
    g[2].i = g[3].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movii_2_4:
{
    g[2].i = g[4].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movii_2_5:
{
    g[2].i = g[5].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movii_3_0:
{
    g[3].i = g[0].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movii_3_1:
{
    g[3].i = g[1].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movii_3_2:
{
    g[3].i = g[2].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movii_3_4:
{
    g[3].i = g[4].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movii_3_5:
{
    g[3].i = g[5].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movii_4_0:
{
    g[4].i = g[0].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movii_4_1:
{
    g[4].i = g[1].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movii_4_2:
{
    g[4].i = g[2].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movii_4_3:
{
    g[4].i = g[3].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movii_4_5:
{
    g[4].i = g[5].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movii_5_0:
{
    g[5].i = g[0].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movii_5_1:
{
    g[5].i = g[1].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movii_5_2:
{
    g[5].i = g[2].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movii_5_3:
{
    g[5].i = g[3].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movii_5_4:
{
    g[5].i = g[4].i;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movpp_0_1:
{
    g[0].p = g[1].p;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movpp_0_2:
{
    g[0].p = g[2].p;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movpp_0_3:
{
    g[0].p = g[3].p;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movpp_0_4:
{
    g[0].p = g[4].p;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movpp_0_5:
{
    g[0].p = g[5].p;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movpp_1_0:
{
    g[1].p = g[0].p;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movpp_1_2:
{
    g[1].p = g[2].p;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movpp_1_3:
{
    g[1].p = g[3].p;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movpp_1_4:
{
    g[1].p = g[4].p;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movpp_1_5:
{
    g[1].p = g[5].p;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movpp_2_0:
{
    g[2].p = g[0].p;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movpp_2_1:
{
    g[2].p = g[1].p;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movpp_2_3:
{
    g[2].p = g[3].p;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movpp_2_4:
{
    g[2].p = g[4].p;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movpp_2_5:
{
    g[2].p = g[5].p;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movpp_3_0:
{
    g[3].p = g[0].p;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movpp_3_1:
{
    g[3].p = g[1].p;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movpp_3_2:
{
    g[3].p = g[2].p;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movpp_3_4:
{
    g[3].p = g[4].p;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movpp_3_5:
{
    g[3].p = g[5].p;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movpp_4_0:
{
    g[4].p = g[0].p;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movpp_4_1:
{
    g[4].p = g[1].p;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movpp_4_2:
{
    g[4].p = g[2].p;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movpp_4_3:
{
    g[4].p = g[3].p;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movpp_4_5:
{
    g[4].p = g[5].p;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movpp_5_0:
{
    g[5].p = g[0].p;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movpp_5_1:
{
    g[5].p = g[1].p;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movpp_5_2:
{
    g[5].p = g[2].p;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movpp_5_3:
{
    g[5].p = g[3].p;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movpp_5_4:
{
    g[5].p = g[4].p;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movip_0_1:
{
    g[0].p = g[1].p;
    g[0].tag = 1;
    ts |= 0x10000; //0b10000000000000000
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movip_0_2:
{
    g[0].p = g[2].p;
    g[0].tag = 1;
    ts |= 0x10000; //0b10000000000000000
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movip_0_3:
{
    g[0].p = g[3].p;
    g[0].tag = 1;
    ts |= 0x10000; //0b10000000000000000
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movip_0_4:
{
    g[0].p = g[4].p;
    g[0].tag = 1;
    ts |= 0x10000; //0b10000000000000000
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movip_0_5:
{
    g[0].p = g[5].p;
    g[0].tag = 1;
    ts |= 0x10000; //0b10000000000000000
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movip_1_0:
{
    g[1].p = g[0].p;
    g[1].tag = 1;
    ts |= 0x8000; //0b01000000000000000
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movip_1_2:
{
    g[1].p = g[2].p;
    g[1].tag = 1;
    ts |= 0x8000; //0b01000000000000000
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movip_1_3:
{
    g[1].p = g[3].p;
    g[1].tag = 1;
    ts |= 0x8000; //0b01000000000000000
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movip_1_4:
{
    g[1].p = g[4].p;
    g[1].tag = 1;
    ts |= 0x8000; //0b01000000000000000
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movip_1_5:
{
    g[1].p = g[5].p;
    g[1].tag = 1;
    ts |= 0x8000; //0b01000000000000000
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movip_2_0:
{
    g[2].p = g[0].p;
    g[2].tag = 1;
    ts |= 0x4000; //0b00100000000000000
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movip_2_1:
{
    g[2].p = g[1].p;
    g[2].tag = 1;
    ts |= 0x4000; //0b00100000000000000
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movip_2_3:
{
    g[2].p = g[3].p;
    g[2].tag = 1;
    ts |= 0x4000; //0b00100000000000000
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movip_2_4:
{
    g[2].p = g[4].p;
    g[2].tag = 1;
    ts |= 0x4000; //0b00100000000000000
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movip_2_5:
{
    g[2].p = g[5].p;
    g[2].tag = 1;
    ts |= 0x4000; //0b00100000000000000
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movip_3_0:
{
    g[3].p = g[0].p;
    g[3].tag = 1;
    ts |= 0x2000; //0b00010000000000000
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movip_3_1:
{
    g[3].p = g[1].p;
    g[3].tag = 1;
    ts |= 0x2000; //0b00010000000000000
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movip_3_2:
{
    g[3].p = g[2].p;
    g[3].tag = 1;
    ts |= 0x2000; //0b00010000000000000
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movip_3_4:
{
    g[3].p = g[4].p;
    g[3].tag = 1;
    ts |= 0x2000; //0b00010000000000000
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movip_3_5:
{
    g[3].p = g[5].p;
    g[3].tag = 1;
    ts |= 0x2000; //0b00010000000000000
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movip_4_0:
{
    g[4].p = g[0].p;
    g[4].tag = 1;
    ts |= 0x1000; //0b00001000000000000
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movip_4_1:
{
    g[4].p = g[1].p;
    g[4].tag = 1;
    ts |= 0x1000; //0b00001000000000000
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movip_4_2:
{
    g[4].p = g[2].p;
    g[4].tag = 1;
    ts |= 0x1000; //0b00001000000000000
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movip_4_3:
{
    g[4].p = g[3].p;
    g[4].tag = 1;
    ts |= 0x1000; //0b00001000000000000
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movip_4_5:
{
    g[4].p = g[5].p;
    g[4].tag = 1;
    ts |= 0x1000; //0b00001000000000000
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movip_5_0:
{
    g[5].p = g[0].p;
    g[5].tag = 1;
    ts |= 0x800; //0b00000100000000000
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movip_5_1:
{
    g[5].p = g[1].p;
    g[5].tag = 1;
    ts |= 0x800; //0b00000100000000000
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movip_5_2:
{
    g[5].p = g[2].p;
    g[5].tag = 1;
    ts |= 0x800; //0b00000100000000000
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movip_5_3:
{
    g[5].p = g[3].p;
    g[5].tag = 1;
    ts |= 0x800; //0b00000100000000000
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movip_5_4:
{
    g[5].p = g[4].p;
    g[5].tag = 1;
    ts |= 0x800; //0b00000100000000000
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movpi_0_1:
{
    g[0].i = g[1].i;
    g[0].tag = 0;
    ts &= 0xf800; //0b01111100000000000
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movpi_0_2:
{
    g[0].i = g[2].i;
    g[0].tag = 0;
    ts &= 0xf800; //0b01111100000000000
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movpi_0_3:
{
    g[0].i = g[3].i;
    g[0].tag = 0;
    ts &= 0xf800; //0b01111100000000000
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movpi_0_4:
{
    g[0].i = g[4].i;
    g[0].tag = 0;
    ts &= 0xf800; //0b01111100000000000
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movpi_0_5:
{
    g[0].i = g[5].i;
    g[0].tag = 0;
    ts &= 0xf800; //0b01111100000000000
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movpi_1_0:
{
    g[1].i = g[0].i;
    g[1].tag = 0;
    ts &= 0x17800; //0b10111100000000000
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movpi_1_2:
{
    g[1].i = g[2].i;
    g[1].tag = 0;
    ts &= 0x17800; //0b10111100000000000
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movpi_1_3:
{
    g[1].i = g[3].i;
    g[1].tag = 0;
    ts &= 0x17800; //0b10111100000000000
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movpi_1_4:
{
    g[1].i = g[4].i;
    g[1].tag = 0;
    ts &= 0x17800; //0b10111100000000000
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movpi_1_5:
{
    g[1].i = g[5].i;
    g[1].tag = 0;
    ts &= 0x17800; //0b10111100000000000
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movpi_2_0:
{
    g[2].i = g[0].i;
    g[2].tag = 0;
    ts &= 0x1b800; //0b11011100000000000
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movpi_2_1:
{
    g[2].i = g[1].i;
    g[2].tag = 0;
    ts &= 0x1b800; //0b11011100000000000
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movpi_2_3:
{
    g[2].i = g[3].i;
    g[2].tag = 0;
    ts &= 0x1b800; //0b11011100000000000
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movpi_2_4:
{
    g[2].i = g[4].i;
    g[2].tag = 0;
    ts &= 0x1b800; //0b11011100000000000
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movpi_2_5:
{
    g[2].i = g[5].i;
    g[2].tag = 0;
    ts &= 0x1b800; //0b11011100000000000
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movpi_3_0:
{
    g[3].i = g[0].i;
    g[3].tag = 0;
    ts &= 0x1d800; //0b11101100000000000
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movpi_3_1:
{
    g[3].i = g[1].i;
    g[3].tag = 0;
    ts &= 0x1d800; //0b11101100000000000
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movpi_3_2:
{
    g[3].i = g[2].i;
    g[3].tag = 0;
    ts &= 0x1d800; //0b11101100000000000
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movpi_3_4:
{
    g[3].i = g[4].i;
    g[3].tag = 0;
    ts &= 0x1d800; //0b11101100000000000
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movpi_3_5:
{
    g[3].i = g[5].i;
    g[3].tag = 0;
    ts &= 0x1d800; //0b11101100000000000
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movpi_4_0:
{
    g[4].i = g[0].i;
    g[4].tag = 0;
    ts &= 0x1e800; //0b11110100000000000
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movpi_4_1:
{
    g[4].i = g[1].i;
    g[4].tag = 0;
    ts &= 0x1e800; //0b11110100000000000
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movpi_4_2:
{
    g[4].i = g[2].i;
    g[4].tag = 0;
    ts &= 0x1e800; //0b11110100000000000
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movpi_4_3:
{
    g[4].i = g[3].i;
    g[4].tag = 0;
    ts &= 0x1e800; //0b11110100000000000
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movpi_4_5:
{
    g[4].i = g[5].i;
    g[4].tag = 0;
    ts &= 0x1e800; //0b11110100000000000
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movpi_5_0:
{
    g[5].i = g[0].i;
    g[5].tag = 0;
    ts &= 0x1f000; //0b11111000000000000
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movpi_5_1:
{
    g[5].i = g[1].i;
    g[5].tag = 0;
    ts &= 0x1f000; //0b11111000000000000
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movpi_5_2:
{
    g[5].i = g[2].i;
    g[5].tag = 0;
    ts &= 0x1f000; //0b11111000000000000
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movpi_5_3:
{
    g[5].i = g[3].i;
    g[5].tag = 0;
    ts &= 0x1f000; //0b11111000000000000
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movpi_5_4:
{
    g[5].i = g[4].i;
    g[5].tag = 0;
    ts &= 0x1f000; //0b11111000000000000
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movik_0:
{
    int16_t dconstant = program[pc + 1];
    int64_t constant = *((int64_t*)(&program[pc + dconstant]));
    g[0].i = constant;
    pc += 2;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movik_1:
{
    int16_t dconstant = program[pc + 1];
    int64_t constant = *((int64_t*)(&program[pc + dconstant]));
    g[1].i = constant;
    pc += 2;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movik_2:
{
    int16_t dconstant = program[pc + 1];
    int64_t constant = *((int64_t*)(&program[pc + dconstant]));
    g[2].i = constant;
    pc += 2;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movik_3:
{
    int16_t dconstant = program[pc + 1];
    int64_t constant = *((int64_t*)(&program[pc + dconstant]));
    g[3].i = constant;
    pc += 2;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movik_4:
{
    int16_t dconstant = program[pc + 1];
    int64_t constant = *((int64_t*)(&program[pc + dconstant]));
    g[4].i = constant;
    pc += 2;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movik_5:
{
    int16_t dconstant = program[pc + 1];
    int64_t constant = *((int64_t*)(&program[pc + dconstant]));
    g[5].i = constant;
    pc += 2;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movpk_0:
{
    int16_t dconstant = program[pc + 1];
    int64_t constant = *((int64_t*)(&program[pc + dconstant]));
    g[0].i = constant;
    g[0].tag = 0;
    ts &= 0xf800; //0b01111100000000000
    pc += 2;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movpk_1:
{
    int16_t dconstant = program[pc + 1];
    int64_t constant = *((int64_t*)(&program[pc + dconstant]));
    g[1].i = constant;
    g[1].tag = 0;
    ts &= 0x17800; //0b10111100000000000
    pc += 2;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movpk_2:
{
    int16_t dconstant = program[pc + 1];
    int64_t constant = *((int64_t*)(&program[pc + dconstant]));
    g[2].i = constant;
    g[2].tag = 0;
    ts &= 0x1b800; //0b11011100000000000
    pc += 2;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movpk_3:
{
    int16_t dconstant = program[pc + 1];
    int64_t constant = *((int64_t*)(&program[pc + dconstant]));
    g[3].i = constant;
    g[3].tag = 0;
    ts &= 0x1d800; //0b11101100000000000
    pc += 2;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movpk_4:
{
    int16_t dconstant = program[pc + 1];
    int64_t constant = *((int64_t*)(&program[pc + dconstant]));
    g[4].i = constant;
    g[4].tag = 0;
    ts &= 0x1e800; //0b11110100000000000
    pc += 2;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movpk_5:
{
    int16_t dconstant = program[pc + 1];
    int64_t constant = *((int64_t*)(&program[pc + dconstant]));
    g[5].i = constant;
    g[5].tag = 0;
    ts &= 0x1f000; //0b11111000000000000
    pc += 2;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movpN_0:
{
    g[0].p = NULL;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movpN_1:
{
    g[1].p = NULL;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movpN_2:
{
    g[2].p = NULL;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movpN_3:
{
    g[3].p = NULL;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movpN_4:
{
    g[4].p = NULL;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

movpN_5:
{
    g[5].p = NULL;
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

moviN_0:
{
    g[0].p = NULL;
    g[0].tag = 1;
    ts |= 0x10000; //0b10000000000000000
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

moviN_1:
{
    g[1].p = NULL;
    g[1].tag = 1;
    ts |= 0x8000; //0b01000000000000000
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

moviN_2:
{
    g[2].p = NULL;
    g[2].tag = 1;
    ts |= 0x4000; //0b00100000000000000
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

moviN_3:
{
    g[3].p = NULL;
    g[3].tag = 1;
    ts |= 0x2000; //0b00010000000000000
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

moviN_4:
{
    g[4].p = NULL;
    g[4].tag = 1;
    ts |= 0x1000; //0b00001000000000000
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

moviN_5:
{
    g[5].p = NULL;
    g[5].tag = 1;
    ts |= 0x800; //0b00000100000000000
    pc++;
    goto *dynOpcodes[ts + program[pc]];
}
break;

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
break;

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
break;

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
break;

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
break;

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
break;

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
break;

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
break;

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
break;

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
break;

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
break;

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
break;

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
break;

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
break;

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
break;

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
break;

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
break;

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
break;

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
break;

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
break;

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
break;

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
break;

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
break;

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
break;

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
break;

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
break;

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
break;

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
break;

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
break;

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
break;

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
break;

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
break;

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
break;

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
break;

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
break;

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
break;

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
break;

cabpp_0_1:
{
    if (g[0].p == g[1].p)
        pc += program[pc + 2];
    else
        pc += program[pc + 4];
    goto *dynOpcodes[ts + program[pc]];
}
break;

cabpp_0_2:
{
    if (g[0].p == g[2].p)
        pc += program[pc + 2];
    else
        pc += program[pc + 4];
    goto *dynOpcodes[ts + program[pc]];
}
break;

cabpp_0_3:
{
    if (g[0].p == g[3].p)
        pc += program[pc + 2];
    else
        pc += program[pc + 4];
    goto *dynOpcodes[ts + program[pc]];
}
break;

cabpp_0_4:
{
    if (g[0].p == g[4].p)
        pc += program[pc + 2];
    else
        pc += program[pc + 4];
    goto *dynOpcodes[ts + program[pc]];
}
break;

cabpp_0_5:
{
    if (g[0].p == g[5].p)
        pc += program[pc + 2];
    else
        pc += program[pc + 4];
    goto *dynOpcodes[ts + program[pc]];
}
break;

cabpp_1_0:
{
    if (g[1].p == g[0].p)
        pc += program[pc + 2];
    else
        pc += program[pc + 4];
    goto *dynOpcodes[ts + program[pc]];
}
break;

cabpp_1_2:
{
    if (g[1].p == g[2].p)
        pc += program[pc + 2];
    else
        pc += program[pc + 4];
    goto *dynOpcodes[ts + program[pc]];
}
break;

cabpp_1_3:
{
    if (g[1].p == g[3].p)
        pc += program[pc + 2];
    else
        pc += program[pc + 4];
    goto *dynOpcodes[ts + program[pc]];
}
break;

cabpp_1_4:
{
    if (g[1].p == g[4].p)
        pc += program[pc + 2];
    else
        pc += program[pc + 4];
    goto *dynOpcodes[ts + program[pc]];
}
break;

cabpp_1_5:
{
    if (g[1].p == g[5].p)
        pc += program[pc + 2];
    else
        pc += program[pc + 4];
    goto *dynOpcodes[ts + program[pc]];
}
break;

cabpp_2_0:
{
    if (g[2].p == g[0].p)
        pc += program[pc + 2];
    else
        pc += program[pc + 4];
    goto *dynOpcodes[ts + program[pc]];
}
break;

cabpp_2_1:
{
    if (g[2].p == g[1].p)
        pc += program[pc + 2];
    else
        pc += program[pc + 4];
    goto *dynOpcodes[ts + program[pc]];
}
break;

cabpp_2_3:
{
    if (g[2].p == g[3].p)
        pc += program[pc + 2];
    else
        pc += program[pc + 4];
    goto *dynOpcodes[ts + program[pc]];
}
break;

cabpp_2_4:
{
    if (g[2].p == g[4].p)
        pc += program[pc + 2];
    else
        pc += program[pc + 4];
    goto *dynOpcodes[ts + program[pc]];
}
break;

cabpp_2_5:
{
    if (g[2].p == g[5].p)
        pc += program[pc + 2];
    else
        pc += program[pc + 4];
    goto *dynOpcodes[ts + program[pc]];
}
break;

cabpp_3_0:
{
    if (g[3].p == g[0].p)
        pc += program[pc + 2];
    else
        pc += program[pc + 4];
    goto *dynOpcodes[ts + program[pc]];
}
break;

cabpp_3_1:
{
    if (g[3].p == g[1].p)
        pc += program[pc + 2];
    else
        pc += program[pc + 4];
    goto *dynOpcodes[ts + program[pc]];
}
break;

cabpp_3_2:
{
    if (g[3].p == g[2].p)
        pc += program[pc + 2];
    else
        pc += program[pc + 4];
    goto *dynOpcodes[ts + program[pc]];
}
break;

cabpp_3_4:
{
    if (g[3].p == g[4].p)
        pc += program[pc + 2];
    else
        pc += program[pc + 4];
    goto *dynOpcodes[ts + program[pc]];
}
break;

cabpp_3_5:
{
    if (g[3].p == g[5].p)
        pc += program[pc + 2];
    else
        pc += program[pc + 4];
    goto *dynOpcodes[ts + program[pc]];
}
break;

cabpp_4_0:
{
    if (g[4].p == g[0].p)
        pc += program[pc + 2];
    else
        pc += program[pc + 4];
    goto *dynOpcodes[ts + program[pc]];
}
break;

cabpp_4_1:
{
    if (g[4].p == g[1].p)
        pc += program[pc + 2];
    else
        pc += program[pc + 4];
    goto *dynOpcodes[ts + program[pc]];
}
break;

cabpp_4_2:
{
    if (g[4].p == g[2].p)
        pc += program[pc + 2];
    else
        pc += program[pc + 4];
    goto *dynOpcodes[ts + program[pc]];
}
break;

cabpp_4_3:
{
    if (g[4].p == g[3].p)
        pc += program[pc + 2];
    else
        pc += program[pc + 4];
    goto *dynOpcodes[ts + program[pc]];
}
break;

cabpp_4_5:
{
    if (g[4].p == g[5].p)
        pc += program[pc + 2];
    else
        pc += program[pc + 4];
    goto *dynOpcodes[ts + program[pc]];
}
break;

cabpp_5_0:
{
    if (g[5].p == g[0].p)
        pc += program[pc + 2];
    else
        pc += program[pc + 4];
    goto *dynOpcodes[ts + program[pc]];
}
break;

cabpp_5_1:
{
    if (g[5].p == g[1].p)
        pc += program[pc + 2];
    else
        pc += program[pc + 4];
    goto *dynOpcodes[ts + program[pc]];
}
break;

cabpp_5_2:
{
    if (g[5].p == g[2].p)
        pc += program[pc + 2];
    else
        pc += program[pc + 4];
    goto *dynOpcodes[ts + program[pc]];
}
break;

cabpp_5_3:
{
    if (g[5].p == g[3].p)
        pc += program[pc + 2];
    else
        pc += program[pc + 4];
    goto *dynOpcodes[ts + program[pc]];
}
break;

cabpp_5_4:
{
    if (g[5].p == g[4].p)
        pc += program[pc + 2];
    else
        pc += program[pc + 4];
    goto *dynOpcodes[ts + program[pc]];
}
break;

cabpi_0_1:
{
    pc += 5;
    goto *dynOpcodes[ts + program[pc]];
}
break;

cabpi_0_2:
{
    pc += 5;
    goto *dynOpcodes[ts + program[pc]];
}
break;

cabpi_0_3:
{
    pc += 5;
    goto *dynOpcodes[ts + program[pc]];
}
break;

cabpi_0_4:
{
    pc += 5;
    goto *dynOpcodes[ts + program[pc]];
}
break;

cabpi_0_5:
{
    pc += 5;
    goto *dynOpcodes[ts + program[pc]];
}
break;

cabpi_1_0:
{
    pc += 5;
    goto *dynOpcodes[ts + program[pc]];
}
break;

cabpi_1_2:
{
    pc += 5;
    goto *dynOpcodes[ts + program[pc]];
}
break;

cabpi_1_3:
{
    pc += 5;
    goto *dynOpcodes[ts + program[pc]];
}
break;

cabpi_1_4:
{
    pc += 5;
    goto *dynOpcodes[ts + program[pc]];
}
break;

cabpi_1_5:
{
    pc += 5;
    goto *dynOpcodes[ts + program[pc]];
}
break;

cabpi_2_0:
{
    pc += 5;
    goto *dynOpcodes[ts + program[pc]];
}
break;

cabpi_2_1:
{
    pc += 5;
    goto *dynOpcodes[ts + program[pc]];
}
break;

cabpi_2_3:
{
    pc += 5;
    goto *dynOpcodes[ts + program[pc]];
}
break;

cabpi_2_4:
{
    pc += 5;
    goto *dynOpcodes[ts + program[pc]];
}
break;

cabpi_2_5:
{
    pc += 5;
    goto *dynOpcodes[ts + program[pc]];
}
break;

cabpi_3_0:
{
    pc += 5;
    goto *dynOpcodes[ts + program[pc]];
}
break;

cabpi_3_1:
{
    pc += 5;
    goto *dynOpcodes[ts + program[pc]];
}
break;

cabpi_3_2:
{
    pc += 5;
    goto *dynOpcodes[ts + program[pc]];
}
break;

cabpi_3_4:
{
    pc += 5;
    goto *dynOpcodes[ts + program[pc]];
}
break;

cabpi_3_5:
{
    pc += 5;
    goto *dynOpcodes[ts + program[pc]];
}
break;

cabpi_4_0:
{
    pc += 5;
    goto *dynOpcodes[ts + program[pc]];
}
break;

cabpi_4_1:
{
    pc += 5;
    goto *dynOpcodes[ts + program[pc]];
}
break;

cabpi_4_2:
{
    pc += 5;
    goto *dynOpcodes[ts + program[pc]];
}
break;

cabpi_4_3:
{
    pc += 5;
    goto *dynOpcodes[ts + program[pc]];
}
break;

cabpi_4_5:
{
    pc += 5;
    goto *dynOpcodes[ts + program[pc]];
}
break;

cabpi_5_0:
{
    pc += 5;
    goto *dynOpcodes[ts + program[pc]];
}
break;

cabpi_5_1:
{
    pc += 5;
    goto *dynOpcodes[ts + program[pc]];
}
break;

cabpi_5_2:
{
    pc += 5;
    goto *dynOpcodes[ts + program[pc]];
}
break;

cabpi_5_3:
{
    pc += 5;
    goto *dynOpcodes[ts + program[pc]];
}
break;

cabpi_5_4:
{
    pc += 5;
    goto *dynOpcodes[ts + program[pc]];
}
break;

cabip_0_1:
{
    pc += 5;
    goto *dynOpcodes[ts + program[pc]];
}
break;

cabip_0_2:
{
    pc += 5;
    goto *dynOpcodes[ts + program[pc]];
}
break;

cabip_0_3:
{
    pc += 5;
    goto *dynOpcodes[ts + program[pc]];
}
break;

cabip_0_4:
{
    pc += 5;
    goto *dynOpcodes[ts + program[pc]];
}
break;

cabip_0_5:
{
    pc += 5;
    goto *dynOpcodes[ts + program[pc]];
}
break;

cabip_1_0:
{
    pc += 5;
    goto *dynOpcodes[ts + program[pc]];
}
break;

cabip_1_2:
{
    pc += 5;
    goto *dynOpcodes[ts + program[pc]];
}
break;

cabip_1_3:
{
    pc += 5;
    goto *dynOpcodes[ts + program[pc]];
}
break;

cabip_1_4:
{
    pc += 5;
    goto *dynOpcodes[ts + program[pc]];
}
break;

cabip_1_5:
{
    pc += 5;
    goto *dynOpcodes[ts + program[pc]];
}
break;

cabip_2_0:
{
    pc += 5;
    goto *dynOpcodes[ts + program[pc]];
}
break;

cabip_2_1:
{
    pc += 5;
    goto *dynOpcodes[ts + program[pc]];
}
break;

cabip_2_3:
{
    pc += 5;
    goto *dynOpcodes[ts + program[pc]];
}
break;

cabip_2_4:
{
    pc += 5;
    goto *dynOpcodes[ts + program[pc]];
}
break;

cabip_2_5:
{
    pc += 5;
    goto *dynOpcodes[ts + program[pc]];
}
break;

cabip_3_0:
{
    pc += 5;
    goto *dynOpcodes[ts + program[pc]];
}
break;

cabip_3_1:
{
    pc += 5;
    goto *dynOpcodes[ts + program[pc]];
}
break;

cabip_3_2:
{
    pc += 5;
    goto *dynOpcodes[ts + program[pc]];
}
break;

cabip_3_4:
{
    pc += 5;
    goto *dynOpcodes[ts + program[pc]];
}
break;

cabip_3_5:
{
    pc += 5;
    goto *dynOpcodes[ts + program[pc]];
}
break;

cabip_4_0:
{
    pc += 5;
    goto *dynOpcodes[ts + program[pc]];
}
break;

cabip_4_1:
{
    pc += 5;
    goto *dynOpcodes[ts + program[pc]];
}
break;

cabip_4_2:
{
    pc += 5;
    goto *dynOpcodes[ts + program[pc]];
}
break;

cabip_4_3:
{
    pc += 5;
    goto *dynOpcodes[ts + program[pc]];
}
break;

cabip_4_5:
{
    pc += 5;
    goto *dynOpcodes[ts + program[pc]];
}
break;

cabip_5_0:
{
    pc += 5;
    goto *dynOpcodes[ts + program[pc]];
}
break;

cabip_5_1:
{
    pc += 5;
    goto *dynOpcodes[ts + program[pc]];
}
break;

cabip_5_2:
{
    pc += 5;
    goto *dynOpcodes[ts + program[pc]];
}
break;

cabip_5_3:
{
    pc += 5;
    goto *dynOpcodes[ts + program[pc]];
}
break;

cabip_5_4:
{
    pc += 5;
    goto *dynOpcodes[ts + program[pc]];
}
break;

