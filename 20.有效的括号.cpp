// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem20.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=20 lang=cpp
 *
 * [20] 有效的括号
 */

// @lc code=start
class Solution {
public:

    bool isValid(string s) {
        if(s.size()%2==1)  return false;
        unordered_map<char,char> map={
            {')','('},
            {']','['},
            {'}','{'}
        };
        stack<char> stk;
        for(char ch:s){
            if(map.count(ch)){
                if(stk.empty()||stk.top()!=map[ch]){
                    return false;
                }
                stk.pop();
            }
            else{
                stk.push(ch);
            }
        }
    return stk.empty();
    }
    
};
// @lc code=end

