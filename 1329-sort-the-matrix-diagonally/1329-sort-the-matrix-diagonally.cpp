class Solution {
public:
   void sortAt(int x, int y, vector<vector<int>>& g){
    int m = g.size(), n = g[0].size();
    vector<int> counts(101);
    for(int i=x, j=y; i<m && j<n; i++, j++)
        counts[g[i][j]]++;

    for(int i=0; i<101; i++)
        while(counts[i]){
            g[x++][y++] = i;
            counts[i]--;
        }
}

vector<vector<int>> diagonalSort(vector<vector<int>>& g) {
    int m = g.size(), n = g[0].size();
    for(int i=0; i<m; i++)
        for(int j=0; j<n; j++)
            if(i == 0 || j == 0)
                sortAt(i, j, g);
    return g;
}
};