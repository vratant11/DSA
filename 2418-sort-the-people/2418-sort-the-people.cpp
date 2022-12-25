class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        map<int, string> mp;
        vector<string>ans;
   for(int i=0;i< names.size();i++){
        mp.insert({ heights[i], names[i] });
   }        
        
         for (auto itr = mp.begin(); itr != mp.end(); ++itr) {
             ans.push_back(itr->second);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};