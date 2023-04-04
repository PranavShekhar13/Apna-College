#include <iostream>
using namespace std;

void bubbleSort(int arr *, int n)   //Largest Element gets it's right place after one round.  Compare every element with it's successor index element till the largest element gets it's place.
{
    for (int i = 0; i < n - 1; i++)  
    {

        for (int j = 0; j < n - 1 - i; j++)
        {

            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
}