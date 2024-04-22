#include<stdio.h>
#include<string.h>
int main(void)
{
    char ika[10] ,ika2[]="okonomiyaki";
    scanf("%s",ika);
    if(strcmp(ika,ika2)==0)
    {
        printf("同じ");
    } else{
        printf(" ちがう");
    }
    return 0;
}