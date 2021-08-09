// http://codeforces.com/contest/78/problem/B
#include <bits/stdc++.h>

using namespace std;

string  generate_permutations(string s, string& listPermutaion){ 
    cout<<s<<endl;
    return s;

}

int main(){
    int n;
    string eggs = "ROYGBIV";
    string listPermutations[] = {};
    cin>>n;
    listPermutations = generate_permutations(eggs, listPermutations);
    for(int i = 0;i<n;i+=4){
        if(n-i<=4){

        }
        else{

        }
    }

    return 0;
}