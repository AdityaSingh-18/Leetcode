//  Problem Link https://leetcode.com/problems/longest-substring-without-repeating-characters/

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int maxSub = 0;
        set<char> a;
        for (int i = 0, j = 0; j < n; j++){
            while(a.count(s[j])){
                a.erase(s[i++]);
            }
            a.insert(s[j]);
            maxSub = max (maxSub, j - i + 1);
        }
        return maxSub;
    }
};