#include <stdio.h>

int main() 
{
    int i=1;
    while(i<100)
    {
        (i+=2);
        printf("%d \n",i);
        i++;
}

    return 0;
}