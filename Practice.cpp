#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node*next;
    node(int d){
        data = d;
        next=NULL;
    }
};
struct mystack{
    node*head;
    int size;
    mystack(){
        head=NULL;
        size=0;
    }
    void push(int);
    int pop();
    int size1();
    bool isEmpty();
    int peek();
};
void mystack::push(int d){
    node*temp = new node(d);
    temp->next = head;
    head=temp;
    size++;
    cout<<d<<" is pushed in push"<<endl;
}
int mystack::pop(){
        if(head==NULL){
            return INT_MAX;
        }else{
            int res = head->data;
            node*temp = head;
            head = head->next;
            delete(temp);
            size--;
            return res;
        }
    }
int mystack::size1(){
    cout<<"size of stack : ";
        return size;
    }
bool mystack::isEmpty(){
        return(head==NULL);
    }

int mystack::peek(){
        if(head==NULL){
            return INT_MAX;
        }else{
            return head->data;
        }
    }

int main(){
    mystack s;
    cout<<"Stack using LL"<<endl;
    s.push(50);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    cout<<s.size1()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.isEmpty()<<endl;
    cout<<s.peek()<<endl;
}