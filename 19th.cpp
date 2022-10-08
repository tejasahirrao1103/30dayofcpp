/*
input positive single digit number and convrt it into text
*/
#include <iostream>
using namespace std;
int main()
{
int n;
cout<<"enter positive singel digit number \n";
cin>>n;
switch(n)
{
case 0: cout<<"zero";
break;
case 1: cout<<"one";
break;
case 2: cout<<"two";
break;
case 3: cout<<"three";
break;
case 4: cout<<"four";
break;
case 5: cout<<"five";
break;
case 6: cout<<"six";
break;
case 7: cout<<"seven";
break;
case 8: cout<<"eight";
break;
case 9: cout<<"nine";
break;
default:
cout<<"input is invalid";
break;   
}

return 0;

}