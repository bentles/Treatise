all : vm.c codegen
	gcc -g -D TYPE -o bin/vm vm.c
	gcc -g -D CONV -o bin/vmc vm.c
	gcc -g -D HYBR -o bin/vmh vm.c

optimised: vm.c codegen
	gcc -D TYPE -O3 -o bin/vm vm.c
	gcc -D CONV -O3 -o bin/vmc vm.c
	gcc -D HYBR -O3 -o bin/vmh vm.c

codegen: Code\ Generator/codegen.js
	node Code\ Generator/codegen.js
