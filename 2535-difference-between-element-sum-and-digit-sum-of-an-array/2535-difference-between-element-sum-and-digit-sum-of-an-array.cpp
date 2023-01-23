class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int dsum=0;
        int esum=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<10){
                dsum=dsum+nums[i];
            }
            else{
                int n=nums[i];
                int digit=0;
               while(n!=0){
                   digit=n%10;
                   dsum=dsum+digit;
                   n=n/10;
               } 
            }
            esum=esum+nums[i];
        }
        return  abs(esum-dsum);  
    }
};