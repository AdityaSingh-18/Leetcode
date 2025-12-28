// Problem Link https://leetcode.com/problems/minimum-penalty-for-a-shop/

class Solution {
public:
    int bestClosingTime(string customers) {
        int n = customers.size();
        int yes = 0, no = 0;
        for (int i = 0; i < n; i++){
            if(customers[i] == 'Y')        yes++;
        }
        int minCost = yes, time = 0;
        for (int i = 0; i < n; i++){
            if(customers[i] == 'Y')   yes--;
            else    no++;
            if(minCost > (yes + no)){
                minCost = yes + no;
                time = i + 1;
            }
        }
        return time;
    }
};