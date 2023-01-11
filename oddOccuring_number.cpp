#include<iostream>
using namespace std;
// naive method

// efficient method
int findOdd(int arr[], int n){
    int res = 0;
    for(int i=0; i<n; i++){
        res = res ^ arr[i];
    }
    return res;
}

int main(){
    int arr[] = {4,3,4,4,5,5,3,3};
    // int n = sizeof(arr);
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++){
        int count = 0;
        for(int j=0; j<n; j++){
            count++;
        }
        if(count % 2 != 0){
            cout<<arr[i];
        }
    }
    // cout<<"h"; 
    cout<<findOdd(arr,n);
}