#include<iostream>
#include<unordered_set>
using namespace std;
bool isPair(int arr[], int n, int sum){
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]+arr[j]==sum){
                return true;
            }
        }
        
    }return false;
}

// efficient
bool isPair1(int arr[], int n, int sum){
        unordered_set<int> s;
        for(int i=0; i<n; i++){
            if(s.find(sum-arr[i])!=s.end()){
                return true;
                s.insert(arr[i]);
            }
            // return false;
        }return false;
}
int main(){
    int arr[] = {3,2,8,15,-8};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<isPair(arr,size,17)<<endl;
    cout<<isPair1(arr,size,10)<<endl;
}