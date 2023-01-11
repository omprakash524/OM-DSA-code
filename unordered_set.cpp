#include<iostream>
#include<unordered_set>
using namespace std;

int main(){
    unordered_set<int> un;
    un.insert(10);
    un.insert(3);
    un.insert(23);
    un.insert(20);
    for(auto it=un.begin(); it!=un.end(); it++){
        cout<<(*it)<<" ";
    }cout<<endl;
    cout<<un.size()<<" ";
    un.clear();
    if(un.find(3)==un.end()){
        cout<<"not found"<<endl;
    }else{
        cout<<"found";
    }
    cout<<un.size()<<" ";
    for(auto x:un){
        cout<<x<<" ";
    }

    return 0;
}