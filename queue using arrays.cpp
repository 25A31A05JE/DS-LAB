#include <iostream>
using namespace std;

int main() {
    int q[100], item, f = -1, r = -1, size, choice, cont;

    cout << "\nEnter size of Queue: ";
    cin >> size;

    do {
        cout << "\n1: Enqueue\n2: Dequeue\n3: Peek\n4: Display\n5: Exit\n";
        cout << "\nChoose any one option: ";
        cin >> choice;

        switch (choice) {
            case 1:
                if (r == size - 1) {
                    cout << "\nQueue Overflow\n";
                } else {
                    if (f == -1) {
                        f = 0;
                    }
                    cout << "Enter item: ";
                    cin >> item;
                    r++;
                    q[r] = item;
                }
                break;

            case 2:
                if (f == -1 || f > r) {
                    cout << "\nQueue Underflow\n";
                } else {
                    cout << "\nDeleted item: " << q[f] << endl;
                    f++;
                    if (f > r) { // Reset queue configuration if empty
                        f = r = -1;
                    }
                }
                break;

            case 3:
                if (f == -1 || f > r) {
                    cout << "\nQueue Underflow/Empty\n";
                } else {
                    cout << "\nFront element: " << q[f] << endl;
                }
                break;

            case 4:
                if (f == -1 || f > r) {
                    cout << "\nQueue Underflow\n";
                } else {
                    cout << "\nQueue elements: ";
                    for (int i = f; i <= r; i++) {
                        cout << q[i] << " ";
                    }
                    cout << "\n";
                }
                break;

            case 5:
                exit(0);

            default:
                cout << "\nInvalid option\n";
        }

        cout << "\nEnter 1 to continue OR 0 to exit: ";
        cin >> cont;
    } while (cont);

    return 0;
}
