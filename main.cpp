#include <iostream>


#include "Node.h"
#include "LinkedList.h"

#include <vector>
using namespace std;

int main() {
    /*
    Node * n;
    Node * t;
    Node * header;
    
    n=new Node(); 
    header=n;
    t=n;
    
    n->setdata(1);
    n->setnode(n);
    
    n=new Node();
    n->setdata(2); 
    t->setnode(n); 
    t=t->getnode();
    
    n=new Node();
    n->setdata(3);
    t->setnode(n);
    n->setnode(NULL); 
    //t=t->getnode();
    Node * the;
    the=header;
    
    for (int i=0;i<3;i++) {
    
    //cout << the->getdata() << endl; 
    //the=the->getnode();
    }
    
    vector <int> cool= { 1,2,3,4};
    
    LinkedList hello(cool);
    hello.addFront(0);
    hello.addEnd(5);
    //hello.addAtPosition(2,2);
    //hello.search(3);
    //hello.deleteFront();
    hello.deleteEnd();
    hello.deletePosition(2);
    hello.printItems();
    */
    vector <int> array1;
    int para1;
    int para2;
    
    string input;
    string numbers="";
    string numbers2="";
    string task="";
    getline(cin,input);
    
    int check=0;
    int count=0;
    
    
    for (int i=0;i<input.size();i++) {
        if (isdigit(input[i])) {
            if (check==0) {
                numbers =input[i];
                array1.push_back(stoi(numbers));
            }
            else {
                numbers =input[i];
                if (count==0) {
                    para1=stoi(numbers);
                    count=1;
                }
                else {
                    para2=stoi(numbers);
                }
            }
    
        }
        if ((input[i]=='A')||(input[i]=='S')||(input[i]=='G')) {
            task+=input[i];
            task+=input[i+1];
            check=1;
        }
    }
    
    
    
    LinkedList hello(array1);
    
    if (task=="AF") {
        hello.addFront(para1);
    }
    else if (task=="AE") {
        hello.addEnd(para1);
    }
    else if (task=="AP") {
        hello.addAtPosition(para1,para2);
    }
    else if (task=="S") {
        hello.search(para1);
    }
    else if (task=="DF") {
        hello.deleteFront();
    }
    else if (task=="DE") {
        hello.deleteEnd();
    }
    else if (task=="DP") {
        hello.deletePosition(para1);
    }
    else if (task=="GI") {
        hello.getItem(para1);
    }
    hello.printItems();
    
    return 0;

}