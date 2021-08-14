// http://codeforces.com/contest/78/problem/B
#include <bits/stdc++.h>

using namespace std;
string permutation_s = "";
// void permutation(string word, int i){
//     if(n == i){
//         cout<<permutation_s<<endl;
//     }
//     for(int j = 0;j<i;j++){
//         permutation_s.push_back()
//         permutation_s.
//     }
// }

int main(){
    int n;
    string eggs = "ROYGBIV";
    sort(eggs.begin(), eggs.end());
    cin>>n;
    int n_group = n/4;
    int rest_group = n%4;
    string sub_eggs = eggs.substr(0,4);
    string last_eggs = eggs.substr(4,rest_group);
    int counter = 0;
    string res = "";
    do{
        if(counter == n_group){
            if(rest_group == 0) break;
            res+= last_eggs;
            break;
        }
        res+=sub_eggs;
        counter++;
    }while(next_permutation(sub_eggs.begin(), sub_eggs.end()));

    cout<<res<<endl;
    return 0;
}