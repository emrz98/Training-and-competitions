#include <bits/stdc++.h>

using namespace std;

int fibonacci(int n){
    if(n <=1){
        return n;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}


int main(){ 
    //pos of the number in fibonacci series
    int n;
    cin>>n;
    cout<<fibonacci(n)<<endl;
    return 0;
}