#include<bits/stdc++.h>
using namespace std;
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
   queue<pair<Node *,int>>q;
   vector<int>ans;
   map<int,int>mp;
   q.push({root,0});
   while (!q.empty())
   {
       auto p=q.front();
       q.pop();
       Node *node=p.first;
       int line=p.second;
           mp[line]=node->data;
       if(node->left!=NULL)
       {
           q.push({node->left,line-1});
       }
       if(node->right!=NULL)
       {
           q.push({node->right,line+1});
       }
   }
   for(auto p:mp)
   {
       ans.push_back(p.second);
   }
  for(int i=0;i<ans.size();i++)
  {
      cout<<ans[i]<<" ";
  }
   
}