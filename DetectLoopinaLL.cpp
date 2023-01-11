#include<iostream>
#include<unordered_set>
using namespace std;
struct node{
    int data;
    node*next;
    node(int d){
        data=d;
        next=NULL;
    }
};
// using pointer
bool isLoop(node*&head){
    node*temp = new node(0);
    node*curr = head;
    while(curr!=NULL){
        if(curr->next==NULL){
            return false;
        }
        if(curr->next == temp){return true;}
        node* curr_next = curr->next;
        curr->next = temp;
        curr = curr_next;
    }
    return false;
}
// using Hashing
bool isLoopHash(node*&head){
    unordered_set<node*> s;
    for(node*curr=head; curr!=NULL; curr=curr->next){
        if(s.find(curr)!=s.end()){return true;}
        else{s.insert(curr);}
    }return false;
}
int main(){
    node*head = new node(10);
    head->next = new node(20);
    head->next->next=new node(30);
    head->next->next->next = new node(40);
    head->next->next->next->next = head->next;
    if(isLoop(head)){
        cout<<"Using pointer Loop found"<<endl;
    }else{
        cout<<"Using pointer No loop"<<endl;
    }
    
    if(isLoopHash(head)){
        cout<<"Using Hashing Loop found"<<endl;
    }else{
        cout<<"Using Hashing No loop"<<endl;
    }

    return 0;
}