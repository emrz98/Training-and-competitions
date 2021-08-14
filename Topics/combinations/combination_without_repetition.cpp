#include <bits/stdc++.h>

using namespace std;

int main(){
    long long cnt = 0;
    int n = 20;
    // Its like init all the variables i1 = 1 i2 = 2 i3 = 3 i4 = 4 and then mode i4 until 5, 6 ... 20 
    //and then you have your first list of combination 1234, 1235, 1236 ... 12320, and soon
    for (int i1 = 1; i1 <= 20; ++i1){
        for (int i2 = i1 + 1; i2 <=20; ++i2){
            for (int i3 = i2 + 1; i3 <= 20; ++i3){
                for (int i4 = i3+1; i4 <= 20; ++i4){
                    cnt++;
                }
            }
        }
    }
    cout<<cnt<<"\n";
    return 0;
}