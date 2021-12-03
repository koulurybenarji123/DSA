#include<bits/stdc++.h>
using namespace std;
void RightView(struct Node *,int );
vector<int>ds;
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
int main()
{
   struct Node *root=new Node(1);
   root->left=new Node(2);
   root->right=new Node(3);
   root->left->left=new Node(4);
   root->left->right=new Node(5);
   root->right->left=new Node(6);
   root->right->right=new Node(7);
   RightView(root,0);
   for(auto it:ds)
   {
       cout<<it<<" ";
   }
}
void RightView(struct Node *node,int level)
{
    if(node==NULL)
    {
        return ;
    }
    if(level==ds.size())
    {
        ds.push_back(node->data);
    }
    RightView(node->right,level+1);
    RightView(node->left,level+1);
}