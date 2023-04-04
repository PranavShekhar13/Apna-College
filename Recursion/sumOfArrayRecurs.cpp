#include <iostream>
using namespace std;

int sumOfElements(int *arr, int size)
{

    if (size <= 0)
    {
        return 0;
    }

    return ((arr, size - 1) + arr[size - 1]);
}

int main()
{

    int a[] = {1, 2, 3};

    cout << sumOfElements(a, 3) << endl;
}