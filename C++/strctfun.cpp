//strctfun.cpp  -- functions with a structure argument
#include <iostream>
#include <cmath>

//structure declarations
struct polar
{
      double distance;           //distance from orgin
      double angel;              //direction from origin
};

struct rect
{
      double x;     //horizontal distance from origin
      double y;     //vertical distance from origin
};

//prototypes
polar rect_to_polar(rect xypos);
void show_polar(polar dapos);

int main()
{
    using namespace std;
    rect rplace;
    polar pplace;
 
    cout << "Enter the x and y values: ";
    while (cin >> rplace.x >>rplace.y)   //click use of cin
    {
         pplace = rect_to_polar(rplace);
         show_polar(pplace);
         cout << "Next two numbers (q to quit): ";
    }
    cout << "Done.\n";
    return 0;
}

//conver rectangular to poloar coordinates
polar rect_to_polar(rect xypos)
{
    using namespace std;
    polar answer;
   
    answer.distance = sqrt(xypos.x * xypos.x + xypos.y * xypos.y);
    answer.angel = atan2(xypos.y, xypos.x);
    return answer;     //return a polar structure 
}  

//show polar coordinates, converting angle to degrees
void show_polar (polar dapos)
{
     using namespace std;
     const double Red_to_deg = 57.29577951;
     cout << "distance = " << dapos.distance;
     cout << ", angel = " <<dapos.angel * Red_to_deg;
     cout << " degrees\n";
}
