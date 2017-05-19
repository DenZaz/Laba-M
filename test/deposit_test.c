#include <unistd.h>
#include <stdlib.h>
#include "ctest.h"

// basic test without setup/teardown
CTEST(Skorost, testaVichisleni) {//отвечает за сеорость проверки
    usleep(2000);//скорость
}

// there are many different ASSERT macro's (see ctest.h)
CTEST(TestForDeposit10000, Dni30min10pr) {//проверка для вычисления
    
    const int sum = 10000;
    const int den=sum-sum/100*10;                       

    ASSERT_EQUAL(9000, den);//сравнеие ожидание/реальность
}

CTEST(TestForDeposit10000, Dni120s2pr) {
    const int sum = 10000;
    const int den = sum + sum / 100 * 2;                          
    ASSERT_EQUAL(10200, den);
}

CTEST(TestForDeposit10000, Dni240s6pr) {
    const int sum = 10000;
    const int den = sum + sum / 100 * 6;                           
    ASSERT_EQUAL(10600, den);
}

CTEST(TestForDeposit10000, Dni365s12pr) {
    const int sum = 10000;
    const int den = sum + sum / 100 * 12;                              
    ASSERT_EQUAL(11200, den);
}

CTEST(TestForDeposit100000, Dni30min10pr) {
    const int sum = 100000;
    const int den = sum - sum / 100 * 10;                              
    ASSERT_EQUAL(90000, den);
}

CTEST(TestForDeposit100000, Dni120s3pr) {
    const int sum = 100000;
    const int den = sum + sum / 100 * 3;                             
    ASSERT_EQUAL(103000, den);
}

CTEST(TestForDeposit100000, Dni240s8pr) {
    const int sum = 100000;
    const int den = sum + sum / 100 * 8;                              
    ASSERT_EQUAL(108000, den);
}


CTEST(TestForDeposit100000, Dni365s15pr) {
    const int sum = 100000;
    const int den = sum + sum / 100 * 15;                              
    ASSERT_EQUAL(115000, den);
} 
  
