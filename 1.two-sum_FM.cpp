/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        for(int i = 0 ; i < nums.size() ; i++)
        {
            for (int j = 1+i ; j < nums.size() ; j++)
            {
                if(nums[i]+nums[j]==target)
                {
                    return {i,j};
                }
            }
        }
        throw invalid_argument("Not found");
    }
};

// @lc code=end

