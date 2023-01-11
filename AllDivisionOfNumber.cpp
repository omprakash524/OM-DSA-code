#include<iostream>
using namespace std;
void printDivisors(int n){
    for(int i=1; i<=n; i++){
        if(n%i == 0){
            cout<<i<<" ";
        }
    }
}
void printdivisors(int n){
    for(int i=1; i*i<n; i++){
        if(n%i==0){
            cout<<i;
        }
    }cout<<endl;
    for(int i;i>=1;i--){
        cout<<(n/i)<<" ";
    }
}

int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    cout<<"divisor of "<<n<<" is : ";
    printDivisors(n);
    printdivisors(n);

    return 0;
}