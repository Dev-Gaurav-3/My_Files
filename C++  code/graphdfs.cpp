#include<bits/stdc++.h>
using namespace std;

vector<list<int>>graph;
int v;
void add_edge(int src,int dest,bool bi_dir = true){
    graph[src].push_back(dest);
    if(bi_dir){
        graph[dest].push_back(src);
    }
}

unordered_set<int>visited;

bool dfs(int curr ,int end){
    if(curr == end) return true;
    visited.insert(curr);
    for(auto nbr:graph[curr]){
        if(not visited.count(nbr)){
            bool result = dfs(nbr,end);
            if(result) return true;
        }
    }
}

bool anyPath(int src,int dest){
    dfs(src,dest);
}

int main(){
    
    cin>>v;
    graph.resize(v,list<int>());
    int e;
    cin>>e;
    visited.clear();
    while (e--)
    {
        int s,d;
        cin>>s>>d;
        add_edge(s,d,false);
    }

    int x,y;
    cin>>x>>y;
    cout<<anyPath(x,y);

  return 0;
}
