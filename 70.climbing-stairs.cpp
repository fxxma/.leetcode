/*
 * @lc app=leetcode id=70 lang=cpp
 *
 * [70] Climbing Stairs
 */

// @lc code=start

class Solution {
public:
    int climbStairs(int n) {
        double sum = 0;
        for(int i=0 ; i <= n/2; i++) sum += combo(n-i,i);
        return sum;
    }

    double combo(int x , int y){
        return fact(x) / (fact(y) * fact(x - y));
    }

    double fact(int b) {
        if (b == 0 || b == 1){
            return 1;
        }else{
            return b * fact(b - 1);
        }
    }
    
};
// @lc code=end

