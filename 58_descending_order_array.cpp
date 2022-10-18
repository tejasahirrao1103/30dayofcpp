/*
enter array and arragne in descending order
*/
#include<iostream>
using namespace std;
int main()
{
int a[5],swaper,i,j;
for(i=0;i<5;i++)
{
    cout<<"enter value of "<<i+1<<ends<<endl;
    cin>>a[i];
}
for(i=0;i<5;i++)
{
    for(j=i+1;j<5;j++)
    {
        if (a[i]<a[j])
        {
        swaper=a[i];
        a[i]=a[j];
        a[j]=swaper;
        }
    }

}
for(i=0;i<5;i++)
{
    cout<<a[i]<<" ";
}
return 0;    
}
