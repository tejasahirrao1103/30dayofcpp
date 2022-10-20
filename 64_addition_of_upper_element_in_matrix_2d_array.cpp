/*
addition of upper element of array
5 5 5
# 5 5
# # 5
additiion of uperer matrix is 30
*/
#include<iostream>
using namespace std;
int main()
{
int a[3][3],counter=0,n=0;
for (int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
    {
        cout<<"enter elemet at "<<i<<","<<j<<" location of array :- ";
        cin>>a[i][j];
    }
}
for (int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
    {
        cout<<a[i][j]<<" ";
    }
cout<<endl;
}

for (int i=0;i<3;i++)
{
    for(int j=i;j<3;j++)
    {
        counter=counter+a[i][j];
    }
}
cout<<endl<<"additiion of uperer matrix is "<<counter;
return 0;
}
