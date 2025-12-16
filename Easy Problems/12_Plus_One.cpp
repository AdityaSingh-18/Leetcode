// Problem Link https://leetcode.com/problems/plus-one/

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        int i = n - 1;
        while(i >= 0 && digits[i] == 9){
            i--;
        }
        if(i == -1){
            digits[0] = 1;
            digits.push_back(0);
            i++;
        }
        else    digits[i]++;
        int j = i + 1;
        while(j < n){
            digits[j] = 0;
            j++;
        }
        return digits;
    }
};