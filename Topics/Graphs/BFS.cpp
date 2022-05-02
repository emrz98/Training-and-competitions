#include<bits/stdc++.h>

using namespace std;

queue<int> q;
bool visited[100];
int distance[100];


int main(){
    visited[x] = true;
    distance[x] = 0;

    q.push(x);

    while(!q.empty()){
        int s = q.front(); q.pop();

        for(auto u : adj[s]){
            if ( visited[u]) continue;
            visited[u] = true;
            distance[u] = distance[s] + 1;
            q.push(u);
        }
    }
    return 0;
}

