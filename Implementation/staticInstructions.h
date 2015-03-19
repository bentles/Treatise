add_0_0:
g[0].i = g[0].i + g[0].i;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

add_0_1:
g[0].i = g[0].i + g[1].i;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

add_0_2:
g[0].i = g[0].i + g[2].i;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

add_0_3:
g[0].i = g[0].i + g[3].i;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

add_0_4:
g[0].i = g[0].i + g[4].i;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

add_0_5:
g[0].i = g[0].i + g[5].i;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

add_1_0:
g[1].i = g[1].i + g[0].i;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

add_1_1:
g[1].i = g[1].i + g[1].i;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

add_1_2:
g[1].i = g[1].i + g[2].i;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

add_1_3:
g[1].i = g[1].i + g[3].i;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

add_1_4:
g[1].i = g[1].i + g[4].i;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

add_1_5:
g[1].i = g[1].i + g[5].i;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

add_2_0:
g[2].i = g[2].i + g[0].i;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

add_2_1:
g[2].i = g[2].i + g[1].i;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

add_2_2:
g[2].i = g[2].i + g[2].i;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

add_2_3:
g[2].i = g[2].i + g[3].i;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

add_2_4:
g[2].i = g[2].i + g[4].i;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

add_2_5:
g[2].i = g[2].i + g[5].i;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

add_3_0:
g[3].i = g[3].i + g[0].i;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

add_3_1:
g[3].i = g[3].i + g[1].i;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

add_3_2:
g[3].i = g[3].i + g[2].i;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

add_3_3:
g[3].i = g[3].i + g[3].i;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

add_3_4:
g[3].i = g[3].i + g[4].i;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

add_3_5:
g[3].i = g[3].i + g[5].i;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

add_4_0:
g[4].i = g[4].i + g[0].i;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

add_4_1:
g[4].i = g[4].i + g[1].i;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

add_4_2:
g[4].i = g[4].i + g[2].i;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

add_4_3:
g[4].i = g[4].i + g[3].i;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

add_4_4:
g[4].i = g[4].i + g[4].i;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

add_4_5:
g[4].i = g[4].i + g[5].i;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

add_5_0:
g[5].i = g[5].i + g[0].i;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

add_5_1:
g[5].i = g[5].i + g[1].i;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

add_5_2:
g[5].i = g[5].i + g[2].i;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

add_5_3:
g[5].i = g[5].i + g[3].i;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

add_5_4:
g[5].i = g[5].i + g[4].i;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

add_5_5:
g[5].i = g[5].i + g[5].i;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

addik_0:
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[0].i = g[0].i + constant;
pc += 2;
goto *dynOpcodes[ts + program[pc]];

addik_1:
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[1].i = g[1].i + constant;
pc += 2;
goto *dynOpcodes[ts + program[pc]];

addik_2:
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[2].i = g[2].i + constant;
pc += 2;
goto *dynOpcodes[ts + program[pc]];

addik_3:
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[3].i = g[3].i + constant;
pc += 2;
goto *dynOpcodes[ts + program[pc]];

addik_4:
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[4].i = g[4].i + constant;
pc += 2;
goto *dynOpcodes[ts + program[pc]];

addik_5:
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[5].i = g[5].i + constant;
pc += 2;
goto *dynOpcodes[ts + program[pc]];

sub_0_1:
g[0].i = g[0].i - g[1].i;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

sub_0_2:
g[0].i = g[0].i - g[2].i;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

sub_0_3:
g[0].i = g[0].i - g[3].i;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

sub_0_4:
g[0].i = g[0].i - g[4].i;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

sub_0_5:
g[0].i = g[0].i - g[5].i;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

sub_1_0:
g[1].i = g[1].i - g[0].i;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

sub_1_2:
g[1].i = g[1].i - g[2].i;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

sub_1_3:
g[1].i = g[1].i - g[3].i;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

sub_1_4:
g[1].i = g[1].i - g[4].i;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

sub_1_5:
g[1].i = g[1].i - g[5].i;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

sub_2_0:
g[2].i = g[2].i - g[0].i;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

sub_2_1:
g[2].i = g[2].i - g[1].i;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

sub_2_3:
g[2].i = g[2].i - g[3].i;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

sub_2_4:
g[2].i = g[2].i - g[4].i;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

sub_2_5:
g[2].i = g[2].i - g[5].i;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

sub_3_0:
g[3].i = g[3].i - g[0].i;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

sub_3_1:
g[3].i = g[3].i - g[1].i;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

