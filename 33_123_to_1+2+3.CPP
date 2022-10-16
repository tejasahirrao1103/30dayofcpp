/*
addtion of each number of given number
ex. 123=>1+2+3
*/
#include<iostream>
using namespace std;
int main()
{
int a,b,c=0;
cout<<"enter number: ";
cin>>a;
while (a>0)
{
b=a%10;
c=c+b;
a=a/10;
}
cout<<c;
return 0;
}
