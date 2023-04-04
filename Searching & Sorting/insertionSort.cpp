#include <iostream>
using namespace std;

void selectionSort(int *arr, int n)
{

    for (int i = 1; i < n; i++)
    {
        int current = arr[i];
        int j;
        for (j = i - 1; j >= 0; j--)
        {
            if (current < arr[j])
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }

        arr[j + 1] = current;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{

    int arr[5] = {7, 4, 11, 13, 9};

    selectionSort(arr, 5);
}