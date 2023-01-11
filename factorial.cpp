#include<iostream>
using namespace std;

//  iterative implementation
int fact(int n){
    int result = 1;
    for(int i=2; i<=n; i++){
        result = result*i;
    }
    return result;
}

//  recursion implementation
int factrec(int n){
    if(n == 0){
        return 1;
    }
    return n*factrec(n-1);
}
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    cout<<"iterative : "<<fact(n)<<endl;
    cout<<"recursive : "<<factrec(n)<<endl;
    //  T C = theta(n)
    //  S C = theta(1) constant


    return 0;
}