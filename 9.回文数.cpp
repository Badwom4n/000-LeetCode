// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem9.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=9 lang=cpp
 *
 * [9] 回文数
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        if(x%10==0&&x!=0) return false;
        if(x==0) return true;

        int ReverseHalf=0;
        int bit=0;
        int output=true;
        while(x>ReverseHalf){
            bit=x%10;
            x=x/10;
            ReverseHalf=ReverseHalf*10+bit;
        }
        output= x==ReverseHalf||x==ReverseHalf/10;
        return output;
    }
};
// @lc code=end

