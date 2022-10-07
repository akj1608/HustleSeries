class Solution {
public:
  vector<vector<int>>result;
  
  void allpath(vector<vector<int>>&graph,int start,int end,vector<int>&path,vector<bool>&visited)
  {
    if(start==end)
    {
      path.push_back(end);
      result.push_back(path);
      path.pop_back();
      
    }
    path.push_back(start);
    visited[start]=true;
    for(auto &neighbour : graph[start])
    {
      if(not visited[neighbour])
        allpath(graph,neighbour,end,path,visited);
    }
    visited[start]=false;
    path.pop_back();
  }
  
  
  
  
  
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<int>path;
      int n=graph.size();
      vector<bool> visited(n,false);
      allpath(graph,0,n-1,path,visited);
      
      return result;
    }
};