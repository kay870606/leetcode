// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include <stack>
#include "commoncppproblem20.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode id=20 lang=cpp
 *
 * [20] Valid Parentheses
 */

// @lc code=start
class Solution {
public:
    bool isValid(string s) {
        stack<char> paren;
        
        for (char &c : s)
        {
            if (c == '(' || c == '[' || c == '{')
                paren.push(c);
            else{
                if (paren.empty())
                    return false;
                if (c == ')') {
                    if (paren.top() == '(')
                        paren.pop();
                    else
                        return false;
                }
                else if (c == ']')
                {
                    if (paren.top() == '[')
                        paren.pop();
                    else
                        return false;
                }
                else if (c == '}')
                {
                    if (paren.top() == '{')
                        paren.pop();
                    else
                        return false;
                }
            }
        }

        return paren.empty();
    }
};
// @lc code=end

