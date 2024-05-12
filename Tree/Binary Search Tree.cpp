#include<iostream>
using namespace std;
class node{

public:
    int data;
    node* left;
    node* right;
    node(int val)
    {
     this->data=val;
     this->left=NULL;
     this->right=NULL;
    }
};

node* creatBST(node* root,int val)
{

    if(root==NULL)
    {
        root=new node(val);
        return root;
    }

    if(val > root->data)
    {
        root->right=creatBST(root->right,val);
    }else{

       root->left=creatBST(root->left,val);

    }
return root;

}
node* takeinput(node* root)
{
    cout<<"Enter data: ";
    int data;
    cin>>data;
    while(data!=-1)
    {
       root=creatBST(root,data);

       cin>>data;
    }
    return root;
}
void inorder(node* root)
{
    if(root==NULL)
    {

        return ;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
bool searchBST(node* root,int value)
{
    if(root==NULL)
    {
        return false;
    }
    if(root->data==value)
    {
        return true;
    }
    //base case end;
    if(value<root->data)
    {
        return searchBST(root->left,value);
    }else{

       return searchBST(root->right,value);
    }
}

node* MinValue(node* root)
{
    node* temp=root;
    while(temp->left!=NULL)
    {
        temp=temp->left;
    }
    return temp;
}

node* MaxValue(node* root)
{
    node* temp=root;
    while(temp->right!=NULL)
    {
        temp=temp->right;
    }
    return temp;
}

node* deleteFromBST(node* root,int val)
{
    if(root==NULL)
    {
        return root;
    }
    if(root->data==val)
    {
         //0 child means leaf node
        if(root->left==NULL && root->right==NULL)
       {
        delete root;
        return NULL;
       }
       // 1 child
       //for left
       if(root->left!=NULL && root->right==NULL)
       {
           node* temp=root->right;
           delete root;
           return temp;
       }
       //right child
       if(root->left==NULL && root->right!=NULL)
       {
           node* temp=root->right;
           delete root;
           return temp;
       }
       //2 child
       if(root->left!=NULL && root->right!=NULL)
       {
           int mini=MinValue(root->right)->data;
           root->data=mini;
           root->right=deleteFromBST(root->right,mini);// delete only leaf
           return root;
       }
    }else if(root->data>val)
    {
        root->left=deleteFromBST(root->left,val);
        return root;
    }else{
    root->right=deleteFromBST(root->right,val);
    return root;
    }
   // return root;
}



int main()
{
    node* root=NULL;
  root= takeinput(root);
    inorder(root);
    cout<<endl;

    int s=10;
   if(searchBST(root,s))
   {
    cout<< s<<" is present\n";
   }else{
   cout<<s<<" is not present\n";

   }

   cout<<"Min Value= "<<MinValue(root)->data<<endl;
   cout<<"Max Value= "<<MaxValue(root)->data<<endl;




  inorder(deleteFromBST(root,s));

}
