#include<iostream>
using namespace std;
void TOH(int n, char A, char B, char C){
    if(n==1){
        cout<<"move 1 from "<<A<<" to "<<C<<endl;
        return;
    }else{
        TOH(n-1, A,C,B);
        cout<<"move "<<n<<" from "<<A<<" to "<<C<<endl;
        TOH(n-1,B,A,C);
        
    }
}
int main(){
    int n=3;
    char A,B,C;
    TOH(n,A,B,C);

    return 0;
}