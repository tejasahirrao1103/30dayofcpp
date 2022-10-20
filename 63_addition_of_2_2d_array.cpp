/*
additon of two matrix 
1 1 1     1 1 1     2 2 2
1 1 1  +  1 1 1  =  2 2 2
1 1 1     1 1 1     2 2 2
*/
#include<iostream>
using namespace std;
int main()
{
int a[3][3],b[3][3],c[3][3],i,j;
for ( i=0;i<3;i++)
{
    for( j=0;j<3;j++)
    {
        cout<<"enter elemet at "<<i<<","<<j<<" location of array a :- ";
        cin>>a[i][j];
    }
}

for ( i=0;i<3;i++)
{
    for( j=0;j<3;j++)
    {
        cout<<"enter elemet at "<<i<<","<<j<<" location of array b :- ";
        cin>>b[i][j];
    }
}

for ( i=0;i<3;i++)
{
    for( j=0;j<3;j++)
    {
        c[i][j] = a[i][j] + b[i][j];
    }
}

cout<<"\naddition of matrix a and b:- \n";
for ( i=0;i<3;i++)
{
    for( j=0;j<3;j++)
    {
        cout<<c[i][j]<<" ";
    }
cout<<endl;
}

return 0;
}
