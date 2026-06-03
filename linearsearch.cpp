#include <iostream>
using namespace std;

int main() {
    int i, n, key, sk, a[20];
    bool status = false;

    cout << "Enter number of array elements and search key: ";
    cin >> n >> sk;

    cout << "Enter elements:\n";
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (i = 0; i < n; i++) {
        if (a[i] == sk) {
            cout << "sk found at " << i + 1 << endl;
            status = true;
            break;
        }
    }

    if (!status) {
        cout << "Key not found" << endl;
    }

    return 0;
}
