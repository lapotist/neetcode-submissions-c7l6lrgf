class Solution {
public:
    int trap(vector<int>& height) {
        if (height.size() < 3) {return 0;}
        int left = 0;
        int right = height.size() - 1;
        int lmax = 0;
        int rmax = 0;
        int res = 0;
        for(int i=0; i < (height.size())-2; i++) {
            lmax = max(lmax, height[left]);
            rmax = max(rmax, height[right]);
            if (height[left] >= height[right]) {
                right -= 1;
                if (height[right] < min(lmax, rmax)) {
                    res = (min(lmax, rmax) - height[right]) + res;
                }
            } else {
                left++;
                if (height[left] < min(lmax, rmax)) {
                    res = (min(lmax, rmax) - height[left]) + res;
                }
            }
        }
        return res;
    }
};
