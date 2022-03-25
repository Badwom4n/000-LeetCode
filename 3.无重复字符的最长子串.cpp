// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem3.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=3 lang=cpp
 *
 * [3] 无重复字符的最长子串
 */

// @lc code=start
class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        unordered_set<char> Set;
        int Num=0;
        int MaxNum;
        int left=0;

        for(int i=0;i<s.size();i++){

            while(Set.find(s[i])!=Set.end()){
                Set.erase(s[left]);
                Num--;
                left++;
            }

            Set.insert(s[i]);
            Num++;
            MaxNum=max(MaxNum,Num);
        }

        return MaxNum;
    }
};
// @lc code=end

