#include<stdio.h>

enum
{
kaki,
touki,
sitenaiyo
};

int kannsuu(int i);

int main(void)
{
    int i,hold;
    printf("西暦何年うまれですか？");
    scanf("%d",&i);
    hold=kannsuu(i);

    switch(hold)
    {
    case touki:
        printf("冬季オリンピック");
        break;
    case kaki:
        printf("夏季オリンピック");
        break;
    case sitenaiyo:
        printf("開催されていません");
        break;
    }
    return 0;
}

int kannsuu(int i)
{
    if(i%4==2)
    {return touki;}
    else if(i%4==0)
    {return kaki;}
    else
    {return sitenaiyo;};

}
