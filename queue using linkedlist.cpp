#include <iostream>
using namespace std;

class node {
public:
    int data;
    node *link;
};

int main() {
    node *f = NULL, *r = NULL, *cn = NULL, *t = NULL;
    int ch;

    do {
        cout << "\n1: Enqueue\n2: Dequeue\n3: Peek\n4: Display\n5: Exit\n";
        cout << "\nEnter your choice: ";
        cin >> ch;

        switch (ch) {
            case 1: // Enqueue
                cn = new node();
                cout << "Enter item: ";
                cin >> cn->data;
                cn->link = NULL;

                if (f == NULL) {
                    f = r = cn;
                } else {
                    r->link = cn;
                    r = cn;
                }
                cout << cn->data << " is inserted into Queue\n";
                break;

            case 2: // Dequeue
                if (f == NULL) {
                    cout << "\nQueue Underflow\n";
                } else {
                    t = f;
                    cout << "\nDeleted item: " << t->data << endl;
                    f = f->link;
                    delete t;
                    if (f == NULL) {
                        r = NULL;
                    }
                }
                break;

            case 3: // Peek
                if (f == NULL) {
                    cout << "\nQueue is empty\n";
                } else {
                    cout << "\nFront element: " << f->data << endl;
                }
                break;

            case 4: // Display
                if (f == NULL) {
                    cout << "\nQueue is empty\n";
                } else {
                    t = f;
                    cout << "\nQueue elements: ";
                    while (t != NULL) {
                        cout << t->data << " ";
                        t = t->link;
                    }
                    cout << "\n";
                }
                break;

            case 5:
                cout << "\nExiting...\n";
                exit(0);

            default:
                cout << "\nInvalid choice\n";
        }

        cout << "\nEnter 1 to continue 0 to Exit: ";
        cin >> ch;
    } while (ch);

    return 0;
}
