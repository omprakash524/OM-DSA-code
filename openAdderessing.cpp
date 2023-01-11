#include<iostream>
#include<list>
using namespace std;
// struct myHash{
//     int bucket;
//     list<int> *table;
//     myHash(int b){
//         bucket = b;
//         table = new list<int>[b];
//     }
//     void insert(int key);
//     bool search(int key);
//     void remove(int key);
//     void erase(int key);
// };

struct MyHash{
    int *arr;
    int cap,size;
    MyHash(int c){
        cap = c;
        size = 0;
        for(int i=0; i<cap; i++){
            arr[i]=-1;
            }
    }int hash(int key){return key%cap;}

    bool search(int key);
    bool insert(int key);
    bool erase(int key);
};

bool MyHash::search(int key){
    int h=hash(key);
    int i=h;
    while(arr[i]!=-1){
        if(arr[i]==key){
            return true;
        }i = (i+1)%cap;
        if(i==h){return false;}
    }
    return false;
}

bool MyHash::insert(int key){
    if(size==cap){return false;}
    int i = hash(key);
    while(arr[i]!=-1 && arr[i]!=-2 && arr[i]!=key){
        i = (i+1)%cap;
        if(arr[i]==key){return false;}else{
            arr[i] = key;
            size++;
            return true;
        }
    }
}

bool MyHash::erase(int key){
    // hash(key) = key % cap;
    int h = hash(key);
    int i = h;
    while(arr[i]!=-1){
        if(arr[i]==key){
            arr[i] = -2;
            return true;
        }
        i = (i+1)%cap;
        if(i==h){
            return false;
        }
    }
}


int main(){
    MyHash mh(7);
    mh.insert(49);
    mh.insert(56);
    mh.insert(72);
    if(mh.search(56)==true){cout<<"yes"<<endl;}else{
        cout<<"no"<<endl;
    }
    mh.erase(56);
    if(mh.search(56)==true){cout<<"yes"<<endl;}else{
        cout<<"no"<<endl;
    }

    return 0;
}