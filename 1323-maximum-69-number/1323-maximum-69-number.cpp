class Solution {
public:
    int maximum69Number (int n) {
        string s = to_string(n);
        int i=0;
        while(i<s.length()){
            if(s[i]== '6'){
                s[i]= '9';
                break;
            }
            i++;
        }    
        
       return stoi(s);        
    }
};