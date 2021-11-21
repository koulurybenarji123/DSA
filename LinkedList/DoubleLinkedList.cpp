#include<iostream>
using namespace std;
struct node
{
    node *left;
    int data;
    node *right;
};
void addlast(struct node *);
void addfirst(struct node *);
void addrandom(struct node *);
void deletefirst(struct node *);
void deletelast(struct node *);
void display(struct node *p);
int x;
struct node *root=NULL;
int main()
{
    int cho;
  while(1)
  { 
    cout<<"enter choice"<<endl;
    cout<<"1--->addlast"<<endl;
    cout<<"2--->addfirst "<<endl;
    cout<<"3--->addrandom"<<endl;
    cout<<"4--->deletelast"<<endl;
    cout<<"5---> deletefirst"<<endl;
    cout<<"6--->display "<<endl;
    cin>>cho;
    switch(cho)
    { 
         case 1:
            addlast(root);
            break;
         case 2:
            addfirst(root);
            break;
         case 3:
            addrandom(root);
            break;
         case 4:
            deletelast(root);
            break;
         case 5:
            deletefirst(root);
            break;
         case 6:
            display(root);
            break;
         default:
            cout<<"not in choice";
    }
}
}
void addlast(struct node *p)
{
    cout<<"enter value";
    cin>>x;
    struct node *temp;
    temp=new node;
    temp->left=NULL;
    temp->data=x;
    temp->right=NULL;
    if(root==NULL)
    {
        root=temp;
    }
    else
        {
            while(p->right!=NULL)
            {
                p=p->right;
                
            }
            p->right=temp;
            temp->left=p;
        }
}
void addfirst(struct node *p)
{
    cout<<"enter value";
    cin>>x;
    struct node *temp;
    temp=new node;
    temp->left=NULL;
    temp->data=x;
    temp->right=NULL;
    if(root==NULL)
    {
        root=temp;
    }
    else
    {
            temp->right=root;
            root->left=temp;
            root=temp;
    }
 
}
void addrandom(struct node *p)
{
    struct node *q;
    int pos;
    cout<<"enter position to add";
    cin>>pos;
    cout<<"enter value";
    cin>>x;
    struct node *temp;
    temp=new node;
    temp->left=NULL;
    temp->data=x;
    temp->right=NULL;
    for(int i=0;i<pos-1;i++)
    { 
        p=p->right;
    }
    q=p->right;
    p->right=temp;
    temp->left=p;
    temp->right=q;
}
void deletefirst(struct node *p)
{
    struct node *q;
 if(root==NULL)
 {
     cout<<"no elements";
 }
 q=p;
 root=p->right;
 root->left=NULL;
 delete q;


}
void deletelast(struct node *p)
{
    struct node *q,*r;
    int pos;
    cout<<"enter position to delete";
    cin>>pos;
    for(int i=0;i<pos-1;i++)
    { 
        p=p->right;
    }
    q=p->left;
    q->right=p->right;
    

}
void display(struct node *p)
{
    if(p==NULL)
    {
        cout<<"no elements";

    }
    else
    {
    while(p!=NULL)
    {
        cout<<p->data<<"---"<<" ";
        p=p->right;
    }
    }
    cout<<endl;
}