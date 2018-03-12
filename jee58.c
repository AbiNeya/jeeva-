#include<stdio.h>
int main()
{
    int temp,i,j;
    scanf("%d%d",&i,&j);
    temp=i;
    i=j;
    j=temp;
    printf("%d\t%d",i,j);
    
}
