
class RBNode {
    public:
        RBNode();
        RBNode(int value, char color);
        int getValue();
        char getColor();
        void setColor(char c);
        RBNode* getLeft();
        RBNode* getRight();
        RBNode* getParent();
        void setLeft(RBNode* left);
        void setRight(RBNode* right);
        void setParent(RBNode* parent);
    private:
        char color; //B is Black, R is Red
        int value;
        RBNode *left;
        RBNode *right;
        RBNode *parent;
};

RBNode::RBNode(){

}
RBNode::RBNode(int val, char col){
    value = val;
    color = col;
}

RBNode* RBNode::getLeft(){
    return left;
}

RBNode* RBNode::getRight(){
    return right;
}

RBNode* RBNode::getParent(){
    return parent;
}

void RBNode::setLeft(RBNode *l){
    left = l;
}

void RBNode::setRight(RBNode *r){
    right = r;
}

void RBNode::setParent(RBNode *p){
    parent = p;
}

int RBNode::getValue(){
    return value;
}

char RBNode::getColor(){
    return color;
}
void RBNode::setColor(char c){
    color = c;
}