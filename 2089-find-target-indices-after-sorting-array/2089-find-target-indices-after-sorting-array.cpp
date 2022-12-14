class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++) cout<<nums[i];
        int n=nums.size();
        vector<int>v;
       
        for(int i=0;i<n;i++){
           if(nums[i]==target){
               v.push_back(i);
           }
          
            
        }
        return v;
    }
};