class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int i=0,j=nums.size()-1;
        while(i<j){
            while(i<j&&!(nums[i]%2)) i++;
            while(i<j&&nums[j]%2) j--;
            if(i<j) swap(nums[i++],nums[j--]);
        }
        return nums;
    }
};