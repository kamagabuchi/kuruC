#include<stdio.h>
int main(void)
{
    int omae;
    scanf("%d",&omae);
    switch(omae){
    case 1:
        printf("ぽっちゃま\n");
        break;

    case 2:
        printf("れおなるど/n");
        break;

    case 3:
    case 4:
        printf("マツコ・デラックス\n");
        break;
        
    default:
        printf("河内長野/n");
        break;
    }
    return 0;
}