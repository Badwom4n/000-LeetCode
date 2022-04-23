// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem23.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=23 lang=cpp
 *
 * [23] 合并K个升序链表
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* MergeTwoLists(ListNode* list1, ListNode* list2){
        return nullptr;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int k=lists.size();
        if(k==0){
            return nullptr;
        }
        else if(k==1){
            return lists[0];
        }
        else if(k==2){
            return MergeTwoLists(lists[0],lists[1]);
        }
        else{
            vector<ListNode*> lists1={lists.begin(), lists.begin()+k/2+1};
            vector<ListNode*> lists2={lists.begin()+k/2+1, lists.end()};
            return MergeTwoLists(mergeKLists(lists1),mergeKLists(lists2));
        }


    }
};
// @lc code=end

