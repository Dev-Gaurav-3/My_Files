#include <bits/stdc++.h>
using namespace std;

class Graph{
    int V;
    list<pair<int,int>>*l;
public:
    Graph(int V){
        this->V = V;
        l = new list<pair<int,int>>[V];
    }
    void add(int u,int v,int w){
        l[u].push_back({v,w});
        l[v].push_back({u,w});
    }
    void print(){
        for (int i = 0; i < V; i++)
        {
            list<pair<int,int>>temp = l[i];
            cout << i << ":";
            for(auto &[a,b]:temp){
                cout << '('<<a<<","<<b<<")";
            }
            cout<<endl;
        }
    }
    void BFS(){
        vector<bool>vis(V,false);
        queue<int>q;
        q.push(0);
        vis[0] = true;
        while(!q.empty()){
            int curr = q.front();
            q.pop();
            list<pair<int,int>>temp = l[curr];
            cout<<curr<<" ";
            for(auto &[a,b]:temp){
                if(!vis[a]){
                    vis[a] = true;
                    q.push(a);
                }
            }
        }
        cout<<"\n";
    }
    void DFSHELPER(int u,vector<bool>&vis){
        vis[u] = true;
        list<pair<int,int>>temp = l[u];
        cout << u << " ";
        for(auto &[a,b]:temp){
            if(!vis[a]){
                DFSHELPER(a,vis);
            }
        }
    }
    void DFS(){
        vector<bool>vis(5,false);
        DFSHELPER(0,vis);
        cout << endl;
    }
};

int main(){

    Graph Graph(5);

    Graph.add(0,1,5);
    Graph.add(1,2,1);
    Graph.add(1,3,3);
    Graph.add(2,3,1);
    Graph.add(4,2,2);

    // Graph.print();

    Graph.BFS();
    Graph.DFS();
    
    return 0;
}