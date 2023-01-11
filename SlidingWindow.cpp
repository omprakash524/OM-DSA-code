#include<iostream>
using namespace std;

int max_sum = 0;
for(int i=0; i+k-1<n; i++){
    int sum = 0;
    for(int j=0; j<k;j++){
        sum += arr[i+j];
    }
    max_sum = max(sum,max_sum);
}
return max_sum;

bool isSubSum(int arr[], int n, int sum){
    int arr_sum=arr[0],s=0;
    for(int e=1;e<n;e++){
        // clean the prev window
        while(curr_sum>sum && s <e-1){
            if(curr_sum==sum){return true;
            }if(e<n){
                curr_sum += arr[e];
            }
        }
    }
    return(curr_sum == sum);
}
int main(){
    int arr[] = {1,8,30,-5,20,7};
    

    return 0;
}