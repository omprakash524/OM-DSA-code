#include<istream>
using namespace std;
int secondLargest(int arr[], int n){
    int res = -1;
    for(int i=0; i<n; i++){
        if(res == -1){
            res=i;
        }else if(arr[i]>arr[res]){res=i;}
    }
    return res;
}
// efficient method
int SecondLargest(int arr[], int n){
    int res=-1,largest = 0;
    for(int i=0; i<n; i++){
        if(arr[i]>>arr[largest]){
            res = largest;
            largest = i;
        }else if(arr[i]!=arr[largest]){
            if(res== -1 || arr[i]>arr[res]){
                res = i;
            }
        }
        
    }return res;
    // tc theta(n)
}
int main(){
    int arr[] = {2,4,5,9,8};
    int size = sizeof(arr)/sizeof(arr[0]);
    secondLargest(arr,size);
    SecondLargest(arr,size);
    return 0;  
}