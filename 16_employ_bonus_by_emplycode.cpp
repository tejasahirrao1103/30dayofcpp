/* input employee code and his basic and calculate the bonus as follow
1. for first employ code bonus is 15% of payment
2. for second employ code bonus is 17% payment
3. for third employ code bonus is 1000 rs
*/

#include<iostream>
using namespace std;

int main()
{ 
int code;
float basic;   
cout<<"enter employe code\n";
cin>>code;
cout<<"enter employe payment\n";
cin>>basic;

if (code==1)
{
 cout<<"bonus of employee no is "<<basic+basic*.15;  
}
else if (code==2)
{
   cout<<"bonous of employee no is "<<basic+basic*.17; 
}
else if (code==3)
{
cout<<"bonous of employee no is "<<basic+1000;
}
else 
{
cout<<"bonous is not available";
}
return 0;

}
