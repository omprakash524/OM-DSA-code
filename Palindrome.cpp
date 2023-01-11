#include<iostream>
using namespace std;

bool ispalindrome(int n){
    int rev = 0;
    int temp = n;
    while(temp != 0){
        int lastdigit = temp % 10;
        rev = rev * 10 + lastdigit;
        temp = temp / 10;
    }
    return (rev == n);
}
int main(){
    cout<<"Hello world"<<endl;
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    cout<<ispalindrome(n);
    // if(ispalindrome == 0){
    //     cout<<" yes it is a palindrome"<<endl;
    // }else{
    //     cout<<" no it is not  a palindrome"<<endl;
    // }
    return 0;
}