#include <iostream>
using namespace std;
int hcf(int a, int b)
{
    if(a==0 || b==0)
      return 0;  
    if(a == b)
      return a;
    if(a>b)
     return hcf(a-b,b);  
    return hcf(a,b-a); 
} 
int main(){
    int a,b;
    cout<<"----PROGRAM TO FIND HCF OF TWO NUMBERS----";
    cout<<"\nEnter two numbers: "; cin>>a>>b;
    cout<<"\nHCF of "<<a<<" and "<<b<<" is "<<hcf(a,b);
    return 0;
}
