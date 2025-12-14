// Problem Link https://leetcode.com/problems/palindrome-number/

class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0)   return false;
        string s = std::to_string(x);
        int n = s.size();
        for (int i = 0; i < n / 2; i++){
            if(s[i] != s[n - 1 - i])    return false;
        }
        return true;
    }
};