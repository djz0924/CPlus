// instr2.cp -- reading more than one word with getline
#include <iostream>
int main()
{
    using namespace std;
    const int ArSize = 20 ;
    char name[ArSize];
    char dessert[ArSize];
 
    cout << "Enter your name:\n";
    cin.getline(name, ArSize); //reads through newline
    cout << "Enter your favorite dessert:\n";
    cin.getline(dessert, ArSize);
    cout << "I have some delicous " << dessert << " for you, "<< name << ".\n"; 
    return 0;
}
