class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int i = 0;
        int j = nums.size() - 1;
        
        vector<int> ans = {-1, -1};
        
        while(i < nums.size()){
            if(nums[i] == target){
                ans[0] = i;
                break;
            }
            i++;
        }
        
        while(j >= 0){
            if(nums[j] == target){
                ans[1] = j;
                break;
            }
            j--;
        }
        
        return ans;
    }
};