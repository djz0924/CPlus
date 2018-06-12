//condit.cpp -- using the conditional operator
#include <iostream>
int main()
{
    using namespace std;
    int a, b;
    cout << "Enter two integers to compare." << endl;
    cout <<  "The first integer is: " << endl;
    cin >> a ;
    cout << "The second integer is: " << endl;
    cin >> b;
    cout << "Now, the integer iuput is done." << endl;
    cout << " The larger of " << a << " and " << b;
    int c = a > b ? a : b;
    cout << " is " << c << endl;
    return 0;
}
