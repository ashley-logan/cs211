#include <stdio.h>

int main(void) {
   int x;

   printf("Enter x: \n");
   scanf("%d", &x);
   
   //printf("%d\n", x);  // Student mistakenly is echoing the input to output to match example
   printf("x doubled is: %d\n", 2 * x);
   
   return 0;
}
