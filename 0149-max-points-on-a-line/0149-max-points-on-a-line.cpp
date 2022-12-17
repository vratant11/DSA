class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        if(points.size()<=2) return points.size();
        int ans=0;
        int n=points.size();
        for(int i=0;i<n;i++){
            unordered_map<double,int> m;
            int same=0;
            double slope =0.0;
            for(int j=0; j<n;j++){
                int x1=points[i][0];
                int x2=points[j][0];
                int y1=points[i][1];
                int y2=points[j][1];
                
                int dy=y2-y1;
                int dx=x2-x1;
                if(dy == 0 && dx == 0){
                    same++;
                    continue;
                }
                if(dx!=0){
                    slope = dy*1.0/dx;
                    
                }
                else{
                    slope = INT_MAX;  //dx=0 infinite slope
                }
                m[slope]++;
            }
            if(m.size()==0){
                ans=same;
            }
            else{
                for(auto slope : m){
                    ans = max(ans,slope.second+same);
                }
            }
        }
        return ans;
    }
};