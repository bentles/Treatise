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
int16_t displacement = program[pc + 1];
int64_t const = *((int64_t*)(&program[pc + displacement]);
g[0].i = g[0].i + const;
pc += 2;
goto *dynOpcodes[ts + program[pc]];

addik_1:
int16_t displacement = program[pc + 1];
int64_t const = *((int64_t*)(&program[pc + displacement]);
g[1].i = g[1].i + const;
pc += 2;
goto *dynOpcodes[ts + program[pc]];

addik_2:
int16_t displacement = program[pc + 1];
int64_t const = *((int64_t*)(&program[pc + displacement]);
g[2].i = g[2].i + const;
pc += 2;
goto *dynOpcodes[ts + program[pc]];

addik_3:
int16_t displacement = program[pc + 1];
int64_t const = *((int64_t*)(&program[pc + displacement]);
g[3].i = g[3].i + const;
pc += 2;
goto *dynOpcodes[ts + program[pc]];

addik_4:
int16_t displacement = program[pc + 1];
int64_t const = *((int64_t*)(&program[pc + displacement]);
g[4].i = g[4].i + const;
pc += 2;
goto *dynOpcodes[ts + program[pc]];

addik_5:
int16_t displacement = program[pc + 1];
int64_t const = *((int64_t*)(&program[pc + displacement]);
g[5].i = g[5].i + const;
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
int16_t displacement = program[pc + 1];
int64_t const = *((int64_t*)(&program[pc + displacement]);
g[0].i = const - g[0].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];

subki_1:
int16_t displacement = program[pc + 1];
int64_t const = *((int64_t*)(&program[pc + displacement]);
g[1].i = const - g[1].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];

subki_2:
int16_t displacement = program[pc + 1];
int64_t const = *((int64_t*)(&program[pc + displacement]);
g[2].i = const - g[2].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];

subki_3:
int16_t displacement = program[pc + 1];
int64_t const = *((int64_t*)(&program[pc + displacement]);
g[3].i = const - g[3].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];

subki_4:
int16_t displacement = program[pc + 1];
int64_t const = *((int64_t*)(&program[pc + displacement]);
g[4].i = const - g[4].i;
pc += 2;
goto *dynOpcodes[ts + program[pc]];

subki_5:
int16_t displacement = program[pc + 1];
int64_t const = *((int64_t*)(&program[pc + displacement]);
g[5].i = const - g[5].i;
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


movik_0:
int16_t displacement = program[pc + 1];
int64_t const = *((int64_t*)(&program[pc + displacement]);
g[0].i = const;
pc += 2;
goto *dynOpcodes[ts + program[pc]];

movik_1:
int16_t displacement = program[pc + 1];
int64_t const = *((int64_t*)(&program[pc + displacement]);
g[1].i = const;
pc += 2;
goto *dynOpcodes[ts + program[pc]];

movik_2:
int16_t displacement = program[pc + 1];
int64_t const = *((int64_t*)(&program[pc + displacement]);
g[2].i = const;
pc += 2;
goto *dynOpcodes[ts + program[pc]];

movik_3:
int16_t displacement = program[pc + 1];
int64_t const = *((int64_t*)(&program[pc + displacement]);
g[3].i = const;
pc += 2;
goto *dynOpcodes[ts + program[pc]];

movik_4:
int16_t displacement = program[pc + 1];
int64_t const = *((int64_t*)(&program[pc + displacement]);
g[4].i = const;
pc += 2;
goto *dynOpcodes[ts + program[pc]];

movik_5:
int16_t displacement = program[pc + 1];
int64_t const = *((int64_t*)(&program[pc + displacement]);
g[5].i = const;
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


