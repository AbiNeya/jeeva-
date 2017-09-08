#include <stdio.h>
int main(void) {
	int l,c=0,i;
	printf("enter the value");
	scanf("%d",&l);
	for(i=1;i<=l;i++)
	{
		c=c+i;
	}
	printf("sum %d",c);
	return 0;
}
