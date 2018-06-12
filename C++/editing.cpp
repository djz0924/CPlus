//program to creats afile called cplused.txt that is identical
//to th file cad.txt except that all occurrences of 'C' are replaced by "C++".
//Assumes that the uppercase letter 'C' does not occur in cad.txt
//except as the name of the C programming language.

#include <fstream>
#include <iostream>
#include <cstdlib>
using std::ifstream;
using std::ofstream;
using std::cout;

void addPlusPlus(ifstream& inStream, ofstream& outStream);
int main()
{
    ifstream fin;
    ofstream fout;

    cout << "Begin editing files.\n";
    fin.open("cad.txt");
    if (fin.fail())
    {
        cout << "Input file opening failed.\n";
        exit(1);
    }
    fout.open("cppad.txt");
    if (fout.fail())
    {
        cout << "Output file opening failed.\n";
        exit(1);
    }
    addPlusPlus(fin, fout);
    fin.close();
    fout.close();
    cout << "End of editing files.\n";
    return 0;
}
void addPlusPlus(ifstream& inStream, ofstream& outStream)
{
     char next;
     inStream.get(next);
     while (! inStream.eof())
     {
         if (next == 'C')
            outStream << "C++";
         else
            outStream << next;
         inStream.get(next);
     }
}
