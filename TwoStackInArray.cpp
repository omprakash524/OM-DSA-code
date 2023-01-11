#include<iostream>
using namespace std;
// implement two stack in a array
struct twostack{
    int *arr,cap,top1,top2;
    twostack(int n){
        cap = n;
        top1 = -1;
        top2 = cap;
        arr = new int[n];
    }
    void push1(int x){
        if(top1<top2-1){
            top1++;
            arr[top1]=x;
        }}
    void push2(int x){
        if(top1<top2-1){
            top2--;
            arr[top2]=x;}
        }
    }
    int pop(){
        if(top>=0){
            int x=arr[top1];
            top--;
            return x;
        }else{
            exit(1);
        }
    
}
int main(){

    return 0;
}