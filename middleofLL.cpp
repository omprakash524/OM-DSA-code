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
// naive solution
// print middle element of the linked list
void printMiddle(node*head){
    if(head==NULL){return;}
    int count=0;
    node*curr;
    for(curr=head; curr!=NULL; curr=curr->next){
        count++;
    }
    curr = head;
    for(int i=0; i<count/2; i++){
        curr = curr->next;
    }
    cout<<curr->data;
}

// print middle element of the linked list
// efficient method
void PrintMiddle(node*&head){
    if(head==NULL){return;}
    node* slow = head,*fast = head; // or node*slow=head;node*fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    cout<<(slow->data)<<endl;

}



// sorted insert in a linkedlist
node*sortedInsert(node*&head, int x){
    node*temp = new node(x);
    if(head==NULL){return temp;}
    if(x<head->data){
        temp->next = head;
        return temp;
    }
    node* curr = head;
    while(curr->next!=NULL && curr->data<x){
        curr = curr->next;
    }
    temp->next = curr->next;
    curr->next = temp;
    return head;
}
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
    head = insertBegin(head,10);
    head = insertBegin(head,20);
    head = insertBegin(head,30);
    head = insertBegin(head,40);
    head = insertBegin(head,50);
    head = insertBegin(head,60);
    display(head);cout<<endl;
    // head = insertEnd(head,100);
    // head = insertEnd(head,110);
    // head = insertEnd(head,120);
    // head = insertEnd(head,130);
    // display(head); 
    head = sortedInsert(head,1); cout<<endl;
    display(head); cout<<endl;

    cout<<"Middle element is : ";
    printMiddle(head);
    cout<<endl;
    display(head);
    cout<<endl<<"Midde elem efficient : ";
    PrintMiddle(head);
    display(head);

    return 0;
}