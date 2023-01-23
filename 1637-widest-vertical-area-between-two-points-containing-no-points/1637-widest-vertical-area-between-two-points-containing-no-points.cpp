class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        vector<int>ans;
        for(int i=0;i<points.size();i++){
            ans.push_back(points[i][0]);
        }
        sort(ans.begin(),ans.end());
        int res=0;
        for(int i=1;i<ans.size();i++){
            if(abs(ans[i]-ans[i-1])>res){
                res=abs(ans[i]-ans[i-1]);
            }
        }
        return res;
    }
};