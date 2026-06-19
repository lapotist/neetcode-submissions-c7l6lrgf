class Solution {
public:
    int findMin(vector<int> &nums) {
        if (nums[0] < nums[nums.size()-1]) {
            return nums[0];
        }
        int l = 0, r = nums.size()-1, m = (nums.size() - 1)/2;
        while (l != m) {
            if (nums[m] > nums[l]) {
                l = m;
                m = (r+l)/2;
            } else {
                r = m;
                m = (r+l)/2;
            }
        }
        return nums[r];

    }
};
