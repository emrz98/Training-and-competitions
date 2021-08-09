//Math permutation

#include <algorithm>
#include <iostream>
#include <math.h>

using ll = long long;
using namespace std;
long long factorial(long long n){
    if(n == 1){
        return 1;
    }
    return n * factorial(n-1);
}
 

long long solve_permutation(ll n){
    return factorial(n);
}
long long solve_permutation_n_by_n(long long n, long long r){
    long long num = factorial(n);
    long long den = factorial(n-r);
    return num/den;
}


int main(){
    cout<<factorial(6)<<endl;
    cout<<solve_permutation_n_by_n(9,2)<<endl;
    cout<<solve_permutation_n_by_n(9,5)<<endl;
    cout<<solve_permutation_n_by_n(4,2)<<endl;
    return 0;
}
