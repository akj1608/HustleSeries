class Solution {
public:
  bool has_path(vector<list<int>> &graph,int start,int end,vector<bool> &visited)
  {
    if(start==end ) return true;
    visited[start]=true;
    
    for(auto &neighbour : graph[start])
    {
      if(not visited[neighbour] )
      {
        bool result= has_path(graph,neighbour,end,visited);
        if(result ) return true;
      }
    }
      return false;
  }
  
  
  
  
    bool validPath(int n, vector<vector<int>>& edges, int start, int end) {
      
      vector<list<int>> graph(n,list<int>());
      
      for(auto &edge : edges)
      {
        int u=edge[0];
        int v=edge [1];
        
        
        graph[u].push_back(v);
        graph[v].push_back(u);
        
      }
      
      vector<bool> visited(n,false);
      
      return has_path(graph,start,end,visited);
        
    }
};