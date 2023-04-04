#include <iostream>
using namespace std;

int main()
{

    /* #ifdef ONLINE_JUDGE
        frepen("input.txt", "r", cin);
        freopen("output.txt","w", cout);

    #endif */

    int n;

    cin >> n;

    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}