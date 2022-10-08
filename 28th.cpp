//print 1,12,123,1234,12345.......9
#include<iostream>
using namespace std;
int main()
{
int i=2,a=1;
while (i<=9)
{i++;
cout<<a<<endl;
a=a*10+i;
}
return 0;    
}