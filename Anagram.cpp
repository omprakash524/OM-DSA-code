#include<iostream>
#include<bits/stdc++.h>
const int CHAR = 256;
using namespace std;
bool areAnagram(string &s1, string &s2){
    if(s1.length()!=s2.length()){
        return false;
    }
    sort(s1.begin(), s2.end());
    sort(s2.begin(), s2.end());
    return(s1==s2);
}
// efficient
bool areAnagram1(string &s1, string &s2){
    if(s1.length()!=s2.length()){
        return false;
    }
    int count[CHAR] = {0};
    for(int i=0; i<s1.length();i++){
        count[s1[i]]++;
        count[s2[i]]--;
    }
    for(int i=0; i<CHAR; i++){
        if(count[i]!=0){
            return false;
        }
        // return true;
    }return true;
}
int main(){
    string s1 = "abaac";
    string s2 = "aacba";
    cout<<areAnagram(s1,s2)<<endl;
    cout<<areAnagram1(s1,s2)<<endl;

    return 0;
}