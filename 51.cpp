/*
pattern 

 *  *  *  * 

 *        *

 *        *

 *  *  *  *

*/
#include<iostream>
using namespace std;
int main()
{
int n=3;
for (int row=0; row<=n;row++)
{
    if (row>0&&row<=n-1)
    {
        for(int col=0;col<=n;col++)
            {
                if (col>0&&col<=n-1)
                    cout<<"   ";
                else
                    cout<<" * ";
             }
        cout<<endl;
    }
    else
    {
        for(int row2=0;row2<=n;row2++)
        {
            cout<<" * ";
        }
    cout<<endl;
    }
cout<<endl;
}
return 0;

}
