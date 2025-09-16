#include <iostream>
using namespace std;

int main()
{
    char ch = 'A';
    char fourchar = ch + 3;
    cout << "4th character after " << ch << " is " << fourchar << endl;

    char ch1 = '1';
    char fourchar1 = ch1 + 3;   // use ch1 here
    cout << "4th character after " << ch1 << " is " << fourchar1 << endl;

    char ch2 = 'a';
    char fourchar2 = ch2 + 3;   // use ch2 here
    cout << "4th character after " << ch2 << " is " << fourchar2 << endl;

    return 0;
}
