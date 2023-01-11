#include<iostream>
using namespace std;

// nive solution
// TC O(a*b - max(a,b))
int lcm(int a, int b){
    int result = max(a,b);
    while(true){
        if(result % a == 0 && result % b == 0){
            return result;
        }
        result++;
    }
    return result;
}

// efficient solution
int gcd(int a, int b){
    if(b==0){
        return a;  
    }
    return gcd(b, a%b);
}
// TC O(log(min(a,b)))
int lcm_efficient(int a, int b){
    return (a*b)/gcd(a,b);
    // a*b = gcd(a,b)*lcm(a,b)
}
int main(){
    int n,m;
    cout<<"Enter two number : ";
    cin>>n>>m;
    cout<<"lcm of "<<n<<" and "<<m<<" is : "<<lcm(n,m)<<endl;
    cout<<"lcm of "<<n<<" and "<<m<<" is : "<<lcm_efficient(n,m);

    return 0;
}