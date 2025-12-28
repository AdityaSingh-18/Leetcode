// Problem Link https://leetcode.com/problems/apple-redistribution-into-boxes/

class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int n = apple.size(), m = capacity.size();
        sort(capacity.rbegin(), capacity.rend());
        long long totalApples = accumulate(apple.begin(), apple.end(), 0LL);
        long long currCapacity = 0;
        for (int i = 0; i < m; i++){
            currCapacity += capacity[i];
            if(currCapacity >= totalApples){
                return i + 1;
            }
        }
        return -1;
    }
};