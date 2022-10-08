/*
Q) input number n and write a program that find factorial of n
1*2*3*4*5.....*n
*/
#include<iostream>
using namespace std;
int main()
{
int n,a=1,i=1;
cout<<"enter number ";
cin>>n;
while(i<=n)
{
    a*=i;
    i++;
}
cout<<a;
return 0;
}