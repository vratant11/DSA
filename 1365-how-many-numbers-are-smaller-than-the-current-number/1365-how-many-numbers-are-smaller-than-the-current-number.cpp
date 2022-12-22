class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>ans;
        map<int,int>mp;
        for(int i = 0;i < nums.size();i++)
        {
            mp[nums[i]]++;
        }
        int sum=0;
         for(auto it = mp.begin();it != mp.end();it++) 
        {
            int temp = it->second;
            it->second = sum;
            sum += temp;
        }
        for(int i = 0;i < nums.size();i++)
        {
            ans.push_back(mp[nums[i]]);
        }
        return ans;
    }
};