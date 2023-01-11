#include<iostream>
#include<unordered_set>
using namespace std;
// naive solution
int countDist(int arr[], int n){
    int res=0;
    for(int i=0; i<n; i++){
        bool flag = false;
        for(int j=0; j<i; j++){
            if(arr[i]==arr[j]){
                flag =  true;
                break;
            }
        }
        if(flag==false){
            res++;
        }
    }
    return res;
} // tc O(n^2)

// efficient solution
int countDistinct(int arr[], int n){
    unordered_set<int> uns;
    for(int i=0; i<n; i++){
        uns.insert(arr[i]);
    }return uns.size();
}
// tc theta(n)
// aux space  = O(n)

// further implementation
int countDistinct1(int arr[], int n){
    unordered_set<int> s(arr,arr+n);
    return s.size();
}
// tc theta(n)
// aux space  = O(n)

int main(){
    int arr[] = {10,20,10,20,30};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"naive solution : "<<countDist(arr,size)<<endl;
    cout<<"efficient solution : "<<countDistinct(arr,size)<<endl;
    cout<<"efficient solution 1 : "<<countDistinct1(arr,size)<<endl;

    return 0;
}