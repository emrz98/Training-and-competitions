#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m,k,t;
    cin>>n>>m>>k>>t;
    vector<vector<int>> matriz;
    vector<pair<int,int>> vec_waste;
    for(int i = 0;i<k;i++){
        int value1;
        int value2;
        cin>>value1>>value2;
        vec_waste.push_back(make_pair(value1,value2));
    }
    sort(vec_waste.begin(), vec_waste.end());
    int actual_pos_vec = 0;
    for(int i = 0;i<t;i++){
        int x;
        int y;
        cin>>x>>y;
        x--;
        y--;
        if(matriz[x][y] == -1){
            cout<<"Waste"<<endl;
            continue;
        } 
        int waste = ((x * m + y+1) - (matriz[x][y]%3)) %3;

        if(waste == 0){
            cout<<"Grapes"<<endl;
        } else if(waste == 1){
            cout<<"Carrots"<<endl;
        } else if(waste == 2){
             cout<<"Kiwis"<<endl;
        }

    }

    return 0;
}