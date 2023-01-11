// finding number of digits in a number
#include<bits/stdc++.h>
using namespace std;

//  iterative solution
int countDigit(long n){
    int count = 0;
    while(n!=0){ // or while(n > 0)
        n = n/10;
        count++;
        
    }
    return count;
}

//  recursive solution
int countDigitRec(long n){
    if(n == 0){
        return 0;
        
    }return 1 + countDigit(n/10);
}

// logarithmic solution

int countDigitLog(long n){
    return floor(log10(n)+1);
}
int main(){
    int d;
    cout<<"Enter the number : ";
    cin>>d;
    cout<<"iterative approach : "<<countDigit(d)<<endl;
    cout<<"recursive approach : "<<countDigitRec(d)<<endl;
    cout<<"logarithmic approach : "<<countDigitLog(d)<<endl;

    return 0;
}

