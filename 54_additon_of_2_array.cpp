/*
addition of two array
*/
#include<iostream>
using namespace std;
int main()
{
int a[5],b[5],c=0;
for(int i=0;i<5;i++)
{
    cout<<"enter element of a:- ";
    cin>>a[i];
    c=c+a[i];
    cout<<"enter element of b:- ";
    cin>>b[i];
    c=c+b[i];
}
cout<<c;
return 0;
}
