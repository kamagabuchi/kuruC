#include<stdio.h>
int main(void)
{
    int i,k;
    for(i=1;i<=9;i++)
    {
        for(k=1;k<=9;k++)
        {
       printf("%2d*%2d=%2d",i,k,i*k );
    }
    printf("\n");
    }
    return 0;
}