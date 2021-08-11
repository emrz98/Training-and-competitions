#include <bits/stdc++.h>

using namespace std;
int perm_cnt = 0;
vector<int> p = {0, 1, 2, 3};
// you can convert a string to a vector doing this:
// std::string s = "Hello word";
// std::vector<char> v(s.begin(), s.end())
int main(){ 
    do{
        ++perm_cnt;
        // use p vector
    }while(next_permutation(p.begin(), p.end()));

    cout<<perm_cnt;
    return 0;
}