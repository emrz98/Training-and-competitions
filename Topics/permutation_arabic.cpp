#include <bits/stdc++.h>

using namespace std;
// Permutation is the vector where we are going to save the sets
vector<int> permutation;
// n_perm is the number n in the formula, the meaning is the amount of element to permutate.
//perm_cnt only count the amount sets after all the permutations.
int n_perm = 4, perm_cnt = 0;
//is_visited is used to 
bool is_visited[4];

// "i" allow have the control of the amount of elements in each subset,


void get_perm(int i = 0){
    if(i == n_perm){
        ++perm_cnt;
        // This print each subset
        for(int k = 0; k<n_perm ; k++){
            cout<<permutation[k];
        }
        cout<<endl;
        return;
    }
    // j work doing the diferent combinations of element of subset depending of the visited vector and the bucle.
    // in you want to have combination from 2 to 6, you need to put j = 2 and n_perm should be equal to 6 
    for (int j = 0; j<n_perm ; ++j){
        if (is_visited[j]){
            continue;
        }
        // push_back the j and mark as a visited in order to avoid the same number in the next recursion.
        permutation.push_back(j);
        is_visited[j] = 1;
        
        //when you finish the deep tree, you can print the result in permutation
        get_perm(i + 1);
        // After finish the subset, delete the subset in permutation and reset the is_visited vector for the next permutation
        is_visited[j] = 0;
        permutation.pop_back();
    }
}

int main(){
    get_perm();
    return 0;
}
