/*
learn string class
*/
#include<iostream>
#include<string>
using namespace std;
int main()
{  // declearing a string
    string a="ram"; //it declears a string with ram value at variable a
    string b("SHAM");//it declears a string with SHAM value at variable b
    string c(5,'b'); //it decleares a string of 5 with all charactes 'b'
    string d(a);//it decleares a copy of the sting a
    string e;
    string f("123");


    //input string 
    cout<<"enter sting:- ";
    getline(cin,e); //To input the string with space

    //output string
    cout<<e<<endl;//output string e
    cout<<c<<endl;//output string c
    
    //#diffrent functions of string

    //1. .append()
    cout<<a.append(b)<<endl;
    cout<<a+b<<endl;

    //2. .assing() ->Assigns new string by replacing the previous value
    e.assign(a);
    cout<<e<<endl;
    e.assign("newassing");
    cout<<e<<endl;

    //3 .at() -> Returns the character at a particular position
    cout<<a.at(2)<<endl;

    //4 .clear() -> Erases all the contents of the string
    e.clear();
    cout<<e<<endl;

    //5. a.compare(b) -> if a is greter than b then output is positive other 
                        //wise negative in cuse both are same then output is zero

    cout<<a.compare(b)<<endl;

    //6. .empty() -> retun boolean value if given string is empty the retun true otherwise false
    if(e.empty())
        cout<<"sting is empty"<<endl;

    //7. .erase() -> erase substing of the sting 
    cout<<a.erase(2,3)<<endl;

    //8. .find () ->Searches the string and returns the first occurrence of the parameter
                 //in the string.
    cout<<b.find("mSH")<<endl;

    //9. .insert() -> Inserts additional characters into the string at a particular position.
    a.insert(2,"mR");
    cout<<a<<endl;

    //10. .resize() -> Resize the string to the new length which can be less than or
                     //greater than the current length.
    a.resize(3);
    cout<<a<<endl;

    //11. .length() -> Returns the length of the string.
    cout<<a.length()<<endl;

    //12. .size() -> eturns the length of the string.
    cout<<a.size()<<endl;

    //13. .substr() -> Returns a string which is the copy of the substring.
    cout<<b.substr(1,3);

    //14. .stoi() -> Returns the strings converted to int datatype.
    int x= stoi(f);
    cout<<"converted str to int +2 is:-"<<x+2<<endl;

    //15. to_string() -> To convert an integer to a string, we use to_string() function.
    cout<<to_string(x)+"ram"<<endl;

    
return 0;
}
