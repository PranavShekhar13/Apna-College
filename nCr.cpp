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

    int n, r;

    cin >> n >> r;

    int ans = fact(n) / (fact(r) * fact(n - r));

    cout << ans << endl;
}