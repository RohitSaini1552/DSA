// Find all path between source and destination using DFS

#include<bits/stdc++.h>
using namespace std;

vector<list<int>> graph;
unordered_set<int> visited;
vector<string> ans1;
vector<string> ans2;

void addEdge(int src, int dest, bool biDir = true){
    graph[src].push_back(dest);
    if(biDir){
        graph[dest].push_back(src);
    }
}

void allPath(int src, int dest, string &path){
    if(src == dest){
        path += to_string(src);
        ans1.push_back(path);
        path.pop_back();
    }
    visited.insert(src);
    string temp = path;
    path += to_string(src);
    path += "->";
    for(auto &x : graph[src]){
        if(!visited.count(x)){
            allPath(x,dest,path);
        }
    }
    path = temp;
    visited.erase(src);
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
    int start, end;
    cin>>start>>end;
    string path = "";
    allPath(start,end,path);
    for(auto &x : ans1){
        cout<<x<<endl;
    }
    

}