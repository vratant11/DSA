// class Solution {
// public:
//     vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
//         set<int>a1;
//         set<int>a2;
//         int n=0;
//         vector<int>ans;
//         if(nums1.size()>=nums2.size()) n=nums1.size();
//         else{
//             n=nums2.size();
//         }
//         for(int i=0;i<n;i++){
//             if(i<nums1.size()) a1.insert(nums1[i]);
//             if(i<nums2.size()) a2.insert(nums2[i]);
//         }
//          if(a1.size()>=a2.size()) n=a1.size();
//         else{
//             n=a2.size();
//         }
//         for(int i=0;i<n;i++){
//             for(int j=0;j<n;i++){
//                 if(i<n){
//                     if(a1[i]==a2[j]){
//                         ans.push_back(a2[j]);
//                     }
//                 }
//                 else{
//                     break;
//                 }
//             }
//         }
//         return ans;
//     }
// };






class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int n = nums1.size();
        int m = nums2.size();
        
        set<int> s;
        int i =0,j=0;
        while(i<n && j<m){
            if(nums1[i]>nums2[j]) j++;
            else if(nums1[i]<nums2[j]) i++;
            else{
                s.insert(nums1[i]);
                i++;
                j++;
            }
        }
        vector<int> ans;
        for(auto i : s) ans.push_back(i);
        return ans;  
    }
};