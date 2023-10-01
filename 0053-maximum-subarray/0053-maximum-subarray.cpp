class Solution 
{
public:
    int maxSubArray(vector<int>& nums) 
    {
        // int max = INT_MIN;
        // for(int i=0;i<nums.size();i++)
        // {
        //     int c=0;
        //     for(int j=i;j<nums.size();j++)
        //     {
        //         c=c+nums[j];
        //         if(c>max)
        //         {
        //             max=c;
        //         }
        //     }
        // }
        // return max;
        int maxi =INT_MIN;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum=sum+nums[i];
            maxi=max(sum,maxi);
            if(sum<0){
                sum=0;
            }
        }
       return maxi;
    }
};