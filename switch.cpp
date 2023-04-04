#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

#endif

    char button;

    cin >> button;

    switch (button)
    {
    case 'A':

        cout << "Hello" << endl;

        break;
    case 'B':

        cout << "Hola" << endl;

        break;
    case 'C':

        cout << "Namaste" << endl;

        break;

    default:
    
        cout << "Still Learning" << endl;

        break;
    }

    return 0;
}