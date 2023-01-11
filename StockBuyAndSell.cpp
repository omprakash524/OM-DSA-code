#include<iostream>
using namespace std;
// nive method
int maxProfit(int price[], int start, int end){
    if(end <= start){
        return 0;
    }int profit = 0;
    for(int i= start; i< end; i++){
        for(int j=i+1; j<=end; j++){
            if(price[j]>price[i]){
                int curr_profit = price[j]-price[i]+maxProfit(price,start,i-1)+maxProfit(price,j+1,end);
                profit = max(profit, curr_profit);
            }
        }
    }
    return profit;
}

// efficient methhod
int maxProfit1(int price[], int n){
    int profit = 0;
    for(int i=1; i<n; i++){
        if(price[i] > price[i-1]){
            profit += (price[i] - price[i-1]);
        }
    }
    return profit;
}
int main(){
    int arr[] = {1,5,3,8,12};
    int arr1[] = {3,1,4,8,7,2,5};
    cout<<maxProfit(arr,0,4)<<endl;
    cout<<maxProfit1(arr,4)<<endl;
    return 0;
}
