#include<bits/stdc++.h>
using namespace std;
void preorder_traversal(struct Node *);
void postorder_traversal(struct Node *);
void inorder_traversal(struct Node *);
int depth(struct Node *);
int minimum(struct Node *);
int maximum(struct Node *);
int sum(struct Node *);
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
void preorder_traversal(struct Node *root)
{
    if(root==NULL)
    {
       return; 
    }
    cout<<root->data<<" ";
    preorder_traversal(root->left);
    preorder_traversal(root->right);

}
void postorder_traversal(struct Node *root)
{
    if(root==NULL)
    {
       return; 
    }
    postorder_traversal(root->left);
    postorder_traversal(root->right);
    cout<<root->data<<" ";

}
void inorder_traversal(struct Node *root)
{
    if(root==NULL)
    {
       return; 
    }
    cout<<root->data<<" ";
    inorder_traversal(root->left);
    inorder_traversal(root->right);
}
int depth(struct Node *root)
{
    if(root==NULL)
    {
        return 0;
    }
    int l=depth(root->left);
    int h=depth(root->right);
    return 1+max(l,h);
}
int maximum(struct Node *root)
{
    if(root==NULL)
    {
        return INT_MIN;
    }
    int res=root->data;
   int lres= maximum(root->left);
   int rres= maximum(root->right);
   if(res<lres &&res<rres)
   {
    if(lres>rres)
    {
        res=lres;
    }
    if(rres>lres)
    {
        res=rres;
    }
   }
    return res;
}
int minimum(struct Node *root)
{
    if(root==NULL)
    {
        return INT_MAX;
    }
    int res=root->data;
   int lres= minimum(root->left);
   int rres= minimum(root->right);
   if(res>lres && res>rres)
   {
    if(lres<rres)
    {
        res=lres;
    }
    if(rres<lres)
    {
        res=rres;
    }
   }
    return res;
}
int sum(struct Node *root)
{
    if(root==NULL)
    {
        return 0;
    }
    int data=root->data;
    int l=sum(root->left);
    int r=sum(root->right);
    int total=data+l+r;
    return total;
}
int main()
{
   
   struct Node *root=new Node(1);
   root->left=new Node(2);
   root->right=new Node(3);
   root->left->left=new Node(4);
   root->left->right=new Node(5);
    root->right->left=new Node(6);
   root->right->right=new Node(7);
   int cho;
   cin>>cho;
   switch (cho)
   {
   case 1:
       preorder_traversal(root);
       break;
    case 2:
       postorder_traversal(root);
     break;  
   case 3:
       inorder_traversal(root);
       break;
   case 4:
        cout<<depth(root)<<endl;
        break;
   case 5:
        cout<<maximum(root);
      break;
   case 6:
        cout<<minimum(root);
       break;  
    case 7:
        cout<<sum(root);
     break;    
   default:
       break;
   }
}