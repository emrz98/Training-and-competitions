#include <bits/stdc++.h>

using namespace std;
//GCD : Greatest Common divisor

long long gcd_iterative(long long a, long long b){
    if(a == 0){
        return b;
    }
    while (b!=0){
        if(a>b){
            a = a-b;
        }
        else{
            b = b-a;
        }
    }
    return a;
}

long long gcd(long long a, long long b){
    if (b == 0){
        return a;
    }
    return gcd(b, a%b);
}

int main(){
    long long a, b;
    cin>>a>>b;
    cout<<gcd(a,b)<<endl;
    cout<<gcd_iterative(a, b)<<endl;
    return 0;
}