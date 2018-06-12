#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    cout << "Hello Out There!\n";

    cout << "This statement is pointless,\n"
         << "because it will never be excuted.\n"
         << "This is just a toy program to illustrate exit.\n";
    
    int i;
    for (i = 0; i< 10; i++)
    cout << (rand() % 11) << endl;
   
    cout << "This statement is pointless,\n"
         << "because it will never be excuted.\n"
         << "This is just a toy program to illustrate exit.\n";
    int j;
    srand(9);
    for (j = 0; j < 10; j++ )
        cout << (rand( ) % 11 ) << endl;
    cout << "This statement is pointless,\n"
         << "because it will never be excuted.\n"
         << "This is just a toy program to illustrate exit.\n";
    srand(99);
    for (j = 0; j < 10; j++ )
        cout << (rand( ) % 11 ) << endl;
     
    exit(1);
    return 0;
}
