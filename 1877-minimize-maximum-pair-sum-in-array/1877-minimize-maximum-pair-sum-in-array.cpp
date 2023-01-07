class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>ans;
        for(int i=0;i<nums.size()/2;i++){
            ans.push_back(nums[i]+nums[nums.size()-i-1]);
        }
        sort(ans.begin(),ans.end());
        return ans[ans.size()-1];
    }
};