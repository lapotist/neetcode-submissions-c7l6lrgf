class Solution {
public:
    int maxArea(vector<int>& heights) {
        int res = 0, left = 0, right = heights.size() - 1;
        for(int i = 0; i < heights.size() - 1; i++)  {
            res = max(res, (right - left) * min(heights[left], heights[right]));
            if(heights[right] >= heights[left]) {
                left++;
            } else {
                right -= 1;
            }
        }
        return res;
    }
};
