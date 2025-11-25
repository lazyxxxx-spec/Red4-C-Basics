#include <stdio.h>

int main()
{
   int div1, div2, res, mod;
   
   printf("Enter the divised: ");
   scanf("%d", &div1);

   printf("enter the divised second: ");
   scanf("%d", &div2);

   res = div1 / div2;
   printf("the result is: %d\n", res);

   mod = div1 % div2;
    printf("The mod is: %d\n", mod);

}