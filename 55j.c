#include <stdio.h>
int main() 
{
    int a,b,mul;
    scanf("%d %d",&a,&b);
    mul=a*b;
    if(mul%2==0)
    printf("%d is an even number",mul);
    else
    printf("%d is an odd number",mul);
	return 0;
}
