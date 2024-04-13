#include <stdio.h>
int main(void)
{
    int toshi, rest;

    scanf("%d", &toshi);

    rest=toshi%4;

    if(rest==2)

        printf("冬季オリンピック開催年です");


    if(rest==0)
        printf("夏季オリンピック開催年です");


    
}