// { Driver Code Starts
//

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

Node* inputList(int size)
{
    Node *head, *tail;
    int val;
    
    cin>>val;
    head = tail = new Node(val);
    
    while(--size)
    {
        cin>>val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
}


 // } Driver Code Ends
/* structure of list node:

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

*/

class Solution{
  public:
    Node* findIntersection(Node* head1, Node* head2)
    {
        // code here
        // return the head of intersection list
        Node* a=head1;
        Node* b=head2;
        Node* c=head2;
        int k=0;
        vector<int> v;
        while(b!=NULL)
        {
            v.push_back(b->data);
            b=b->next;
        }
        sort(v.begin(),v.end());
        b=head2;
        while(a!=NULL)
        {
            if(binary_search(v.begin(),v.end(),a->data))
            {
                b->data=a->data;
                if(k==1)
                {
                    c=c->next;
                }
                if(k==0)
                {
                    k=1;
                }
                b=b->next;
            }
            a=a->next;
        }
        if(k==1)
        {
            c->next=NULL;
            return(head2);
        }
        return(NULL);
        
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    
	    cin>> n;
	    Node* head1 = inputList(n);
	    
	    cin>>m;
	    Node* head2 = inputList(m);
	    Solution obj;
	    Node* result = obj.findIntersection(head1, head2);
	    
	    printList(result);
	    cout<< endl;
	}
	return 0;
}
  // } Driver Code Ends