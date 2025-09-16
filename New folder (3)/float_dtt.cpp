#include<iostream>
#include<iomanip>
#include<limits>
using namespace std;
int main()
{
    float x=4556.5676787f;
    double a=9.123467895656677;
    long double aa=999.1234567L;//6 digit will be precise in float other will be garbage value
    // cout<<setprecision(13);
    // cout<<x<<endl;

    //*cout<<cout.precision();//6DOUBLE a=9.12346
    cout << "double digits10 = " << numeric_limits<double>::digits10 << endl;//remember this i am using float here <> but with data_type we change limit to thhat one whom we are interested to put limits
    //cout<<numeric_limits<float>::digits10;
    cout<<a;
    //* cout<<"The value of x is : "<<x<<endl;
    // cout<<"The value of a is : "<<a<<endl;  
    //! cout<<"The value of aa is : "<<aa<<endl;
    //& cout<<"The size of float is : "<<sizeof(x)<<endl;   
    //cout<<"The size of double is : "<<sizeof(a)<<endl;
    //~cout<<"The size of long double is : "<<sizeof(aa)<<endl;

} 
// cout allow 6 digit to print but you can set precision 