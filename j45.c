
#include <stdio.h>
void main()
{
	int a,c,r;
	scanf("%d",&a);
	while(a!=0)
	{
		r=a%10;
		c++;
		a=a/10;
	}
	printf("%d",a);
}
return 0;
}
