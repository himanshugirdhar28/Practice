// { Driver Code Starts
// driver code

#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
    
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void loopHere(Node* head, Node* tail, int position)
{
    if(position==0) return;
    
    Node* walk = head;
    for(int i=1; i<position; i++)
        walk = walk->next;
    tail->next = walk;
}

bool isLoop(Node* head)
{
    if(!head) return false;
    
    Node* fast = head->next;
    Node* slow = head;
    
    while( fast != slow)
    {
        if( !fast || !fast->next ) return false;
        fast=fast->next->next;
        slow=slow->next;
    }
    
    return true;
}

int length(Node* head)
{
    int ret = 0;
    while(head)
    {
        ret++;
        head = head->next;
    }
    return ret;
}


 // } Driver Code Ends
/*
structure of linked list node:

struct Node
{
    int data;
    Node* next;
    
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {
        // code here
        // just remove the loop without losing any nodes
        Node* a=head;
        int i=0,h=0,x=1,z=10000,y=0,k=0,v=0;
        Node* b;
        Node* c;
        while(i<1000)
        {
            if(a->next==NULL)
            {
                k=1;
                break;
            }
            else if(a->next==a)
            {
                k=1;
                a->next=NULL;
                break;
            }
            i++;
            a=a->next;
        }
        if(k!=1)
        {
            while(1)
            {
                a=head;
                i=1;
                h=0;
                y=(x+z)/2;
                //cout<<x<<" "<<z<<" "<<y<<endl;
                if((x==y && v==1) || (z==y && v==1))
                {
                    c->next=NULL;
                    break;
                }
                if(x==y || z==y)
                {
                    v=1;
                }
                while(i!=y)
                {
                    a=a->next;
                    i++;
                }
                    //cout<<a->data<<endl;
                b=a;
                //cout<<i<<endl;
                while(i!=y+10000)
                {
                         
                    if(a->next==b)
                    {
                        //cout<<i<<"hello"<<a->data<<endl;
                        h=1;
                        z=y;
                        break;
                    }
                    a=a->next;
                    i++;
                }
                if(h!=1)
                {
                    x=y;
                }
                else
                {
                    c=a;
                }
            } 
        }
        //cout<<head->next->data;
            
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, num;
        cin>>n;
        
        Node *head, *tail;
        cin>> num;
        head = tail = new Node(num);
        
        for(int i=0 ; i<n-1 ; i++)
        {
            cin>> num;
            tail->next = new Node(num);
            tail = tail->next;
        }
        
        int pos;
        cin>> pos;
        loopHere(head,tail,pos);
        
        Solution ob;
        ob.removeLoop(head);
        
        if( isLoop(head) || length(head)!=n )
            cout<<"0\n";
        else
            cout<<"1\n";
    }
	return 0;
}
  // } Driver Code Ends