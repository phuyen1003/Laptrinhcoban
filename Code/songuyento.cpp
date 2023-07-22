#include <iostream>

using namespace std;

int main() {
    int so;

    cout << "Nhập số N : ";
    cin >> so;

    if (so< 2) {
        cout << so << " không phải là số nguyên tố" << endl;
        return 0;
    }

    for (int i = 2; i < so - 1; ++i) {
        if (so% i == 0) {
            cout << so << " phải là số nguyên tố" << endl;
            return 0; 
        }
    }

    cout << so << " là số nguyên tố" << endl;
    return 0;
}