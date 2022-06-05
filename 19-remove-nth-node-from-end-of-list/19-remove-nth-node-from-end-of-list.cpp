class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *s=new ListNode();
        s->next=head;
        ListNode*p=s,*q=s; 
        for(int i=0;i<n;i++)
        p=p->next;
        while(p->next!=NULL)
        {   p=p->next;
            q=q->next;
        }
        q->next=q->next->next;
        return s->next;
    }
};