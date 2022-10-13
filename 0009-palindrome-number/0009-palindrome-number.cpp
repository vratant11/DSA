class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0 )
            return false;
        if(x==0)
            return true;
        long long int num=x,reverse=0;
        while(num>0){
            reverse=reverse*10;
            reverse=reverse+(num%10);
            num=num/10;
        }
        if(x==reverse){
            return true;
        }
        else{
            return false;
        }
    }
};