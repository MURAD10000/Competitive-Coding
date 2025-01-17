using ll = long long;
 
///DSU - Disjoint Set Union
//Check carefully no_of_nodes
//DSU(int no_of_nodes) constructor needs to be called during initialization
class DSU{
  vector<int> parent;
 public:
  DSU(){}
  DSU(int no_of_nodes){
    parent.resize(no_of_nodes+1);
    for(int i=0; i<=no_of_nodes; ++i) parent[i]=i;
  }
  int find_parent(int node){
    if(node!=parent[node]) parent[node]=find_parent(parent[node]);
    return parent[node];
  }
  void merge_node(int u, int v){
    int par_u=find_parent(u), par_v=find_parent(v);
    parent[par_u]=par_v;
  }
};

//Dsu d1(n),d2(n) ; [declare struct/class]

//Problem 1 (DSU + Divide and Conquer): https://codeforces.com/contest/813/problem/F
//Solution 1: https://codeforces.com/contest/813/submission/48548930
