/*print first 20 term of fabinacci series */
#include<iostream>
using namespace std;
int main()
{
int a=1,i=0,c=0,d=0;
cout<<c<<endl<<a<<endl;
while(i<=18) 
{
d=c+a;
c=a;
a=d;
cout<<d<<endl;
i++;
}
return 0;    
}