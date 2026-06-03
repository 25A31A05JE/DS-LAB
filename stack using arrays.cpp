#include <iostream>
using namespace std;

int main() {
    int s[10], size, item, top = -1, op;

    cout << "Enter size of the stack: ";
    cin >> size;

    do {
        cout << "\n1: PUSH\n2: POP\n3: PEEK\n4: DISPLAY\n5: EXIT\nCHOOSE ANY ONE OPTION: ";
        cin >> op;

        switch (op) {
            case 1:
                if (top == size - 1) {
                    cout << "Stack is overflow\n";
                } else {
                    top = top + 1;
                    cout << "\nEnter stack elements: ";
                    cin >> item;
                    s[top] = item;
                }
                break;
            case 2:
                if (top == -1) {
                    cout << "Stack is underflow\n";
                } else {
                    cout << s[top] << " is popped\n";
                    top = top - 1;
                }
                break;
            case 3:
                if (top == -1) {
                    cout << "Stack is underflow\n";
                } else {
                    cout << s[top] << " is top element\n";
                }
                break;
            case 4:
                if (top == -1) {
                    cout << "Stack is underflow\n";
                } else {
                    cout << "Stack Elements:\n";
                    for (int i = top; i >= 0; i--) {
                        cout << s[i] << " ";
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
