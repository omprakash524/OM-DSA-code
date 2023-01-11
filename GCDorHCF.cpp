#include<iostream>
using namespace std;
int gcd2(int a, int b){
    int result = min(a,b);
    while(result > 0){
        if(a%result == 0 && b%result == 0){
            break;
        }
        result--;
    }
    return result;
}

// good approach but not optimized
int gcd(int a, int b){
    while(a!=b){
        if(a>b){
            a = a - b;
        }else{
            b = b - a;
        }
    }
    return a;
}

// optimized approach
int gcd1(int a, int b){
    if(b==0){
        return a;
    }else{
        return gcd(b,a%b);
    }
}
int main(){
    int n,m;
    cout<<"Enter two number to find gcd : ";
    cin>>n>>m;
    cout<<"gcd of two number : "<<gcd1(n,m)<<endl;
    cout<<"gcd of two number : "<<gcd2(n,m);

    return 0;
}