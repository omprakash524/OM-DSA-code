#include <bits/stdc++.h> 
using namespace std; 
class Queue { 
public: 
	int front, rear, size; 
	unsigned capacity; 
	int* array; 
}; 

Queue* createQueue(unsigned capacity){ 
	Queue* queue = new Queue(); 
	queue->capacity = capacity; 
	queue->front = queue->size = 0; 

	queue->rear = capacity - 1; 
	queue->array = new int[( 
	queue->capacity * sizeof(int))]; 
	return queue; 
} 

int isFull(Queue* queue) { 
	return (queue->size == queue->capacity); 
} 

int isEmpty(Queue* queue) { 
	return (queue->size == 0); 
} 

void enqueue(Queue* queue, int item){ 
	if (isFull(queue)) 
		return; 
	queue->rear = (queue->rear + 1) % queue->capacity; 
	queue->array[queue->rear] = item; 
	queue->size = queue->size + 1; 
	cout << item << " enqueued to queue\n"; 
} 

int dequeue(Queue* queue) { 
	if (isEmpty(queue)) 
		return INT_MIN; 
	int item = queue->array[queue->front]; 
	queue->front = (queue->front + 1)% queue->capacity; 
	queue->size = queue->size - 1; 
	return item; 
} 

int front(Queue* queue){ 
	if (isEmpty(queue)) 
		return INT_MIN; 
	return queue->array[queue->front]; 
} 
 
int rear(Queue* queue){ 
	if (isEmpty(queue)) 
		return INT_MIN; 
	return queue->array[queue->rear]; 
} 
 
int main() { 
	Queue* queue = createQueue(1000); 
	enqueue(queue, 10); 
	enqueue(queue, 20); 
	enqueue(queue, 30); 
	enqueue(queue, 40); 

	cout << dequeue(queue)<< " dequeued from queue\n"; 
	cout << "Front item is "<< front(queue) << endl; 
	cout << "Rear item is "<< rear(queue) << endl; 
	return 0; 
} 


// #include<iostream>
// using namespace std;
// struct Queue{
//     int *arr;
//     int front,cap,size;
//     Queue(int c){
//         cap = c;
//         front = 0;
//         size = 0;
//     }
//     bool isFull(){return (cap==size);}
    
//     bool isEmpty(){return (size==0);}

//     int getFront(){
//         if(isEmpty()){return -1;}else{
//             return front;
//         }
//     }
//     int getRear(){
//         if(isEmpty()){return -1;}else{
//             return(front+size-1)%cap;
//         }
//     }

//     void enque(int x){
//         if(isFull()){return;}else{
//             int rear=getRear();
//             rear = (rear+1)%cap;
//             arr[rear]=x;
//             size++;
//         }
//     }

//     void deque(){
//         if(isEmpty()){return;}else{
//             front = (front+1)%cap;
//             size--;
//         }
//     }
// };
// int main(){
//     Queue q=0;
//     q.enque(10);
//     q.enque(20);
//     q.enque(30);
//     q.enque(40);
//     q.enque(50);
//     q.deque();

//     return 0;
// }
