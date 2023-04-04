#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int start = 0, end = n - 1, temp;

        while (start < end)
        {
            temp = 0;

            if (arr[start] == 0)
            {
                start++;
            }
            else if (arr[end] == 1)
            {
                end--;
            }
            else
            {
                temp = arr[start];
                arr[start] = arr[end];
                arr[end] = temp;
                start++;
                end--;
            }
        }

        for (int i = 0; i < n; i++)
        {
            cout << arr[i]<<" ";
        }
    }
}

