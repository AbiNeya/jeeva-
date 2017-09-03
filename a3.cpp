#include<iostream>
using namespace std;
int main(){
	int num,count=0;
	cout<<"ENTER NUMBER: ";
	cin>>num;
	for(int i=1;i<=num;i++)
	{
		if (num%i==0)
		{
			count++;
		}	
	}
	if(count==2)
	{
		cout<<num<<" IS A PRIME NUMBER.";
	}
	else
	{
		cout<<num<<" IS NOT A PRIME NUMBER.";
	}
	return 0;
