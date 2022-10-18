/*
addition of each element with same index of sececond one array
c[i]=a[i]+b[i]
*/
#include<iostream>
using namespace std;
int main()
{
int a[5],b[5],c[0];
for (int i=0;i<5;i++)
{
    cout<<"enter element of a:- ";
    cin>>a[i];
    cout<<"enter element of b:- ";
    cin>>b[i]; 
    c[i]=a[i]+b[i];  
}
for(int i=0;i<5;i++)
{
    cout<<"ans of a["<<i+1<<"]+b["<<i+1<<"] is :- "<<c[i]<<endl;
}
return 0;
}