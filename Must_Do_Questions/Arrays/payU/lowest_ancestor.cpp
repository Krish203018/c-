#include<iostream>
#include<vector>
using namespace std;
class node
{
public://component of tree 
    int key; // key is represtantaive of data
    node* left ; //for left side
    node* right; //for right side
};
//making  tree with given data or key
node* newnode(int k)
{
    node* temp = new node(); //new tree
    temp->key = k;         //putting data
    temp->left = temp->right = NULL;  //till we reached to end
    return temp; //return the tree
}
//find the path from root,store the path in vector form
//return true if path exist otherwise false
bool findPath(node* root,vector<int> &path,int k)
{
    //if root dont have any data 
    if (root==NULL)
        return false;
    //if path from root to k is not exist,remove the node
    path.push_back(root->key);
    //if data or key is same as k
    if (root->key==k)
        return true;
    //find the location of K in sub-tree
    if (root->left && findPath(root->left,path,k)||
       (root->right && findPath(root->right,path,k)))
        return true;
    //if it is not present in sub-tree just return false
    //then function will again search for a new path
    path.pop_back();
    return false;
}

int findLCA(node* root,int n1,int n2)
{
    vector<int>path1,path2;
    if(!findPath(root,path1,n1)|| !findPath(root,path2,n2))
       return -1;
    int i;
    for ( i = 0; i < path1.size()&&i<path2.size(); i++)
        if (path1[i]!=path2[i])
           break;
    return path1[i-1];
}
//User Code
int main()
{
    node * root = newnode(1);
    root->left = newnode(2);
    root->right = newnode(3);
    root->left->left = newnode(4);
    root->left->right = newnode(5);
    root->right->left = newnode(6);
    root->right->right = newnode(7);
    cout << "LCA(4, 5) = " << findLCA(root, 4, 5)<<endl;
    cout << "nLCA(4, 6) = " << findLCA(root, 4, 6)<<endl;
    cout << "nLCA(3, 4) = " << findLCA(root, 3, 4)<<endl;
    cout << "nLCA(2, 4) = " << findLCA(root, 2, 4)<<endl;
    return 0;
}