#include <iostream>
using namespace std;

int main()
{

    int n;

    cin >> n;
    int i = 1;

    while (n>0)
    {
        if ((i * i) == n)
        {
            break;
        }
        else if ((i * i) > n)
        {
            i -= 1;
            break;
        }

        i++;
    }

    cout << i<< endl;
}