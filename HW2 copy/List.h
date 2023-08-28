#include <iostream>
using namespace std;

class Node {
public:
	double data;
	Node* next;
};


class list {
public:
    list() : start(NULL) {}

    bool isEmpty() const {
        return start == NULL;
    }

    void insert(int index, double x) {
        if (index < 0) {
            return;
        }

        Node* newNode = new Node;
        newNode->data = x;

        if (index == 0) {
            newNode->next = start;
            start = newNode;
        } else {
            Node* currNode = start;
            for (int i = 1; i < index && currNode != NULL; i++) {
                currNode = currNode->next;
            }
            if (currNode != NULL) {
                newNode->next = currNode->next;
                currNode->next = newNode;
            } else {
                delete newNode;
            }
        }
    }

    int find(double x) const {
        Node* currNode = start;
        int currIndex = 1;
        while (currNode != NULL && currNode->data != x) {
            currNode = currNode->next;
            currIndex++;
        }
        if (currNode != NULL) {
            return currIndex;
        } else {
            return 0;
        }
    }

    void printlist() const {
        Node* currNode = start;
        while (currNode != NULL) {
            std::cout << currNode->data << " ";
            currNode = currNode->next;
        }
        cout << endl;
    }

    Node* findKth(int k) const {
        if (start == NULL || k < 1) {
            return NULL;
        }

        Node* currNode = start;
        int count = 1;
        while (currNode != NULL && count < k) {
            currNode = currNode->next;
            count++;
        }

        if (count == k && currNode != NULL) {
            return currNode;
        } else {
            return NULL;
        }
    }

    void makeEmpty() {
        Node* currNode = start;
        while (currNode != NULL) {
            Node* tempNode = currNode;
            currNode = currNode->next;
            delete tempNode;
        }
        start = NULL;
    }

    void remove(double x) {
        if (start == NULL) {
            return;
        }

        if (start->data == x) {
            Node* tempNode = start;
            start = start->next;
            delete tempNode;
            return;
        }

        Node* currNode = start;
        while (currNode->next != NULL && currNode->next->data != x) {
            currNode = currNode->next;
        }

        if (currNode->next != NULL && currNode->next->data == x) {
            Node* tempNode = currNode->next;
            currNode->next = currNode->next->next;
            delete tempNode;
        }
    }

private:
    Node* start;
};