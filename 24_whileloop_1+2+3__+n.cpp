/*
Q.) input number and print 1+2+3+4......+n
*/
#include<iostream>
using namespace std;
int main()
{
int n,a=0,i=0;
cout<<"enter number ";
cin>>n;
while (i<=n)
{
a+=i;
++i;
}
cout<<a;


return 0;


}
