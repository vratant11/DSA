class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
    int k=1;
    map<int, int>m;
    sort(nums.begin(), nums.end());
    for(int i=0; i<nums.size(); i++){
        m[nums[i]]++;
        if(nums[i]==k)
        {k++;}
    }
    int val;
    for(auto it: m){
        if(it.second==2)
        {val=it.first; break;}
    }
    return {val, k};
}
};