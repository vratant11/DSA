class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> res;
        int curr = 0;
        for(int i = 1;i<=target[target.size()-1];i++)
        {
            res.push_back("Push");
            if(i==target[curr])
            {
                curr++;
            }
            else
            {
                res.push_back("Pop");
            }
        }
        return res;
    }
};