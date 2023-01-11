/*
#include<iostream>
#include<vector>
using namespace std;
struct mystack{
    vector<int> v;
    void push(int x){
        v.push_back(x);
    }
    int pop(){
        int res = v.back();
        v.pop_back();
        return res;
    }
    int size(){
        return v.size();
    }
    bool isEmpty(){
        return v.empty();
    }
    int peek(){
        return v.back();
    }
};
// T C : O(1)
int main(){
    mystack s;
    // cout<<s.pop()<<endl;
    // cout<<s.peek()<<endl;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    cout<<"s.pop() : "<<s.pop()<<endl;
    cout<<"s.size() : "<<s.size()<<endl;
    cout<<"s.peek() : "<<s.peek()<<endl;
    cout<<"isEmpty : "<<s.isEmpty()<<endl;
}
*/
// -------------------------------------
#include<iostream>
#include<vector>
using namespace std;
struct mystack{
    vector<int> v;
    void push(int x){
        v.push_back(x);
    }
    int pop(){
        int res = v.back();
        v.pop_back();
        return res;
    }
    int size(){
        return v.size();
    }
    int isEmpty(){
        return v.empty();
    }
    int peek(){
        return v.back();
    }
};
// tc : O(1)
int main(){
    mystack s;
    s.push(50);
    s.push(40);
    s.push(30);
    s.push(20);
    s.push(10);
    s.push(00);
    cout<<"peek : "<<s.peek()<<endl;
    cout<<"size : "<<s.size()<<endl;
    cout<<"s.pop : "<<s.pop()<<endl;
    cout<<"s.pop : "<<s.pop()<<endl;
    cout<<"s.pop : "<<s.pop()<<endl;
    cout<<"size : "<<s.size()<<endl;
    cout<<"peek : "<<s.peek()<<endl;
    cout<<"isEmpty : "<<s.isEmpty()<<endl;
}