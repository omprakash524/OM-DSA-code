#include<iostream>
using namespace std;
bool palindrome(string &s, int start, int end){
    if(start>=end){
        return true;
    }else{
        return(s[start]==s[end]) && palindrome(s, start+1, end-1);
    }
}
// tc = o(n)
int main(){
    string s = "goyog";
    cout<<palindrome(s,1,5);

    return 0;
}