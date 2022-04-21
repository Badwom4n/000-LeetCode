// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem22.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=22 lang=cpp
 *
 * [22] 括号生成
 */

// @lc code=start
class Solution {
public:
    vector<string> output;
    vector<string> generateParenthesis(int n) {
        int left=n;
        int right=n; 
        string str="";
        add_left(str,left,right);
        return output;
    }
    void add_left(string str,int left,int right){
        str=str+"(";
        left--;
        if(left==0){
            add_right(str,left,right);
        }
        else if(left==right){
            add_left(str,left,right);
        }
        else if(left<right){
            add_left(str,left,right);
            add_right(str,left,right);
        }
    }
    void add_right(string str,int left,int right){
        if(right==0){
            output.push_back(str);
        }
        if(right>0){
            str=str+")";
            right--;
            if(left==0){
                add_right(str,left,right);
            }
            else if(left==right){
                add_left(str,left,right);
            }
            else if(left<right){
                add_left(str,left,right);
                add_right(str,left,right);
            }
        }
    }

};
// @lc code=end

