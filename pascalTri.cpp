#include <iostream>

using namespace std;

int fact(int a)
{
    int fact = 1;

    for (int i = 2; i <= a; i++)
    {
        fact *= i;
    }
    return fact;
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << fact(i) / (fact(i - j) * fact(j))<<" ";
        }

        cout << endl;
    }

    return 0;
}