//input thre number and find out largest of them
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a,b,c;
cout<<"enter no 1: ";
cin>>a;
cout<<"enter no 2: ";
cin>>b;
cout<<"enter no 3: ";
cin>>c;
if (a<b)
{if(b<c)
{cout<<c<<" is greter than all";
}
else
{cout<<b<<" is greater than all";
}
}
else
cout<<a<<" is greater than all";

getch();

}