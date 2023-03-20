class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int,int>mp;
        int dup=0;
        for(auto i=0;i<nums.size();i++)
            mp[nums[i]]++;
            for(auto i:mp){
                if(i.second>1){
                    dup=i.first;
                    break;
                }
            }
        return dup;
    }
};







// class Solution {
// public:
//     int findDuplicate(vector<int>& nums) {
//         map<int, int> m;
//         int duplicate = 0;
//         for(auto i= 0; i<nums.size(); ++i)
//         ++m[nums[i]];
        
//         for(auto i : m)
//         {
//             if(i.second > 1)
//             {
//                 duplicate = i.first;
//                 break;
//             }
//         }
//         return duplicate;
//     }
// 	// for github repository link go to my profile.
// };