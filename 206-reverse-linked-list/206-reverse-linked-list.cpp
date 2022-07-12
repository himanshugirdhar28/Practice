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
    void recursion(ListNode* a,ListNode* b)
    {
        if(b==a)
        {
            return ;
        }
        ListNode* c=a->next;
        a->next=b;
        b=b->next;
        a->next->next=c;
        recursion(a,b);
        return;
        
    }
    ListNode* reverseList(ListNode* head) {
        if(head==NULL or head->next==NULL)
        {
            return(head);
        }
        ListNode* a=head;
        ListNode* b=head;
        while(a->next!=NULL)
        {
            a=a->next;
        }
        recursion(a,b);
        return(a);
        
        
    }
};