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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int>v;
           int i;
        int h=0;
            if(lists.size()==0)
            {
                return(NULL);
            }
           for(i=0;i<lists.size();i++)
           {
               if(lists[i]!=NULL)
               {
                   h=1;
                   break;
               }
           }
        if(h==0)
        {
            return(NULL);
        }
           for(i=0;i<lists.size();i++)
           {
               ListNode* a=lists[i];
               while(a!=NULL)
               {
                   v.push_back(a->val);
                   a=a->next;
               }
           }
        sort(v.begin(),v.end());
        ListNode* head=new ListNode(v[0]);
        ListNode* x=head;
        
        for(i=1;i<v.size();i++)
        {
            ListNode* c=new ListNode(v[i]);
            x->next=c;
            x=x->next; 
        }
        return(head);
           
        
    }
};