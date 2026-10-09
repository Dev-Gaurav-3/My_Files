#include <bits/stdc++.h>
using namespace std;

// Implementing Graph using edge list //
class Edge{
public:
    int v;
    int wt;
    Edge(int v,int wt){
        this->v = v;
        this->wt = wt;
    }

};

void dijkstra(int src,vector<vector<Edge>>Graph,int V){
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
    // pair (dist[v],v);

    vector<int>dist(V,INT_MAX);

    pq.push(make_pair(0,src));
    dist[src] = 0;

    while(!pq.empty()){
        int u = pq.top().second;
        pq.pop();

        vector<Edge>edges = Graph[u];
        for(Edge e:edges){
            if(dist[e.v] >  dist[u] + e.wt){
                dist[e.v] = dist[u] + e.wt;
                pq.push(make_pair(dist[e.v],e.v));
            }
        }
    }

    for(int d : dist){
        cout<<d<<" ";
    }
    cout << endl;
}

// Bellman Ford Algo => shortest path from src to all vertices for weighted graph with -ve wt //

void bellmanFord(vector<vector<Edge>>Graph,int V,int src){
    vector<int>dist(V,INT_MAX);
    dist[src] = 0;

    for (int i = 0; i < V-1; i++)
    {
        for (int u = 0; u < V; u++)
        {
            for(Edge e:Graph[u]){
                if(dist[e.v] > dist[u] + e.wt){
                    dist[e.v] = dist[u] + e.wt;
                }
            }
        }
    }

    for (int i = 0; i < V; i++)
    {
        cout << dist[i] << " ";
    }
    cout << endl;
}

// Minimum Spanning Tree (MST)

// MST is a subset of the edges of a connected, edge-weighted undirected graph that connects
// all the vertices together, without any cycles and with the minimum possible total edge weight.

// Prim's Algo //

class Graph{
    int V;
    list<pair<int,int>>*l;
    bool isUndir;
public:
    Graph(int V,bool isUndir = false){
        this->V = V;
        l = new list<pair<int,int>>[V];
        this->isUndir = isUndir;
    }

    void addEdge(int u,int v,int wt){
        l[u].push_back({v,wt});
        if(isUndir){
            l[v].push_back({u,wt});
        }
    }
    void prims(int src){
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        vector<bool>mst(V,false);
        pq.push({0,src});
        int ans = 0;

        while(!pq.empty()){
            int u = pq.top().second;
            int wt = pq.top().first;
            pq.pop();
            if(!mst[u]){
                mst[u] = true;
                ans += wt;
                list<pair<int,int>>neigh = l[u];
                for(pair<int,int>n : neigh){
                    int v = n.first;
                    int currWt = n.second;
                    pq.push({currWt,v});
                }
            }
        }
        cout<<"Final Cost: "<<ans<<endl;
    }
};


int main(){

    int V = 5;
    // vector<vector<Edge>>Graph(V);

    // Graph[0].push_back(Edge(1, 2));
    // Graph[0].push_back(Edge(2, 4));
    // Graph[1].push_back(Edge(2, 1));
    // Graph[1].push_back(Edge(3, 7));
    // Graph[2].push_back(Edge(4, 3));
    // Graph[3].push_back(Edge(5, 1));
    // Graph[4].push_back(Edge(3, 2));
    // Graph[4].push_back(Edge(2, 5));
    
    // dijkstra(0,Graph,V);

    // Graph[0].push_back(Edge(1,2));
    // Graph[0].push_back(Edge(2,4));
    // Graph[1].push_back(Edge(2,-4));
    // Graph[2].push_back(Edge(3,2));
    // Graph[3].push_back(Edge(4,4));
    // Graph[4].push_back(Edge(1,-1));

    // bellmanFord(Graph,V,0);


    Graph graph(4);

    graph.addEdge(0,1,10);
    graph.addEdge(0,2,15);
    graph.addEdge(0,3,30);
    graph.addEdge(1,3,40);
    graph.addEdge(2,3,50);

    graph.prims(0);


    
    return 0;
}