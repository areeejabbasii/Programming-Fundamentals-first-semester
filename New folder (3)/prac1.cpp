#include<iostream>
using namespace std;
int main()
{
    int i=-67.78;
    int k=4.0/3.0;//this will give 1 because both are float but assigned to int
    //int j=4/3;//this will give 1 because both are int
    
    float a=34;
    float b=6/7;//this will give 0 because both are int
    float c=6.0/7;//this will give 0.857142 because one is float
    double d=6/7;
    cout<<k<<endl;//
    cout<<c<<endl;
    cout<<d<<endl;
    cout<<b<<endl;
    cout<<a<<endl;
    cout<<i<<endl;
}