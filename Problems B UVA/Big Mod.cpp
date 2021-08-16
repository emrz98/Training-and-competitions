#include<bits/stdc++.h>
#define MAX = 100
using namespace std;

void multiply(int x,int res[],int  res_size){
    int carry = 0;

    for(int = 0; i< res_size; i++){
        int prod = res[i] * x + carry;

        res[i] = prod % 10;

        carry = prod / 10;
    }

    while(carry){
        res[res_size] = carry % 10;
        carry = carry / 10;
        res_size++;
    }
    return res_size;

}

void Bigpower(int x, int n){
    if(n == 0){
        cout<<"1";
        return;
    }
    int res[MAX];
    int res_size = 0;
    int temp = x;

    while(temp != 0){
        res[res_size++] = temp%10;
        temp = temp /10;
    }
    for(int i = 2; i <= n; i++){
        res_size = multiply(x, res, res_size);
    }
    cout<< x << "^" << n << "=";
    for (int i = res_size - 1; i >= 0; i--){
        cout <<res[i];
    }
}

int mod(string a, int b){
    int res = 0;
    for(int i = 0;i < a.length() ; i++){
        res = (res * 10 + (int)a[i] - '0') % b;
    }
    return res;
}


int main(){
    string a;
    int b;
    cin>>a;
    cin>>b;
    int result = mod(a,b);
    cout<<result<<endl;
    
    return 0;
}