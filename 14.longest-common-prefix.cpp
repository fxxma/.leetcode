/*
 * @lc app=leetcode id=14 lang=cpp
 *
 * [14] Longest Common Prefix
 */

// @lc code=start
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
    
        string sindex = strs[0];
        for(int i = 0 ; i< strs.size() ; i++){
            if(strs[i].find(sindex) != 0){
                sindex.pop_back();
                i = 0 ;
            }  
        }
        return sindex;
    }
};

//124/124 cases passed (7 ms)
//Your runtime beats 71.35 % of cpp submissions
//Your memory usage beats 81.97 % of cpp submissions (9.2 MB)
// @lc code=end

