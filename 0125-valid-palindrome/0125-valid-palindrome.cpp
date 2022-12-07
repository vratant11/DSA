class Solution {
public:
    bool isPalindrome(string s) {
        string str;
        for(int i=0;i<s.length();i++){
            if(s[i]>='a'&&s[i]<='z' || s[i]>='A'&&s[i]<='Z' || (s[i] >= '0' && s[i] <= '9')){
                str.push_back(tolower(s[i]));
            }
        }
        int v=0;
        int e=str.length()-1;
        while(v<e){
            if(str[v++]!=str[e--]){
                return 0;
            }
        }
        return 1;        
    }
};