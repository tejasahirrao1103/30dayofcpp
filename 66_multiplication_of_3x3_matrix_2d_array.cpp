/*
multiplication of 3X3 matrix 
1 1 1   1 1 1   6  6  6
2 2 2 * 2 2 2 = 12 12 12
3 3 3   3 3 3   18 18 18 
*/
#include<iostream>
using namespace std;
int main()
{
int a[3][3],b[3][3],c[3][3];
for (int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
    {
        cout<<"enter elemet at "<<i<<","<<j<<" location of array a:- ";
        cin>>a[i][j];
    }
}

cout<<"your a matrix is: -"<<endl;
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
    for(int j=0;j<3;j++)
    {
        cout<<"enter elemet at "<<i<<","<<j<<" location of array b:- ";
        cin>>b[i][j];
    }
}

cout<<"your b matrix is: -"<<endl;
for (int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
    {
        cout<<b[i][j]<<" ";
    }
cout<<endl;
}

for (int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
    {c[i][j]=0;
       c[i][j]=c[i][j]+(a[i][j]*b[j][i]);
    }
}

cout<<"ans is:-"<<endl;
for (int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
    {
        cout<<c[i][j]<<" ";
    }
cout<<endl;
}

return 0;
}
