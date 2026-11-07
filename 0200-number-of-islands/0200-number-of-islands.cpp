class Solution {
public:
    void dfs(vector<vector<char>> &grid, int row , int col){
        if(grid[row][col]=='2') return;
        grid[row][col] = '2';
        if(row-1 != -1 && grid[row-1][col] == '1') dfs(grid, row -1,col); 
        if(col-1 != -1 && grid[row][col-1] == '1') dfs(grid, row,col-1);
        if(row+1 != grid.size() && grid[row+1][col] == '1') dfs(grid, row+1,col); 
        if(col+1 != grid[0].size() && grid[row][col+1] == '1') dfs(grid, row,col+1); 
    }
    int numIslands(vector<vector<char>>& grid) {
        int ans=0;
        for(int i = 0 ; i < grid.size() ; i++){
            for(int j = 0 ; j < grid[0].size();j++){
                if(grid[i][j] == '1'){
                dfs(grid , i , j);
                ans++;
                }
            }
        }
        return ans;
        
    }
};