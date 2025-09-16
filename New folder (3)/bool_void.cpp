#include<iostream>
using namespace std;
int main()
{
    // bool b=true;
    // cout<<b<<endl;
    //^void v; this give error we take void in three ways ptr,func,template
    void *ptr;
    int x=10;
    ptr=&x;
    bool p=45;

    //cout<<*ptr;//this give error we cant dereference void ptr
     cout<<*(int*)ptr;
     cout<<p;
    //     int x=10;
//     float y=12.5;
//     float z=true+x+false+y;
//     cout<<z;
//     cout<<sizeof(z);
//     if((x>y)==true)
//     {
//         cout<<"x is greater";
//     }
//     else
//     {
//         cout<<"y is greater";
//     }
 }