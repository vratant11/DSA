class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double ret=0.0;
        for(int i=0;i<nums2.size();i++){
            nums1.push_back(nums2[i]);
        }
        sort(nums1.begin(),nums1.end());
        int len= nums1.size();
        if(len%2!=0){
           
            return nums1[len/2];
        }
        else{            
            return (double)( nums1[(len-1)/2] + nums1[((len-1)/2) + 1]) /2;
        }
       
    }
};