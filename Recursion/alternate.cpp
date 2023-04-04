#include <bits/stdc++.h>
using namespace std;

string alternate(string a)
{
    string result = "";
    for (int i = 0; i < a.size(); i++)
    {
        if (i % 2 != 0)
        {
            result += a[i];
        }
    }
    return result;
}

int main()
{
    string name;

    cin >> name;

    string n = alternate(name);

    cout << n << endl;
}