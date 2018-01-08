#include<stdio.h>
int main()
{
int fir,sec,*p,*q,sum;
printf("enter the numbers:");
scanf("%d%d",&fir,&sec);
p=&fir;
q=&sec;
sum=*p+*q;
printf("sum of entered numbers=%d\n",sum);
return 0;
}
