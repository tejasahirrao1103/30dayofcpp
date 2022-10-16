/*revers number 

output:-
enter numbr:
12345
54321
*/

#include<iostream>
using namespace std;
int main()
{
int n,m;
cout<<"enter number: ";
cin>>n;

while (n>=1)
{
m=n%10;
cout<<m;
n=n/10;
}

return 0;
}
