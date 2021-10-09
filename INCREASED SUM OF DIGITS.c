
#include <stdio.h>

int main()
{
   int n,sum=0;
   printf("ENTER THE NUMBER: ");
   scanf("%d",&n);
   while(n>0)
   {
       int dig = n%10;
       sum = sum + (dig+1);
       n = n/10;
   }
   printf("%d",sum);
   

    return 0;
}