// Problem Link https://leetcode.com/problems/climbing-stairs/

// DP
class Solution {
public:
    int climbStairs(int n) {
        vector<int> dp(n + 3, 0);
        dp[1] = 1;
        dp[2] = 2;
        for (int i = 3; i <= n; i++){
            dp[i] = dp[i - 1] + dp[i - 2];
        }
        return dp[n];
    }
};


//Recursion
class Solution {
public:
    int climbStairs(int n) {
        if(n == 1)  return 1;
        if(n == 2)  return 2;
        return climbStairs(n - 1) + climbStairs(n - 2);
    }
};
