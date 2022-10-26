// play with Pointer

#include <iostream>
using namespace std;
int main()
{
int a=10;
int *aptr;
aptr=&a;

// accessing address of variable using pointer
cout<<"&a :- "<<&a<<endl;
cout<<"aprt:- "<<aptr<<endl<<endl;

//accessing value of variable using pointer
cout<<"a :- "<<a<<endl;
cout<<"*aptr :- "<<*aptr<<endl<<endl;

//modify value of variable using pointer
cout<<"fbefore modification a is :- "<<a<<endl;
*aptr=20;
cout<<"after modification a is :- "<<a<<endl<<endl;


// ## artithmatic with pointer


// incrememt
cout<<"aptr before increment:- "<<aptr<<endl;
aptr++; //increse by "4 byte" beacuse data type of aprt is "int"
cout<<"aptr after increment:- "<<aptr<<endl<<endl;

// decrement
cout<<"aptr before decrement:- "<<aptr<<endl;
aptr--; //decrese by "4 byte" beacuse data type of aprt is "int"
cout<<"aptr after decrement:- "<<aptr<<endl<<endl;


//##pointer to pointer


int **bptr;
bptr=&aptr;

//accessing address of pointer using pointer
cout<<"&aptr :- "<<&aptr<<endl;
cout<<"bprt:- "<<bptr<<endl<<endl;

//accessing value of pointer using pointer
cout<<"aptr :- "<<aptr<<endl;
cout<<"*bptr :- "<<*bptr<<endl<<endl;

//accessing value of variable using pointer's pointer
cout<<"a :- "<<a<<endl;
cout<<"*aptr :- "<<*aptr<<endl;
cout<<"**bptr :- "<<**bptr<<endl<<endl;

return 0;    
}
