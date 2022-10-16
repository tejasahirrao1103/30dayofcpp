/* calculator using loop and goto jumping statement
*/
#include<iostream>
using namespace std;
int main()
{
int i;
float a,b;    
char o,r='y'; 

for(i=0;(r=='y');i++)
{
cout<<"enter first no: ";
cin>>a;
cout<<"enter oprator +,-,*,/ : ";
cin>>o;
cout<<"enter second no: ";
cin>>b;
switch(o)
{
case '+': cout<<a+b;
goto repete;
case '-': cout<<a-b;
goto repete;
case '*': cout<<a*b;
goto repete;
case '/': cout<<a/b;
goto repete;
default:
cout<<"invalid input";
goto repete;
} 
repete:
cout<<"\nif you want to press y:- ";
cin>>r;
}   
return 0;
}