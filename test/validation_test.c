#include <unistd.h>
#include <stdlib.h>
#include "ctest.h"

// basic test without setup/teardown
CTEST(Skorost, testaValidation) {//скорость
    usleep(2000);
}

CTEST(ProverkaVvodaMenshe10000, CorrectDannieVklada) {//проверка входных данных
    const int sum = 9000;
    int p=0;  
     
   if (sum<10000)
{  
	  p=1;
	
    }
                           
    ASSERT_EQUAL(1, p);// срав ожид/реал
} 



CTEST(ProverkaVvodaBolshe100000, CorrectDannieVklada) {
    const int sum = 110000;
    int p=0;  
     
   if (sum > 100000)
    {
      p=1;
    }  
                           
    ASSERT_EQUAL(1, p);
} 




CTEST(KolichestvoDneiBolsheGoda, CorrectDannieDnei) {
    const int sr= 380;
    int p=0;  
     
  if (sr > 365)
{
    
    p = 1;
    } 
                           
    ASSERT_EQUAL(1, p);
} 



CTEST(KolichestvoDneiOtricatelnoe, CorrectDannieDnei) {
    const int sr= -100;
    int p=0;  
     
 if (sr < 0)
{
    p = 1;
    }
                           
    ASSERT_EQUAL(1, p);
} 

