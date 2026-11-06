class Solution {
public:
    void dfs(int row , int col ,vector<vector<int>>& image,int initc , int color){
        image[row][col] = color;
        if(row-1 != -1 && image[row-1][col] == initc ) dfs(row-1,col,image , initc , color);
        if(col-1 != -1 && image[row][col-1] == initc ) dfs(row,col-1,image , initc , color);
        if(row+1 != image.size() && image[row+1][col] == initc ) dfs(row+1,col,image , initc , color);
        if(col+1 != image[0].size() && image[row][col+1] == initc ) dfs(row,col+1,image , initc , color);

    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int initc = image[sr][sc];
        if(initc == color) return image;
        dfs(sr,sc,image , initc , color);
        return image;
        
    }
};