#include <iostream>

#include "Node.h"



Node::Node() {
    
}
    
void Node::setdata(int input) {
    data=input;
}

void Node::setnode(Node * ptr) {
    ptr_next= ptr;
}

Node * Node::getnode() {
    return ptr_next;
}

int Node::getdata() {
    return data;
}