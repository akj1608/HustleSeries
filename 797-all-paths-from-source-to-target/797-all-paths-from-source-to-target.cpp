class Solution {
public:
  
  vector<vector<int>>res;
  
  
  void allpath(vector<vector<int>>& graph,int start,int end, vector<int> &paths,vector<bool> &visited)
  {
    
    if(start==end)
    {
      paths.push_back(end);
      res.push_back(paths);
      paths.pop_back();
      return;
    }
    paths.push_back(start);
    visited[start]=true;
    
    for(auto &neighbour: graph[start])
    {
      if(not visited[neighbour])
      {
        allpath(graph,neighbour,end,paths,visited);
      }
    }
    visited[start]=false;
    paths.pop_back();
    
  }  
  
  
  
  
  
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
      vector<int> paths;
      int n=graph.size();
      vector<bool>visited(n,false);
      
      allpath(graph,0,n-1,paths,visited);
      return res;
        
    }
  
  
};