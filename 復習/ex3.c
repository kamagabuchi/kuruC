#include <stdio.h>

int kouki(int oni);


int main(void)
{
    int oni;
    scanf("%d",&oni);
    switch(kouki(oni))
    {
        case 0:
            printf("夏季オリンピック/n");
            break;
        case 1:
            printf("冬季オリンピック/n");
            break;
        case 2:
            printf("開催されず/n");
            break;
    }


    return 0;

}


int kouki(int oni)
{
    int oka;
    oka=oni%4;
    if(oka==0){
        return 0;
    } else if(oka==2){
        return 1;
    }else {
    return 2;}
}