class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        map<int, int> nums;
        vector<int> res;
        for(int i = 0; i < numbers.size(); i++) {
            if (nums.count(target - numbers[i])) {
                res = {nums[target - numbers[i]] + 1, i + 1};
                return res;
            }
            nums[numbers[i]] = i;
        }
        return res;
    }
};
