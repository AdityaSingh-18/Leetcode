// Problem Link https://leetcode.com/problems/length-of-last-word/

class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size();
        int i = n - 1, k = 0;
        while(i >= 0 && s[i] == ' '){
            i--;
        }
        while(i >= 0 && s[i] != ' '){
            i--;
            k++;
        }
        return k;
    }
};