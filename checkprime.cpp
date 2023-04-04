#include <iostream>
#include <math.h>

using namespace std;

int main()
{

/*
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif */

    int n;

    cin >> n;
    bool signal = false;

    if (n % 2 != 0)
    {
        if (n % 5 != 0)
        {
            for (int i = 3; i <= int(sqrt(n)); i+=2)
            {
                if (n % i == 0)
                {
                    signal = true;
                    break;
                }
               
            }
            if(signal){
                cout<<"Not a Prime Number"<<endl;
            }
            else{
                cout<<"Prime Number"<<endl;
            }

            
        }
        else
        {
            cout << "Not a Prime Number" << endl;
        }
    }


    else
    {
        cout << "Not a Prime Number" << endl;
    }

    return 0;
}