// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem25.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=25 lang=cpp
 *
 * [25] K 个一组翻转链表
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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==nullptr||head->next==nullptr||k==1){
            return head;
        }
        ListNode* cal=new ListNode(-1);
        cal=head;
        int length=1;
        while(cal!=nullptr){
            cal=cal->next;
            length++;
        }
        ListNode* pre=head;
        if(length<k){
            return head;
        }
        else{
            for(int i=1;i<k;i++){
                pre=pre->next;
            }
        }
        ListNode* current=head->next;
        ListNode* next=current->next;
        while (true)
        {
            for(int i=0;i<k;i++){
                current->next=head;
                head=current;
                current=next;
                next=next->next;
                if(next==nullptr){
                    return pre;
                }
            }
            
        }
        return pre;
        
    }
};
// @lc code=end

