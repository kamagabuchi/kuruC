#include <stdio.h>
#include <string.h>

int main(void)
{
    char aki[]="おにぎり";
    char aki2[]="えびまよ";
    char aki3[10];
    char aki4[10];
    sprintf(aki3,"%s%s",aki2,aki);
    printf("%s\n",aki3);

    strcpy(aki4,aki3);
    printf("%s\n",aki4);
    return 0;
}

