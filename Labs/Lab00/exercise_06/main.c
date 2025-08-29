#include <stdio.h>

int main() {

   int num1;
   int num2;
   
   printf("  xxxxxxx  \n");
   printf(" xx     xx \n");
   printf(" x  0 0  x \n");
   printf(" \\   >   / \n");
   printf("  \\  ~  /  \n");
   printf("   \\___/   \n");
   printf("Enter a number for the eyes: ");
   scanf("%d", &num1);
   printf("Enter a number for the nose: ");
   scanf("%d", &num2);
   printf("  xxxxxxx  \n");
   printf(" xx     xx \n");
   printf(" x  %d %d  x \n", num1, num1);
   printf(" \\   %d   / \n", num2);
   printf("  \\  ~  /  \n");
   printf("   \\___/   \n");

   return 0;
}
