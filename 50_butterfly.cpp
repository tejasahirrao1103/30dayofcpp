/*
pattern 
*              *
**            **
***          ***
****        ****
*****      *****
******    ******
*******  *******
*******  *******
******    ******
*****      *****
****        ****
***          ***
**            **
*              *
 */

#include<iostream>
using namespace std;
int main()
{
int n=7;
for (int row=0;row<n;row++)
{
    for (int col3=0;col3<row+1;col3++)
    {
        cout<<"*";
    }
    for(int col=n;col>=row+1;col--)
    {
        cout<<"  ";
    }
    for(int col2=0;col2<row+1;col2++)
    {
        cout<<"*";
    }
    cout<<endl;
}

for (int row=n;row>0;row--)
{
    for (int col3=0;col3<row;col3++)
    {
        cout<<"*";
    }
    for(int col=n;col>=row;col--)
    {
        cout<<"  ";
    }
    for(int col2=0;col2<row;col2++)
    {
        cout<<"*";
    }
    cout<<endl;

}
return 0;
}
