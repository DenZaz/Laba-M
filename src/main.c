#include <stdio.h>
#include <math.h>
#include "deposit.h"


int sr;
int sum;
int den;
int ch;

int main()
{
  next:
  ch = 0;
    printf ("Vvedite summu vklada \n\n\n");
    scanf ("%d", &sum);
    printf ("Vvedite srok \n\n\n");
    scanf ("%d", &sr); 

    proverka(sum, sr);
if(ch == 1)
{
printf ("Oshibka\n\n\n");
  goto next;
}

if ( sum < 100000)
{
if (sr < 31 && 0 <= sr)
{  
    printf ("Vasha summa sostavlyaet %d\n\n\n", proverka(sum, sr));                       
    }  
if (sr < 121 && 31 <= sr)
{  
    printf ("Vasha summa sostavlyaet %d\n\n\n", proverka(sum, sr));                       
    }  
if (sr < 241 && 121 <= sr)
{  
    printf ("Vasha summa sostavlyaet %d\n\n\n", proverka(sum, sr));                       
    }   
if(sr < 366 && 241 <= sr)
{  
    printf ("Vasha summa sostavlyaet %d\n\n\n", proverka(sum, sr));                       
    }                    
    }  
    if (sum > 100000)
    {
    if (sr < 31 && 0 <= sr)
    {  
    printf ("Vasha summa sostavlyaet %d\n\n\n", proverka(sum, sr));                       
    }  
    if (sr < 121 && 31 <= sr)
{  
    den = sum + sum / 100 * 3;
    printf ("Vasha summa sostavlyaet %d\n\n\n", proverka(sum, sr));                       
    }  
    if (sr < 241 && 121 <= sr)
{  
    printf ("Vasha summa sostavlyaet %d\n\n\n", proverka(sum, sr));                       
    }   
    if (sr < 366 && 241 <= sr)
    {  
    printf ("Vasha summa sostavlyaet %d\n\n\n", proverka(sum, sr));                       
    } 
    }  
} 
