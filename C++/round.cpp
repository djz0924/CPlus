#include <iostream>
#include <cmath>

using namespace std;

double round(double number);

int main()
{
    double doubleValue;
    char ans;
    do 
    {
        cout << "Enter a double value: ";
        cin >> doubleValue;
        cout << "Rounded that number is " << round(doubleValue) << endl;
        cout << "Agin? (y/n): ";
        cin >> ans;
    }
    while (ans == 'y' || ans == 'Y');
    cout << "End of testing.\n";
    return 0;
}

double round(double number)
{
    return static_cast<int>(floor(number + 0.5));
}
