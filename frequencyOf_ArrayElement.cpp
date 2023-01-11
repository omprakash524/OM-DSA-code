#include<iostream>
#include<unordered_map>
using namespace std;
void PrintFre(int arr[], int n){
    for(int i=0; i<n; i++){
        bool flag = false;
        for(int j=0; j<i; j++){
            if(arr[i]==arr[j]){
                flag = true;
                break;
            }
            if(flag==true){continue;
            int fre = 1;
            for(int j=i+1; j<n; j++){
                if(arr[i]==arr[j]){
                    fre++;
                }
                cout<<arr[i]<<" "<<fre<<endl;
            }
            }
        }
    }
} // tc O(n^2)
// aux space : O(1)

//  efficient solution
int countfre(int arr[], int n){
    unordered_map<int, int> unm;
    for(int x:arr){
        unm[x]++;
    }
    for(auto e:unm){
        cout<<e.first<<" "<<e.second<<endl;
    }
}
// tc : O(n)
// aux space : O(n)
int main(){
    int arr[] = {10,20,20,30,10};
    int size = sizeof(arr)/sizeof(arr[0]);
    PrintFre(arr,size);
    cout<<countfre(arr,size);


    return 0;
}