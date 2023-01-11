#include<iostream>
using namespace std;
struct node{
    int data;
    node*next;
    node(int d){
        data = d;
        next = NULL;
    }
};
void PrintLL(node*&head){
    if(head==NULL){
        return;
    }else{
        node*p=head;
        do{
            cout<<(p->data)<<" ";
            p=p->next;
        }while(p!=head);
    }
}

// insert at the  end of the linkedlist
// naive solution 
node*inserAtEnd(node* &head, int x){
    node* temp = new node(x);
    if(head==NULL){
        temp->next = temp;
        return temp;
    }else{
        node*curr = head;
        while(curr->next!=head){
            curr = curr->next;
        }curr->next = temp;
        temp->next = head;
        return head;
    }
}
// insert at the  end of the linkedlist
// efficient method constant time
node*inserAtEnd1(node* &head, int x){
    node*temp = new node(x);
    if(head==NULL){
        temp->next = temp;
        return temp;
    }else{
        temp->next = head->next;
        head->next = temp;
        int t = temp->data;
        temp->data = head->data;
        head->data = t;
        return temp; 
    }
}

node*insertAtBegin(node* &head, int n){
    node* temp = new node(n);
    if(head==NULL){
        temp->next = temp;
        return temp;
    }else{
        temp->next = head->next;
        head->next = temp;
        int store = head->data;
        head->data = temp->data;
        temp->data = store;
        return head;
    }
}

// delete head of the circular linkedlist
node*delHead(node*&head){
    if(head==NULL){return NULL;}
    if(head->next==head){
        delete head;
        return NULL;
    }
    node* curr = head;
    while(curr->next!=head){
        curr = curr->next;
    }
    curr->next = head->next;
    delete head;
    return(curr->next);
    cout<<curr->next<<endl;
}

// efficient method to delete the head in constant time
node*delHead1(node* &head){
    if(head==NULL){return NULL;}
    if(head->next==NULL){
        delete head;
        return NULL;
    }
    head->data = head->next->data;
    node*temp = head->next;
    head->next = head->next->next;
    delete temp;
    return temp;
}

int main(){
    node*head = new node(10);
    head->next = new node(20);
    // head->next->next = new node(30);
    head->next->next = head;
    insertAtBegin(head,30);
    insertAtBegin(head,40);
    insertAtBegin(head,50);
    PrintLL(head);
    inserAtEnd(head,500);cout<<endl;
    PrintLL(head);
    inserAtEnd1(head,600);cout<<endl;
    PrintLL(head);
    // delHead(head); cout<<endl;
    // PrintLL(head);
    delHead1(head); cout<<endl;
    PrintLL(head);



    return 0;
}