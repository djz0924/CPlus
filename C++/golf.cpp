#include <iostream>
const int MAX_NUMBER_SCORES = 10;
void fill_array(int a[], int size, int& number_used);
double compute_average(const int a[], int number_used);
void show_difference(const int a[], int number_used);
int main()
{
    using namespace std;
    int score[MAX_NUMBER_SCORES], number_used;
    cout << "This program reads golf socres and shows\n"
         << "HOW MUCH EACH DIFFERS FRO THE AVERAGE.\n";
    cout << "Enter gold scores:\n";
    fill_array(score, MAX_NUMBER_SCORES, number_used);
    show_difference(score, number_used);
    return 0;
}
void fill_array(int a[], int size, int& number_used)
{
    using namespace std;
    cout << "Enter up to " << size << " nonnegative whole numbers.\n"
         << "Mark the end of the list with a negative number.\n";
    int next, index = 0; 
    cin >> next;
    while ((next >=0 ) && (index < size ))
    {
    a[index] = next;
    index++;
    cin >> next;       
    }
   number_used = index;
 }
 
double compute_average(const int a[], int number_used)
{
    double total = 0;
    for (int index = 0; index < number_used; index++)
    total = total + a[index];
    if (number_used > 0) 
    { 
       return (total/number_used);
    }
    else
   {
   using namespace std;
   cout << "ERROR: number of elements is 0 in compute_avarage.\n"
        << "compute_average return 0.\n";
        return 0;
   }
}
   void show_difference(const int a[], int number_used)
    {
    using namespace std;
    double average = compute_average(a, number_used);
    cout << "Average of the "<< number_used 
         << " scores = " << average << endl
         << " The scores are:\n";
    for (int index = 0; index < number_used; index++)
    cout << a[index] << " differs from average by "
         << (a[index] - average) << endl;
 }
