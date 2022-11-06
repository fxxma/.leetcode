/*
 * @lc app=leetcode id=35 lang=cpp
 *
 * [35] Search Insert Position
 */

// @lc code=start
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {

        vector<int> v = nums ; 

        while(nums.size()>2){
            if(target >= nums[nums.size()/2]){
                nums = std::vector<int>(nums.begin() + (nums.size()/2), nums.end());
            }else{
                nums = std::vector<int>(nums.begin(), nums.end() - (nums.size()/2));
            }
        }

        std::vector<int>::iterator itr= std::find(v.begin(), v.end(), nums[0]);

        if(target <= nums[0]){
            return std::distance(v.begin(),itr);
        }else if(target > nums[nums.size()-1]){
            return std::distance(v.begin(),itr)+nums.size();
        }else{
            return std::distance(v.begin(),itr)+1;
        }
        return 0;
    }
};
// @lc code=end

