#include<iostream>
#include<unordered_set>
using namespace std;
int inserction(int a[], int b[], int m, int n){
    int res = 0;
    for(int i=0; i<m; i++){
        bool flag = false;
        for(int j=0; j<i-1; j++){
            if(a[j]==a[i]){
                flag = true;
                break;
            }
            if(flag==true){continue;}
            for(int j=0; j<n; j++){
                if(a[i]==b[j]){
                    res++;
                    break;
                }
            }
        }
    }return res;
}

// unordered_set
int inserction1(int a[], int b[], int m, int n){
    unordered_set<int> s;
    for(int i=0; i<m; i++){
        s.insert(a[i]);
    }
    int res=0;
    for(int j=0; j<n; j++){
        if(s.find(b[j])!=s.end()){
            res++;
            s.erase(b[j]);
        }
    }
    return res;
}
int main(){
    int a[] = {10,15,20,15,30,30,5};
    int m = sizeof(a)/sizeof(a[0]);
    int b[] = {30,5,30,80};
    int n = sizeof(b)/sizeof(b[0]);
    cout<<"inserction : "<<inserction(a,b,m,n)<<endl;
    cout<<"inserction unordered_set: "<<inserction(a,b,m,n)<<endl;

    return 0;
}