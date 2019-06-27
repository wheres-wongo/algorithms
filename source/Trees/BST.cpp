#include "BST.hpp"

BST::BST() {
  root = nullptr;
}

BST::~BST() {}

Node* BST::insert(int data, Node* n) {
  if (!n) {
    return new Node(data);
  } else if (data < n->data) {
    n->left = insert(data, n->left);
  } else if (data > n->data) {
    n->right = insert(data, n->right);
  }
  return n;
}

void BST::insert(int data) {
  root = insert(data, root);
}

bool BST::is_empty() {
  return !root;
}

bool BST::search(int data, Node* n) {
  if (!n)
    return false;
  else if (data == n->data)
    return true;
  else if (data < n->data)
    return search(data, n->left);
  else
    return search(data, n->right);
}

bool BST::search(int data) {
  return search(data, root);
}

Node* BST::remove(int data, Node* n){
    if(!n) return n;
    if(data < n->data){
        n->left = remove(data, n->left);
    }
    else if(data > n->data){
        n->right = remove(data, n->right);
    }
    else{
        //no children
        if(n->left == nullptr && n->right == nullptr){
            if(n->data == data){
                n = nullptr;
            }
            delete n;
            n = nullptr;
        }
        //one child on the right
        else if(n->left == nullptr){
            Node *p = n;
            n = n->right;
            delete p;
        }
        //one child on the left
        else if(n->right == nullptr){
            Node *p = n;
            n = n->left;
            delete p;
        }
        //two children
        else{
            Node *min = n->right;
            while(min->left != nullptr){
                min = min->left;
            }
            n->data = min->data;
            n->right = remove(min->data, n->right);
            
            
            /*Node *min;
            while(n->left != nullptr){
                min = n->left;
            }
            n->data = min->data;
            n->right = remove(min->data, n->right);
            */
        }
    }
    return n;   
}
void BST::remove(int data) {
    remove(data, root);
}

int max(int a, int b) {
  return (a > b) ? a : b;
}
int BST::height(Node* n) {
  return (!n) ? -1 : 1 + max(height(n->left), height(n->right));
  if (!n)
    return -1;
  return 1 + max(height(n->left), height(n->right));
}

int BST::height() {
  return height(root);
}

void BST::clear(Node* n) {}

void BST::clear() {}

void BST::preorder(Node* n, std::ostream& oss){
    if(!n) return;
    oss << n->data << ", ";
    preorder(n->left, oss);
    preorder(n->right, oss);
}

void BST::preorder(std::ostream& oss) {
    preorder(root, oss);
    oss << std::endl;
}

void BST::inorder(Node* n, std::ostream& oss) {
    if(!n) return;
    inorder(n->left, oss);
    oss << n->data << ", ";
    inorder(n->right, oss);
}

void BST::inorder(std::ostream& oss) {
    inorder(root, oss);
    oss << std::endl;
}

void BST::postorder(Node* n, std::ostream& oss) {
    if(!n) return;
    postorder(n->left, oss);
    postorder(n->right, oss);
    oss << n->data << ", ";
}

void BST::postorder(std::ostream& oss) {
    postorder(root, oss);
    oss << std::endl;
}
