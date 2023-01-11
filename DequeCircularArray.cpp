#include<iostream>
#include<deque>
using namespace std;
struct Deque{
    int size,cap;
    int *arr;
    Deque(int c){
        cap = c;
        size = 0;
        arr = new int[cap];
    }
    bool isFull();
    bool isEmpty();
    void deleteRear();
    int getRear();
    void insertFront(int x);
    void deleteFront();
    int getFront();
};
bool Deque::isFull(){
        return(size==cap);
    }
bool Deque::isEmpty(){
        return(size==0);
    }
void Deque::deleteRear(){
        if(isEmpty()){
            return;
        }else{size--;}
    }
int Deque::getRear(){
        if(isEmpty()){
            return -1;
        }else{
            return (size-1);
        }
    }
void Deque::insertFront(int x){
        if(isFull()){
            return;
        }else{
            for(int i=size-1; i>=0; i--){
                arr[i+1] = arr[i];
            }
            arr[0]=x;
            size++;
        }
    }
void Deque::deleteFront(){
        if(isEmpty()){
            return;
        }else{
            for(int i=0; i<size-1; i++){
                arr[i] = arr[i+1];
            }size--;
        }
    }
int Deque::getFront(){
        if(isEmpty()){
            return -1;
        }else{
            return 0;
        }
    }

int main(){
    struct Deque dq(8);
    dq.insertFront(10);
    dq.insertFront(20);
    dq.insertFront(30);
    dq.insertFront(40);
    dq.insertFront(50);
    cout<<"is deque full : "<<dq.isFull()<<endl;
    cout<<"is deque empty : "<<dq.isEmpty()<<endl;
    dq.deleteRear();
    cout<<"getRear of deque : "<<dq.getRear()<<endl;
    dq.deleteFront();
    cout<<"getFront of deque : "<<dq.getFront()<<endl;

    return 0;
}