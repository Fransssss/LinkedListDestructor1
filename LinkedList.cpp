// Fransiskus Agapa

#include "LinkedList.h"
#include <iostream>

LinkedList::LinkedList()                  // default constructor
{
    std::cout << "= LinkedList Head Default =" << std::endl;
    head = nullptr;
}

LinkedList::LinkedList(int theData)
{
    std::cout << "= LinkedList Assign Data = " << std::endl << std::endl;
    Node* newNode = new Node(theData);     // create new allocated memory and assign a value
    newNode->addressNext = nullptr;        // new allocated memory's points to nullptr
    head = newNode;                        // head points to new allocated memory
}

LinkedList::~LinkedList()
{
    std::cout << "= LinkedList Destructor =" << std::endl;
    while(head != nullptr)
    {
        Node* tempNext = head->addressNext;   // temp holds the address of next allocated memory
        delete head;                          // delete an allocated memory
        head = tempNext;                      // move to next list
    }
}
