// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem4.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=4 lang=cpp
 *
 * [4] 寻找两个正序数组的中位数
 */

// @lc code=start
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
       int m,n,k,Left1,Left2,cut1,cut2;
        int L1Max,L1Min;
        int L2Max,L2Min;
        m=nums1.size();
        n=nums2.size();
        k=(m+n+1)/2;

        if(m>n) return findMedianSortedArrays(nums2,nums1);

        int L0=0;
        int L1=m;
        while(L0<=L1){

            cut1=(L0+L1+1)/2;
            cut2=k-cut1;

            L1Max=cut1==0? INT_MIN:nums1[cut1-1];
            L1Min=cut1==m? INT_MAX:nums1[cut1];
            L2Max=cut2==0? INT_MIN:nums2[cut2-1];
            L2Min=cut2==n? INT_MAX:nums2[cut2];

            if(L1Max>L2Min) L1=cut1-1;
            else if(L2Max>L1Min) L0=cut1+1;
            else break;
        }
        return (m+n)%2==0? (max(L1Max,L2Max)+min(L1Min,L2Min))/2.0:max(L1Max,L2Max);
    }
};
// @lc code=end

