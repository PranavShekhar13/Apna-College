#include <bits/stdc++.h>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int start, end, w, cel=0;

    cin >> start >> end >> w;

    while (start <= end)
    {
        cel= (5/9.0) * (start-32);
        cout<<start<<"\t"<<cel<<endl;
        start+=w;

    }
}