sub_3_2:
g[3].i = g[3].i - g[2].i;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

sub_3_4:
g[3].i = g[3].i - g[4].i;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

sub_3_5:
g[3].i = g[3].i - g[5].i;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

sub_4_0:
g[4].i = g[4].i - g[0].i;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

sub_4_1:
g[4].i = g[4].i - g[1].i;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

sub_4_2:
g[4].i = g[4].i - g[2].i;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

sub_4_3:
g[4].i = g[4].i - g[3].i;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

sub_4_5:
g[4].i = g[4].i - g[5].i;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

sub_5_0:
g[5].i = g[5].i - g[0].i;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

sub_5_1:
g[5].i = g[5].i - g[1].i;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

sub_5_2:
g[5].i = g[5].i - g[2].i;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

sub_5_3:
g[5].i = g[5].i - g[3].i;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

sub_5_4:
g[5].i = g[5].i - g[4].i;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

subki_0:
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[0].i = constant - g[0].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];

subki_1:
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[1].i = constant - g[1].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];

subki_2:
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[2].i = constant - g[2].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];

subki_3:
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[3].i = constant - g[3].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];

subki_4:
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[4].i = constant - g[4].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];

subki_5:
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[5].i = constant - g[5].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];

movii_0_1:
g[0].i = g[1].i;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movii_0_2:
g[0].i = g[2].i;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movii_0_3:
g[0].i = g[3].i;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movii_0_4:
g[0].i = g[4].i;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movii_0_5:
g[0].i = g[5].i;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movii_1_0:
g[1].i = g[0].i;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movii_1_2:
g[1].i = g[2].i;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movii_1_3:
g[1].i = g[3].i;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movii_1_4:
g[1].i = g[4].i;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movii_1_5:
g[1].i = g[5].i;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movii_2_0:
g[2].i = g[0].i;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movii_2_1:
g[2].i = g[1].i;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movii_2_3:
g[2].i = g[3].i;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movii_2_4:
g[2].i = g[4].i;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movii_2_5:
g[2].i = g[5].i;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movii_3_0:
g[3].i = g[0].i;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movii_3_1:
g[3].i = g[1].i;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movii_3_2:
g[3].i = g[2].i;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movii_3_4:
g[3].i = g[4].i;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movii_3_5:
g[3].i = g[5].i;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movii_4_0:
g[4].i = g[0].i;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movii_4_1:
g[4].i = g[1].i;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movii_4_2:
g[4].i = g[2].i;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movii_4_3:
g[4].i = g[3].i;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movii_4_5:
g[4].i = g[5].i;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movii_5_0:
g[5].i = g[0].i;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movii_5_1:
g[5].i = g[1].i;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movii_5_2:
g[5].i = g[2].i;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movii_5_3:
g[5].i = g[3].i;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movii_5_4:
g[5].i = g[4].i;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movpp_0_1:
g[0].p = g[1].p;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movpp_0_2:
g[0].p = g[2].p;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movpp_0_3:
g[0].p = g[3].p;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movpp_0_4:
g[0].p = g[4].p;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movpp_0_5:
g[0].p = g[5].p;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movpp_1_0:
g[1].p = g[0].p;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movpp_1_2:
g[1].p = g[2].p;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movpp_1_3:
g[1].p = g[3].p;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movpp_1_4:
g[1].p = g[4].p;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movpp_1_5:
g[1].p = g[5].p;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movpp_2_0:
g[2].p = g[0].p;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movpp_2_1:
g[2].p = g[1].p;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movpp_2_3:
g[2].p = g[3].p;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movpp_2_4:
g[2].p = g[4].p;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movpp_2_5:
g[2].p = g[5].p;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movpp_3_0:
g[3].p = g[0].p;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movpp_3_1:
g[3].p = g[1].p;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movpp_3_2:
g[3].p = g[2].p;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movpp_3_4:
g[3].p = g[4].p;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movpp_3_5:
g[3].p = g[5].p;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movpp_4_0:
g[4].p = g[0].p;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movpp_4_1:
g[4].p = g[1].p;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movpp_4_2:
g[4].p = g[2].p;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movpp_4_3:
g[4].p = g[3].p;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movpp_4_5:
g[4].p = g[5].p;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movpp_5_0:
g[5].p = g[0].p;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movpp_5_1:
g[5].p = g[1].p;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movpp_5_2:
g[5].p = g[2].p;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movpp_5_3:
g[5].p = g[3].p;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movpp_5_4:
g[5].p = g[4].p;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movip_0_1:
g[0].p = g[1].p;
g[0].tag = 1;
ts |= 0x10000 //0b10000000000000000
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movip_0_2:
g[0].p = g[2].p;
g[0].tag = 1;
ts |= 0x10000 //0b10000000000000000
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movip_0_3:
g[0].p = g[3].p;
g[0].tag = 1;
ts |= 0x10000 //0b10000000000000000
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movip_0_4:
g[0].p = g[4].p;
g[0].tag = 1;
ts |= 0x10000 //0b10000000000000000
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movip_0_5:
g[0].p = g[5].p;
g[0].tag = 1;
ts |= 0x10000 //0b10000000000000000
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movip_1_0:
g[1].p = g[0].p;
g[1].tag = 1;
ts |= 0x8000 //0b01000000000000000
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movip_1_2:
g[1].p = g[2].p;
g[1].tag = 1;
ts |= 0x8000 //0b01000000000000000
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movip_1_3:
g[1].p = g[3].p;
g[1].tag = 1;
ts |= 0x8000 //0b01000000000000000
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movip_1_4:
g[1].p = g[4].p;
g[1].tag = 1;
ts |= 0x8000 //0b01000000000000000
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movip_1_5:
g[1].p = g[5].p;
g[1].tag = 1;
ts |= 0x8000 //0b01000000000000000
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movip_2_0:
g[2].p = g[0].p;
g[2].tag = 1;
ts |= 0x4000 //0b00100000000000000
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movip_2_1:
g[2].p = g[1].p;
g[2].tag = 1;
ts |= 0x4000 //0b00100000000000000
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movip_2_3:
g[2].p = g[3].p;
g[2].tag = 1;
ts |= 0x4000 //0b00100000000000000
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movip_2_4:
g[2].p = g[4].p;
g[2].tag = 1;
ts |= 0x4000 //0b00100000000000000
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movip_2_5:
g[2].p = g[5].p;
g[2].tag = 1;
ts |= 0x4000 //0b00100000000000000
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movip_3_0:
g[3].p = g[0].p;
g[3].tag = 1;
ts |= 0x2000 //0b00010000000000000
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movip_3_1:
g[3].p = g[1].p;
g[3].tag = 1;
ts |= 0x2000 //0b00010000000000000
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movip_3_2:
g[3].p = g[2].p;
g[3].tag = 1;
ts |= 0x2000 //0b00010000000000000
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movip_3_4:
g[3].p = g[4].p;
g[3].tag = 1;
ts |= 0x2000 //0b00010000000000000
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movip_3_5:
g[3].p = g[5].p;
g[3].tag = 1;
ts |= 0x2000 //0b00010000000000000
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movip_4_0:
g[4].p = g[0].p;
g[4].tag = 1;
ts |= 0x1000 //0b00001000000000000
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movip_4_1:
g[4].p = g[1].p;
g[4].tag = 1;
ts |= 0x1000 //0b00001000000000000
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movip_4_2:
g[4].p = g[2].p;
g[4].tag = 1;
ts |= 0x1000 //0b00001000000000000
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movip_4_3:
g[4].p = g[3].p;
g[4].tag = 1;
ts |= 0x1000 //0b00001000000000000
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movip_4_5:
g[4].p = g[5].p;
g[4].tag = 1;
ts |= 0x1000 //0b00001000000000000
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movip_5_0:
g[5].p = g[0].p;
g[5].tag = 1;
ts |= 0x800 //0b00000100000000000
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movip_5_1:
g[5].p = g[1].p;
g[5].tag = 1;
ts |= 0x800 //0b00000100000000000
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movip_5_2:
g[5].p = g[2].p;
g[5].tag = 1;
ts |= 0x800 //0b00000100000000000
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movip_5_3:
g[5].p = g[3].p;
g[5].tag = 1;
ts |= 0x800 //0b00000100000000000
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movip_5_4:
g[5].p = g[4].p;
g[5].tag = 1;
ts |= 0x800 //0b00000100000000000
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movpi_0_1:
g[0].i = g[1].i;
g[0].tag = 0;
ts &= 0xf800 //0b01111100000000000
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movpi_0_2:
g[0].i = g[2].i;
g[0].tag = 0;
ts &= 0xf800 //0b01111100000000000
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movpi_0_3:
g[0].i = g[3].i;
g[0].tag = 0;
ts &= 0xf800 //0b01111100000000000
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movpi_0_4:
g[0].i = g[4].i;
g[0].tag = 0;
ts &= 0xf800 //0b01111100000000000
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movpi_0_5:
g[0].i = g[5].i;
g[0].tag = 0;
ts &= 0xf800 //0b01111100000000000
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movpi_1_0:
g[1].i = g[0].i;
g[1].tag = 0;
ts &= 0x17800 //0b10111100000000000
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movpi_1_2:
g[1].i = g[2].i;
g[1].tag = 0;
ts &= 0x17800 //0b10111100000000000
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movpi_1_3:
g[1].i = g[3].i;
g[1].tag = 0;
ts &= 0x17800 //0b10111100000000000
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movpi_1_4:
g[1].i = g[4].i;
g[1].tag = 0;
ts &= 0x17800 //0b10111100000000000
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movpi_1_5:
g[1].i = g[5].i;
g[1].tag = 0;
ts &= 0x17800 //0b10111100000000000
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movpi_2_0:
g[2].i = g[0].i;
g[2].tag = 0;
ts &= 0x1b800 //0b11011100000000000
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movpi_2_1:
g[2].i = g[1].i;
g[2].tag = 0;
ts &= 0x1b800 //0b11011100000000000
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movpi_2_3:
g[2].i = g[3].i;
g[2].tag = 0;
ts &= 0x1b800 //0b11011100000000000
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movpi_2_4:
g[2].i = g[4].i;
g[2].tag = 0;
ts &= 0x1b800 //0b11011100000000000
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movpi_2_5:
g[2].i = g[5].i;
g[2].tag = 0;
ts &= 0x1b800 //0b11011100000000000
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movpi_3_0:
g[3].i = g[0].i;
g[3].tag = 0;
ts &= 0x1d800 //0b11101100000000000
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movpi_3_1:
g[3].i = g[1].i;
g[3].tag = 0;
ts &= 0x1d800 //0b11101100000000000
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movpi_3_2:
g[3].i = g[2].i;
g[3].tag = 0;
ts &= 0x1d800 //0b11101100000000000
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movpi_3_4:
g[3].i = g[4].i;
g[3].tag = 0;
ts &= 0x1d800 //0b11101100000000000
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movpi_3_5:
g[3].i = g[5].i;
g[3].tag = 0;
ts &= 0x1d800 //0b11101100000000000
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movpi_4_0:
g[4].i = g[0].i;
g[4].tag = 0;
ts &= 0x1e800 //0b11110100000000000
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movpi_4_1:
g[4].i = g[1].i;
g[4].tag = 0;
ts &= 0x1e800 //0b11110100000000000
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movpi_4_2:
g[4].i = g[2].i;
g[4].tag = 0;
ts &= 0x1e800 //0b11110100000000000
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movpi_4_3:
g[4].i = g[3].i;
g[4].tag = 0;
ts &= 0x1e800 //0b11110100000000000
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movpi_4_5:
g[4].i = g[5].i;
g[4].tag = 0;
ts &= 0x1e800 //0b11110100000000000
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movpi_5_0:
g[5].i = g[0].i;
g[5].tag = 0;
ts &= 0x1f000 //0b11111000000000000
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movpi_5_1:
g[5].i = g[1].i;
g[5].tag = 0;
ts &= 0x1f000 //0b11111000000000000
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movpi_5_2:
g[5].i = g[2].i;
g[5].tag = 0;
ts &= 0x1f000 //0b11111000000000000
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movpi_5_3:
g[5].i = g[3].i;
g[5].tag = 0;
ts &= 0x1f000 //0b11111000000000000
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movpi_5_4:
g[5].i = g[4].i;
g[5].tag = 0;
ts &= 0x1f000 //0b11111000000000000
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movik_0:
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[0].i = constant;
pc += 2;
goto *dynOpcodes[ts + program[pc]];

