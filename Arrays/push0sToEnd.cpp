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
    int i = 0, k =0;
    while (i < n)
    {

        if (arr[i] != 0)
        {
            int temp = arr[i];
            arr[i] = arr[k];
            arr[k] = temp;
            k++;
        }
       
        i++;
        
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}