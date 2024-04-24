#include <stdio.h>
int func(int *i);

int main(void)
{
    int *i;
    *i=9;
    printf("%p\n,%d\n",i,*i);
    func(i);
    printf("%p\n,%d\n",i ,*i);
    return 0;
    
}

int func(int *i)
{
    *i*=2;
    return *i;
}
