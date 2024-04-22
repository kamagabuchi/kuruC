#include <stdio.h>
int main(void)
{
    int score;
    do
    {
        scanf("%d",&score);
    
    }while(score<0||score>100);
printf("%d点",score);
return 0;
}