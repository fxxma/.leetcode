/*
 * @lc app=leetcode id=20 lang=cpp
 *
 * [20] Valid Parentheses
 */

// @lc code=start

class Solution {
public:
    bool isValid(string s) {
        
        int open=0;
        int closed=0;
        stack<char> stack; 
        for(char& c  : s){

            if((c=='{') || (c=='[') || (c=='(')) open ++ ;
            if((c=='}') || (c==']') || (c==')')) closed ++ ;
            
            if((c=='{') || (c=='[') || (c=='(')) stack.push(c);

            if(!stack.empty() && c=='}' && stack.top()=='{'){
                stack.pop();
                open --;
                closed --;
            }
            if(!stack.empty() && c==')' && stack.top()=='('){
                stack.pop();
                open --;
                closed -- ;
            }
            if(!stack.empty() && c==']' && stack.top()=='['){
                stack.pop();
                open --;
                closed --;
            } 

        }
        if(!(closed == 0) || !(open ==0)) return false ;
        return stack.empty();

    }
};
// @lc code=end

