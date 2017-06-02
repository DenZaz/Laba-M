CFLAGS =-Wall -Werror -c
TFLAGS =-I thirdparty -I src
.PHONY:all test clean

%.o: %.c ctest.h
	$(CC) $(CCFLAGS) -c -o $@ $<


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

test: deposit-calc-test
	mkdir buldtest -p
deposit-calc-test: buldtest/deposit_test.o buldtest/maint.o build/deposit.o buldtest/validation_test.o
	gcc buldtest/deposit_test.o buldtest/maint.o build/deposit.o buldtest/validation_test.o -o bin/deposit-test

buldtest/deposit_test.o: test/deposit_test.c
	mkdir buldtest -p
	gcc $(TFLAGS) $(CFLAGS) test/deposit_test.c -o buldtest/deposit_test.o
buldtest/maint.o: test/maint.c
	mkdir buldtest -p
	gcc $(TFLAGS) $(CFLAGS) test/maint.c -o buldtest/maint.o
buldtest/validation_test.o: test/validation_test.c
	mkdir buldtest -p
	gcc $(TFLAGS) $(CFLAGS) test/validation_test.c -o buldtest/validation_test.o


clean: 		
	rm build/*.o
	rm build/*.d
	rm buldtest/*.o
-include build/main.d
-include build/deposit.d
