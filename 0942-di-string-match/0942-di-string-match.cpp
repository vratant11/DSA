class Solution {
public:
    vector<int> diStringMatch(string s) {
        vector<int>v(s.size()+1);
        int l=0;
        int r=s.size();
        int index=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='I') v[index++]=l++;
            else v[index++]=r--;
            
        }
        if(s[s.size()-1]=='I') v[index]=l;
        else v[index]=r;
        return v;
        
    }
};