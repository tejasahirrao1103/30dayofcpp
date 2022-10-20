/*
search number available in array
*/
#include<iostream>
using namespace std;
int main()
{
int a[10],n;
for (int i=0;i<10;i++)
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
        cout<<n<<" is at "<<i+1<<" palce";
        exit;
    }  

}

return 0;
}