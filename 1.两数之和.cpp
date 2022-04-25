// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include <map>
#include "commoncppproblem1.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {


        vector<int> TwoSum(2,-1);
        map<int,int> HashMap;
        

        for(int i=0;i<(nums.size());i++){


            auto c=HashMap.find(target-nums[i]);
            if(c!=HashMap.end()){
                TwoSum[1]=i;
                TwoSum[0]=c->second;
                break;
            }

            HashMap[nums[i]]=i;
        }
        return TwoSum;
    }
};
// @lc code=end

