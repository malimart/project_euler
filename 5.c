/*
2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/


#include <stdio.h>

int main() {
   int x=20;
   int st;
   while(1) {
      st=0;

      for(int i=20; i>=11; i--) {
         if(x % i == 0) {
            st++;
            continue;
         }
         else break;
      }

      if(st==10) break;
      x++;
   }
   printf("%d", x);
   return 0;
}
