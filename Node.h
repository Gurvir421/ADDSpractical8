#ifndef NODE_H
#define NODE_H

class Node {
    public:
    Node();
    
    void setdata(int input);
    void setnode(Node * ptr);
    
    
    Node * getnode();
    int getdata();
    
    
    int data;
    Node *ptr_next;
};
#endif