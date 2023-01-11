#include<iostream>
using namespace std;
bool isPrime1(int n){ // nive approach
    if(n==1){
        return false;
        // cout<<"1 is neither a prime or composite no."<<endl;
    }else{
        for(int i=2; i<n; i++){
            if(n%i == 0){
                return false;
            }
        }
        return true;
    }
}
// tc o(n )

// efficient method
bool isPrime2(int n){
    if(n==1){return false;}
    for(int i=2; i*i<=n; i++){
        if(n%i==0){
            return false;
        }
        return true;
    }
}


// more efficient method
bool isPrime3(int n){
    if(n==1){return false;}
    if(n==2 || n==3){return true;}
    if(n%2==0 && n%3==0){return false;}
    for(int i=5; i*i<=n; i=i+6){
        if(n%i==0 || n%(i+2)==0){return false;}
    }
    return true;
}
int main(){
    int a;
    cout<<"Enter the number : ";
    cin>>a;
    cout<<"Nive approach : "<<isPrime1(a)<<endl;
    cout<<"efficient method : "<<isPrime2(a)<<endl;
    cout<<"more efficient method : "<<isPrime3(a);

}