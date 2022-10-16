/*
check number is palindrome or not
*/
#include<iostream>
using namespace std;
int main()
{
int n,m,c=0,p;
cout<<"enter number: ";
cin>>n;
p=n;

while (n>=1)
{
m=n%10;
c=c*10+m;
n=n/10;
}
if (p==c)
{
    cout<<"number is palindrome";
}
else
{
    cout<<"number is not palindrome";
}

return 0;
}