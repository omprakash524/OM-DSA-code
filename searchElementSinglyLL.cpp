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

node *insertPos(node*head, int pos, int data){
     node* temp = new node(data);
     if(pos==1){
        temp->next=head;
        return temp;
     }
     node *curr = head;
     for(int i=1; i<=pos-2 && curr!=NULL; i++){
        curr = curr->next;
     if(curr==NULL){return head;}
     temp->next = curr->next;
     curr = curr->next;
     }return head;
}

int search(node*head, int x){
    int pos=1;
    node*curr = head;
    while(curr!=NULL){
        if(curr->data==x){
            return pos;
        }else{
            pos++;
            curr = curr->next;
        }
    }
    return -1;
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
    cout<<endl<<"last element is deleted"<<endl;
    insertPos(head,2,145);
    display(head);
    cout<<endl<<"search element : ";
    cout<<search(head,50);cout<<endl;
    // display(head);


    return 0;
} 