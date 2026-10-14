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
    ListNode* reverseList(ListNode* head) {
        vector<int> ans;
        ListNode* cur = head;

        while (cur != NULL) {
            ans.push_back(cur->val);
            cur = cur->next;
        }

        cur = head;

        while (cur != NULL) {
            cur->val = ans.back();
            ans.pop_back();
            cur = cur->next;
        }

        return head;
    }
};
