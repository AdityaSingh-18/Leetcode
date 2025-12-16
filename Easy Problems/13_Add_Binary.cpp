// Problem Link https://leetcode.com/problems/add-binary/

// Solution 1
class Solution {
public:
    string addBinary(string a, string b) {
        int n = a.size(), m = b.size();
        int i = n - 1, j = m - 1, carry = 0, sum = 0;
        string s = "";
        while(i >= 0 || j >= 0 || carry){
            if(i >= 0)    sum += a[i] - '0';
            if(j >= 0)    sum += b[j] - '0';
            if(sum > 2)    s = '1' + s;
            else if(sum == 2)    s = '0' + s;
            else    s = to_string(sum) + s;
            carry = sum / 2;
            i--;
            j--;
            sum = carry;
        }
        return s;
    }
};


// Solution 2
class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.size() - 1, j = b.size() - 1;
        int carry = 0;
        string res;
        while (i >= 0 || j >= 0 || carry) {
            int sum = carry;
            if (i >= 0)     sum += a[i--] - '0';
            if (j >= 0)     sum += b[j--] - '0';
            res.push_back((sum % 2) + '0');
            carry = sum / 2;
        }
        reverse(res.begin(), res.end());
        return res;
    }
};