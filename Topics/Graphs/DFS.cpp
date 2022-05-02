#include <bits/stdc++.h>

using namespace std;

int N = 100;

vector<int> adj[7];
bool visited[6] = {false};
int max_depth = 0;

void dfs(int s, int max_d = 0){
    if(max_d>max_depth){
        max_depth = max_d;
        cout<<max_depth<<endl;
    }
    if (visited[s]) return;
    visited[s] = true;
    cout<<"node "<<s<<endl;
    for(auto u: adj[s]){
        dfs(u, max_d + 1);
    }
}

// sacar distancia mas profunda
// sacar distancia mas pequeña
// is connected
// shortest path
int main(){
    adj[1].push_back(4);
    adj[1].push_back(2);
    adj[2].push_back(1);
    adj[2].push_back(5);
    adj[2].push_back(3);
    adj[3].push_back(2);
    adj[3].push_back(6);
    // adj[6].push_back(3);
    // adj[6].push_back(5);
    // adj[5].push_back(2);
    // adj[5].push_back(6);
    dfs(1);
    cout<<"final"<<endl;
    cout<<max_depth<<endl;
    return 0;
}