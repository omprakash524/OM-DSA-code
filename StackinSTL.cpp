#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    cout<<"size of stack : "<<s.size()<<endl;
    cout<<"top of stack : "<<s.top()<<endl;
    s.pop();    
    cout<<"top of stack : "<<s.top()<<endl;
    while(s.empty()==false){ // while stack doesnot empty
        cout<<endl<<"top of stack : "<<s.top()<<" ";
        s.pop();
    }

    // container adapter
    // stack can be implemented on any underlaying container
    // 1. list
    // 2. vector
    // 3. dequeue (by default stack use dequeue) all TC IS O(1)
    // back() , size(), empty(), push_back(), pop_back() operations
    // push(), pop(), top(), size(),empty() all are O(1) TC

    
}