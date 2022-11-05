/*
 * @lc app=leetcode id=13 lang=cpp
 *
 * [13] Roman to Integer
 */

// @lc code=start
#include<map>


class Solution {
public:
    int romanToInt(string s) {
    
    int sum = 0;
    map<char,int> mapping{{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
    
    for(char c : s){
        sum += mapping[c];
    }

    if((s.find("IV")!= std::string::npos)||(s.find("IX")!=std::string::npos)) sum -=mapping['I']*2;
    if((s.find("XL")!= std::string::npos)||(s.find("XC")!=std::string::npos)) sum -=mapping['X']*2;
    if((s.find("CD")!= std::string::npos)||(s.find("CM")!=std::string::npos)) sum -=mapping['C']*2;

    return sum;
    }
};
// @lc code=end

