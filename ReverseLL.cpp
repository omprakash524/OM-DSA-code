#include<iostream>
#include<vector>
using namespace std;
struct node{
    int data;
    node *next;
    node(int n){
        data = n;
        next = NULL;
    }
};
// reverse a linked list
// naive approach
node*revList(node*&head){
    vector<int> arr;
    for(node*curr=head; curr!=NULL;curr=curr->next){
        arr.push_back(curr->data);
    }
    for(node*curr=head; curr!=NULL; curr=curr->next){
        curr->data=arr.back();
        arr.pop_back();
    }
    return head;
}
// reverse efficient solution
node*reverse(node*head){
    node*curr = head;
    node*prev = NULL;
    while(curr!=NULL){
        node*next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev; // prev is new head
} // TC: O(n)
// Aux space O(n)



// method 1(using length of the linkedlist)
void PrintNthFromEnd(node*&head,int n){
    int len = 0;
    for(node* curr = head;curr!=NULL; curr=curr->next){
        len++;
    }
    if(len<n){return;}
    node*curr = head;
    for(int i=0; i<len-n+1; i++){
        curr = curr->next;
    }
    cout<<(curr->data)<<" ";
}
// method 2 (using two pointer approach)
void PrintNthEnd(node*&head, int n){
    if(head==NULL){return;}
    node*first = head;
    for(int i=0;i<n;i++){
        if(first==NULL){return;}
        first = first->next;
    }
    node*second = head;
    while(first!=NULL){
        second = second->next;
        first = first->next;
    }
    cout<<(second->data)<<endl;
}


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
void display(node*head){
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
    // display(head);cout<<endl;
    // head = insertEnd(head,100);
    // head = insertEnd(head,110);
    // head = insertEnd(head,120);
    // head = insertEnd(head,130);
    // display(head); 
    // head = sortedInsert(head,1); cout<<endl;
    // display(head); cout<<endl;

    // cout<<"Middle element is : ";
    // printMiddle(head);
    // cout<<endl;
    // display(head);
    // cout<<endl<<"Midde elem efficient : ";
    // PrintMiddle(head);
    // display(head);
    // cout<<endl<<"PrintNthFromEnd : ";
    // PrintNthFromEnd(head,4); cout<<endl;
    // display(head); cout<<endl;
    // cout<<"PrintNthEnd : ";
    // PrintNthEnd(head,3);
    // display(head);
    cout<<endl<<"displaying in reverse order : ";
    revList(head); 
    display(head);
    cout<<endl<<"Displaying in rev efficient : ";
    reverse(head);
    display(head);

    return 0;
}