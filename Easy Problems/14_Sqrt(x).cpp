// Problem Link https://leetcode.com/problems/sqrtx/

class Solution {
public:
    int mySqrt(int x) {
        /*int r = floor(sqrt(x));
        return r;*/
        if(x == 0)  return 0;
        if(x == 1)  return 1;
        for (long long i = 2; i <= x; i++){
            if((i * i) > x)   return i - 1;
        }
        return -1;
    }
};