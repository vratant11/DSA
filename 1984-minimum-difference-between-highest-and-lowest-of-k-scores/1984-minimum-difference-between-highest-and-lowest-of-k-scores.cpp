class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        
       sort(nums.begin(),nums.end());

       int left=0,right=k-1;

       int result =INT_MAX;

       while(right<nums.size())
       {
           result=min(result,nums[right]-nums[left]);
            
           left++;
           right++;

       }

       return result;
    }
};
