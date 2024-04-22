#include<stdio.h>
int main(void)
{
    int i,k, kazu[10];
    for(i=1;i<=10;i++)
    {
        scanf("%d",&kazu[i]);
    }

    for(k=10;k>=1;k--)
    {
        printf("%d\n",kazu[k]);

    }
    return 0;

}