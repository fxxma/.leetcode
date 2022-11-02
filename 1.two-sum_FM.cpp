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

//2022-11-02 FM
//57/57 cases passed (479 ms)
//Your runtime beats 37.59 % of cpp submissions
//Your memory usage beats 73.85 % of cpp submissions (10.3 MB)
