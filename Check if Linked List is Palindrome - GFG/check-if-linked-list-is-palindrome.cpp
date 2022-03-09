// { Driver Code Starts
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
using namespace std;
/* Link list Node */
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

class Solution{
  public:
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        //Your code here
        int count2;
        int count=1,count3=1;
        Node* a=head;
        Node* b=head;
        Node* temp;
        Node* temp2;
        Node* x;
        while(a->next!=NULL)
        {
            count++;
            a=a->next;
        }
        if(count==1)
        {
            return(true);
        }
        if(count%2==0)
        {
            count2=count/2;
        }
        else
        {
            count2=count/2+1;
        }
        while(count3!=count2)
        {
            count3++;
            b=b->next;
        }
        x=b->next;
        while(1)
        {
            if(x->next==NULL)
            {
                break;
            }
            temp=b->next;
            temp2=x->next->next;
            b->next=x->next;
            b->next->next=temp;
            x->next=temp2;
            if(temp2==NULL)
            {
                break;
            }
        }
        b=b->next;
        a=head;
        while(b!=NULL)
        {
            if(a->data!=b->data)
            {
                return(false);
            }
            a=a->next;
            b=b->next;
        }
        return(true);
    }
};



// { Driver Code Starts.
/* Driver program to test above function*/
int main()
{
  int T,i,n,l,firstdata;
    cin>>T;
    while(T--)
    {
        
        struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        // taking first data of LL
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        // taking remaining data of LL
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
    Solution obj;
   	cout<<obj.isPalindrome(head)<<endl;
    }
    return 0;
}

  // } Driver Code Ends