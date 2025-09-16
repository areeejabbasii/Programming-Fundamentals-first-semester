#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    char ch='2';
    char ch1='a';
    char ch2='A';
    char ch3=156;
    //what will happen if we assign a value more than 255 to a char variable
    cout<<(int)ch1<<endl;
    cout<<(int)ch2<<endl;
    cout<<(int)ch;
    cout<<(int)ch3<<endl; //when i put 128 this will -127 and when i put 156 this will be -100
}