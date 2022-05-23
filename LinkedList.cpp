#include <iostream>

#include "LinkedList.h"
using namespace std;


LinkedList::LinkedList() {
    size=0;
    Node * n;
    
    n=new Node();
    head=n;
}
LinkedList::LinkedList(vector<int> input) {
    array=input;
    
    size=array.size();
    Node * n;
    Node * t;
    
    n=new Node();
    head=n;
    t=n; 
    n->setdata(array.at(0));
    n->setnode(n);
    
    
    for (int i=1;i<size;i++) {
        n=new Node();
        n->setdata(array.at(i)); 
        t->setnode(n); 
        t=t->getnode();
    }
    n->setnode(NULL); 
    
    
}

void LinkedList::addFront(int newItem) {
    
   Node * newNode=new Node();
   
   newNode->setdata(newItem);
   
   newNode->setnode(head);
   
   head=newNode;
   size++;
}
void LinkedList::addEnd(int newItem) {
    
    Node *the=head;
    Node *before=head;
    Node *endNode= new Node();
    int check=0;
    
    while(the!=NULL) {
        if (check==1) {
            before=before->getnode();
        }
        the=the->getnode();
        check=1;
    }
    
    endNode->setdata(newItem);
    before->setnode(endNode);
    endNode->setnode(NULL);
    size++; 
    
}

void LinkedList::addAtPosition(int position, int newItem) {
    Node *the=head;
    Node *before=head;
    Node *posNode= new Node();
    int counter=0;
    int check=0;
    
    while((the!=NULL)&&(counter!=position-1)) {
        if (check==1) {
            before=before->getnode();
        }
        the=the->getnode();
        check=1;
        counter++;
    }
    
    posNode->setdata(newItem);
    before->setnode(posNode);
    posNode->setnode(the);
    size++;
}

int LinkedList::search(int item) {
    Node *the=head;
    int pos=0; 
   
    while ((the!=NULL)&&(the->getdata()!=item)) {
        the=the->getnode();
        pos++;
        
        if (the==NULL) {
            
            pos=0;
        }
    }
    cout << pos << " " <<endl;
    return pos;
}

void LinkedList::deleteFront() {
    Node *the=head;
    the=the->getnode();
    head=the;
    size--;
}

void LinkedList::deleteEnd() {
    Node *the=head;
    Node *before=head;
    int check=0;
    
    while(the!=NULL) {
        if (check>1) {
            before=before->getnode();
        }
        the=the->getnode();
        check++;
    }
    before->setnode(NULL); 
    size--;
}
    
void LinkedList::deletePosition(int position) {
    
    if ((position<0)||(position>size)) {
        cout << "outside range" <<endl;
    }
    
    Node *the=head;
    Node *before=head;
    int counter=0;
    int check=0;
    
    while((the!=NULL)&&(counter!=position-1)) {
        if (check==1) {
            before=before->getnode();
        }
        the=the->getnode();
        check=1;
        counter++;
    }
    
    before->setnode( the->getnode() );
    size--;
    
}

int LinkedList::getItem(int position) {
    return 1;
}

void LinkedList::printItems() {
    Node *the=head;
    
    while(the!=NULL) { 
    //for (int i=0;i<size;i++) { 
        cout << the->getdata() <<endl;
        the=the->getnode();
    }
    
    
}