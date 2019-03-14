 
 #include "RBNode.h"
 #include <queue>

 class RBTree {
     public:
        RBTree();
        void print(int type);
        void insert(int val);
    private:
        RBNode* root;
        void preorder(RBNode*);
        void inorder(RBNode*);
        void postorder(RBNode*);
        void levelByLevel(RBNode*);
 };

 RBTree::RBTree(){
     root = NULL;
 }

 void RBTree::print(int type){
     if(type == 1){
         preorder(root);
     } else if(type == 2){
         inorder(root);
     } else if(type == 3){
         postorder(root);
     } else if(type == 4){
         levelByLevel(root);
     }
 }
 
 void RBTree::preorder(RBNode* root){
     if(root){
         cout << root->getValue() << endl;
         preorder(root->getLeft());
         preorder(root->getRight());
     }
 }

 void RBTree::inorder(RBNode* root){
     if(root){
         inorder(root->getLeft());
         cout << root->getValue() << endl;
         inorder(root->getRight());
     }
 }

 void RBTree::postorder(RBNode* root){
     if(root){
         postorder(root->getLeft());
         postorder(root->getRight());
         cout << root->getValue() << endl;
     }
 }

 void RBTree::levelByLevel(RBNode* root){
     queue<RBNode*> q;
     q.push(root);
     int level = 0;
     while(q.size()){
         int n = q.size();
         cout << "Level " << level << endl;
         while(n){
             RBNode* curr = q.front();
             cout << curr->getValue() << " ";
             if(curr->getLeft()){
                q.push(curr->getLeft());
             }
             if(curr->getRight()){
                q.push(curr->getRight());
             }
             q.pop();
             n--;
         }
         cout << endl;
         level++;
         cout << "---------" << endl;
     }
 }

 void RBTree::insert(int val){
     RBNode* node = new RBNode(val, 'B');
     RBNode* y;
     y = NULL;
     RBNode* x = root;
     while(x != NULL){
         y = x;
         if(node->getValue() == x->getValue()) return;
         if(node->getValue() < x->getValue()){
             x = x->getLeft();
         } else {
             x = x->getRight();
         }
     }
     node->setParent(y);
     if(y == NULL){
         root = node;
         cout << "Root is Node" << endl;
     } else if(node->getValue() < y->getValue()){
         y->setLeft(node);
     } else {
         y->setRight(node);
     }
     node->setRight(NULL);
     node->setLeft(NULL);
     node->setColor('R');

 }