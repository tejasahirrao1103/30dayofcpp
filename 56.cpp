/*
Q. input roll No, Name, Marathi, Hindi and marks of english
 of 10 student using array and print total persentage of each
*/
#include<iostream>
#include<conio.h>
using namespace std;    
int main()
{
    char name[10];
    int rollno[10],marathi[10],hindi[10],english[10],total[10];
    for(int i=0;i<10;i++)
    {
   
    cout<<"\nenter first char of name:- ";
    cin>>name[i];
    cout<<"enter roll no of student "<<i+1<<":- ";
    cin>>rollno[i];
    cout<<"enter marks in marathi of student "<<i+1<<":- ";
    cin>>marathi[i];
    cout<<"enter marks in hindi of student "<<i+1<<":- ";
    cin>>hindi[i];
    cout<<"enter marks in english of student "<<i+1<<":- ";
    cin>>english[i];
    }
    for(int i=0;i<10;i++)
    {
    total[i]=marathi[i]+english[i]+hindi[i];
    cout<<"\nstudent "<<name[i]<<" with roll no "<<rollno[i]<<" total marks is "<<total[i]<<endl;
    cout<<"and toatal percentage is "<<total[i]*100/300<<endl;
    }

return 0;
}