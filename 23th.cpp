/*
enter Number n
find even no of 1 to n
find odd no from 1 to n 
*/
#include<iostream>
using namespace std;
int main()
{
int i=0, n;
cout<<"enter number: ";
cin>>n;
while(i<=n)
{
if (i%2==0)
{
    cout<<i<<" is even number";   
    ++i;
    cout<<endl;
}
else
{
cout<<i<<" is odd number";  
++i; 
cout<<endl;
}
}
return 0;
}