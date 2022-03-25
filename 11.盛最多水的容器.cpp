// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem11.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=11 lang=cpp
 *
 * [11] 盛最多水的容器
 */

// @lc code=start
class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int i=0;
        int j=height.size()-1;
        int Volume=0;
        int MaxVolume=0;
        while(i!=j){
            Volume=min(height[i],height[j])*(j-i);
            MaxVolume=Volume>MaxVolume?Volume:MaxVolume;
            if(height[i]>=height[j]) j--;
            else i++;
        }
        return MaxVolume;

    }
};
// @lc code=end

