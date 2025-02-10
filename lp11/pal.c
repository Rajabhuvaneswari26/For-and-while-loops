#include <stdio.h>

int main() {
   int n,i,reverse=0;
   printf("Enter a number:");
   scanf("%d",&n);
   i=n;
   while(n!=0)
   {
       reverse=reverse*10+n%10;
       n=n/10;
   }
   if(i==reverse)
   {
       printf("%d is a palindrome.",i);
   }
   else
   {
       printf("%d is not a palindrome.",i);
   }
    return 0;
}