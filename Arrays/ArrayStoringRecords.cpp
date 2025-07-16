#include <iostream>
using namespace std;

int record() {
    int n;
    cout << "Enter the number of records: ";
    cin >> n;

    string name[40];

    for (int i = 0; i < n; i++) { 
        cout << "Enter name " << i + 1 << ": ";
        cin >> name[i];
    }

    cout << "\nYou entered:\n";
    for (int i = 0; i < n; i++) {
        cout << name[i] << endl;
    }

    return 0;
}

int main() {
    return record();
}