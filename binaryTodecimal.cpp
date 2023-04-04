#include <bits/stdc++.h>
using namespace std;

int binaryToDecimal(int n)
{

    int last_digit, res = 0;
    int pow = 1;
    while (n > 0)
    {
        last_digit = n % 10;
        res += pow * last_digit;
        pow *= 2;
        n /= 10;
    }
    return res;
}

int octalToDecimal(int n)
{
    int last_digit, res = 0;
    int pow=1;
    while(n>0){
        last_digit = n%10;
        res+=pow * last_digit;
        pow*=8;
        n/=10;
    }

    return res;
}

int hexaDecimaltoDecimal(string input){
    int res=0;
    int pow=1;
    int size = input.size();
    for(int i=size-1;i>=0;i--){
        if(input[i]>='0' && input[i]<='9'){
            res+=pow*(input[i] - '0');
        }
        else{
            res+=pow*(input[i]-'A'+10);
        }
        pow*=16;

    }
    return res;

}

void decimalToBinary(int n){

    int binary[32];
    int i=0;
    while(n>0){
        binary[i]=n%2;
        n=n/2;
        i++;
    }

    for(int j=i-1;j>=0;j--){
        cout<<binary[j];
    }

}

void decimalToOctal(int n){

    int octal[32];
    int i=0;
    while(n>0){
        octal[i]=n%8;
        n=n/8;
        i++;
    }

    for(int j=i-1;j>=0;j--){
        cout<<octal[j];
    }

}

void decimalToHexaDecimal(int n){

    char hexaDecimal[100];
    int i=0;
    while(n!=0){
        int temp=0;

        temp=n%16;
        if(temp<10){
            hexaDecimal[i] = temp + 48;
            i++;
        }
        else{
            hexaDecimal[i] = temp + 55;
            i++;

        }
      
        n=n/16;
    }

    for(int j=i-1;j>=0;j--){
        cout<<hexaDecimal[j];
    }

}


int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    

    //int n,ans,ans2=0;

    // cin >> n;
    /*ans = binaryToDecimal(n);
 
    cout << ans << endl; 

    ans2=octalToDecimal(n);
    cout<<ans2<<endl; */
/*
    string input;
    cin>>input;

    ans3 = hexaDecimaltoDecimal(input);
    cout<<ans3<<endl; */
    int n;
    cin>>n;

    //decimalToBinary(n);

   
    decimalToHexaDecimal(n);



    return 0;
}