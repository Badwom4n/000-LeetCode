// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem21.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=21 lang=cpp
 *
 * [21] 合并两个有序链表
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
class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        ListNode *pre_head=new ListNode(-1);
        ListNode *pre=pre_head;

        while(list1!=nullptr && list2!=nullptr){
            if(list1->val>=list2->val){
                pre->next=list2;
                list2=list2->next;
            }
            else{
                pre->next=list1;
                list1=list1->next;
            }
            pre=pre->next;
        } 
        pre->next= list1==nullptr ? list2:list1;
        return pre_head->next;
    }
};
// @lc code=end
