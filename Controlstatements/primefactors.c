#include <stdio.h>
int main()
{
   int i, j,k=0, n;
   printf("Enter a number:");
   scanf("%d", &n);
   for (i = 2; i < n; i++)
   {
      if (n % i == 0)
      {
         for (j = 2; j < i ; j++)
         {
            if (i % j == 0)
            {
               k=1;
            }

         }
         if(k==0)
         {
            printf("%d\t",i);
         }
      }
   }
   return 0;
}