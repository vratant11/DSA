class Solution {
public:
    int find(int i,int j,vector<vector<int>>& grid){
        int ans= 0;
        
        for(int ii=0;ii<3;ii++)
            for(int jj=0;jj<3;jj++)
                ans= max(ans, grid[i+ii][j+jj]);
        
        return ans;
    }
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int ln= grid.size();
        vector<vector<int>> ans(ln-2,vector<int>(ln-2));
        
        for(int i=0;(i+3)<= ln;i++)
            for(int j=0;(j+3)<= ln;j++)
                ans[i][j]= find(i,j,grid);
        
        return ans;
    }
};
