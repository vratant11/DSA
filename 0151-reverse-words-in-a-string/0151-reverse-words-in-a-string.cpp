class Solution {
public:
    string reverseWords(string s) {
        string ans;
        int i=0;
        int n=s.length();
        while(i<n){
            while(i<n && s[i]==' ')
                i++;
            if(i>=n){
                break; 
            }
               
            int j=i+1;
            while(j<n && s[j]!=' ')
                j++;
            string sub =s.substr(i,j-i);
            if(ans.length()==0)
                ans=sub;
            else{
                ans=sub+" "+ans;
            }
            i=j+1;
        }
        return ans;
    }
};