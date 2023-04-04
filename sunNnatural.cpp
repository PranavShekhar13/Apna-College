#include <iostream>

using namespace std;

int sumN(int n)
{

    int ans = n * ((n + 1) / 2);

    return ans;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;

    cin >> n;

    int ans = sumN(n);

    cout<<ans<<endl;

    return 0;
}
