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
    int amount_waste = 0;
    for(int i = 0;i<n;i++){
                
        vector<int> row;
        for(int j = 0;j<m;j++){
            if(i == vec_waste[actual_pos_vec].first-1 && j == vec_waste[actual_pos_vec].second-1){
                // matriz[i][j] = -1;
                row.push_back(-1);
                amount_waste++;
                actual_pos_vec++;
            } else {
                row.push_back(amount_waste);
                // matriz[i][j] = amount_waste;
            }
        }
        matriz.push_back(row);

    }
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            cout<<matriz[i][j]<<endl;
        }
        cout<<endl;
    }
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