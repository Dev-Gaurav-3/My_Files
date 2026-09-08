#include <bits/stdc++.h>
using namespace std;

// Implementing Graph using edge list //
class Edge{
    int v;
    int wt;
public:
    Edge(int v,int wt){
        this->v = v;
        this->wt = wt;
    }

};

int main(){

    int V = 6;
    vector<vector<Edge>>Graph(V);

    Graph[0].push_back(Edge(1, 2));
    Graph[0].push_back(Edge(2, 4));
    Graph[1].push_back(Edge(2, 1));
    Graph[1].push_back(Edge(3, 7));
    Graph[2].push_back(Edge(4, 3));
    Graph[3].push_back(Edge(5, 1));
    Graph[4].push_back(Edge(3, 2));
    Graph[4].push_back(Edge(2, 5));
       
    
    return 0;
}