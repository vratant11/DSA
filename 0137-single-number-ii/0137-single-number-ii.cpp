class Solution {
public:
    int singleNumber(vector<int>& nums) {
         map<int,int>mp;
        int ans=0;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        
        
        for (auto i : mp){
            if(i.second==1){
                ans=i.first;
                break;
            }
        }
        return ans;
    }
};