#include <main.h>

#define AHMET  PIN_A0
#define SEZGIN PIN_B4
#define FETTAH PIN_C4

int8 mehmet = 0;

void main()
{

   while(TRUE)
   {
      
      output_low(AHMET);
      output_high(SEZGIN);
      mehmet++;
	
      
      
      if(mehmet==10)
      {
         output_low(Ahmet);
         mehmet = 0;
      }
      
      
      else 
      {
         output_low(fettah);
      }
   }

}
