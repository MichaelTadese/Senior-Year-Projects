//Michael Tadese
//Trees Final Project

#include<iostream>

using namespace std;
struct AVLNode {
        int data;
        struct AVLNode* left;
        struct AVLNode* right;
} *root;

class AVL
{
  public:
  AVLNode* insert(AVLNode* , int);
  void Preorder(AVLNode*);
  void Inorder(AVLNode*);
  void Postorder(AVLNode*);
  AVL() {
                root = NULL;
        }
};
AVLNode* AVL::insert(AVLNode* root , int value)
{
        if (root == NULL)
        {
                root = new AVLNode;
                root->data = value;
                root->left = NULL;
                root->right = NULL;
                cout<<value<<" ";
                return root;
        }
        else if (value < root->data)
        {
                root->left = insert(root->left, value);
        }
        else if (value >= root->data)
        {
                root->right = insert(root->right, value);
        }
        return root;
}
void AVL::Preorder(AVLNode* root)
{
if(root == NULL){
    return ;
    }
    else
    {
        cout << root -> data << " ";
        Preorder(root -> left);
        Preorder(root -> right);
    }
}
void AVL::Inorder(AVLNode* root)
{
if(root == NULL){
    return ;
    }
    else
    {
        Inorder(root -> left);
        cout<<root -> data << " ";
        Inorder(root -> right);
    }
}
void AVL::Postorder(AVLNode* root)
{
if(root == NULL){
    return;
    }
    else
    {
        Postorder(root -> left);
        Postorder(root -> right);
        cout << root -> data << " ";
    }
}

int main()
{
    cout<< "The order of insertion is: ";
    AVL op;
        root = op.insert(root, 41);
        root = op.insert(root, 13);
        root = op.insert(root, 4);
        root = op.insert(root, 1);
        root = op.insert(root, 7);
        root = op.insert(root, 37);
        root = op.insert(root, 25);
        root = op.insert(root, 83);
        root = op.insert(root, 75);
        root = op.insert(root, 109);
    
    cout << "\n\nIn-order traversal= "; op.Inorder(root);
    cout << "\nPre-order traversal= "; op.Preorder(root);
    cout << "\nPost-order traversal= "; op.Postorder(root);
    cout <<endl;

return 0;
}
