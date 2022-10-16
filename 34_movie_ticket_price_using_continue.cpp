/* 
Movie Ticket price Porgram

Input number of people want to go and there age. if age is 
less than or equal to 3 then ticket is free else ticket is 250 per person 
*/

#include<iostream>
using namespace std;
int main()
{
int age,count=0,ppl;

cout<<"enter number of people : ";
cin>>ppl;

while (ppl!=0)
{
    cout<<"enter age of person No. "<<ppl<<" with you : ";
    cin>>age;
    if (age<=3)
    { ppl--;
        continue;

    }

    else
    {
        count=count+250;
        ppl--;
    }
    
}

cout<<"Total bill is "<<count;

return 0;    
}
