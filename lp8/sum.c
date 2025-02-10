#include <stdio.h>

int main() 
{
    int fd,ld,n,sum;
    printf("Enter a number:");
    scanf("%d",&n);
    ld=n%10;
    while(n>10)
    {
        n=n/10;
        fd=n;
    }
    {
        sum=fd+ld;
        printf("The sum of first and last digit is %d ",sum);
    }

    return 0;
}