#include <iostream>
using namespace std;

int main()
{
    int n, var = 1;
    cin >> n;
    int arr[n];

    for (int i = 0; i <= ((n - 1) / 2); i++)
    {
        arr[i] = var;
        var += 2;
    }

    if (n % 2 == 0)
    {
        var = n;
    }
    else
    {
        var = n - 1;
    }

    for (int i = ((n - 1) / 2) + 1; i < n; i++)
    {

        arr[i] = var;
        var -= 2;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}