#include<iostream>
using namespace std;
// nive method
int countSet(int n){
    int res = 0;
    while(n>0){
        if(n%2 != 0){   // if((n & 1) == 1)  // res = res+(n&1);
            res++;  // 
            n = n/2;  //  n=n>>1
        }
    }
}
// Brian Kerningam's algorithm
// lookup table method
int table[256];
void initialize(){
    table[0] = 0;
    for(int i=1; i<256; i++){
        table[i] = (i&1) + table[i/2];
    }
}
    int count(int n){
        int res = table[n & 0*ff];
        n = n>>8;
        res = res + table[n & 0*ff];
        n = n>>8;
        res = res + table[n & 0*ff];
        n = n>>8;
        res = res + table[n & 0*ff];
        return res;
    
}

int main(){
    int n=5;
    cout<<"Enter no. : ";
    cin>>n;
    cout<<"count set : "<<countSet(n); 

}