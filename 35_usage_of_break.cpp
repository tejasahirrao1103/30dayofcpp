
// program to find the sum of positive numbers
// if the user enters a negative numbers, break ends the loop
// In this porgram we can not add negative number

#include<iostream>
using namespace std;
int main()
{
int a,b;

while (true)
{
cout<<"enter number1 : \n";
cin>>a;
if (a<0)
{
    break;
}
cout<<"enter number2 : \n";
cin>>b;
if (a<0)
{
    break;
}

cout<<"ans is "<<a+b<<endl;

}
cout<<"In this porgram we can not add negative number";

return 0;
}
