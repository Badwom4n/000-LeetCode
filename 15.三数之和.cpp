// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem15.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=15 lang=cpp
 *
 * [15] 三数之和
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        vector<vector<int>> output={};
        int L,R;

        if(nums.size()<3)
        return output;

        sort(nums.begin(),nums.end());
        int n=nums.size();

        for(int i =0;i<n-2;++i){
            if((i>0)&&(nums[i]==nums[i-1])){
                continue;
            }

            L=i+1;
            R=n-1;
            while (L < R) {
                if (L > i+1 && (nums[L] == nums[L - 1])) {
                    ++L;
                    continue;
                }
                if (R < n-1 && (nums[R] == nums[R+ 1])) {
                    --R;
                    continue;
                }
                if (nums[L] + nums[R] == -nums[i]) {
                    output.push_back({ nums[i],nums[L],nums[R] });
                    ++L;
                    continue;
                }
                if (nums[L] + nums[R] < -nums[i]) {
                    ++L;
                    continue;
                }
                if (nums[L] + nums[R] > -nums[i]) {
                    --R;
                    continue;
                }

            }

        }
        return output;


    }
};
// @lc code=end

