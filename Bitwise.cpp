#include<iostream>
using namespace std;

int main(){
    int x=3,y=2;
    // cout<<"Enter any two number : ";
    // cin>>x,y;
    cout<<x<<" & "<<y<<" : "<<(x&y)<<endl; 
    cout<<x<<" | "<<y<<" : "<<(x|y)<<endl; 
    cout<<x<<" ^ "<<y<<" : "<<(x^y)<<endl; 
    cout<<x<<" << "<<y<<" : "<<(x<<y)<<endl;
    cout<<x<<" << "<<y<<" : "<<(x<<y)<<endl;
    unsigned int n = 4;
    cout<<" ~"<<n<<" : "<<(~n)<<endl;

    return 0;
}