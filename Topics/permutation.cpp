#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
//string permutation
void permutation_recursion(string a, int left, int right){
    if(left == right){
        cout<<a<<endl;
    }
    else{
        for(int i = left; i<=right; i++){
            swap(a[left], a[i]);
            permutation_recursion(a, left + 1, right);
            swap(a[left], a[i]);

        }
    }

}


int main(){
    string str = "ABCDEF";
    permutation_recursion(str, 0, str.size()-1);

    return 0;
}