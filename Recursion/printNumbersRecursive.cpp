#include <iostream>
using namespace std;

int printRecurs(int n)
{
    if (n == 1)
    {
        return 1;
    }
    int out = printRecurs(n - 1);
    cout << out << " ";
    return 1 + out;
}

int main()
{

    int n;
    cin >> n;
    cout << printRecurs(n);
}