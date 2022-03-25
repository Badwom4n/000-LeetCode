// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem17.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=17 lang=cpp
 *
 * [17] 电话号码的字母组合
 */

// @lc code=start
class Solution {
public:

    string tmp;
    vector<string> res;
    vector<string> phone={" "," ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    vector<string> letterCombinations(string digits) {
        if(digits.size()==0) return {};
        Recall(digits,phone,0);
        return res;
    }

    void Recall(string digits,vector<string> phone,int num){
        if(num==digits.size()){
            res.push_back(tmp);
            return ;
        }
        int number=digits[num]-'0';
        for(int i=0;i<phone[number].length();i++){
            tmp.push_back(phone[number][i]);
            Recall(digits,phone,num+1);
            tmp.pop_back();
        }
        
    }
};
// @lc code=end

