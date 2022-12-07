class Solution {
public:
    void reverseString(vector<char>& s) {
        int v=0;
        int e=s.size()-1;
        while(v<e)
        swap(s[v++],s[e--]);
    }
};