movik_1:
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[1].i = constant;
pc += 2;
goto *dynOpcodes[ts + program[pc]];

movik_2:
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[2].i = constant;
pc += 2;
goto *dynOpcodes[ts + program[pc]];

movik_3:
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[3].i = constant;
pc += 2;
goto *dynOpcodes[ts + program[pc]];

movik_4:
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[4].i = constant;
pc += 2;
goto *dynOpcodes[ts + program[pc]];

movik_5:
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[5].i = constant;
pc += 2;
goto *dynOpcodes[ts + program[pc]];

movpk_0:
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[0].i = constant;
g[0].tag = 0;
ts &= 0xf800 //0b01111100000000000
pc += 2;
goto *dynOpcodes[ts + program[pc]];

movpk_1:
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[1].i = constant;
g[1].tag = 0;
ts &= 0x17800 //0b10111100000000000
pc += 2;
goto *dynOpcodes[ts + program[pc]];

movpk_2:
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[2].i = constant;
g[2].tag = 0;
ts &= 0x1b800 //0b11011100000000000
pc += 2;
goto *dynOpcodes[ts + program[pc]];

movpk_3:
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[3].i = constant;
g[3].tag = 0;
ts &= 0x1d800 //0b11101100000000000
pc += 2;
goto *dynOpcodes[ts + program[pc]];

