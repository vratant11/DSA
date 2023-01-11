class Solution {
public:
   vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> a(nums.size(),0);
        int indexpos = 0, indexneg=1;
        for(auto num: nums){
            if(num>0){
                a[indexpos] = num;
                indexpos+=2;
            }
            if(num<0){
                a[indexneg] = num;
                indexneg += 2;
            }
        }
        return a;
        
    }
};



