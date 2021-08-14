#include <bits/stdc++.h>

using namespace std;
vector<int> combination;
int n = 20, m = 4, cnt = 0;

void get_combination(int i = 0, int last_val = 0){
    //Arrive to the root of the three so have to count the combination.
    if(i == m){
        ++cnt;
        return;
    }

    for (int j = last_val+1; j<=n; ++j){
        combination.push_back(j);
        //Think: dynamically create one more loop
        get_combination(i + 1, j); //backtracking
        combination.pop_back();
    }
}

int main(){
    get_combination();
    cout<<cnt<<endl;
    return 0;
}