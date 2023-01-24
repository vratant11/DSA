// class Solution {
// public:
//     int arrayPairSum(vector<int>& nums) {
//         sort(nums.begin(),nums.end());
//         int n=nums.size();
//         int sum=0;
//         for(int i=1;i<n;i=i+2){
//             sum+=min(nums[i-1],nums[i]);
//         }
//         return sum;
//     }
// };


class Solution {
public:
    int arrayPairSum(vector<int>& nums)
    {
        sort(nums.begin(),nums.end());
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            if(i%2==0)
            {
                ans = ans + nums[i];
            }
        }
        return ans;
    }
};

