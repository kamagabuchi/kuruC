#include<stdio.h>
int main(void)
{
    char myoji[10],namae[10],zenbu[10];
    printf("名字");
    scanf("%s",myoji);
    printf("名前");
    scanf("%s",namae);

    sprintf(zenbu,"%s%s",myoji,namae);
    printf("%s",zenbu);

    return 0;

}