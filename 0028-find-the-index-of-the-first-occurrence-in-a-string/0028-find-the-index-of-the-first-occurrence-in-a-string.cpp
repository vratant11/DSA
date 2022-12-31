class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=needle.length();
        int i=0;
        int j=0;
        for( i=0;i<haystack.length();i++){
            for( j=0;j<n;j++){
                if(haystack[j+i]!=needle[j]){
                    break;
                }
            }
            if(j==n){
                return i;
            }
        }
        return -1;
    }
};