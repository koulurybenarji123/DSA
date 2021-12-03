#include<bits/stdc++.h>
using namespace std;
int maxsum=INT_MIN;
int maxpath(struct Node *);
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
    Node(int val)
    {
        data=val;
        left=NULL;
        right=NULL;
    }
    
}; 
int maxpath(struct Node *root)
{
    if(root==NULL)
    {
        return 0;
    }
    int val=root->data;
    int l=maxpath(root->left);
    int r=maxpath(root->right);
    maxsum=max(l+r+val,maxsum);
    return val+max(l,r);
}
int main()
{
   
   struct Node *root=new Node(-10);
   root->left=new Node(9);
   root->right=new Node(20);
    root->right->left=new Node(15);
   root->right->right=new Node(7);
   maxpath(root);
   cout<<maxsum;
  
}