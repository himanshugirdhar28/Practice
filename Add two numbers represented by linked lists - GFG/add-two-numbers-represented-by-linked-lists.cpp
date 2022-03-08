// { Driver Code Starts
// driver

#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
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
    cout<< endl;
}


 // } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        // code here
        //long long int number1=0;
        //long long int number2=0;
        Node* a=first;
        Node* b=second;
        Node* temp;
        int i=1,j=1;
        while(a->next!=NULL)
        {
            i++;
            a=a->next;
        }
        while(b->next!=NULL)
        {
            j++;
            b=b->next;
        }
        while(first!=a)
        {
            temp=a->next;
            a->next=first;
            first=first->next;
            a->next->next=temp;
        }
        while(second!=b)
        {
            temp=b->next;
            b->next=second;
            second=second->next;
            b->next->next=temp;
        }
        int x;
        int y=0;
        int h;
        //cout<<a->data<<b->data<<endl;
        if(a->data+b->data>=10)
        {
            x=(a->data+b->data)%10;
            y=1;
        }
        else
        {
            x=(a->data+b->data);
            y=0;
        }
        Node* head=new Node(x);
        Node* z=head;
        while(1)
        {
            if(a->next!=NULL && b->next!=NULL && a->next->data+b->next->data+y>=10 )
            {
                x=(a->next->data+b->next->data+y)%10;
                y=1;
            }
            else if(a->next!=NULL && b->next!=NULL && a->next->data+b->next->data+y<10 )
            {
                //cout<<"hello"<<endl;
                x=(a->next->data+b->next->data+y);
                y=0;
            }
            else if(a->next!=NULL)
            {
                
                if(a->next->data+y>=10)
                {
                    x=(a->next->data+y)%10;
                    y=1;
                }
                else
                {
                    x=(a->next->data+y);
                    y=0;
                }
                h=3;
            }
            else if(b->next!=NULL)
            {
                
                
                if(b->next->data+y>=10)
                {
                    x=(b->next->data+y)%10;
                    y=1;
                }
                else
                {
                    x=(b->next->data+y);
                    y=0;
                }
                h=4;
            }
            else if(y!=0)
            {
                x=y;
                y=2;
                //cout<<y<<endl;
                
            }
            else
            {
                break;
            }
            Node* c=new Node(x);
            z->next=c;
            z=z->next;
            if(y==2)
            {
                break;
            }
            else if(h==3)
            {
               a=a->next;
               continue;
                
            }
            else if(h==4)
            {
                b=b->next;
                continue;
            }
            a=a->next;
            b=b->next;
        }
        while(head!=z)
        {
            temp=z->next;
            z->next=head;
            head=head->next;
            z->next->next=temp;
        }
        /*if(z->data==0)
        {
            z=z->next;
        }*/
        return(z);
        /*
        int count1=i,count2=j;
        a=first;
        b=second;
        while(i>0)
        {
            number1=number1+pow(10,i-1)*a->data;
            a=a->next;
            i--;
        }
        while(j>0)
        {
            number2=number2+pow(10,j-1)*b->data;
            b=b->next;
            j--;
        }
        int count;
        if(number1+number2>=pow(10,max(count1,count2)))
        {
            count=max(count1,count2)+1;
        }
        else
        {
            count=max(count1,count2);
        }
        long long int number =number1+number2;
        cout<<number<<count<<endl;
        long long int x=pow(10,count-1);
        Node* head=new Node(number/x);
        number=number%((int) x);
        count=count-1;
        a=head;
        while(count>0)
        {
            x=pow(10,count-1);
            cout<<x<<endl;
            Node* b=new Node(number/x);
            a->next=b;
            number=number%((int) x);
            count--;
            a=a->next;
            
        }
        return(head);
        return(first);*/
    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(first,second);
        printList(res);
    }
    return 0;
}
  // } Driver Code Ends