class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int>ans;
        ans.push_back(first);
        for(int i:encoded){
            ans.push_back(first^i);
            first=first^i;
        }
        return ans;
    }
};