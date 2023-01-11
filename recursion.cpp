#include<iostream>
using namespace std;
void fun(int n){
    if(n==0){
        return;
    }
    cout<<n<<endl;
    fun(n-1);
    cout<<n<<endl;
}
void fun1(int n){
    if(n==0){
        return;
    }
    fun1(n-1);
    cout<<n<<endl;
    fun1(n-1);
}
int fun2(int n){
    if(n==0){
        return 0;
    }else{
        return 1+fun2(n/2);
    }
}

int main(){
    // fun(3);
    cout<<endl;
    // fun1(3);
    fun2(16);
    
    return 0;
}