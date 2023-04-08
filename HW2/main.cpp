#include <iostream>
#include "List.h"
using namespace std;




int main() {
    List myList;
    myList.insert(34, 0);
    myList.insert(12, 1);
    myList.insert(52, 2);
    myList.insert(16, 3);
    myList.insert(12, 4);
    myList.printList();
    cout << "Finding 52 at index: " << myList.find(52) << endl;
    myList.insert(99, 3);
    myList.printList();
    myList.remove(52);
    myList.printList();
    cout << "Element at index 2: " << myList.findKth(2) << endl;
    myList.makeEmpty();
    myList.printList();
    return 0;
}