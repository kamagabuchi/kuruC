#include <stdio.h>
int main(void)
{
    double money=1; 
    int month=1;
    while(money<1000000)
    {
        printf("%d月目  %7.0f円",month,money);
        money*=2;
        month++;
    }   
      return 0;
}