movpk_4:
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[4].i = constant;
g[4].tag = 0;
ts &= 0x1e800 //0b11110100000000000
pc += 2;
goto *dynOpcodes[ts + program[pc]];

movpk_5:
int16_t dconstant = program[pc + 1];
int64_t constant = *((int64_t*)(&program[pc + dconstant]));
g[5].i = constant;
g[5].tag = 0;
ts &= 0x1f000 //0b11111000000000000
pc += 2;
goto *dynOpcodes[ts + program[pc]];

movpN_0:
g[0].p = NULL;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movpN_1:
g[1].p = NULL;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movpN_2:
g[2].p = NULL;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movpN_3:
g[3].p = NULL;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movpN_4:
g[4].p = NULL;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

movpN_5:
g[5].p = NULL;
pc += 1;
goto *dynOpcodes[ts + program[pc]];

moviN_0:
g[0].p = NULL;
g[0].tag = 1;
ts |= 0x10000 //0b10000000000000000
pc += 1;
goto *dynOpcodes[ts + program[pc]];

moviN_1:
g[1].p = NULL;
g[1].tag = 1;
ts |= 0x8000 //0b01000000000000000
pc += 1;
goto *dynOpcodes[ts + program[pc]];

moviN_2:
g[2].p = NULL;
g[2].tag = 1;
ts |= 0x4000 //0b00100000000000000
pc += 1;
goto *dynOpcodes[ts + program[pc]];

