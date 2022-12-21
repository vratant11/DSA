class Solution {
public:
    long long int square(int val){
        if(val>=0 && val<=9){
            return val;
        }
        long long ans = 0;
        while(val){
            int rem = val%10;
            int sqr = rem*rem;
            ans+=sqr;
            val = val/10;
        }
        int a = square(ans);
        return a;
    }
    bool isHappy(int n) {
        int ans = square(n);
        if(ans==1 || ans==7){
            return true;
        }else{
            return false;
        }
    }
};