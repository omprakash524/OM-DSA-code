/*#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*next,*prev;
    node(int val){
        data=val;
        next=NULL;prev=NULL;
    }
};
 void insertAtHead(node* &head,int val){
     node*n=new node(val);
     node*temp=head;
     n->next=head;
     if(head!=NULL){
         head->prev=n;
     }
     head=n;
 }
 void insertAtTail(node* &head,int val){
     if(head==NULL){
         insertAtHead(head,val);
         return;
     }
     node* n=new node(val);
     node*temp=head;
     while(temp->next!=NULL){
         temp=temp->next;
     }
     temp->next=n;
     n->prev=temp;
 }
  void print(node*head){
      node*temp=head;
      while(temp!=NULL){
          cout<<temp->data<<"->";
          temp=temp->next;
      }
      cout<<"NULL"<<endl;
  }
   void deleteHead(node* &head){
       node*todelete=head;
       head=head->next;
       head->prev=NULL;
       delete todelete;

   }
   void deletion(node* &head,int val){
       
       node*temp=head;
       if(temp->data==val){
           deleteHead(head);
           return;
       }
      
         while(temp!=NULL && temp->data!=val){
             temp=temp->next;
         }
         temp->prev->next=temp->next;
         if(temp->next!=NULL){
             temp->next->prev=temp->prev;

         }
         delete temp;
         
     }
int main(){
    node*head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
     insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
     insertAtTail(head,6);
    print(head);
     insertAtHead(head,7);
     print(head);
   deletion(head,6);
   print(head);
    //    deleteHead(head);
    //    print(head);



    return 0;
}*/
// =======================================================
#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;
    node*prev;
    node(int val){
        data = val;
        next = NULL;
        prev = NULL;
    }
};

 
void insertAtHead(node* &head, int val){
    node* n = new node(val);
    n->next = head;
    if(head!=NULL){
        head->prev=n;
    }
    head = n;
}

void insertAtTail(node* &head, int val){
    if(head==NULL){
        insertAtHead(head,val);
        return;
    }
    node* n = new node(val);
    node* temp = head;
    while(temp->next!=NULL){
        temp = temp -> next;
    }
    temp->next = n;
    n->prev = temp;
    
}
node*reverseDLL(node*&head){
    if(head==NULL || head->next==NULL){return head;}
    node*prev=NULL;node*curr=head;
    while(curr!=NULL){
        prev = curr->prev;
        curr->prev=curr->next;
        curr->next=prev;
        curr=curr->prev;
    }
    return prev->prev;
}
void display(node*head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"<=>";
        temp = temp->next;
    }
    cout<<endl;
}
void deleteAtHead(node* &head){
    node* todelete = head;
    head = head->next;
    head->prev = NULL;

    delete todelete;
}

void deletion(node* &head, int pos){
    if(pos==1){
        deleteAtHead(head);
        return;
    }
    node* temp = head;
    int count = 1;

    while(temp!=NULL && count != pos){
        temp = temp->next;
        count++;
    }
    temp->prev->next = temp->next;
    if(temp->next!=NULL){
    temp->next->prev = temp->prev;
    }
    delete temp;
}

// append last k nodes of a linkedlist
void kappend(node* &head, int posk)
{
    //code to calculate size of ll before any changes
    node* temp = head;
    int size = 1;
    while(temp->next != NULL){
        temp = temp -> next;
        size++;
    }
    node* tail = head;
    node* newtail = head;
    int count = 1;
    while(tail -> next != NULL)/*count < lllen(head) - posk)*/{
        tail = tail -> next;
    }
    tail -> next = head;
    while(count<size-posk){
        newtail = newtail ->next;
        count++;
    }
    head = newtail -> next;//new head created , here 'newtail-> next' is new head 
    newtail -> next = NULL;//new tail created
}

int length(node* head){
    int l = 0;
    node* temp = head;
    while(temp!=NULL){
        temp = temp->next;
        l++;
    }
    return l;
}

// int length(node*head){
//     int l = 0;
//     node* temp = head;
//     while(temp!=NULL){
//         l++;
//         temp = temp->next;
//     }
//     return l;
// }

int length1(node*head,int val){
    int l,b = 0;
    node* store_in = head;
    while(store_in!=NULL){
        b++;
        store_in = store_in ->next;

    }
    cout<<"length : "<<b<<endl;
    return b;
}

// int magic(node*head,int val){
//     int ip = 0;
//     node* temp;
// }

// int intersection(node* &head1, node* &head2){
    
// }
int main(){
    cout<<"I am doubly linkedlist"<<endl;
    node*head = NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    display(head);
    insertAtHead(head,5);
    display(head);
    length1(head,2356);
    display(head);
    // node* head = NULL;
    // int arr[] = {1,2,3,4,5,6};
    // for (int i = 0; i < 6; i++){
    //     insertAtTail(head,arr[i]);
    // }

    display(head);cout<<endl;
    kappend(head,3);
    display(head);cout<<endl;
    reverseDLL(head);
    display(head);
    

    return 0;
}