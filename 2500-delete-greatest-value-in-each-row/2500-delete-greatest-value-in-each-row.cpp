class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        for(auto &it:grid)
        {
            sort(it.begin(), it.end());
        }
        int ans=0;
        int j=0;
        while(j<grid[0].size()){
            int m=0;
            for(int i=0;i<grid.size();i++){
                m=max(m,grid[i][j]);
            }
            ans=ans+m;
            j++;
        }
        return ans;
    }
};