class Solution {
public:
    int divide(int dividend, int divisor) {
        long long int n= (long long)dividend/divisor; 
        if(n>=INT_MAX) return (INT_MAX);
        else if(n<=INT_MIN) return (INT_MIN);
        else return n;
    }
};