/*
pattern
a b c d e 
a b c d e
a b c d e
a b c d e
a b c d e
*/
#include<iostream>
using namespace std;
int main()
{

for(char row='a';row<'f';row++)
{
    for(char col='a';col<'f';col++)
{
cout<<col<<" ";
}
cout<<endl;
}
return 0;
}
