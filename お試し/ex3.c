#include<stdio.h>
typedef struct
{
    int year;
    int clas;
    int number;
} student;

int main(void)
{
    student kazu;
    kazu.year=1;
    kazu.clas=2;
    kazu.number=3;
    printf("%d,%d,%d",kazu.year,kazu.clas,kazu.number);
    return 0;
}