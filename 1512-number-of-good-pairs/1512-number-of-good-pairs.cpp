class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int i=0,count=0;
       // sort(nums.begin(),nums.end());
        while(i<nums.size()){
            int j=i+1;
            while(j<nums.size()){
                if(i<j && nums[i]==nums[j]){
                    count++;
                }
                j++;
            }
            i++;
        }
        return(count);
        
    }
};