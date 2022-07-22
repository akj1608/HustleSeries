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
    ListNode* partition(ListNode* head, int x) {
      ListNode* node = new ListNode(0);
      ListNode* node1 = new ListNode(0);
      
      ListNode* ans = node;
      ListNode* ans1 = node1;
     
        ListNode* curr = head;
        while(curr){
            if(curr->val <x){
                ans->next = new ListNode(curr->val);
                ans = ans->next;
            }else{
                ans1->next =  new ListNode(curr->val);
                ans1 = ans1->next;
            }
            
            curr= curr->next;
        }
        ans->next = node1->next;
        return node->next;
    }
};