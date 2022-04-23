// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem24.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=24 lang=cpp
 *
 * [24] 两两交换链表中的节点
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
    ListNode *swapPairs(ListNode *head)
    {
        if (head == nullptr){
            return nullptr;
        }
        if(head->next==nullptr){
            return head;
        }
        ListNode *last_ptr=head;
        ListNode *current_ptr=head->next;
        ListNode *pre_ptr;
        head=head->next;
        while(true){
            if(current_ptr->next==nullptr){
                current_ptr->next=last_ptr;
                last_ptr->next=nullptr;
                return head;
            }
            
            last_ptr->next=current_ptr->next;
            current_ptr->next=last_ptr;
            pre_ptr=last_ptr;
            if(last_ptr->next!=nullptr && last_ptr->next->next==nullptr){
                return head;
            }
            if(current_ptr->next!=nullptr && current_ptr->next->next!=nullptr){
                last_ptr=last_ptr->next;
                current_ptr=last_ptr->next;
                pre_ptr->next=current_ptr;
            }

        }

    }
};
// @lc code=end
