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

// node* insertEnd(node*&head, int n){
//     node*temp = new node(n);
//     if(head==NULL){
//         return temp;
//     }
//     node * curr = head;
//     while(curr->next!=NULL){
//         curr = curr->next;
//     }curr->next = temp;
//     return head;
// }

// node* deleteHead(node*head){
//     if(head==NULL){
//         return NULL;
//     }else{
//         node* temp=head->next;
//         // node* temp = head;
//         // temp = temp->next;
//         delete head;
//         return temp;
//     }
// }

node *dellast(node*head){
    if(head==NULL){
        return NULL;
    }if(head->next==NULL){
        delete head;
        return NULL;
    }
    node* curr =head;
    while(curr->next->next!=NULL){
        curr = curr->next;
    }
    delete curr->next;
    curr->next=NULL;
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
    // cout<<"Inserting at tail"<<endl;
    // head = insertEnd(head,100);
    // head = insertEnd(head,110);
    // head = insertEnd(head,120);
    // head = insertEnd(head,130);
    // display(head);cout<<endl;
    // cout<<"delete head"<<endl;
    // deleteHead(head);
    // cout<<endl;
    // display(head);
    dellast(head);    
    cout<<endl;
    display(head);
    cout<<endl<<"last element is deleted";

    return 0;
}