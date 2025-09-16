#include <iostream>
#include <iomanip>
#include <limits>
using namespace std;

int main() {
    float xf = 123456789.0f;         // 9 digits
    double xd = 123456789012345.0;   // 15 digits
    long double xl = 123456789012345678.0L; // 18 digits (if supported)

    cout << "digits10 values:\n";
    cout << "float digits10 = " << numeric_limits<float>::digits10 << endl;
    cout << "double digits10 = " << numeric_limits<double>::digits10 << endl;
    cout << "long double digits10 = " << numeric_limits<long double>::digits10 << endl;

    cout << "\nNow print with 10 digits precision:\n";
    cout << setprecision(10);

    cout << "float: " << xf << endl;
    cout << "double: " << xd << endl;
    cout << "long double: " << xl << endl;

    return 0;
}
