/* input units and calculate the bill as follows
1. for first 100 units rate is 0.40 paise per unit
2. next 200 unit rate is 0.50 paise per unit
3. beond 300 unit rate is 0.60 paise per unit
print bill */

#include<iostream.h>
#include<conio.h>
void main()
{clrscr();
int u;
float b;
cout<<"enter unit you want to by ";
cin>>u;
if (u<=100)
{b=u*0.40;
}
else if (u>100&&u<=300)
{b=100*0.40+(u-100)*0.50;
}
else
{
b=100*0.40+200*0.50+(u-300)*60;
}
cout<<"total bill is: "<<b;
getch();
}
