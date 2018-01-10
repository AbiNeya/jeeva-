#include<stdio.h>
#include<conio.h>
#define bool int
void main()
{
clrscr();
printf("Yes\n"):printf("Non\n");
printf("Yes"):printf("Non");
getch();
}
bool isPowerOfTwo(int n)
{
return n&&(!(n&(n-1)));
}
