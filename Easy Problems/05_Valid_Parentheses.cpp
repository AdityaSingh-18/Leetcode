// Problem Link https://leetcode.com/problems/valid-parentheses/

class Solution {
public:
    bool isValid(string s) {
        int n = s.size();
        vector<char> a;
        for (int i = 0; i < n; i++){
            if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
                a.push_back(s[i]);
            }
            else if(a.empty()){
                return false;
            }
            else if ((s[i] == ')' && a.back() == '(') || (s[i] == ']' && a.back() == '[') || (s[i] == '}' && a.back() == '{')){
                a.pop_back();
            }
            else    return false;
        }
        if(a.empty())   return true;
        else    return false;
    }
};