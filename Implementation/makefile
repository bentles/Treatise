all : vm.c codegen
	gcc -g -o bin/vm vm.c

optimised: vm.c codegen
	gcc -O3 -o bin/vm vm.c

codegen: Code\ Generator/codegen.js
	node Code\ Generator/codegen.js
