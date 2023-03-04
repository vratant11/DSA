class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int>ans1;
        vector<int>ans2;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                ans1.push_back(nums[i]);
            }
            else{
                ans2.push_back(nums[i]);
            }
            
        }
        for(int i=0;i<ans2.size();i++){
            ans1.push_back(ans2[i]);
        }
        return ans1;
    }
};