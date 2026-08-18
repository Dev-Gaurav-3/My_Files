#include <bits/stdc++.h>
using namespace std;

class Graph{
    int V;
    list<int>*l;
    bool isUndir;
public:
    Graph(int V,bool isUndir){
        this->V = V;
        l = new list<int>[V];
        this->isUndir = isUndir;
    }
    void addEdge(int u,int v){
        l[u].push_back(v);
        if(isUndir)
            l[v].push_back(u);
    }
    void print(){
        for (int i = 0; i < V; i++)
        {
            list<int>neighbours = l[i];
            cout << i << ":";
            for(auto &x : neighbours){
                cout << x << " ";
            }
            cout<<"\n";
        }   
    }

    void BFSHELPER(int i,vector<bool>&vis){ // TC -> O(V+E)
        queue<int>q;
        q.push(i);
        vis[i] = true;

        while (!q.empty())
        {
            int curr = q.front();  // curr vertex
            q.pop();
            cout << curr << " ";
            list<int>&neighbours = l[curr];
            for(auto &i:neighbours){
                if(!vis[i]){
                    vis[i] = true;
                    q.push(i); 
                }
            }
        }
    }

    void BFS(){
        vector<bool>vis(V,false);
        for (int i = 0; i < V; i++)
        {
            if(!vis[i]){
                BFSHELPER(i,vis);
                cout << endl;
            }
        }
        
    }

    void DFSHELPER(int u,vector<bool>&vis){
        cout<<u<<" ";
        vis[u] = true;
        list<int>neig = l[u];
        for(auto &x:neig){
            if(!vis[x]){
                DFSHELPER(x,vis);
            }
        }
    }
    void DFS(){
        vector<bool>vis(10,false);
        for (int i = 0; i < V; i++)  // For loop if disconnected component is there //
        {
            if(!vis[i]){
                DFSHELPER(i,vis);
                cout << endl;
            }
        }
    }

    bool isUndirCycleHelper(int src,int par,vector<bool>&vis){
        vis[src] = true;
        list<int>neighbours = l[src];
        for(auto &x:neighbours){
            if(!vis[x]){
                if(isUndirCycleHelper(x,src,vis)) return true;
            }
            else{
                if(x != par) {
                    return true;
                }
            }
        }
        return false;
    }

    bool isUndirCycle(){
        vector<bool>vis(V,false);
        return isUndirCycleHelper(0,-1,vis);
    }

    bool isDirCycleHelper(int src,vector<bool>&vis,vector<bool>&isRec){
        vis[src] = true;
        isRec[src] = true;
        list<int>neighbours = l[src];
        for(auto &v : neighbours){
            if(!vis[v]){
                if(isDirCycleHelper(v,vis,isRec)) return true;
            }
            else{
                if(isRec[v]) return true;
            }
        }
        isRec[src] = false; 
        return false; 
    }

    bool isDirCycle(){
        vector<bool>vis(V,false);
        vector<bool>isRec(V,false);
        for (int i = 0; i < V; i++)
        {
            if(!vis[i]){
                if(isDirCycleHelper(i,vis,isRec)) return true;
            }
        }
        return false;
    }

    bool isBipartiteHelper(int src,vector<bool>&vis,vector<int>&color,queue<int>&q){

        q.push(src);
        color[src] = 0;

        while(!q.empty()){
            int curr = q.front();
            q.pop();
            list<int>neighbours = l[curr];

            for(int v : neighbours){
                if(!vis[v]){
                    vis[v] = true;
                    color[v] = !color[curr];
                    q.push(v);
                }
                else{
                    if(color[v] == color[curr]) return false;
                }
            }
        }
        return true;
    }

    bool isBipartite(){

        vector<bool>vis(V,false);
        vector<int>color(V,-1);
        queue<int>q;

        for (int i = 0; i < V; i++)
        {
            if(!vis[i]){
                if(!isBipartiteHelper(i,vis,color,q)) return false;
            }
        }
        return true;
    }
    vector<vector<int>> DFSpath(int src,int dest){
        vector<int>temp;
        vector<vector<int>>ans;
        vector<bool>vis(V,false);
        DFSpathHelper(src,dest,temp,vis,ans);    

        return ans;
    }

