/*star pattern

*****
****
***
**
*

*/

#include<iostream>
using namespace std;
int main()
{
 int i=0;
int j=5;
char a='*';
while(j>=0)
{
while(i<j)
{
cout<<a<<" ";
i++;
}
i=0;
cout<<endl;
j--;

}
return 0;
}
