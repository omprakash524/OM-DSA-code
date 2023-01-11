#include <iostream>
#include<queue>
using namespace std;

int main(){
    priority_queue <int,vector<int>,greater<int>> pq;
    pq.push(10);
    pq.push(15);
    pq.push(5);
    cout<<pq.size()<<" "<<endl;
    cout<<pq.top()<<" "<<endl;
    while(pq.empty()==false){
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<endl;
    #include<vector>
    //how to create a priority queue with minimum at the top?
    // better solution TC:O(n)
    int arr[] = {3,6,9};
    priority_queue<int> pq1(arr,arr+3);
    while(pq1.empty()==false){
        cout<<pq1.top()<<" ";
        pq1.pop();
    }
    return 0;
}