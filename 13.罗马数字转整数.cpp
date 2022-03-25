// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem13.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=13 lang=cpp
 *
 * [13] 罗马数字转整数
 */

// @lc code=start
class Solution {
public:
    int romanToInt(string s) {

        int output=0;
        map<char,int> table={
            {'I',1},
            {'V',5},
            {'X',10},
            {'L',50},
            {'C',100},
            {'D',500},
            {'M',1000},
        };
        int n=s.length();
        for(int i=0;i<n;i++){
            int value=table[s[i]];
            if((value<table[s[i+1]])&&(i<n-1)){
                output-=table[s[i]];
            }
            else{
                output+=table[s[i]];
            }
        }
        return output;
    }
};
// @lc code=end

