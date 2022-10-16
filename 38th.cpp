/*
check given number is amstrong number or not (for three digit program)
*/
#include<iostream>
using namespace std;
int main()
{
int n,p,c=0,m;
cout<<"enter number:- ";
cin>>n;
p=n;
while (n>0)
{
m=n%10;
c=c+(m*m*m);
n=n/10;
}

if (p==c)
{
cout<<"number is amstrong";
}
else
{
cout<<"number is not amstorng";
}
return 0;
}