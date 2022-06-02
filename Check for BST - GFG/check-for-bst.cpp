// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define MAX_HEIGHT 100000

// Tree Node
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};




 // } Driver Code Ends
class Solution
{
    public:
    //Function to check whether a Binary Tree is BST or not.
    bool isBST2(Node* root, int& a,bool & b)
    {
        if(b==false)
        {
            return(false);
        }
        if(root==NULL)
        {
            return(true);
        }
        b=isBST2(root->left,a,b);
        //cout<<root->data<<" ";
        if(a!=-1 && root->data<a)
        {
            a=root->data;
            return(false);
        }
        //cout<<a<<" is a"<<endl;
        if(a==-1 || root->data>a)
        {
            a=root->data;
        }
        b=isBST2(root->right,a,b);
        return(b);
        
    }
    bool isBST(Node* root) 
    {
        int a=-1;
        bool b=true;
        return(isBST2(root,a,b));
        // Your code here
        /*if (root==NULL)
        {
            return true;
        }
        int i,j,a;
        vector<Node*>v;
        vector<int>v1;
        v.push_back(root);
        v1.push_back(root->data);
        i=0, j=0;
        while(j!=v.size())
        {
            a=v.size();
            for(j;j<a;j++)
            {
                if(v[j]!=NULL && v[j]->left!=NULL && v[j]->right!=NULL && v[j]->left->data<v1[j] && v[j]->right->data>v1[j])
                {
                    v.push_back(v[j]->left);
                    v.push_back(v[j]->right);
                    v1.push_back(v[j]->left->data);
                    v1.push_back(v[j]->right->data);
                }
                else if((v[j]!=NULL && v[j]->left!=NULL && v[j]->right!=NULL) && (v[j]->left->data>v1[j] || v[j]->right->data<v1[j]))
                {
                    return false;
                }
                else if(v[j]!=NULL && v[j]->left==NULL && v[j]->right!=NULL  && v[j]->right->data>v1[j])
                {
                    v.push_back(v[j]->right);
                    v1.push_back(v[j]->right->data);
                }
                else if(v[j]!=NULL && v[j]->left==NULL && v[j]->right!=NULL  && v[j]->right->data<v1[j])
                {
                    return false;
                }
                else if(v[j]!=NULL && v[j]->left!=NULL && v[j]->right==NULL  && v[j]->left->data<v1[j])
                {
                    v.push_back(v[j]->left);
                    v1.push_back(v[j]->left->data);
                }
                else if(v[j]!=NULL && v[j]->left!=NULL && v[j]->right==NULL  && v[j]->left->data>v1[j])
                {
                    return false;
                }
            }
            //i=a;
        }
        return(true);*/
    }
};




// { Driver Code Starts.

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

   // Create the root of the tree
   Node* root = new Node(stoi(ip[0]));

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
           currNode->left = new Node(stoi(currVal));

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
           currNode->right = new Node(stoi(currVal));

           // Push it to the queue
           queue.push(currNode->right);
       }
       i++;
   }

   return root;
}

void inorder(Node *root, vector<int> &v)
{
    if(root==NULL)
        return;

    inorder(root->left, v);
    v.push_back(root->data);
    inorder(root->right, v);
}

int main() {
 
   int t;
   string tc;
   getline(cin, tc);
   t=stoi(tc);
   while(t--)
   {
    string s; 
    getline(cin, s);
    Node* root = buildTree(s);
    Solution ob;
    if(ob.isBST(root)) 
        cout<<"1\n";
        
    else
        cout<<"0\n";
   }
   return 0;
}


//Position this line where user code will be pasted
  // } Driver Code Ends