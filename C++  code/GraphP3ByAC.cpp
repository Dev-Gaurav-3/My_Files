#include <bits/stdc++.h>
using namespace std;

class Graph{
    int V;
    bool isUndir;
    list<int>*l;
public:
    Graph(int V,bool isUndir){
        this->V = V;
        this->isUndir = isUndir;
        l = new list<int>[V];
    }

    void addEdge(int u,int v){
        l[u].push_back(v);
        if(isUndir) l[v].push_back(u);
    }

    void print(){
        for (int i = 0; i < V; i++)
        {
            list<int>neigh = l[i];
            cout << i << ":";
            for(auto &x : neigh){
                cout<<x <<" ";
            }
            cout << endl;
        }
    }

    void TopoDfsHelper(int src,vector<bool>&vis,stack<int>&s){
        vis[src] = true;
        list<int>neigh = l[src];
        for(auto &x : neigh){
            if(!vis[x]){
                vis[x] = true;
                TopoDfsHelper(x,vis,s);
            }
        }
        s.push(src);
    }

    stack<int>TopoDfs(int src){
        vector<bool>vis(V,false);
        stack<int>s;
        for (int i = 0; i < V; i++)
        {
            if(!vis[i]){
                TopoDfsHelper(i,vis,s);
            }
        }
        
        return s;
    }

};

int main(){

    // TOPOLOGICAL SORTING => used for Directed Acyclic Graphs (DAG)
    // Linear order of vertices such that for every u -> v, u comesbefore v in sequence.

    Graph Graph(6,false);
    Graph.addEdge(5,2);
    Graph.addEdge(5,0);
    Graph.addEdge(2,3);
    Graph.addEdge(4,0);
    Graph.addEdge(4,1);
    Graph.addEdge(3,1);

    // Graph.print();

    stack<int>s = Graph.TopoDfs(5);
    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;

    
    return 0;
}