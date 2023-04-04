#include <iostream>
using namespace std;

int BinaryToDec(int n)
{
    int pv = 1, ans = 0, rem = 0;
    while (n > 0)
    {
        rem = n % 10;
        ans += pv * rem;
        pv = pv * 2;
        n = n / 10;
    }
    return ans;
}

int DecToBin(int n)
{
    int pv = 1, rem = 0, ans = 0;
    while (n > 0)
    {
        rem = n % 2;
        ans += pv * rem;
        pv = pv * 10;
        n = n / 2;
    }

    return ans;
}

int main()
{

    int a = BinaryToDec(1011);
    cout << a << endl;

    int b = DecToBin(11);
    cout << b << endl;
}