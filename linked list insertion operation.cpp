#include <iostream>
using namespace std;

class node {
public:
    int data;
    node *link;
};

int main() {
    node *h = NULL, *cn = NULL, *t = NULL;
    int val, ch;

    // Creating initial linked list
    do {
        cn = new node();
        cout << "Enter node data: ";
        cin >> val;
        cn->data = val;
        cn->link = NULL;

        if (h == NULL) {
            h = cn;
            t = cn;
        } else {
            t->link = cn;
            t = cn;
        }
        cout << "\nDo you want to continue 1/0: \n";
        cin >> ch;
    } while (ch);

    // Display original linked list data
    cout << "\nLinked list data:\n";
    t = h;
    while (t != NULL) {
        cout << t->data << " -> ";
        t = t->link;
    }
    cout << "NULL\n";

    // Insertion at starting
    t = h;
    cn = new node();
    cout << "\nEnter node data to insert at beginning:\n";
    cin >> val;
    cn->data = val;
    cn->link = t;
    h = cn;

    // Display linked list data after insertion
    cout << "\nLinked list data after insertion operation:\n";
    t = h;
    while (t != NULL) {
        cout << t->data << " -> ";
        t = t->link;
    }
    cout << "NULL\n";

    return 0;
}
