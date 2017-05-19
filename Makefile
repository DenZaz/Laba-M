CFLAGS =-Wall -Werror -c
TFLAGS =-I thirdparty -I src
.PHONY: clean



all: bin/deposit-calc

build/main.d: src/main.c
	mkdir build -p
	gcc -Wall -Werror -c -o build/main.o src/main.c -MP -MMD
build/deposit.d: src/deposit.c
	mkdir build -p
	gcc -Wall -Werror -c -o build/deposit.o src/deposit.c -MP -MMD
bin/deposit-calc: build/main.o build/deposit.o
	mkdir bin -p
	gcc -Wall -Werror -o bin/deposit-calc build/deposit.o build/main.o 
clean: 		
	rm build/*.o
	rm build/*.d
	rm buldtest/*.o
-include build/main.d
-include build/deposit.d


