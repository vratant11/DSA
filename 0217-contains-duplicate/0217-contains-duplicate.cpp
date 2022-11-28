class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
         map<int,int>m;
        int k=0;
	    for(int i=0;i<(nums.size());i++){
	        m[nums[i]]++;
	    }
	    for(auto it:m)
	    {
	        
	        if(it.second>=2){
	            k=1;
	            break;
	        }
	        
	    }
        if(k==1){
            return true;
        }
        else{
            return false;
        }
    }
};