moviN_3:
g[3].p = NULL;
g[3].tag = 1;
ts |= 0x2000 //0b00010000000000000
pc += 1;
goto *dynOpcodes[ts + program[pc]];

moviN_4:
g[4].p = NULL;
g[4].tag = 1;
ts |= 0x1000 //0b00001000000000000
pc += 1;
goto *dynOpcodes[ts + program[pc]];

moviN_5:
g[5].p = NULL;
g[5].tag = 1;
ts |= 0x800 //0b00000100000000000
pc += 1;
goto *dynOpcodes[ts + program[pc]];

jsw_0:
tableSize = program[pc + 1];
if(g[0].i < 0 || g[0].i >= tableSize) {
defaultJump = program[pc + tableSize + 2];
pc += defaultJump;
}
else {
jump = program[pc + /<*0*>/.i + 2];
pc += jump;
 }
goto *dynOpcodes[ts + program[pc]];

jsw_1:
tableSize = program[pc + 1];
if(g[1].i < 0 || g[1].i >= tableSize) {
defaultJump = program[pc + tableSize + 2];
pc += defaultJump;
}
else {
jump = program[pc + /<*0*>/.i + 2];
pc += jump;
 }
goto *dynOpcodes[ts + program[pc]];

jsw_2:
tableSize = program[pc + 1];
if(g[2].i < 0 || g[2].i >= tableSize) {
defaultJump = program[pc + tableSize + 2];
pc += defaultJump;
}
else {
jump = program[pc + /<*0*>/.i + 2];
pc += jump;
 }
goto *dynOpcodes[ts + program[pc]];

jsw_3:
tableSize = program[pc + 1];
if(g[3].i < 0 || g[3].i >= tableSize) {
defaultJump = program[pc + tableSize + 2];
pc += defaultJump;
}
else {
jump = program[pc + /<*0*>/.i + 2];
pc += jump;
 }
goto *dynOpcodes[ts + program[pc]];

jsw_4:
tableSize = program[pc + 1];
if(g[4].i < 0 || g[4].i >= tableSize) {
defaultJump = program[pc + tableSize + 2];
pc += defaultJump;
}
else {
jump = program[pc + /<*0*>/.i + 2];
pc += jump;
 }
goto *dynOpcodes[ts + program[pc]];

jsw_5:
tableSize = program[pc + 1];
if(g[5].i < 0 || g[5].i >= tableSize) {
defaultJump = program[pc + tableSize + 2];
pc += defaultJump;
}
else {
jump = program[pc + /<*0*>/.i + 2];
pc += jump;
 }
goto *dynOpcodes[ts + program[pc]];

