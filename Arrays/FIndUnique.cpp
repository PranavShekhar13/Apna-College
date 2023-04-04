#include <iostream>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, found = 0;
        cin >> n;
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        bool unique;
        for (int i = 0; i < n; i++)
        {
            unique = true;
            for (int j = 0; j < n; j++)
            {

                if (j != i)
                {
                    if (arr[i] == arr[j])
                    {
                        unique = false;
                        break;
                    }
                }
            }
            if (unique)
            {
                found = arr[i];
                break;
            }
        }
        if (unique)
        {
            cout << found << endl;
        }
        else
        {
            cout << "No Unique Found" << endl;
        }
    }
}
