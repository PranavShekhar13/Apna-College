#include <bits/stdc++.h>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;

    cin >> n;
    int c3 = 0, c5 = 0;
    string str = "";
    for (int i = 1; i <= n; i++)
    {

        c3++;
        c5++;
        str = "";
        if (c3 == 3)
        {
            str += "fizz";
            c3 = 0;
        }
        if (c5 == 5)
        {
            str += "buzz";
            c5 = 0;
        }

        if (str == "")
        {
            cout << i << endl;
        }
        else
        {
            cout << str << endl;
        }
    }
}