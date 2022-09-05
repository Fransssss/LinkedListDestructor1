// Fransiskus Agapa

#ifndef LINKEDLISTDESTRUCTOR1_LINKEDLIST_H
#define LINKEDLISTDESTRUCTOR1_LINKEDLIST_H

#include "Node.h"

class LinkedList
{
private:
    Node* head;
public:
    LinkedList();                       // default constructor
    LinkedList(int theData);
    ~LinkedList();                      // destructor
};


#endif //LINKEDLISTDESTRUCTOR1_LINKEDLIST_H
