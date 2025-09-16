// #include<iostream>
// using namespace std;
// int main()
// {
//     int a=10;
//     cout<<a;
//     a=34;
//     cout<<a;
    
// }
#include <iostream>
#include<string> //* without this header file string datatype will not work
using namespace std; 
int main()   

{
    const string  str="Hello";
     cout<<str;
     //^str="hii";  you cant  modifiy it 
     cout<<str;
}