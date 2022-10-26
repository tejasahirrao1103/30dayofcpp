/*
count length of character array {c type string }
*/
#include<iostream>
using namespace std;
int main()
{ int c=0;
char a[10];
cout<<"enter string:- ";
cin>>a;
for(int i=0; a[i]!='\0';i++) //string end with '\o'
{
    c++;
}
cout<<"lenth of string is:- "<<c;
return 0;    
}
