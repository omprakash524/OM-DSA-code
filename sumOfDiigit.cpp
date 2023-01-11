#include<iostream>
using namespace std;
int getSum(int n){
    if(n==0){
        return 0;
    }else{
        return getSum(n/10)+n%10;
    }
}
// tc theta(d)
// sc theta(d)

// iterative solution best as compared to recursion
int getSum1(int n){
    int res = 0;
    while(n>=0){
        res = res + n%10;
        n = n/10;
    }
    return res;
}
int main(){
    int n=345;
    cout<<getSum(n)<<endl;;
    cout<<getSum1(n);

    return 0;
}