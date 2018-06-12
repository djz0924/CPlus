// morechar.cpp -- the char type and int type contrasted
#include <iostream>
int main()
{
	using namespace std;
	char ch = 'M';       //assign ascii code for  m to ch
	int i = ch;          //store same code in an int
	cout << "the ascii code for " << ch  << " is " << i << endl;
	cout << "add one to the character code:" << endl;
	ch = ch + 1;  // change character code in ch
	i = ch ;      // save new character code in i 
	cout << "the ascii code for " << ch  << " is " << i << endl;
	// using the cout.put() member function to display char 
	cout  << "displaying char ch using cout.put(ch): ";
	cout.put(ch);
	//using cout.put() ti display a chr constant 
	cout.put('!');
	
	cout << endl << "done" << endl;
	return 0;	
}