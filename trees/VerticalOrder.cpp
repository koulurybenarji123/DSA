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
   queue<pair<Node *,pair<int,int>>>q;
   map<int,map<int,multiset<int>>>nodes;
   q.push({root,{0,0}});
   while (!q.empty())
   {
       auto p=q.front();
       q.pop();
       Node *node=p.first;
       int x=p.second.first;
       int y=p.second.second;
       nodes[x][y].insert(node->data);
       if(node->left!=NULL)
       {
           q.push({node->left,{x-1,y+1}});
       }
       if(node->right!=NULL)
       {
           q.push({node->right,{x+1,y+1}});
       }
   }
   vector<vector<int>>ans;
   for(auto p:nodes)
   {
       vector<int>col;
       for(auto q:p.second)
       {
           col.insert(col.end(),q.second.begin(),q.second.end());
       }
     ans.push_back(col);
   }
  for(auto v:ans)
  {
      for(auto it=v.begin();it!=v.end();it++)
      {
          cout<<*it<<endl;
      }
  }
}
