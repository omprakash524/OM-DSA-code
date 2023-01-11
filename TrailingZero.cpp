#include<iostream>
using namespace std;
// ========== nive method 
int countZero(int n){
    int fact = 1;
    for(int i=2; i<=n; i++){
        fact = fact * i;
    }
    // T C is theta(n)
    cout<<"Factorial of "<<n<<" is : "<<fact<<endl;
    int result = 0;
    while(fact%10 == 0){
        result++;
        fact = fact / 10;
    }cout<<"no.of zeros : ";
    return result;
}

// =========== efficent method

// T C = 5^k <= n
// k <= log5n
// T C theta(log n)
int countTrailingZero(int n){
    int result = 0;
    for(int i = 5; i <= n; i = i*5){
        result = result + n/i;
    }cout<<"efficent method no.of zeros : ";
    return result;
}
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    // cout<<"It will check in the effecent and nive method"<<endl;
    // char y;
    // cout<<"in what way u want to search the method : ";
    // cin>>y;

    cout<<countZero(n)<<endl;
    cout<<countTrailingZero(n);

    return 0;
}