class Solution {
public:
    int romanToInt(string s) {
        int res = 0, prev = 0;
        int n = s.size();
        for (int i =  n - 1; i >= 0; i--){
            int value = 0;
            if(s[i] == 'I')     value = 1;
            if(s[i] == 'V')     value = 5;
            if(s[i] == 'X')     value = 10;
            if(s[i] == 'L')     value = 50;
            if(s[i] == 'C')     value = 100;
            if(s[i] == 'D')     value = 500;  
            if(s[i] == 'M')     value = 1000;
            if(value >= prev)     res += value;
            else    res -= value;
            prev = value; 
        }
        return res;
    }
};