/*
storage class
*/

#include<iostream>
using namespace std;

int c; // etxetn type of variable {goble variable} decreare outside of block

int main()
{
int a=5; // auto type of variable local varibale 

auto b='s';// auto type of variable using {auto kyword} 
auto l = 5; // when we use auto keyword the no need to delcreal data type

static int d=5;// static type of variable using {static kyword}

register int e=5; // regitster type of variable declear using {register keyord} 
                //and it is vary fast becuse register is closest memory of procsessor

c=e+l;
cout<<"c{globale}=e{register}+l{normal/auto/local} :- "<<c<<endl<<endl;
cout<<"a{normal/auto/local}+l{auto}+d{static}+e{register} :- "<<a+l+d+e<<endl<<endl;
cout<<"b{auto/ char} :- "<<b;

return 0;

}
