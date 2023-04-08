#include <iostream>
#include <vector>
using namespace std;

class List {
private:
    vector<int> arr;
    int maxSize;

public:
    List() {
        maxSize = 0;
    }

    bool isEmpty() const {
        return arr.empty();
    }

    bool isFull() const {
        return arr.size() == maxSize;
    }

    int getSize() const {
        return arr.size();
    }

    void setSize(int size) {
        arr.resize(size);
        maxSize = size;
    }

    void printList() const {
        if (isEmpty()) {
            cout << "List is empty" << endl;
        } else {
            cout << "List: ";
            for (auto it = arr.begin(); it != arr.end(); ++it) {
                cout << *it << " ";
            }
            cout << endl;
        }
    }

    void makeEmpty() {
        arr.clear();
        cout << "List is now empty" << endl;
    }

    int find(int value) const {
        auto it = find(arr.begin(), arr.end(), value);
        if (it != arr.end()) {
            return distance(arr.begin(), it);
        } else {
            return -1;
        }
    }

    void insert(int value, int index) {
        if (isFull()) {
            cout << "List is full" << endl;
        } else if (index < 0 || index > getSize()) {
            cout << "Invalid index" << endl;
        } else {
            arr.insert(arr.begin() + index, value);
            cout << value << " is inserted at index " << index << endl;
        }
    }

    void remove(int value) {
        auto it = find(arr.begin(), arr.end(), value);
        if (it == arr.end()) {
            cout << value << " is not found in the list" << endl;
        } else {
            arr.erase(it);
            cout << value << " is removed from index " << distance(arr.begin(), it) << endl;
        }
    }

    int findKth(int k) const {
        if (k < 0 || k >= getSize()) {
            cout << "Index out of range" << endl;
            return -1;
        } else {
            return arr[k];
        }
    }
};
