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

    void calcInDegree(vector<int>&indeg){
        for(int i = 0;i<V;i++){
            list<int>neigh = l[i];
            for(int v : neigh){
                indeg[v]++;
            }
        }
    }

    void Topo2(){
        // push nodes with indegree 0 in queue
        vector<int>indeg(V,0);
        calcInDegree(indeg);
        queue<int>q;
        for(int i = 0;i<V;i++){
            if(indeg[i] == 0) q.push(i);
        }
        while(!q.empty()){
            int curr = q.front();
            q.pop();
            list<int>neigh = l[curr];
            for(int i : neigh){
                indeg[i]--;
                if(indeg[i] == 0) q.push(i);
            }
            cout << curr << " ";
        }
        cout << endl;
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

    // stack<int>s = Graph.TopoDfs(5);
    // while(!s.empty()){
    //     cout << s.top() << " ";
    //     s.pop();
    // }
    // cout << endl;

    //? a DAG has atleast one vertex with 0 indegree & atleast one vertex with 0 outdegree -> KAHN's ALGO 

    // Graph.Topo2();

    //? cycle detection using kahn's -> if after processing all nodes if there are nodes still with non zero indegree 

    


    
    return 0;
}