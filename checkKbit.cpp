#include<iostream>
using namespace std;
void kthBit(int n, int k){
    if(n & (1<<(k-1))!=0){
        cout<<"yes it is set"<<endl;
    }else{
        cout<<"no it is not set"<<endl;
    }
}
void kthBitRightshift(int n, int k){
    if(((n>>(k-1)) & 1) == 1){
        cout<<"Yes"<<endl;
    }else{
         cout<<"No"<<endl;
    }
}

int main(){
    int n,k;
    cout<<"Enter the no. and bit no. : ";
    cin>>n>>k;
    kthBit(n,k);
    kthBitRightshift(n,k);

    return 0;
}