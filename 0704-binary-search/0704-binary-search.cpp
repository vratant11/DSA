class Solution {
    private:
          int binary(vector<int>&nums,int t,int s,int e){
              if(s>e) return -1;
              int mid=s+(e-s)/2;
              if(nums[mid]==t) return mid;
              
              if(nums[mid]<t){
                  return binary(nums,t,mid+1,e);
              }
              else{
                  return binary(nums,t,s,mid-1);
              }
          }
public:
    int search(vector<int>& nums, int target) {
        int start = 0;
        int end =nums.size()-1;
        return binary(nums,target,start,end);
    }
};