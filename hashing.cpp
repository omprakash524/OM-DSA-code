#include<iostream>
#include<list>
using namespace std;
struct MyHash{
    int BUCKET;
    list<int> *table;
    MyHash(int b){
        BUCKET=b;
        table = new list<int>[b];
    }
    void insert(int key);
    bool search(int key);
    void remove(int key);
};
void MyHash::insert(int key){
    int i = key%BUCKET;
    table[i].push_back(key);
};
void MyHash::remove(int key){
    int i = key%BUCKET;
    table[i].remove(key);
};
bool MyHash::search(int key){
    int i = key%BUCKET;
    for(auto x:table[i]){
        if(x==key){
            return true;
            }
            return false;
    }
}
int main(){
  int key[] = {231, 321, 212, 321, 433, 262};
  int data[] = {123, 432, 523, 43, 423, 111};
  int size = sizeof(key) / sizeof(key[0]);

  MyHash h(size);

  for (int i = 0; i < size; i++)
  h.insert(key[i]);

  h.remove(12);
  h.search(432);

    return 0;
}