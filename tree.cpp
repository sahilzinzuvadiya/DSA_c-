#include<iostream>
using namespace std;
class node
{
    public:
        int data;
        node *left;
        node *right; 

    void preorder(node *root)
    {
        if(root==NULL)
        {
            return;
        }
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }
    void inorder(node *root)
    {
        if(root==NULL)
        {
            return;
        }
        preorder(root->left);
        cout<<root->data<<" ";
        preorder(root->right);
    }
    void postorder(node *root)
    {
        if(root==NULL)
        {
            return;
        }
        preorder(root->left);
        preorder(root->right);
        cout<<root->data<<" ";
    }

};


int main()
{
    node *root=new node();
    node *left1=new node();
    node *right1=new node();
    root->data=10;
    root->left=left1;
    root->right=right1;
    
    left1->data=20;
    left1->left=new node();
    left1->left->data=22;
    left1->left->left=NULL;
    left1->right=new node();
    left1->right->data=24;
    left1->left->right=NULL;

    right1->data=30;
    right1->left=new node();
    right1->left->data=32;
    right1->left->left=NULL;
    right1->left=NULL;
    right1->right=NULL;

    node n1;
    cout<<"preorder data:";
    n1.preorder(root);
    cout<<endl;
    cout<<"inorder data:";
    n1.inorder(root);
    cout<<endl;
    cout<<"postorder data:";
    n1.postorder(root);

}