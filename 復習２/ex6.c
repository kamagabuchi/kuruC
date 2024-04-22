#include<stdio.h>
int kansuu(int);

int main(void)
{
    int kazu;
    printf("n=");
    scanf("%d",&kazu);
    printf("%d",kansuu(kazu));
    return 0;
}

int kansuu(int kazu)
{
    int k=7;
    int i;
    for(i=1;i<=kazu-1;i++)
    {
        k=k*7;
    }
    return k;
}