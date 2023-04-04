#include <iostream>
using namespace std;

int binarySearch(int *arr, int n, int x)
{
    int start = 0, end = n - 1;

    int mid;

    while (start <= end)
    {
        mid = (start + end) / 2;
        
        if (arr[mid] == x)
        {
            return mid;
        }
        else if (arr[mid] < x)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return -1;
}

int main()
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int x;
    cin >> x;

    int out;

    out = binarySearch(arr, n, x);

    cout << out << endl;
}