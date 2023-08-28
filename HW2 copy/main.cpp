#include <iostream>
#include "list.h"
using namespace std;
int main() {
    list myList;

    myList.insert(0, 1.0);
    myList.insert(1, 2.0);
    myList.insert(2, 3.0);

    cout << "List after inserting elements: ";
    myList.printlist();

    cout << "Index of element 2.0: " << myList.find(2.0) << endl;

    Node* kthNode = myList.findKth(2);
    cout << "2nd element is " << kthNode->data << endl;

    myList.remove(2.0);

    cout << "List after removing element 2.0: ";
    myList.printlist();

    myList.makeEmpty();

    cout << "Is the list empty now? " << (myList.isEmpty() ? "Yes" : "No") << endl;

    return 0;
}
