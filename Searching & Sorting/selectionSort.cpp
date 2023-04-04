#include<iostream>
using namespace std;

void selectionSort(int *arr, int n){  //Smallest Element gets it's right place after one round.  -> Calculate min in each round swap it with arr[i]. i=0 to n-1

for(int i=0;i<n-1;i++){    // Round 0 - Round n-2 i.e till <n-1 Check with examples {1,3,6,9,0,4} and {5,4,3,2,1}

    int min=arr[i], min_index=i;
    for(int j=i+1;j<n;j++){
        if(arr[j]<min){
            min=arr[j];
            min_index =j;
        }
    }

    int temp=arr[i];
    arr[i]=arr[min_index];
    arr[min_index] = temp;
}

for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}


}





int main(){

int arr[6] = {1,3,6,9,0,4};

selectionSort(arr,6);



}