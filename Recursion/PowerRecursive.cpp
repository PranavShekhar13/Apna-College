#include <iostream>
using namespace std;

int powerRecur(int n, int x)
{
    if (x == 0)
    {
        return 1;
    }
    return n * powerRecur(n, x - 1);
}

int main()
{

    int n, x;
    cin >> n >> x;
    cout << powerRecur(n, x) << endl;
}