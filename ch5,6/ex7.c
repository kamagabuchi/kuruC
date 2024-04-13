#include <stdio.h>
int main(void)
{
    int kaeru;
    scanf("%d" ,&kaeru);
    printf("%d %d %d %d",
    (int)(kaeru*0.9), (int)(kaeru*0.7) ,
     (int)(kaeru*0.5) ,(int)(kaeru*0.2));
    return 0;
}