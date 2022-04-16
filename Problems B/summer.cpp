#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,f;
    cin>>n>>f;
    vector<pair <int,int> > gain_vect;
    long long sells = 0;
    for(int i = 0;i<n;i++){
        int k,l;
        cin>>k>>l;
        int gain;
        if(k>=l){
            gain = 0;
            sells+=l;
        } else {
            if (2 * k <=l){
                gain = k;
            } else {
                gain = l - k;
            }
            sells+=k;
        }
        gain_vect.push_back(make_pair(i,gain));
    }
    sort(gain_vect.begin(), gain_vect.end(),
              [] (const auto &x, const auto &y) { return x.second > y.second; });
    for (int i = 0;i<f;i++){
        sells+=gain_vect[i].second;
    }
    cout<<sells<<endl;
}

