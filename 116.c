#include<stdio.h>
#include<conio.h>
main()
{
	int a[25],n,i,large=-1111;
	printf("\n enter the n number");
	scanf("%d",&n);
for(i=0;i<n;i++)
{scanf("%d",&a[i]);}
for(i=0;i<n;i++)
{
if(a[i]>large)
large=a[i];}
printf("\n the large is %d",large);
getch();
return 0;
}
