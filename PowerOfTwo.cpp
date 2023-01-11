#include<iostream>
using namespace std;
// naive method
bool isPow_2(int n){
    if(n==0){
        return false;
    }
    while(n!=1){
        if(n%2 != 0){
            return false;
        }
        n = n/2;
    }return true;
}
// efficient method
bool ispow2(int n){
    if(n==0){
        return false;
    }else{
        return ((n&(n-1))==0); // if it is ==0 then it is pow 2
      //   n = 4 : 00 ....100
      // n-1 = 3 : 00 ....011
      //______________________
      //           00.....000    (it is 0 so pow2)
    }
}
// method 2
bool is_pow2(int n){
    return (n!=0) && ((n&(n-1))==0);
}

int main(){
//     int n=5;
//     ispow2(n);
}