#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Node.h"
#include <vector>


class LinkedList {
    public:
    LinkedList(); 
    LinkedList(std::vector<int> input);
    void addFront(int newItem);
    void addEnd(int newItem);
    void addAtPosition(int position, int newItem);
    int search(int item);
    void deleteFront();
    void deleteEnd();
    void deletePosition(int position);
    int getItem(int position);
    void printItems(); 
    
    Node * head;
    Node *h; 
    int size;
    
    std::vector<int> array;
    protected:
};
#endif