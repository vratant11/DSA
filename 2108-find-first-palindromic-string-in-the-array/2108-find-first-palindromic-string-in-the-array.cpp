bool isPalindrome(string str){
        int left=0 ;
        int rigt=str.size()-1;
        while( left<= rigt ){
            if( str[left] != str[rigt] )
                return false;
            left++;
            rigt--;
        }
        return true;
    }
class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        
        for(int i=0 ; i<words.size() ; i++){
            if(isPalindrome(words[i]))
                return words[i];
        }
        return "";
    }
};