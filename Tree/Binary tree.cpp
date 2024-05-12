#include<iostream>
using namespace std;
class node{
  public:
      int data;
      node* left;
      node* right;
      node(int value)
      {
          this->data=value;
          this->left=NULL;
          this->right=NULL;
      }
};

node* createtree(node* root)
{
    cout<<"Enter the data: \n";
    int x;
    cin>>x;
    root =new node(x);
    if(x==-1)
    {
       return NULL;
    }

       cout<<"Enter data for left of " <<x<<"\n";
       root->left=createtree(root->left);
       cout<<"Enter data for right of " <<x<<"\n";
       root->right=createtree(root->right);
       return root;
}

void inorder(node* root)
{
    if(root==NULL)
    {

        return ;
    }
    inorder(root->left);
    cout<<root->data;
    inorder(root->right);
}

void preorder(node* root)
{
    if(root==NULL)
    {
        return;
    }

    cout<<root->data;
    preorder(root->left);
    preorder(root->right);

}
void postorder(node* root)
{
    if(root==NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data;
}

int main()
{
    node* root=NULL;
    root=createtree(root);
    cout<<"\nPrinting in preOrder: ";
    preorder(root);
    cout<<"\nPrinting in InOrder: ";
    inorder(root);
    cout<<"\nPrinting in postOrder: ";
    postorder(root);

}
