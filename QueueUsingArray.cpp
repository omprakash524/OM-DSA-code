#include<iostream>
using namespace std;
struct Queue{
    int size,cap;
    int *arr;
    Queue(int d){
        cap = d;
        size = 0;
        arr = new int[cap];
    }
    void enque(int x){
        if(isFull()){return;}else{
        arr[size]=x;
        }
    }
    void deque(){
        if(isEmpty()){return;}else{
            for(int i=0; i<size-1; i++){
                arr[i] == arr[i+1];
                size--;
            }
        }
    }
    int getFront(){
        if(isEmpty()){return -1;}else{
            return 0;
        }
    }
    int getRear(){
        if(isEmpty()){return -1;}else{
            return size-1;
        }
    }
    bool isFull(){
        return(size==cap);
    }
    bool isEmpty(){
        return(size==0);
    }
    int size(){}
};
int main(){
    return 0;
}