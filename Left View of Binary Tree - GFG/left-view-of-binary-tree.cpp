// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// Tree Node
struct Node
{
    int data;
    Node* left;
    Node* right;
};

vector<int> leftView(struct Node *root);

// Utility function to create a new Tree Node
Node* newNode(int val)
{
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}


// Function to Build Tree
Node* buildTree(string str)
{
    // Corner Case
    if(str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for(string str; iss >> str; )
        ip.push_back(str);

    // for(string i:ip)
    //     cout<<i<<" ";
    // cout<<endl;
    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));

    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while(!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();

        // Get the current node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if(currVal != "N") {

            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if(i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if(currVal != "N") {

            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


int main() {
    int t;
    scanf("%d ",&t);
    while(t--)
    {
        string s;
        getline(cin,s);
        Node* root = buildTree(s);
        vector<int> vec = leftView(root);
        for(int x : vec)
        cout<<x<<" ";
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends


/* A binary tree node

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */

//Function to return a list containing elements of left view of the binary tree.
/*vector<int>v;
int x=0;
int y=-1;
int z=0;*/
/*void find(Node *root, queue<int>& q, Node *a,vector<int>& v)
{
    if(root==NULL)
    {
        return;
    }
    if(root!=a)
    {
        q.push(root->data);
    }
    
    find(root->left,q,a,v);
    find(root->right,q,a,v);
    if(q.size())
    {
        v.push_back(q.front());
    }
    while(q.size())
    {
        q.pop();
    }
}*/
/*vector<int> height(Node *root,vector<int> &nv,int count)
{
    if(count=count)
    {
        
    }
    if(root==NULL)
    {
        nv.push_back(0);
        return nv;
    }

    height(root->left,nv);
    height(root->right,nv);
    nv.push_back(root->data); 
    return(nv);
    
}
vector<int> leftv(Node *root,vector<int> &v)
{
    if (root==NULL)
   {
       return v;
   }
   v.push_back(root->data);
   leftv(root->left,v);
   if(root->right!=NULL && root->left!=NULL)
   {
       leftv(root->right->left,v);
   }
   else if(root->right!=NULL && root->left==NULL)
   {
       leftv(root->right,v);
   }
   return(v);
}
*/
vector<int> leftView(Node *root)
{
    vector<Node*>v;
    vector<int>a;
    vector<int>x;
    int i=0;
    int f=0,t=0;
    int j,b,h;
    if(root==NULL)
    {
        return x;
    }
    a.push_back(root->data);
    v.push_back(root);
    while(1)
    {
        b=0;
        t=0;
        h=a.size();
        for(j=i;j<h;j++)
        {
            //cout<<a[j]<<endl;
            if(a[j]!=0 && t==0)
            {
                x.push_back(a[j]);
                t=1;
            }
            if(v[j]==NULL || v[j]->left==NULL && v[j]->right==NULL)
            {
                continue;
                /*a.push_back(0);
                v.push_back(NULL);
                a.push_back(0);
                v.push_back(NULL);*/
            }
            if(v[j]->left==NULL && v[j]->right!=NULL)
            {
                b=1;
                //a.push_back(0);
                //v.push_back(NULL);
                a.push_back(v[j]->right->data);
                v.push_back(v[j]->right);
            }
            else if(v[j]->left!=NULL && v[j]->right==NULL)
            {
                b=1;
                a.push_back(v[j]->left->data);
                v.push_back(v[j]->left);
                //a.push_back(0);
                //v.push_back(NULL);
            }
            else
            {
                b=1;
                a.push_back(v[j]->left->data);
                v.push_back(v[j]->left);
                a.push_back(v[j]->right->data);
                v.push_back(v[j]->right);
            }
            
        }
        //cout<<a.size()<<endl;
        if(b==0)
        {
            break;
        }
        i=h;
        f++;
        
        
    }
    return x;
   // Your code here
   /*vector<int>nv;
   vector<int>v;
   count=0;
   nv=height(root,nv,count);
   reverse(nv.begin(),nv.end());
   for(auto it=nv.begin();it!=nv.end();it++)
   {
       cout<<*it<<" ";
   }
   cout<<(nv.size())<<endl;
   return(leftv(root,v));*/
   
   
   
 /*  if(y==x+1 || z==0)
   {
     v.push_back(root->data);
     x++;
     y=0;
   }
   
   //int x=0;
   if(root->left!=NULL)
   {
       v=leftView(root->left);
   }
   else if(root->right!=NULL)
   {
       v=leftView(root->right);
   }
   else
   {
       z=1;
       return(v);
   }
   if(z==1)
   {
      v=leftView(root->right);
      y++;
   }*/
   /*stack<int>st;
   vector<int>v;
   if (root==NULL)
   {
       return v;
   }
        
   leftView(root->left);
   leftView(root->right);
   //st.push(root->data);
   cout<<root->data<<endl;
   return(v);*/
   /*Node *a=root;
   queue<int>q;
   vector<int>v;
   v.push_back(root->data);
   find(root, q,a,v);
   return(v);*/
   
   
   
}
