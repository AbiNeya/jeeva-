#include <stdio.h>
int main(void) 
{
	char ch[100];
	int arr[100],i,c=0;
	scanf("%s",&ch);
	for(i=0;ch[i]!='\0';i++)
	{
	  arr[i]=ch[i];
	  c+=arr[i];
	}
	printf("%c",c/i);
	return 0;
}
