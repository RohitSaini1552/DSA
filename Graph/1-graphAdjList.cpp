#include<bits/stdc++.h>
using namespace std;
vector<list<int>> graph;
void addEdge(int src, int dest, bool biDir = true){
    graph[src].push_back(dest);
    if(biDir){
        graph[dest].push_back(src);
    }
}

void display(){
    for(int i=0;i < graph.size();i++){
        cout<<i<<"->";
        for(auto &x : graph[i]){
            cout<<x<<",";
        }
        cout<<endl;
    }
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
    display();
}