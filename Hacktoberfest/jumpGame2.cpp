//Problem- https://leetcode.com/problems/jump-game-ii/


class Solution {
public:
    int jump(vector<int>& nums) {
        int count = 0, n = nums.size(), start = 0, end = 0;
        while(end < n - 1){
            count++;
            int maxend = end + 1;
            for(int i = start; i < end+1; i++){
                maxend = max(maxend, i+nums[i]);
            }
            start = end+1;
            end = maxend;
        }
        return count;
    }
};
