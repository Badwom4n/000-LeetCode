// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem14.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=14 lang=cpp
 *
 * [14] 最长公共前缀
 */

// @lc code=start
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        string output = "";
        char letter;

        for (int i = 0; i < strs[0].length(); i++) {
            letter = strs[0][i];
            for (int j = 1; j < strs.size(); j++) {

                if (i == strs[j].length() )
                    return output;

                if (strs[j][i] != letter)
                    return output;

            }
            output += letter;
        }

        return output;

    }
};
// @lc code=end

