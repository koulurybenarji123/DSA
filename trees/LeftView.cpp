#include<bits/stdc++.h>
using namespace std;
void LeftView(struct Node *,int );
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
   LeftView(root,0);
   for(auto it:ds)
   {
       cout<<it<<" ";
   }
}
void LeftView(struct Node *node,int level)
{
    if(node==NULL)
    {
        return ;
    }
    if(level==ds.size())
    {
        ds.push_back(node->data);
    }
    LeftView(node->left,level+1);
    LeftView(node->right,level+1);
}