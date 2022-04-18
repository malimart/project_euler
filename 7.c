#include <stdio.h>

/*By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10001st prime number?*/

int main() {

   int stevec = 0;
   int stevilo = 1;

   while(1) {

      int k = 0;

      for(int i=1; i<=stevilo/2; i++) {
         if(stevilo % i == 0) k++;
         if(k>1) break;
         if(k==1 && i==stevilo/2) stevec++;
      }

      if(stevec==10001) break;

      stevilo++;
   }

   printf("%d", stevilo);

   return 0;

}
