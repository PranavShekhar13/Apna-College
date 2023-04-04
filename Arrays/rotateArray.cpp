#include <iostream>
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
    int d;
    cin >> d;

    int j = n - 1;

    for (int i = 0; i < n / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        j--;
    }

    int k = (n - d) - 1;

    for (int i = 0; i < (n - d) / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[k];
        arr[k] = temp;
        k--;
    }

    int l = n - 1;

    for (int i = n - d; i < (((n-d)+n)/2); i++)
    {
        int temp = arr[i];
        arr[i] = arr[l];
        arr[l] = temp;
        l--;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}