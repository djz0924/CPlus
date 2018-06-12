#include <iostream>
//#include <cstdlib>
using namespace std;
void Swap(int A[], int i, int j)
{
     int temp = A[i];
     A[i] = A[j];
     A[j] = temp;
}


void BubbleSort(int A[], int n)
{
    for(int j = 0; j <= n-1; j++)
    {
       for(int i = 0; i <= n-1-j; i++)
       {
          if(A[i] > A[i+1])
          {
             Swap(A, i, i+1);
          }
       }         

    }
}

int main()
{
    int A[] = {6, 5, 3, 1, 8, 7, 2, 4};
    int n = sizeof(A)/sizeof(int);
    BubbleSort(A,n);
    cout << "BubbleSort Result: " << endl;  
    for (int i = 0; i < n; i++)
    {
        cout <<  A[i];
    }
    cout << "\n";
    return 0;
}
