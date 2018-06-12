// conver.cpp -- conver stone to pounds
# include <iostream>
int stonetolb(int);
int main()
{
    using namespace std;
    int stone;
    cout << "Enter the wight in stone: ";
    cin >> stone;
    int pounds = stonetolb(stone);
    cout << stone << " stone= ";
    cout << pounds << " pounds." << endl;
    return 0;
}
int stonetolb(int sts)
{
    return 14 * sts;
}
