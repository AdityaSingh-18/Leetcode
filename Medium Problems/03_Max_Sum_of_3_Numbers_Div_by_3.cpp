// Problem Link https://leetcode.com/problems/maximum-sum-of-three-numbers-divisible-by-three/

class Solution {
public:
    int maximumSum(vector<int>& nums) {
        sort(nums.rbegin(), nums.rend());
        vector<int> mod0, mod1, mod2;
        int n = nums.size();
        for (int i = 0; i < n; i++){
            if(nums[i] % 3 == 0)     mod0.push_back(nums[i]);
            else if(nums[i] % 3 == 1)     mod1.push_back(nums[i]);
            else    mod2.push_back(nums[i]);
        }
        int ans = 0;
        if(mod0.size() >= 3){
            ans = mod0[0] + mod0[1] + mod0[2];
        }
        if(mod1.size() >= 3){
            ans = max (ans, mod1[0] + mod1[1] + mod1[2]);
        }
        if(mod2.size() >= 3){
            ans = max (ans, mod2[0] + mod2[1] + mod2[2]);
        }
        if(mod0.size() > 0 && mod1.size() > 0 && mod2.size() > 0){
            ans = max (ans, mod0[0] + mod1[0] + mod2[0]);
        }
        return ans;
    }
};