/*
function
*/
#include<iostream>
using namespace std;

void test() // function decleration 
{    // funtion defentation
cout<<"first function program in cpp"<<endl<<endl;
}

int sum()
{
int a=5,b=5;
//cout<<"a+b:- "<<a+b;
return a+b; // use of return statement value get return to 
           //that palce where function get called
}

int main()
{
test();// call funtion
//sum()
cout<<"sum() funtion called and print:- "<<sum();// print using return statement

return 0;
}