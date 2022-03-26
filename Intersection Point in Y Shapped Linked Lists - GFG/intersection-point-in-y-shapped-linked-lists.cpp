// { Driver Code Starts
#include<iostream>

#include<bits/stdc++.h>
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

int intersectPoint(struct Node* head1, struct Node* head2);

Node* inputList(int size)
{
    if(size==0) return NULL;
    
    int val;
    cin>> val;
    
    Node *head = new Node(val);
    Node *tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>>val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

/* Driver program to test above function*/
int main()
{
    int T,n1,n2,n3;

    cin>>T;
    while(T--)
    {
        cin>>n1>>n2>>n3;
        
        Node* head1 = inputList(n1);
        Node* head2 = inputList(n2);
        Node* common = inputList(n3);
        
        Node* temp = head1;
        while(temp!=NULL && temp->next != NULL)
            temp = temp->next;
        if(temp!=NULL) temp->next = common;
        
        temp = head2;
        while(temp!=NULL && temp->next != NULL)
            temp = temp->next;
        if(temp!=NULL) temp->next = common;
        
        cout << intersectPoint(head1, head2) << endl;
    }
    return 0;
}

// } Driver Code Ends


/* Linked List Node
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */
//Function to find intersection point in Y shaped Linked Lists.
int intersectPoint(Node* head1, Node* head2)
{
    // Your Code Here
    int x=-1,k=0,count1=0,count2=0,count3=0;
    Node* a=head1;
    Node* b=head2;
    while(a!=NULL)
    {
        count1++;
        a=a->next;
    }
    while(b!=NULL)
    {
        count2++;
        b=b->next;
    }
    a=head1;
    b=head2;
    if(count1>count2)
    {
        while(count3!=count1-count2)
        {
            count3++;
            a=a->next;
        }
    }
    else
    {
        while(count3!=count2-count1)
        {
            count3++;
            b=b->next;
        }
    }
    while(a!=NULL)
    {
        if(a==b && k!=1)
        {
            k=1;
            x=a->data;
        }
        else if(a!=b)
        {
            k=0;
            x=-1;
        }
        a=a->next;
        b=b->next;
    }
    return(x);
    /*// Your Code Here
   Node* a = head1;
   Node* b = head2;
   int point;
   
   while(a != b){
       if(a == NULL) a = head2;
       else a = a->next;
       
       if(b == NULL) b = head1;
       else b = b->next;
   }
   point  = a->data;
   return point;*/
    
}

