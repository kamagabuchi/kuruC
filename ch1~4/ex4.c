#include <stdio.h>

int kobe(void);

int main(void) 
{
    printf("%d円\n" ,100);
    kobe();
    return 0;
}

int kobe(void)
{
    printf("%d+%d=%d \n" ,100, 200 ,300);
    return 0;
}