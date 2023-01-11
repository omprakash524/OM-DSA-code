#include <bits/stdc++.h> 
using namespace std; 

struct Node{
    int data;
    Node* next;
    Node(int x){
        data=x;
        next=NULL;
    }
};
// remove duplicate element from linkedlist
void RemoveDup(Node*head){
    Node* curr = head;
    while(curr!=NULL && curr->next!=NULL){
        if(curr->data==curr->next->data){
            Node*temp = curr->next;
            curr->next=curr->next->next;
            delete(temp);
        }else{
            curr=curr->next;
        }
    }
}

Node *insertEnd(Node *head,int x){
    Node *temp=new Node(x);
    if(head==NULL){
        temp->next=temp;
    }else{
    Node*curr=head;
    while(curr->next!=head){
        curr=curr->next;
    }
    curr->next = temp;
    temp->next = head;
    }return temp;
}

void printlist(Node *head){
        Node *curr=head;
        while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
        }
}
int main() 
{ 
	Node *head=NULL;
	head=insertEnd(head,30);
	head=insertEnd(head,20);
	head=insertEnd(head,10);
	head=insertEnd(head,10);
	printlist(head);
    RemoveDup(head);
    printlist(head);
	return 0;
} 
