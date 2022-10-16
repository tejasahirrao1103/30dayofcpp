/*
check given number is prime or not
*/
#include<iostream>
using namespace std;
int main()
{
int n,m,i=2;
cout<<"enter number:- ";
cin>>n;
while (i<n)
{
m=n%i;

if (m==0)
{
 cout<<"number is not prime";
 break;
}
else{
    cout<<"number is pirme";
}
i++;
}

return 0;
}
