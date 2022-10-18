/*
addition of all element of array
*/

#include<iostream>
using namespace std;
int main()
{
int a[5],c=0;
for(int i=0;i<5;i++)
{
    cout<<"enter number:- ";
    cin>>a[i];
    c=c+a[i];
}
cout<<"addition of string is:- "<<c;

return 0;    
}
