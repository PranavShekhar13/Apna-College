#include <iostream>
#include <string.h>
using namespace std;

bool checkString(string input)
{

    for (int i = 0; i < input.size(); i++)
    {
        if (!((input[i] >= 'A' && input[i] <= 'Z') || (input[i] >= 'a' && input[i] <= 'z')))
        {
            return false;
        }
    }

    return true;
}

int main()
{

    string input;
    string result="";


    cin >> input;

    bool check = checkString(input);

    if (check)
    {
        for (int i = input.size()-1; i >= 0; i--)
        {
            result+=input[i];
        }
    }

    if( input == result){
        cout<<"you inputted a strong string"<<endl;
    }
    else{
        cout<<"you inputted a weak string"<<endl;
    }
}