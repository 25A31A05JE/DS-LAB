#include <iostream>
using namespace std;

class node {
public:
    int data;
    node *link;
};

int main() {
    node *top = NULL, *cn = NULL, *t = NULL;
    int val, op;

    do {
        cout << "\n1: PUSH\n2: POP\n3: PEEK\n4: DISPLAY\n5: EXIT\nCHOOSE ANY ONE OPTION: ";
        cin >> op;

        switch (op) {
            case 1:
                cn = new node();
                cout << "\nEnter node data: ";
                cin >> val;
                cn->data = val;
                cn->link = NULL;

                if (top == NULL) {
                    top = cn;
                    t = cn;
                } else {
                    cn->link = top;
                    top = cn;
                }
                break;

            case 2:
                if (top == NULL) {
                    cout << "Stack is underflow\n";
                } else {
                    cout << top->data << " is popped\n";
                    t = top;
                    top = top->link;
                    t->link = NULL;
                    delete t;
                }
                break;

            case 3:
                if (top == NULL) {
                    cout << "Stack is underflow\n";
                } else {
                    cout << top->data << " is top node value\n";
                }
                break;

            case 4:
                if (top == NULL) {
                    cout << "Stack is underflow\n";
                } else {
                    t = top;
                    while (t != NULL) {
                        cout << t->data << " ";
                        t = t->link;
                    }
                    cout << "\n";
                }
                break;

            case 5:
                exit(0);

            default:
                cout << "Invalid option\n";
        }
        cout << "Do you want to continue 1/0? ";
        cin >> op;
    } while (op);

    return 0;
}
