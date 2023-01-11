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
void printlist(node*head){
    if(head==NULL){return;}
    cout<<(head->data)<<" ";
    for(node*p=head->next;p!=head;p=p->next){
        cout<<(p->data)<<" ";
    }
}
// we use do while loop to print atleast one element when node in non empty
void PrintList(node*head){
    if(head==NULL){return;}
    node*p = head;
    do{
        cout<<(p->data)<<" ";
        p=p->next;
    }while(p!=head);
}
int main(){
    node*head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    head->next->next->next = head;
    printlist(head);
    cout<<endl<<"using do while loop"<<endl;
    PrintList(head);

    return 0;
}