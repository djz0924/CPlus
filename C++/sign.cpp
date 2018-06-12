#include <iostream>
using namespace std;

/* This program shows the difference between signed and unsigned intergers.
 */
int main()
{
    short int i; 
    short unsigned int j;
    
    j = 60000;
    i = j;
    cout << i << " " << j << endl;
    return 0;
}
