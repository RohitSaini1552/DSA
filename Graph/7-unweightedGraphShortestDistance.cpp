// Find the shortest distance between source and each vertex using BFS

#include<bits/stdc++.h>
using namespace std;

vector<list<int>> graph;
unordered_set<int> visited;

void addEdge(int src, int dest, bool biDir = true){
    graph[src].push_back(dest);
    if(biDir){
        graph[dest].push_back(src);
    }
}

void bfs(int src, vector<int> &dist){
    queue<int> q;
    q.push(src);
    visited.insert(src);
    dist[src] = 0;
    while(!q.empty()){
        int curr = q.front();
        cout<<curr<<" "; // order in which nodes gets traversed in BFS
        q.pop();
        for(auto &x : graph[curr]){
            if(!visited.count(x)){
                q.push(x);
                visited.insert(x);
                dist[x] = dist[curr] + 1; // Since there is a direct edge between the curr and the neighbour x
            }
        }
    }
    cout<<"\n";
}


int main(){  
    int v;
    int e;
    cin>>v>>e;
    graph.resize(v,list<int> ());
    while(e--){
        int src, dest;
        cin>>src>>dest;
        addEdge(src,dest);
    }
    vector<int> dist(v,INT_MAX);
    int src;
    cin>>src;
    bfs(src,dist);
    for(auto &x : dist){
        cout<<x<<" ";
    }
}