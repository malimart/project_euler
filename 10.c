#include <stdio.h>

/*The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.*/

int main() {

   long long sum = 0;
   int i = 2;

   while(i<2000000) {

      int k = 0;

      for(int j=1; j<=i/2; j++) {
         if(i % j == 0) k++;
         if(k>1) break;
         if(k==1 && j==i/2) sum += i;
      }

      i++;
   }

   printf("%lld", sum);

   return 0;
}
