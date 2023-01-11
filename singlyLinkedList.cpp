#include<iostream>
using namespace std;
struct node{
    int data;
    node *next;
    node(int n){
        data = n;
        next = NULL;
    }
};
node*insertBegin(node*&head, int n){
    node* temp = new node(n);
    temp->next = head;
    return temp;

}

node* insertEnd(node*&head, int n){
    node*temp = new node(n);
    if(head==NULL){
        return temp;
    }
    node * curr = head;
    while(curr->next!=NULL){
        curr = curr->next;
    }curr->next = temp;
    return head;
}
node* display(node*head){
    node * temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
        cout<<temp->data<<"<->";
    }
}
int main(){
    node* head = NULL;
    head = insertBegin(head,30);
    head = insertBegin(head,40);
    head = insertBegin(head,50);
    head = insertBegin(head,55);
    head = insertBegin(head,60);
    display(head);cout<<endl;
    head = insertEnd(head,100);
    head = insertEnd(head,110);
    head = insertEnd(head,120);
    head = insertEnd(head,130);
    display(head); 

    return 0;
}