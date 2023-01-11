#include<iostream>
using namespace std;
int getLargest(int arr[], int n){
    for(int i=0; i<n; i++){
        bool flag=true;
        for(int j=0; j<n;j++){
            if(arr[j]>arr[i]){
                flag = false;
                break;
            }
        }
        if(flag==true){
            return i;
        }
    }
    return -1;
}
int getLargest1(int arr[], int n){
    int res = 0;
    for(int i=0; i<n; i++){
        if(arr[i]>arr[res]){
            res = i;
        }
    }return res;
}
int main(){
    int arr[] = {2,3,4,5,6,55};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"largest number index no. : "<<getLargest(arr,size)<<endl;;
    cout<<"largest number index no. : "<<getLargest1(arr,size)<<endl;;

    return 0;
}