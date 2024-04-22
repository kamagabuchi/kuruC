#include<stdio.h>
int kannsuu(int arry[],int *max,int *min);

int main(void)
{
    int arry[],i=0,*max=0,*min=0;
    do
    {
        printf("%d番目の数",i+1);
        scanf("#d",&arry[i]);
        i++;
    }
    while(arry[i-1]==-1);
    kannsuu(arry,&max,&min);
    printf("max %d\n
            min %d\n",*max,*min);
    return 0;


}
int kannsuu(int arry[],int *max,int *min)
{
    int i;
    for(i=;i<=sizeof(arry);i++)
    {
        if(arry[i]>*max){*max=arry[i]};
        if(arry[i]<*min){*min=arry[i]};
    };
return;
}
