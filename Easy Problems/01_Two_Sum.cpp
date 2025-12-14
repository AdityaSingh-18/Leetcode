class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int, int> a(n);
        for (int i = 0; i < n; i++){
            if(a.count(target - nums[i])){
                return {i, a[target - nums[i]]};
            }
            a[nums[i]] = i;
        }
        return {};
    }
};
