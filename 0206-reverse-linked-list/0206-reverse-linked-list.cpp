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
    ListNode* res;
    ListNode* reverseList(ListNode* head) {
        if (!head || !head->next) return head;
        ListNode *prev = head, *tmp = head->next;
        int count=0;
        while (tmp) {
            head = tmp;
            tmp = tmp->next;
            if (!count) {
                prev->next=NULL;
                count=1;
            }
            head->next = prev;
            prev = head;
        }
        return head;
    }
};