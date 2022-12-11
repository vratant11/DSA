class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
         vector<int>a(nums.size());
        for(int i=0;i<nums.size();i++){
            a[i]=nums[nums[i]];
        }
        return a;
    }
};