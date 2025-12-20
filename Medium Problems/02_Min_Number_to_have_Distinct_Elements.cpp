// Problem Link https://leetcode.com/problems/minimum-number-of-operations-to-have-distinct-elements/

class Solution {
public:
    int minOperations(vector<int>& nums) {
        int m = *max_element(nums.begin(), nums.end());
        int n = nums.size();
        vector<int> visited(m + 1);
        int x = 0;
        for (int i = n - 1; i >= 0; i--){
            if(visited[nums[i]]){
                x = i + 1;
                break;
            }
            else     visited[nums[i]]++;
        }
        return (x + 2) / 3;
    }
};