/*
Calculator using SWITCH
*/

#include<iostream>
using namespace std;

int main()
{
float a,b;    
char o; 
cout<<"enter first no: ";
cin>>a;
cout<<"enter oprator +,-,*,/ : ";
cin>>o;
cout<<"enter second no: ";
cin>>b;
switch(o)
{
case '+': cout<<a+b;
break;
case '-': cout<<a-b;
break;
case '*': cout<<a*b;
break;
case '/': cout<<a/b;
break;
default:
break;
}   
return 0;


}
