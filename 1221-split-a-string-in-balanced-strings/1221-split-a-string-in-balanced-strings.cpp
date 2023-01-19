class Solution {
public:
    int balancedStringSplit(string s) {
        map<int,char>mp;
        set<char> se;
        int count=0;
        for(int i=0;i<s.length();i++){
            se.insert(s[i]);
            mp[s[i]]++;
            if(se.size()==2&&mp['L']==mp['R']){
                mp.clear();
                se.clear();
                count++;
            }
        }
        return count;
    }
};