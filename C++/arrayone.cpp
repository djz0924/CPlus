//arrayone.cpp --small arrays of integers
#include <iostream>
int main()
{
    using namespace std;
    int yams[3];  // creats array with three elements
    yams[0] = 7;  //assign value to first element
    yams[1] = 8;
    yams[2] = 6;
  
    int yamcosts[3] = {20, 30, 5};  //creats, initialize array
//NOTE: If your C++ complier or translator can't initialize 
//this array, use static int yamcasts[3] instead of int yamcasts[3]

    cout << "Total yams = ";
    cout << yams[0] + yams[1] + yams[2] << endl;
    cout << "The pascakge with " << yams[1] << " yams costs ";
    cout << yamcosts[1] << " Cents per yam.\n";
    int total = yams[0] * yamcosts[0] + yams[1] * yamcosts[1];
    total = total + yams[2] * yamcosts[2];
    cout << "The total yam expense is " << total << "cents.\n";

    cout << "\nSize of yams arrary = " << sizeof yams << " bytes.\n";
    cout << "Size of one element = " << sizeof yams[0] << " bytes.\n";
    return 0;
}
