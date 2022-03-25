// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem16.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=16 lang=cpp
 *
 * [16] 最接近的三数之和
 */

// @lc code=start
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        
        if(nums.size()==3) return nums[0]+nums[1]+nums[2];
        sort(nums.begin(),nums.end());
        int best=10000;
        int n=nums.size();
        int output=0;
        for(int i =0;i<n;i++) {
            int close=target-nums[i];
            int ptr1=i+1;
            int ptr2=n-1;
            
            while (ptr1<ptr2){
                if(best>(abs(nums[ptr1]+nums[ptr2]-close))){
                    best=(abs(nums[ptr1]+nums[ptr2]-close));
                    output=nums[ptr1]+nums[ptr2]+nums[i];
                }
                
                if(nums[ptr1]+nums[ptr2]<close){
                    ptr1++;
                    continue;
                } 
                if(nums[ptr1]+nums[ptr2]>close){
                     ptr2--;
                     continue;
                }
                if(nums[ptr1]+nums[ptr2]==close) return nums[i]+nums[ptr1]+nums[ptr2];
            }
        }
        return output;

    }
};
// @lc code=end

