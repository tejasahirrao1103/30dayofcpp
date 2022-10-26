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
for(int i=0; a[i]!='\0';i++)//string end with '\o'
{ if(a[i]=='a'||a[i]=='A'||a[i]=='e'||a[i]=='i'||a[i]=='E'||a[i]=='I'||a[i]=='o'||a[i]=='O'||a[i]=='u'||a[i]=='U')
   {
    c++;
   }
    
}
cout<<"lenth of string is:- "<<c;
return 0;    
}