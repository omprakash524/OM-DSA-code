#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<string,int> m;
    m["gfg"] = 20;
    m["ide"] = 30;
    m["om"] = 120;
    m.insert({"course" ,153});
    m.insert({"si",14});
    m.insert({"m",45});
    for(auto x:m){
        cout<<x.first<<" "<<x.second<<endl;
    }
    cout<<"--------------"<<endl;
    if(m.find("ide")!=m.end()){
        cout<<"found"<<endl;
    }else{
        cout<<"Not found"<<endl;
    }
    for(auto it=m.begin(); it!=m.end(); it++){
        cout<<(it->first)<<" "<<(it->second)<<endl;
    }
    cout<<"size : "<<m.size()<<" "<<endl;
    m.erase("ide");
    m.erase(m.begin());
    cout<<"size : "<<m.size()<<" ";
    // most of the operation in O(1)

    return 0;
}