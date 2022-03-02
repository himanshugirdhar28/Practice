// { Driver Code Starts
#include<iostream>
using namespace std;

/* Link list Node */
struct Node
{
    int data;
    struct Node *next;
    
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

Node* sortedMerge(struct Node* a, struct Node* b);

/* Function to print Nodes in a given linked list */
void printList(struct Node *n)
{
    while (n!=NULL)
    {
        cout << n->data << " ";
        n = n->next;
    }
    cout << endl;
}

/* Driver program to test above function*/
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;

        int data;
        cin>>data;
        struct Node *head1 = new Node(data);
        struct Node *tail1 = head1;
        for (int i = 1; i < n; ++i)
        {
            cin>>data;
            tail1->next = new Node(data);
            tail1 = tail1->next;
        }

        cin>>data;
        struct Node *head2 = new Node(data);
        struct Node *tail2 = head2;
        for(int i=1; i<m; i++)
        {
            cin>>data;
            tail2->next = new Node(data);
            tail2 = tail2->next;
        }

        Node *head = sortedMerge(head1, head2);
        printList(head);
    }
    return 0;
}
// } Driver Code Ends


 

/* Link list Node
struct Node {
  int data;
  struct Node *next;
  
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/
//Function to merge two sorted linked list.
Node* sortedMerge(Node* head1, Node* head2)  
{  
    // code here
    Node* m=head1;
    Node* n=head2;
    Node* temp1;
    Node* temp2;
    int count1=1,count2=1;
    while(m->next!=NULL)
    {
        m=m->next;
        count1++;
    }
    while(n->next!=NULL)
    {
        n=n->next;
        count2++;
    }
    if(count1>=count2)
    {
        m=head1;
        n=head2;
    }
    else
    {
        m=head2;
        n=head1;
    }
    if(m->data > n->data)
    {
        temp1=m;
        m=n;
        n=n->next;
        m->next=temp1;
    }
    temp2=m;
    while(m->next!=NULL && n!=NULL)
    {
        if(m->next->data>=n->data)
        {
            temp1=m->next;
            m->next=n;
            n=n->next;
            m->next->next=temp1;
        }
        if(m->next==NULL && n!=NULL)
        {
            m->next=n;
            n=NULL;
        }
        else if(n!=NULL && m->next->data < n->data)
        {
            m=m->next;
        }
    }
    if(m->next==NULL && n!=NULL)
    {
        m->next=n;
    }
    return(temp2);
}  