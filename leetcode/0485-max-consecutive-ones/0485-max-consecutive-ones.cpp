class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int curr = 0;
        int max_element = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                curr++;
            } else {
                curr = 0;
            }
            max_element = max(max_element, curr);
        }
        return max_element;
    }
};