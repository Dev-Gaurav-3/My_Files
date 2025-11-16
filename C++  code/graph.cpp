#include<bits/stdc++.h>
using namespace std;

vector<list<int>>graph; // Undirected Unweighted graph //
int v; //no. of vertices //
void add_edge(int src,int dest,int bi_dir = true){
    graph[src].push_back(dest);

    if(bi_dir){
      graph[dest].push_back(src);
    }
}

void display(){
  for (int i = 0; i < graph.size(); i++)
  {
    cout<<i<<" -> ";
    for(auto ele:graph[i]){
      cout<<ele<<" , ";
    }
    cout<<"\n";
  }
  
}

int main(){

    // Adjacency list => in this approach we represent graph as an array of linked list //
    // Adjacency map => --------------------------------------------------- hashmap //
    // Adjacency MAtrix => --------------------------------- in a 2d array  of V x V  
    // where v is no. of vertices //
    
    // ADJACENCY LIST //
    cin>>v;
    graph.resize(v,list<int>());
    int e ;
    cin>>e;
    while(e--){
      int s,d;
      cin>>s>>d;
      add_edge(s,d);
    }
    display();

  return 0;
}
