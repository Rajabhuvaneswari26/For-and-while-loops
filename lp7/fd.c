#include <stdio.h>

int main() 
{
    int fd,ld,n;
    printf("Enter a number:");
    scanf("%d",&n);
    ld=n%10;
    printf("The last digit is %d \n",ld);
    while(n>=10)
    {
        n=n/10;
        fd=n;
    }
    {
    printf("The first digit is %d",fd);       
    }
    return 0;
}