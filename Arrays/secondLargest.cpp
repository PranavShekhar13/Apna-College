#include <iostream>
#include <limits.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int i = 0;
    int largest = INT_MIN;
    int second_largest = INT_MIN;
    while (i < n)
    {

        if (arr[i] > largest)
        {
            second_largest = largest;
            largest = arr[i];
        }

        else if (arr[i] > second_largest)
        {
            if (arr[i] != largest)
            {
                second_largest = arr[i];
            }
        }

        i++;
    }

    cout << second_largest << endl;
}