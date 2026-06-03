#include <iostream>
using namespace std;

int main() {
    int c, first, last, middle, n, search, array[100];

    cout << "Enter no. of elements\n";
    cin >> n;

    cout << "Enter the integer values:\n";
    for (c = 0; c < n; c++) {
        cin >> array[c];
    }

    cout << "Enter value to find\n";
    cin >> search;

    first = 0;
    last = n - 1;
    middle = (first + last) / 2;

    while (first <= last) {
        if (array[middle] < search) {
            first = middle + 1;
        } else if (array[middle] == search) {
            cout << "Found at location \n" << middle + 1 << endl;
            break;
        } else {
            last = middle - 1;
        }
        middle = (first + last) / 2;
    }

    if (first > last) {
        cout << "Not found/isn't present in the list\n";
    }

    return 0;
}
