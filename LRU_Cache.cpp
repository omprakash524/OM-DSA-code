#include<bits/stdc++.h>
using namespace std;
class LRUCache {
  public:
    class node {
      public:
        int key;
      int val;
      node * next;
      node * prev;
      node(int _key, int _val) {
        key = _key;
        val = _val;
      }
    };

  node * head = new node(-1, -1);
  node * tail = new node(-1, -1);

  int cap;
  unordered_map < int, node * > m;

  LRUCache(int capacity) {
    cap = capacity;
    head -> next = tail;
    tail -> prev = head;
  }

  void addnode(node * newnode) {
    node * temp = head -> next;
    newnode -> next = temp;
    newnode -> prev = head;
    head -> next = newnode;
    temp -> prev = newnode;
  }

  void deletenode(node * delnode) {
    node * delprev = delnode -> prev;
    node * delnext = delnode -> next;
    delprev -> next = delnext;
    delnext -> prev = delprev;
  }

  int get(int key_) {
    if (m.find(key_) != m.end()) {
      node * resnode = m[key_];
      int res = resnode -> val;
      m.erase(key_);
      deletenode(resnode);
      addnode(resnode);
      m[key_] = head -> next;
      return res;
    }

    return -1;
  }

  void put(int key_, int value) {
    if (m.find(key_) != m.end()) {
      node * existingnode = m[key_];
      m.erase(key_);
      deletenode(existingnode);
    }
    if (m.size() == cap) {
      m.erase(tail -> prev -> key);
      deletenode(tail -> prev);
    }

    addnode(new node(key_, value));
    m[key_] = head -> next;
  }
};
int main(){
{ 
		
		LRUCache cache(2); 

		// it will store a key (1) with value 
		// 10 in the cache. 
		cache.put(1, 10); 

		// it will store a key (2) with value 20 in the cache. 
		cache.put(2, 20); 
		cout<<"Value for the key: 1 is " << cache.get(1)<<endl; // returns 10 

		// removing key 2 and store a key (3) with value 30 in the cache. 
		cache.put(3, 30); 

		cout<<"Value for the key: 2 is " << 
				cache.get(2)<<endl; // returns -1 (not found) 

		// removing key 1 and store a key (4) with value 40 in the cache. 
		cache.put(4, 40); 
		cout<<"Value for the key: 1 is " << 
			cache.get(1)<<endl; // returns -1 (not found) 
		cout<<"Value for the key: 3 is " << 
						cache.get(3)<<endl; // returns 30 
		cout<<"Value for the key: 4 is " << 
						cache.get(4)<<endl; // return 40 
						
		return 0;
	} 
}