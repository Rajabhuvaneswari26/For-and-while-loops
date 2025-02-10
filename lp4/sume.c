#include <stdio.h>

int main() 
{
    int i,n,sum=0;
    printf("Enter any number:");
    scanf("%d",&n);
    for(i=2;i<n;i+=2)
    {
        sum+=i;
    }
    {
        printf("the sum of even numbers is %d",sum);
        
    }

    return 0;
}