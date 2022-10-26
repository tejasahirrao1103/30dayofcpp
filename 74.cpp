// input string form user and reverse it
#include<iostream>
#include<string>
using namespace std;
int main()
{
string a;
cout<<"enter sting:- ";
getline(cin,a);
int x=a.length();
for (int i=x-1;i>=0;i--)
{
cout<<a.at(i);
}
return 0;    
}

