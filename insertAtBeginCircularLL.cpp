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
void printlist(node* head){
    if(head==NULL){return;}
    node*p=head;
    do{
        cout<<(p->data)<<" ";
        p=p->next;
    }while(p!=head);
}
// naive solution 
node*insertAtBegin(node*head,int x){
    node*temp = new node(x);
    if(head==NULL){
        temp->next=temp;
    }else{
        node*curr = head;
        while(curr->next!=head){
            curr=curr->next;
        }curr->next=temp;
        temp->next=head;
    }
    return temp;
}

// insert at head O(1) efficient solution
// little tricky
node*insertAtBegin1(node*head, int x){
    node*temp = new node(x);
    if(head==NULL){
        temp->next = temp;
        return temp;
    }else{
        temp->next = head->next;
        head->next=temp;
        int t = head->data;
        head->data = temp->data;
        temp->data = t;
        return head;
    }
}
int main(){
    node*head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    head->next->next->next = head;
    printlist(head);cout<<endl;
    // int n;
    // cout<<"Enter the element to insert : ";
    // cin>>n;
    // int target,ele;
    // cout<<"How many element you want to insert : ";
    // cin>>target;cout<<"Enter element : ";
    // while(target){
    //     int store;
    //     cin>>ele;
    //     store=ele;
    //     insertAtBegin(head,store); 
    // }target--;
    insertAtBegin(head,40); 
    insertAtBegin(head,50); cout<<endl;
    printlist(head);
    insertAtBegin1(head,1);cout<<endl;
    printlist(head);
    


}