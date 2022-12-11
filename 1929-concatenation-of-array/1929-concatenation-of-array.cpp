class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>a(2*nums.size());
        int n=nums.size();
        for(int i=0;i<n;i++){
            a[i]=nums[i];
            a[i+n]=nums[i];
        }
        return a;
    }
};