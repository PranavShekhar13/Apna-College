#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        multiset<long long> s;

        while (n--)
        {
            long long i;
            cin >> i;
            s.insert(i);
        }

        long long eat = 0;

        while (k--)
        {
            auto largest_it = (--s.end());
            long long i = *largest_it;
            eat += i;
            s.erase(largest_it);
            s.insert(i / 2);
        }
        cout << eat << endl;
    }
}