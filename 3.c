#include <stdio.h>

/*The prime factors of 13195 are 5, 7, 13 and 29.
What is the largest prime factor of the number 600851475143 ?*/

int main() {

   long long stevilo = 141;
   int i = 2;

   while(1) {

      if(stevilo % i == 0) {
         stevilo = stevilo/i;
         if(stevilo == 1) break;
         else continue;
      }

      else i++;
   }

   printf("%d", i);

   return 0;
}
