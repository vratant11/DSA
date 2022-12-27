// class Solution {
// public:
//     vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
//         vector<bool>res;
//         sort(candies.begin(),candies.end());
//         cout<<candies[candies.size()-1];
//         for(int i=0;i<candies.size();i++){
//             if((candies[i]+extraCandies)>=candies[candies.size()-1]){
//                 res.push_back(true);
//             }
//             else{
//                  res.push_back(false);
//             }
//         }
//         return res;
//     }
// };



class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans;
        int n = candies.size();
        int max = 0;
        for(int i = 0;i<n;i++){
            if(candies[i]>max) max = candies[i];
        }
        for(int j = 0; j<n; j++){
            if((candies[j] + extraCandies) >= max) ans.push_back(true);
            else ans.push_back(false);
        }
        return ans;
    }
};