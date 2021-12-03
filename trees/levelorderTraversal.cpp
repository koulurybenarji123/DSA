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
   queue<Node *>q;
   vector<int>v;
   q.push(root);
   while (!q.empty())
   {
       int size=q.size();
       for(int i=0;i<size;i++)
       {
           Node *node=q.front();
           q.pop();
           if(node->left!=NULL)
           {
              q.push(node->left); 
           }
           if(node->right!=NULL)
           {
              q.push(node->right);
           }
           v.push_back(node->data);
       }
   }
   for(int i=0;i<v.size();i++)
   {
       cout<<v[i]<<" ";
   }
   
}