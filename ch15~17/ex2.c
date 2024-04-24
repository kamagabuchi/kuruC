#include<stdio.h>

struct okane
{
    int mikan;
    int kaki;
    int ringo;
};

int main(void)
{
    struct okane kazu;

    kazu.mikan=10;
    kazu.kaki=20;
    kazu.ringo=30;

    printf("%d %d,%d",kazu.mikan ,kazu.kaki ,kazu.ringo);
    return 0;
}