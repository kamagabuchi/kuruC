#include <stdio.h>
int main(void)
{
    int max, min , sum ;
    scanf("%d , %d ,&max , &min");
    sum=(min+max)*(max-min+1);
    printf("%d\n",sum);
}