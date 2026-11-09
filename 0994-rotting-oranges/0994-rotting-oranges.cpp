class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int ans = 0 ;
        queue<pair<pair<int,int>,int>> q;
        for(int i = 0 ; i < grid.size() ;i++){
            for(int j = 0 ; j < grid[0].size();j++){
                if(grid[i][j] == 2){
                    q.push({{i,j},0});
                }
            }
        }
        int tm=0;
        while(!q.empty()){
            int r = q.front().first.first;
            int c = q.front().first.second;
            int t = q.front().second;
            tm = max(t,tm);
            q.pop();

            if(r-1 != -1 && grid[r-1][c] == 1){
                grid[r-1][c] = 2;
                q.push({{r-1,c},t+1});
            }
            if(c-1 != -1 && grid[r][c-1] == 1){
                grid[r][c-1] = 2;
                q.push({{r,c-1},t+1});
            }
            if(r+1 != grid.size() && grid[r+1][c] == 1){
                grid[r+1][c] = 2;
                q.push({{r+1,c},t+1});
            }
            if(c+1 != grid[0].size() && grid[r][c+1] == 1){
                grid[r][c+1] = 2;
                q.push({{r,c+1},t+1});
            }
        }
        for(int i = 0 ; i < grid.size() ;i++){
            for(int j = 0 ; j < grid[0].size();j++){
                if(grid[i][j] == 1) return -1;
            }
        }
        return tm;
    }
};