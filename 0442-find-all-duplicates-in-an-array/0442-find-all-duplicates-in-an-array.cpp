class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>twice;
         map<int,int>m;
	    for(int i=0;i<(nums.size());i++){
	        m[nums[i]]++;
	    }
	    for(auto it:m)
	    {
	        
	        if(it.second==2){
	           twice.push_back(it.first);
	        }
	        
	    }
        return twice;
    }
};