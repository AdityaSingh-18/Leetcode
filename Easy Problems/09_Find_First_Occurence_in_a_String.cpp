// Problem Link https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/

class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size();
        int m = needle.size();
        for (int i = 0; i <= n - m; i++){
            if(haystack[i] != needle[0])    continue;
            int j = 0;
            while(j < m && haystack[i + j] == needle[j]){
                j++;
            }
            if(j == m)  return i;
        }
        return -1;
    }
};