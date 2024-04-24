#include<stdio.h>
typedef struct 
{
    char namae[64];
    int nennrei;
    char seibetu[64];
}data;

data kazu;

void kazu_nyuuryoku(void);
void kazu_print(data kazu);

int main(void)
{
    kazu_nyuuryoku();
    kazu_print(kazu);
    return 0;
}


void kazu_nyuuryoku(void)
{
    printf("名前年齢性別\n");
    scanf("%s,%d,%s",&kazu.namae, &kazu.nennrei,&kazu.seibetu;)
    return;
}

void kazu_print(data kazu)
{
    printf("%s,%d,%s",kazu.namae, kazu.nennrei, kazu.seibetu);
    return;
}