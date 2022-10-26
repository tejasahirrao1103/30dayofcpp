/*
copy one character array into another one {c type sting}
*/
#include<iostream>
using namespace std;
int main()
{int x;
cout<<"enter size of string- ";
cin>>x;
char a[x], b[x];
cout<<"enter a sting:- ";
cin>>a;
for (int i=0;a[i]!='\0';i++)
{
    b[i]=a[i];
}
cout<<"b string is:-"<<b;
return 0; 
}
