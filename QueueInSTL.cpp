#include<iostream>
#include<queue>
using namespace std;
int main(){
    // push,pop,front,back,empty,size = O(1)
    // container provides big O(1) times = list and dequeue(container adapter)
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    // cout<<"Queue front : "<<q.front()<<" and back : "<<" "<<q.back()<<endl;
    // q.pop();
    // cout<<"Queue front : "<<q.front()<<" and back : "<<" "<<q.back()<<endl;
    cout<<"Size of queue : "<<q.size()<<endl;
    while(q.empty()==false){
        cout<<"Queue front : "<<q.front()<<" and back : "<<" "<<q.back()<<endl;
        q.pop();
    }
    cout<<"Size of queue : "<<q.size()<<endl;
}