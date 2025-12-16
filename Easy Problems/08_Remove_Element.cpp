// Problem Link https://leetcode.com/problems/remove-element/

// Solution 1
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        int i = 0, j = 0;
        while(j < n){
            if(nums[j] == val)  j++;
            else{
                nums[i] = nums[j];
                i++;
                j++;
            }
        }
        return i;
    }
};


// Solution 2
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        vector<int> a;
        for (int i = 0; i < n; i++){
            if(nums[i] == val)     continue;
            a.push_back(nums[i]);
        }
        int k = a.size();
        nums = a;
        return k;
    }
};