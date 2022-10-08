/* write a program that read employe number and payment of 
empolye and calculate that increment as follow 
1. if payment <= 500 increment is 15% of payment
2. if payment <=1500 increment is 10% of payment
3. if payment >1500 incremen is 0 of payment
*/

#include<iostream>
using namespace std;

int main()
{ 
int a;
float b;   
cout<<"enter employe number\n";
cin>>a;
cout<<"enter employe payment\n";
cin>>b;

if (b<=500)
{
 cout<<"increment of employee no "<<a<<" is "<<b+b*.15;  
}
else if (b<=1500)
{
   cout<<"increment of employee no "<<a<<" is "<<b+b*.10; 
}
else
{
cout<<"increment of employee no "<<a<<" is "<<b;
}
return 0;

}
