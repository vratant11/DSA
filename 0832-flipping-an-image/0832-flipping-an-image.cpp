class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        
        vector<vector<int>> ans;
        int n=image.size();
        int m=image[0].size();
        for(int i=0;i<n;i++)
        {
            vector<int> v;
            for(int j=m-1;j>=0;j--)
            {
                if(image[i][j]==1)
                {
                v.push_back(0);
                }
                else if(image[i][j]==0)
                {
                v.push_back(1);
                }
            }
            ans.push_back(v);
        }
        return ans;


    }
};