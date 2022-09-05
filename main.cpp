
#include <iostream>
#include "Node.h"
#include "LinkedList.h"

// ===================
// simple program to see and understand how basic linkedlist work
// ===================

using std::cout;
using std::endl;
using std::cin;
using std::getline;
using std::string;

int main()
{
    string choice;                                                // user choice
    cout << endl << "== Learn LinkedList ==" << endl;
    cout << "Start LinkedList Learning (yes/no): ";
    cin >> choice;

    while(choice != "no" )
    {
        if(choice == "yes")
        {
            cout << endl;
            LinkedList* newListArr = new LinkedList[5];         // create 5 new allocated memory with default value
            delete[] newListArr;
            cout << endl;
            LinkedList* newList = new LinkedList();             // class pointer to new allocated memory
            newList = new LinkedList(2);
            delete newList;                                     // free allocated memory
        }
        else
        {
            cout << endl << "[ Invalid choice ]" << endl;
        }

        cout << endl << "== Learn LinkedList ==" << endl;
        cout << "Start program (yes/no): ";
        cin >> choice;
    }

    if(choice == "no")
    {
        cout << endl << "== Exit Program ==" << endl;
    }
    return 0;
}
