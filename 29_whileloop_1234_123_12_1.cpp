//print 12345,1234,123,12,1
#include<iostream>
using namespace std;
int main()
{
int a=12345, i=5;
cout<<a<<endl;
while(i>=1)
{
a=(a/10)-(i/10);
cout<<a<<endl;
i--;
}
return 0;
}
