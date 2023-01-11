#include<bits/stdc++.h>
using namespace std;
struct QNode{
    int data;
    QNode*next;
    QNode(int d){
        data = d;
        next = NULL;
    }
};
struct Queue{
    QNode*front,*rear;
    Queue(){
        front=rear=NULL;
    }
    void enQueue(int x){
        QNode*temp = new QNode(x);
        if(rear==NULL){
            front=rear=temp;
            return;
        }else{
            rear->next = temp;
            rear = temp;
        }
    }
    void deQueue(){
        if(front==NULL){
            return;
        }else{
            QNode*temp = front;
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
    q.enQueue(10);
    q.enQueue(20);
    q.enQueue(30);
    q.enQueue(40);
    q.enQueue(50);
    q.enQueue(60);
    q.deQueue();
    q.deQueue();
    q.enQueue(70);
    q.enQueue(80);
    q.enQueue(90);
    q.deQueue();
    q.deQueue();
    cout<<"Queue Front : "<<(q.front)->data<<endl;
    cout<<"Queue Rear  : "<<(q.rear)->data<<endl;
}