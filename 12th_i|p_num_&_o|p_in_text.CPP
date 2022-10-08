//input number and output into word

#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a;
cout<<"enter single digit number :";
cin>>a;
if(a>=0&&a<=9)
{
if(a==0)
{cout<<"zero";
}
else if(a==1)
{cout<<"one";
}
else if(a==2)
{cout<<"two"; }
else if (a==3)
{ cout<<"theree";}
else if (a==4)
{cout<<"four";}
else if (a==5)
{cout<<"five";}
else if (a==6)
{cout<<"six";}
else if (a==7)
{cout<<"seven";}
else if (a==8)
{cout<<"eight";}
else
{cout<<"nine"; }

}
else
{cout<<"no is not single digit";}

getch();

}
