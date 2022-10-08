/*star pattern

*
**
***
****
*****

*/
#include<iostream>
using namespace std;
int main()
{
int i=6,j=5;
char a='*';

while(j<=5&&j>0)
{
while(j<i)
{
cout<<a<<" ";
i--;
}
i=6;
cout<<endl;
j--;
}
return 0;
}