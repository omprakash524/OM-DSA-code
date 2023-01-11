#include<iostream>
using namespace std;
struct node{
    int data;
    node* prev;
    node* next;
    node(int d){
        data = d;
        prev = NULL;
        next = NULL;
    }
};
// display the circular doubly ll
void PrintList(node*&head){
    node* temp=head;

}
// circular doubly linked list
void insertAtHead(node*&head, int val){
    node*temp = new node(val);
    if(head==NULL){
        temp->next=temp;
        temp->prev=temp;
        return temp;
    }
    temp->prev = head->prev;
    temp->next = head;
    head->prev->next = temp;
    head->prev = temp;
    return temp;
    
}

 
int main(){
    cout<<"I am Circular doubly linkedlist"<<endl;
    node*head = NULL;
    
    

    return 0;
}