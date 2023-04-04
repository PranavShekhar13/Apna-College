#include <bits/stdc++.h>
#include<string>
using namespace std;

int main()
{

    string s1 = "100";

    string s2 = "11";

    int x = stoi(s1);
    int y = stoi(s2);

   while(y!=0){
        unsigned carry = x & y;

        x = x ^ y;

        y= carry<<1;
   }

   cout<<to_string(x)<<endl;
}