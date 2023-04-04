#include <iostream>
using namespace std;

void fibo(int n)
{

    int t1 = 0;
    int t2 = 1;
    int nextTerm;

    for (int i = 1; i <= n; i++)
    {
        cout << t1 << endl;
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;

    fibo(n);

    return 0;
}