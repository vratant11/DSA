class Solution {
public:
    int maxPower(string s) {
        int ans=1,t=1;
        for(int i=1;i<s.length();i++)
        {
            if(s[i]==s[i-1])
            {
                t++;
            }
            else
            {
                ans=max(ans,t);
                t=1;
            
            }
        }
        ans=max(ans,t);
        return ans;

    }
};