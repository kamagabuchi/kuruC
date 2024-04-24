#include<stdio.h>
int main(void)
{
    FILE *pon;
    pon=fopen("test.txt","w");
    fprintf(pon,"Hallo,world");
    fclose(pon);
    return 0;
}