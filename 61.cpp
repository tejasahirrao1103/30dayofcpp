/*
input and output of 2D array
11 12 13 14 15
21 22 23 24 25
31 32 33 34 35
41 42 43 44 45
51 52 53 54 55
*/
#include<iostream>
using namespace std;
int main()
{
int a[5][5];
for (int i=0;i<5;i++)
{
    for(int j=0;j<5;j++)
    {
        cout<<"enter elemet at "<<i<<","<<j<<" location of array :- ";
        cin>>a[i][j];
    }
}
for (int i=0;i<5;i++)
{
    for(int j=0;j<5;j++)
    {
        cout<<a[i][j]<<" ";
    }
cout<<endl;
}
return 0;
}