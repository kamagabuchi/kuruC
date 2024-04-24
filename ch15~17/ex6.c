#include<stdio.h>
int main(void)
{
int i,k;

FILE *poi;
poi=fopen("test.txt","r");
fscanf(poi,"%d,%d",&i,&k);
fclose(poi);

printf("%d,%d",i,k);
return 0;

}