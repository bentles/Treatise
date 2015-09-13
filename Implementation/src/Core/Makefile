all : vm.c codegen
	gcc -g -D TYPE -o ../../bin/vm vm.c
	gcc -g -D CONV -o ../../bin/vmc vm.c
	gcc -g -D HYBR -o ../../bin/vmh vm.c

optimised: vm.c codegen
	gcc -D TYPE -O3 -o ../../bin/vm vm.c
	gcc -D CONV -O3 -o ../../bin/vmc vm.c
	gcc -D HYBR -O3 -o ../../bin/vmh vm.c

stats: vm.c codegen
	gcc -g -D TYPE -D STATS -o ../../bin/vm vm.c stats.c
	gcc -g -D CONV -D STATS -o ../../bin/vmc vm.c stats.c
	gcc -g -D HYBR -D STATS -o ../../bin/vmh vm.c stats.c


codegen: ../Code\ Generator/codegen.js
	cd ../Code\ Generator && node codegen.js
