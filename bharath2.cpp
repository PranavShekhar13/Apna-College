#include <bits/stdc++.h>
using namespace std;

int minimumReducedCake(int *cakes, int reduction, int length){

    int k= 0;
    for(int i=0;i<length;i++){
        if(cakes[i]>reduction){
            k+= cakes[i]-reduction;
            
        }
    }

    return k;
}

int main(){

    int n, m;

    cin>>n;
    cin>>m;

    int cakearr[n];

    for(int i=0; i<n;i++){
        cin>>cakearr[i];
    }

    int k= minimumReducedCake(cakearr,m, n);

    cout<<k;
    
}