//arrfun4.cpp --functions with an array 
#include <iostream>
const int ArSize = 8;
int sum_arr(const int * begin, const int * end);
int main()
{
    using namespace std;
     int cookies[ArSize] = {1,2,4,8,16,32,64,128};
     //some systems require preceding int with static to 
     //enable arrary initialization
     
     int sum = sum_arr(cookies, cookies + ArSize);
     cout << "Total cookies eaten: " << sum << endl;
     sum = sum_arr(cookies, cookies + 3);
     cout << "First three eaters are " << sum  << "cookies.\n";
     sum = sum_arr(cookies + 4, cookies + 8);
     cout << "Last four eaters are " << sum << " cookies.\n";
     return 0;
}

//return the sum of an integer array 
int sum_arr(const int * begin, const int * end)
{
     const int * pt;
     int total = 0;
    
     for (pt = begin; pt != end; pt++)
          total = total + *pt;
     return total;
}
