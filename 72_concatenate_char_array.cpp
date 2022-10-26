/*
concatenate two charachter array {c type string}

enter size of string a:- 3
enter sting a:- ram
enter size of string b:- 4
enter sting b:- sham
a+b string is:-ramsham
*/
#include<iostream>
using namespace std;
int main()
{int x,y,z=0;
cout<<"enter size of string a:- ";
cin>>x;
char a[x];
cout<<"enter sting a:- ";
cin>>a;
cout<<"enter size of string b:- ";
cin>>y;
char b[y],c[x+y];
cout<<"enter sting b:- ";
cin>>b;
for (int i=0;a[i]!='\0';i++)
{
    c[z]=a[i];
    z++;
}
for (int i=0;b[i]!='\0';i++)
{
    c[z]=b[i];
    z++;
}
cout<<"a+b string is:-"<<c;
return 0; 
}
