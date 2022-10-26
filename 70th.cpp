#include <iostream>
using namespace std;
int main()
{
    float a, b, c;
    cout<<"enter the length of side a "<<endl;
    cin>>a;
    cout<<"enter the length of side b "<<endl;
    cin>>b;     
    cout<<"enter the length of side c "<<endl;
    cin>>c;

if(a==b && b==c)                 
   cout<<"Equilateral triangle\n";

else if(a==b || a==c || b==c)   

   cout <<"Isosceles triangle\n";
else                                
   cout <<"Scalene triangle\n"; 
           
return 0;
}
