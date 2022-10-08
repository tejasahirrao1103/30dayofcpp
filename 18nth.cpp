/*( Using SWITCH Cause )
input disignation and basic oc emply and calculate DA and HRA as flows
1. for manager DA= 60% of basic and HRA is 10% of basic
2. for cleark DA= 15% of basic and HRA is 5% of basic
3. for pion DA= 40% of basic and HRA is 4% of basic
*/
#include<iostream>
using namespace std;

int main()
{
char a;
float b;
cout<<"enter disignation for manager = m, for cleark =c, and for pion = p \n";
cin>>a;
cout<<"enter basic \n";
cin>>b;
switch(a)
{
 case 'm':
 cout<<"For manager DA is "<<b*.60<<" and HRA is "<<b*.10;   
 break;
 case 'c':
 cout<<"For cleark DA is "<<b*.15<<" and HRA is "<<b*.05;   
 break;
 default:
 cout<<"For pion DA is "<<b*.40<<" and HRA is "<<b*.04;   
 break;
}
return 0;    
}
