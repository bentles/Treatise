all: direct indirect

direct : direct.c
	gcc -g -o bin/direct direct.c

indirect : indirect.c
	gcc -g -o bin/indirect indirect.c

switch : switch.c
	gcc -g -o bin/switch switch.c

assemblify: indirect.c direct.c switch.c
	gcc -S direct.c 
	gcc -S indirect.c
	gcc -S switch.c
