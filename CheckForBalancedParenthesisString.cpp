#include<bits/stdc++.h>
using namespace std;
bool matching(char a,char b){
    return ((a=='(' && b==')')||(a=='{' && b=='}')||(a=='[' && b==']'));
}

bool isBalanced(string str){
    stack<char> s;
    for(int i=0; i<str.length(); i++){
        if(str[i]=='('|| str[i]=='{'|| str[i]=='['){
            s.push(str[i]);
        }else{
            if(s.empty()==true){return false;}
            else if(matching(s.top(),str[i])==false){return false;}
            else{s.pop();}
        }
    }
     return(s.empty()==true); 
        // for extra opening bracket
}

int main(){
    string str = "{()}[](({}((([])))){})";
    if(isBalanced(str)){
        cout<<"Balanced"<<endl;
    }else{
        cout<<"Not Balanced"<<endl;
    }
    
    return 0;
}
