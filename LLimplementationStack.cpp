#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node*next;
    node(int x){
        data=x;
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
    void push(int x){
        node*temp=new node(x);
        temp->next=head;
        head=temp;
        size++;
        cout<<"| "<<x<<" |"<<" is pushed"<<endl;
    }
    int pop(){
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
    int size1(){
        return size;
    }
    bool isEmpty(){
        return (head==NULL);
         if(head==NULL){cout<<"yes"<<endl;}else{cout<<"No"<<endl;}
    }
    int peek(){
        if(head==NULL){
        return INT_MAX;
        }else{
            return head->data;
        }
    }
};  // end of structure
// TC : O(1) constant time
int main(){
    mystack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    cout<<"pop : "<<s.pop()<<endl;
    cout<<"peek : "<<s.peek()<<endl;
    cout<<"isEmpty : "<<s.isEmpty()<<endl;
    cout<<"size : "<<s.size1()<<endl;
    return 0;
}


/*
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
    head = temp;
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


*/