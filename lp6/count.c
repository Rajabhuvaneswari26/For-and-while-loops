#include <stdio.h>

int main() 
{
    int n,count;
    count=0;
    printf("Enter a number:");
    scanf("%d",&n);
    while(n>0)
    {
        count=count+1;
        n=n/10;
    }
    {  
        printf("the number of digits is %d",count);
    }
    return 0;
}