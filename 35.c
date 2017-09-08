#include <stdio.h>
#include <string.h>
int main(void)
{
	char s[100];
	gets(s);
	int l=strlen(s),c=0,i;
	for(i=0;i<l;i++)
	{
		if(!((s[i]>='a' &&s[i]<='z')||(s[i]>='A' &&s[i]<='Z')||(s[i]>='0' &&s[i]<='9')))
		c++;
	}
	printf("special characters %d",c);
	return 0;
}
