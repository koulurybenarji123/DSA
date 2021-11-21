#include<iostream>
using namespace std;
void display(struct node *);
void addatlast(struct node  *);
void addatfirst(struct node *);
void addatrandom(struct node *);
void removeatfirst(struct node *);
void removeatlast(struct node *);
void length(struct node *);
void sum(struct node *);
void search(struct node *);
struct node
{
    int data;
    node *next;
};
struct node *root =NULL;
int n;
int main()
{
    while(1)
    {
    int cho,c;
    cout<<endl;
    cout<<"choices are "<<endl;
    cout<<"1---->add element at last"<<endl;
    cout<<"2---->add element at first"<<endl;
    cout<<"3---->add element at random position"<<endl;
    cout<<"4---->remove element at first"<<endl;
    cout<<"5---->remove element at last and random"<<endl;
    cout<<"6---->length of linked list"<<endl;
    cout<<"7---->seaching element in list"<<endl;
    cout<<"8---->sum of elements "<<endl;
    cout<<"9---->display elements"<<endl;
    cout<<"enter ur choice"<<endl;
    cin>>cho;
    switch(cho)
    {
       case 1:
           addatlast(root);
           break;
       case 2:
            addatfirst(root);
            break;
       case 3:
            addatrandom(root);
            break;
       case 4:
            removeatfirst(root);
            break;
       case 5:
            removeatlast(root);
            break; 
       case 6:
             length(root) ;
             break;
       case 7:
            search(root);
            break;
       case 8:
            sum(root);
            break;               
       case 9:
            display(root);
            break;
       default:
           cout<<"not in the list"; 

    }
    }
    
}
void addatlast(struct node *p)
{
    struct node *temp;
    temp=new node;
    cout<<"enter element";
    cin>>n;
    temp->data=n;
    temp->next=NULL;
    if(root==NULL)
    {
       root=temp; 
    }
    else
    {
        while(p->next!=NULL)
        {
            p=p->next;
        }
        p->next=temp;
    }

}
void addatfirst(struct node *p)
{
 struct node *temp;
    temp=new node;
    cout<<"enter element";
    cin>>n;
    temp->data=n;
    temp->next=NULL;
    if(p==NULL)
    {
       root=temp; 
    }
    else
    {
        temp->next=root;
        root=temp;
        
    }

}
void addatrandom(struct node *p)
{
    int loc,i=1;
    cout<<"enter location to add ";
    cin>>loc;
    struct node *temp;
    struct node *q;
    temp=new node;
    cout<<"enter element";
    cin>>n;
    temp->data=n;
    temp->next=NULL;
    while(i<loc)
    {
        p=p->next;
        i++;
    }
    q=p->next;
    p->next=temp;
    temp->next=q;
}
void removeatfirst(struct node *p)
{
    if(p==NULL)
    {
        cout<<"no elements to delete";

    }
    else
    {
        root=p->next;
    }
}
void removeatlast(struct node *p)
{
    struct node *q;
   int loc,i=1;
    cout<<"enter location to delete ";
    cin>>loc;

    while(i<loc)
    {
        p=p->next;
        i++;
    }
    q=p->next;
    p->next=q->next;
    q=NULL;


}
void length(struct node *p)
{
   int count=0;
   while(p!=NULL)
   {
      count++;
      p=p->next; 
   }
   cout<<"length of linked list"<<count;
}
void search(struct node *p)
{
  int ser;
  cout<<"enter element to search";
  cin>>ser;
  while(p!=NULL)
  {
      if(p->data==ser)
      {

          cout<<"element found"<<endl; 
      }
          p=p->next;

  }     
}
void sum(struct node *p)
{
    int sum=0;
    while(p!=NULL)
    {
     sum=sum+p->data;
     p=p->next;
    }
  cout<<"sum of elements"<<sum;
}
void display(struct node *p)
{
  if(p==NULL)
  {
      cout<<"no elements still add first"<<endl;
  }
 
  while(p!=NULL)
  {
      cout<<p->data<<"--->"<<" ";
      p=p->next;
  }
  cout<<"NULL"; 


}