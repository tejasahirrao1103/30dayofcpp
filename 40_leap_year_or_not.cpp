/*
check given number is leap year or not
*/
#include<iostream>
using namespace std;
int main()
{
int year;
char r='y';
do{
cout<<"enter year:- ";
cin>>year;
if ((year%4==0&&year%100!=0)||year%400==0)
cout<<"year is leap\n";
else
cout<<"year is not leap\n";
cout<<"press y if you want to coninue:- ";
cin>>r;
}while(r=='y');
return 0;
}
