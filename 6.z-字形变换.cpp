// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem6.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=6 lang=cpp
 *
 * [6] Z 字形变换
 */

// @lc code=start
class Solution {
public:
    string convert(string s, int numRows) {

        if(numRows==1) return s;

        vector<string> vec(numRows);
        string Output;
        int Row=0;
        int step=1;

        for(char c:s){
            vec[Row]+=c;
            if(Row==0||Row==numRows-1) step= Row==0? 1:-1;
            Row+=step;
        }

        for(string c:vec){
            Output+=c;
        }
        return Output;
    }
};
// @lc code=end

