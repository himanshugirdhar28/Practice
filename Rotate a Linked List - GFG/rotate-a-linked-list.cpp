// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};


 // } Driver Code Ends
/*

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/


class Solution
{
    public:
    //Function to rotate a linked list.
    Node* rotate(Node* head, int k)
    {
        // Your code here
        int i=0;
         Node* a=head;
         int b=0;
        while(a!=NULL)
        {
            b++;
            a=a->next;
        }
        if(b==k)
        {
            return(head);
        }
        int arr[k];
        while(i!=k)
        {
            arr[i]=head->data;
            head=head->next;
            i++;
        }
        a=head;
        while(a->next!=NULL)
        {
            a=a->next;
        }
        
        for(i=0;i<k;i++)
        {
            Node* c=new Node(arr[i]);
            a->next=c;
            a=a->next; 
        }
        
        //cout<<head->data<<endl;
        return(head);
    }
};
    


// { Driver Code Starts.

void printList(Node *n)
{
    while (n != NULL)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, val, k;
        cin>>n;
        
        cin>> val;
        Node *head = new Node(val);
        Node *tail = head;
        
        for(int i=0; i<n-1; i++)
        {
            cin>> val;
            tail->next = new Node(val);
            tail = tail->next;
        }
        
        cin>> k;
        
        Solution ob;
        head = ob.rotate(head,k);
        printList(head);
    }
    return 1;
}
  // } Driver Code Ends