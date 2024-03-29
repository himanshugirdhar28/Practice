// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


struct node
{
    int data;
    struct node* next;
    
    node(int x){
        data = x;
        next = NULL;
    }
    
};

/* Function to print linked list */
void printList(struct node *node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}


 // } Driver Code Ends
/*
  Reverse a linked list
  The input list will have at least one element  
  Return the node which points to the head of the new LinkedList
  Node is defined as 
    struct node
    {
        int data;
        struct node* next;
    
        node(int x){
            data = x;
            next = NULL;
        }
    
    }*head;
*/

class Solution
{
    public:
    struct node *reverse (struct node *head, int k)
    { 
        // Complete this method
       /* node* a=head;
        int count=0;
        vector<int>v;
        while(a!=NULL)
        {
            v.push_back(a->data);
            a=a->next;
        }
        int i=0,j=0;
        int f;
        a=head;
        while(j<v.size() || a!=NULL)
        {
            f=j;
            if(j+k>v.size())
            {
                j=v.size();
            }
            else
            {
                j=j+k;
            }
            for(i=j-1;i>f-1;i--)
            {
               a->data=v[i];
               a=a->next;
            }
            
        }
        return(head);*/
       node* next, *curr, *prev = NULL;
       
       curr = head;
       
       int i = 0 ; 
       
       while(curr != NULL && i < k)
       {
           next = curr->next;
           curr->next = prev;            
           prev = curr;
           curr = next;
           i++;
       }
       
       if(next != NULL)
           head->next = reverse(next, k);
       
       
       return prev;
        
    }
};


// { Driver Code Starts.

/* Drier program to test above function*/
int main(void)
{
    int t;
    cin>>t;
     
    while(t--)
    {
        struct node* head = NULL;
        struct node* temp = NULL;
        int n;
        cin >> n;
         
        for(int i=0 ; i<n ; i++)
        {
            int value;
            cin >> value;
            if(i == 0)
            {
                head = new node(value);
                temp = head;
            }
            else
            {
                temp->next = new node(value);
                temp = temp->next;
            }
        }
        
        int k;
        cin>>k;
        
        Solution ob;
        head = ob.reverse(head, k);
        printList(head);
    }
     
    return(0);
}

  // } Driver Code Ends