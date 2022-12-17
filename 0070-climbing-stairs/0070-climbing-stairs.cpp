// class Solution {
// public:
//     int climbStairs(int n) {
//         if(n<0)return 0;
//         if(n==0)return 1;
//         int ans = climbStairs(n-1)+climbStairs(n-2);
//         return ans;
//     }
// };
//DP question limit set


class Solution 
{
public:
    int climbStairs(int n) 
    {
        int w1 = 1, w2 = 0, tmp;
        for (int i = 0; i < n; ++i)
            tmp = w1, w1 += w2, w2 = tmp;
        return w1;
    }
};