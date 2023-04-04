#include<bits/stdc++.h>
#include <iostream>
using namespace std;

bool Solution(int *nums, int k, int t ){
    for(int i=0;i<4;i++){
        for(int j=0;j<i;j++){
            if(i!=j){
                if((abs(nums[i] - abs(nums[j]) <= t) && (abs(i-j)<=k))){
                    return true;
                }
            }
        }
    }

    return false;
}

int main()
{

int nums[4];
        for (int i = 0; i < 4; i++)
        {
            cin >> nums[i];
        }
        int k,t;
        cin >> k;
        cin>>t;

    bool ans = Solution(nums, k, t);

    if(ans == 1){
        cout<<"true";
    }
    else{
        cout<<"false";
    }

    
}