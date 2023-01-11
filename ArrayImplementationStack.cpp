#include<iostream>
using namespace std;
struct mystack{
    int *arr;
    int cap;
    int top;
    mystack(int d){
        cap = d;
        arr=new int [cap];
        top = -1;
    }
    void push(int x){
        if(top==cap-1){
            cout<<"Stack over flow"<<endl;
        }else{
        top++;
        arr[top]=x;
        cout<<x<<" is pushed in stack"<<endl;
    }}
    int pop(){
        if(top==-1){
            cout<<"Stack is underflow"<<endl;
        }else{
        int res = arr[top];
        top--;cout<<"poped element : ";
        return res;
        // cout<<res<<" is pop element"<<endl;
    }}
    int peek(){
        return arr[top];
    }
    int size(){
        return (top+1);
    }
    bool isEmpty(){
        return(top==-1);
    }
}; // end of the structure mystack
int main(){
    mystack s(5);
    // cout<<s.pop()<<endl;
    // cout<<s.peek()<<endl;
    s.push(1);
    s.push(2);
    s.push(4);
    s.push(5);
    s.push(6);
    s.push(7);
    cout<<"s.pop() : "<<s.pop()<<endl;
    cout<<"s.size() : "<<s.size()<<endl;
    cout<<"s.peek() : "<<s.peek()<<endl;
    cout<<"isEmpty : "<<s.isEmpty()<<endl;

    return 0;
}