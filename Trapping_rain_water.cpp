#include<iostream>
using namespace std;
int getWater(int arr[], int n){
    int res = 0;
    for(int i=1; i<n-1; i++){
        int imax = arr[i];
        for(int j=0; j<i; j++){
            imax = max(imax,arr[j]);
        }
        int rmax = arr[i];
        for(int j=i+1; j<n; j++){
            res = res + (min(imax,rmax) - arr[i]);
        }
    }
    return res;
}

// efficient method
int getWater1(int arr[], int n){
    int res = 0;
    int lmax[n], rmax[n];
    // left max  
    lmax[0] = arr[0];
    for(int i=1; i<n; i++){
        lmax[i] = max(arr[i],lmax[i-1]);
    }
    // right max
    rmax[n-1] = arr[n-1];
    for(int i=n-2; i>=0; i--){
        rmax[i] = max(arr[i], rmax[i+1]);
    }
    // take min of left and right and subtract from current element
    for(int i=1; i<n-1; i++){
        res = res+(min(lmax[i], rmax[i])-arr[i]);
    }
    return res;
}
int main(){
    int arr[] = {3,0,1,2,5};
    cout<<getWater(arr,5)<<endl;
    cout<<getWater1(arr,5)<<endl;

    return 0;
}