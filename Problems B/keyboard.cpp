#include <bits/stdc++.h>

using namespace std;

bool eu_distance(int x1,int x2,int y1,int y2, int maxDis){
    double res = (double)sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));
    // cout<<x1<<" "<<x2<<" "<<y1<<" "<<y2<<endl;
    // cout<<maxDis<<" "<<res<<endl;
    if (res>maxDis){
        return false;
    } else {
        return true;
    }
}



int main(){
    int n, m, x;
    int q;
    string t;
    cin>>n>>m>>x;

    map<char, vector<pair<int, int>>> keyboard_map;
    for(int i = 0;i<n;i++){
        string row;
        cin>>row;
         for (int j = 0; j < row.length(); j++) {
            pair<int, int> pos;
            pos.first = i;
            pos.second = j;
            if(keyboard_map.count(row[j])>0){
               vector<pair<int, int>> local_map = keyboard_map.at(row[j]);
               local_map.push_back(pos);
               keyboard_map.at(row[j]) = local_map;
            } else{
                vector<pair<int, int>> local_map;
                local_map.push_back(pos);
                keyboard_map.insert({row[j], local_map});
            }            
        }
    }
    // for(auto &pair: keyboard_map){
    //     cout<<pair.first<<" ";
    //     for(auto &p:pair.second){
    //         cout<<p.first<<" "<<p.second<<"   "<<endl;
    //     }
    //     cout<<endl;
    // }
    cin>>q;
    cin>>t;
    int shift_count = keyboard_map.count('S');
    map<char,bool> canDistanceAlone;
    if(shift_count>0){
          for ( const auto &myPair : keyboard_map ) {
                vector<pair<int, int>> pos_key_list = keyboard_map.at(myPair.first);
                vector<pair<int, int>> pos_shift_list = keyboard_map.at('S');
                canDistanceAlone.insert({myPair.first, false});
                for(auto pos_key:pos_key_list){
                    bool res;
                    for(auto pos_shift:pos_shift_list){
                        res = eu_distance(pos_key.first +1 ,pos_shift.first+1, pos_key.second+1, pos_shift.second+1, x);
                        if(res){
                            canDistanceAlone.at(myPair.first) = true;
                            break;
                        }
                    }
                    if (res) break;
                }
          }
    }
    // for(auto &pair: canDistanceAlone){
    //     cout<<pair.first<<" "<<pair.second<<endl;
    // }
    int count_two_hands = 0;
    for(int i = 0;i<q;i++){
        char act_letter = t[i];
        if(act_letter<91){
            
            char minus_letter = act_letter + 32;
            if(keyboard_map.count(minus_letter)>0 && shift_count>0){
                if(!canDistanceAlone.at(minus_letter)){
                    count_two_hands++;
                }
            }
            else {
                cout<<-1<<endl;
                return 0;
            }
        } else {
            
            if(keyboard_map.count(act_letter)==0){
                 cout<<-1<<endl;
                return 0;
            }
        }
    }

    cout<<count_two_hands<<endl;
    return 0;
}