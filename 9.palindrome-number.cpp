/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(int x) {
        string xstr = to_string(x);
        int n = xstr.length(); 
        if(n==1) return true;
        for(int i = 0 ; i<= n/2 -1 ; i++){
            if(!(xstr[i]==xstr[n-i-1])) return false;
        }
        return true;
    }
};
// @lc code=end

//2022-11-02
//11510/11510 cases passed (30 ms)
//Your runtime beats 47.32 % of cpp submissions
//Your memory usage beats 90.82 % of cpp submissions (5.8 MB)