/*
frequncy of given number in array
(how may time given number is available in array)
*/
#include<iostream>
using namespace std;
int main()
{
int a[10],n,counter=0;;
for(int i=0;i<10;i++)
{
    cout<<"enter "<<i+1<<" element of array:- ";
    cin>>a[i];
}
cout<<"enter number your want to search:- ";
cin>>n;
for(int i=0;i<10;i++) 
{
    if (n==a[i])
    {
        counter++;
    }  
}
cout<<n<<" is available "<<counter<<" time in arrary";
return 0;
}