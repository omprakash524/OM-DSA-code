#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node*next;
    node(int d){
        data = d;
        next = NULL;
    }
};
struct Queue{
    node*front,*rear;
    Queue(){
        front=rear=NULL;
    }
    void enque(int x){
        node*temp = new node(x);
        if(rear==NULL){
            front=rear=temp;
            return;
        }else{
            rear->next = temp;
            rear = temp;
        }
    }
    void deque(){
        if(front==NULL){
            return;
        }else{
            node*temp = front;
            front = front->next;
            if(front==NULL){
                rear=NULL;
            }
            delete(temp);
        }
    }
};
int main(){
    Queue q;
    q.enque(1);
    q.enque(2);
    q.enque(3);
    q.enque(4);
    q.enque(5);
    q.deque();
    cout<<"Queue front : "<<(q.front)->data<<endl;
    cout<<"Queue rear : "<<q.rear->data<<endl;
    return 0;
}