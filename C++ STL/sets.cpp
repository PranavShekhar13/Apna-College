#include <bits/stdc++.h>
using namespace std;

void print(set<string> &s)
{
    for (auto &value : s)
    {
        cout << value << endl;
    }
}

int main()
{

    set<string> s;

    s.insert("abc");
    s.insert("zsdf");
    s.insert("cde");

    print(s);

    auto it = s.find("abc");

    if (it != s.end())
    {
        cout << (*it) << endl;
    }
}