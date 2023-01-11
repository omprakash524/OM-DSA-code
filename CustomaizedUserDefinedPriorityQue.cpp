#include<iostream>
#include<queue>
#define height ht;
using namespace std;
struct Person{
    int age;
    float ht;
    Person(int a, float h){
        age = a;
        ht = h;
    }
};
struct MyComparison{
    bool operator()(Person const&p1, Person const&p2){
        p1.ht<p2.ht;
    }
};
int main(){
    priority_queue<Person,vector<Person>,MyComparison> pq;
    pq.push(2);
    pq.push(7);
    pq.push(4);
    pq.push(3);

    return 0;
}