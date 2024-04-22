#include<stdio.h>
int mama(int year);

int main(void)
{
    int year,hold;
    scanf("%d",&year);
    hold=mama(year);

switch(hold){
    case 0:
    printf("夏季オリンピック");
    break;

    case 2:
    printf("冬季オリンピック");
    break;

    case 1:
    case 3:
    printf("開催せず,,,");
    break;

};
    return 0;

}

int mama(int year)
{
    if(year%4==0){
    return 0 ;}
    else if (year%4==2){
        return 2;
    }else if(year%4==1,3){
         return 1;}

}