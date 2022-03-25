// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem19.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=19 lang=cpp
 *
 * [19] 删除链表的倒数第 N 个结点
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        ListNode* dummynode=new ListNode();
        ListNode* leftnode=new ListNode();
        ListNode* rightnode=new ListNode();
        dummynode->next=head;
        leftnode=dummynode;
        rightnode=dummynode;
        while(n){
            rightnode=rightnode->next;
            n--;
        }
        while(rightnode->next!=nullptr){
            rightnode=rightnode->next;
            leftnode=leftnode->next;
        }
        ListNode* delnode=leftnode->next;
        leftnode->next=delnode->next;
        delete delnode;
        return dummynode->next;
    }
    
};
// @lc code=end

