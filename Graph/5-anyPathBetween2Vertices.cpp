// Find any path between source and destination using DFS

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

bool anyPath(int src, int dest){
    if(src == dest) return true;// destination reached
    visited.insert(src);// mark visited
    for(auto &x : graph[src]){
        if(!visited.count(x)){ // only explore unvisited neighours
            bool result = anyPath(x,dest);
            if(result) return true;//if at any point we got true...return true
        }
    }
    return false;
}


int main(){  
    int v;
    int e;
    cin>>v>>e;
    graph.resize(v,list<int> ());
    visited.clear();
    while(e--){
        int src, dest;
        cin>>src>>dest;
        addEdge(src,dest);
    }
    int start, end;
    cin>>start>>end;
    cout<<anyPath(start,end);
}