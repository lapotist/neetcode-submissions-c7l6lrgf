class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        map<int, int> nummap;
        int res = 0;
        for(int i=0; i<nums.size(); i++){
            if(!nummap.count(nums[i])) {
                int front = 0;
                if(i==0) {
                    nummap.insert({nums[i], 1});
                    res = 1;
                    continue;
                }
                if(nummap.count(nums[i]-1)) {
                    front = nummap[nums[i]-1];
                    nummap[nums[i]-1] = 0;
                }
                if(nummap.count(nums[i]+1)) {
                    nummap[nums[i]] = 0;
                    int j = 1;
                    while(nummap[nums[i]+j] == 0) {
                        j++;
                    }
                    nummap[nums[i]+j] += front+1;
                    res = max(res, nummap[nums[i]+j]);
                } else {
                    nummap[nums[i]] = front + 1;
                    res = max(res, nummap[nums[i]]);
                }
            }
        }
        return res;
    }
};
