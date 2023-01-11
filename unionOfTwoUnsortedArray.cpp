#include<iostream>
#include<unordered_set>
using namespace std;
// total distinct element in both array
// naive solution
int findUnion(int a[], int b[], int m, int n){
    int c[m+n];
    for(int i=0; i<m; i++){
        c[i] = a[i];
    }
    for(int i=0; i<n; i++){
        c[m+i] = b[i];
    }
    int res = 0;
    for(int i=0; i<m+n; i++){
        bool flag = false;
        for(int j=0; j<i; j++){
            if(c[i]==c[j]){
                flag=true;
                break;
            }
            if(flag==false){res++;}
        }
        // return res;
    }return res;
}

// efficient solution
int findunion1(int a[], int b[], int m, int n){
    unordered_set<int> s;
    for(int i=0; i<m; i++){
        s.insert(a[i]);
    }
    for(int j=0; j<n; j++){
        s.insert(b[j]);
    }
    return s.size();
}
int main(){
    int a[] = {15,20,5,15};
    int m = sizeof(a)/sizeof(a[0]);
    int b[] = {15,15,15,20,10};
    int n = sizeof(b)/sizeof(b[0]);
    cout<<"naive union of a and b array : "<<findUnion(a,b,m,n)<<endl;
    cout<<"efficient union of a and b array : "<<findunion1(a,b,m,n)<<endl;

    return 0;
}