    void DFSpathHelper(int src,int dest,vector<int>&temp,vector<bool>&vis,vector<vector<int>>&ans){
        vis[src] = true;
        temp.push_back(src);
        if(src == dest){
            ans.push_back(temp);
        }
        for (int neigh : l[src]) {
            if (!vis[neigh]) {
                DFSpathHelper(neigh, dest, temp, vis,ans);
        }
    }
        temp.pop_back();
        vis[src] = false;
    }

    vector<vector<int>> BFSpath(int src, int dest) {
        vector<vector<int>> ans;
        queue<vector<int>> q;
        q.push({src});

        while (!q.empty()) {

            vector<int> path = q.front();
            q.pop();
            int curr = path.back();
            if (curr == dest) {
                ans.push_back(path);
                continue;
            }

            for (auto x : l[curr]) {

                if (find(path.begin(), path.end(), x) == path.end()) {
                    vector<int> newPath = path;
                    newPath.push_back(x);
                    q.push(newPath);
                }
            }
        }

        return ans;
    }
};






int main(){

    // Graph Graph(10);

    //undirected unweighted graph //
    // Graph.addEdge(0,1);
    // Graph.addEdge(1,2);
    // Graph.addEdge(1,3);
    // Graph.addEdge(2,3);
    // Graph.addEdge(2,4);

    // Graph.print();

    // For Weighted Graph we will store list<pait<int,int>>[V];

    // BFS //

    // Graph.addEdge(0,1);
    // Graph.addEdge(0,2);
    // Graph.addEdge(1,3);
    // Graph.addEdge(2,4);
    // Graph.addEdge(3,4);
    // Graph.addEdge(3,5);
    // Graph.addEdge(4,5);
    // Graph.addEdge(5,6);

    // Graph.BFS();
    // Graph.DFS();

    // DISCONNECTED GRAPH //

    // Graph.addEdge(1,6);
    // Graph.addEdge(6,4);
    // Graph.addEdge(4,3);
    // Graph.addEdge(4,9);
    // Graph.addEdge(3,7);
    // Graph.addEdge(3,8);
    // Graph.addEdge(0,2);
    // Graph.addEdge(2,5);

    // Graph.DFS();
    // Graph.BFS();

    // Graph Graph(5);

    // Graph.addEdge(0,1);
    // // Graph.addEdge(0,2); 
    // Graph.addEdge(0,3);
    // Graph.addEdge(1,2);
    // Graph.addEdge(3,4);

    // ? Cycle Detection //
    // ? Back Edge => The Edge which brings cycle to the graph like in this example 02 edge is backedge
    // cout<< Graph.isUndirCycle() << "\n";

    // Graph Graph(4,false);

    // Graph.addEdge(1,0);
    // Graph.addEdge(0,2);
    // Graph.addEdge(2,3);
    // Graph.addEdge(3,0);

    // cout<<Graph.isDirCycle()<<endl;

    // Graph Graph(5,false);

    // Graph.addEdge(0,1);
    // Graph.addEdge(0,2);
    // Graph.addEdge(1,3);
    // Graph.addEdge(2,4);
    // // Graph.addEdge(3,4);

    // cout<<Graph.isBipartite()<<endl;
    //TODO : OddCycle -> Not Bipartite , EvenCycle,Acyclic -> Bipartite

    //? PRINT ALL THE PATHS FROM SRC TO DEST // 

    Graph Graph(6,false);

    Graph.addEdge(5,2);
    Graph.addEdge(5,0);
    Graph.addEdge(0,3);
    Graph.addEdge(2,3);
    Graph.addEdge(4,0);
    Graph.addEdge(4,1);
    Graph.addEdge(3,1);
    // Graph.addEdge(3,6);
    // Graph.addEdge(6,1);

    // vector<vector<int>>ans = Graph.DFSpath(5,1);
    vector<vector<int>>ans = Graph.BFSpath(5,1);

    for(auto &x : ans){
        for(auto &y : x){
            cout << y << " ";
        }
        cout << endl;
    }




    return 0;
}