#include<iostream>


using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

Node* insertBST(Node* root, int val) {
    if(root == nullptr) {
        return new Node(val);
    }
    else if(val<root->data)
    root->left=insertBST(root->left, val);
    else 
    root->right=insertBST(root->right, val);
    return root;
}


void inOrderTraversal(Node* root){
    if(root == nullptr)
    return;
    inOrderTraversal(root->left);
    cout << root->data << " ";
    inOrderTraversal(root->right);
}

void preOrderTraversal(Node* root){
    if(root == nullptr)
    return;
    cout << root->data << " ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

void postOrderTraversal(Node* root){
    if(root == nullptr)
    return;
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout << root->data << " ";
}


int main() {
    Node* root = nullptr;
    int values[] = {5, 3, 7, 2, 4, 6, 8};
    
    for(int val : values) {
        root = insertBST(root, val);
    }

    cout << "In-order Traversal: ";
    inOrderTraversal(root);
    cout << endl;

    cout << "Pre-order Traversal: ";
    preOrderTraversal(root);
    cout << endl;

    cout << "Post-order Traversal: ";
    postOrderTraversal(root);
    cout << endl;

    return 0;
}