#include <iostream>
using namespace std;

#define MAX 100

class ArrayList {
private:
    int arr[MAX];
    int size;

public:
    ArrayList() {
        size = 0;
    }
    // Insert element at a given position
    void insert(int element, int position) {
        if (size == MAX) {
            cout << "List is full!" << endl;
            return;
        }
        if (position < 0 || position > size) {
            cout << "Invalid position!" << endl;
            return;
        }

        for (int i = size; i > position; i--) {
            arr[i] = arr[i - 1];
        }

        arr[position] = element;
        size++;
        cout << "Inserted successfully." << endl;
    }

    // Delete element from a given position
    void remove(int position) {
        if (size == 0) {
            cout << "List is empty!" << endl;
            return;
        }
        if (position < 0 || position >= size) {
            cout << "Invalid position!" << endl;
            return;
        }

        for (int i = position; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }

        size--;
        cout << "Deleted successfully." << endl;
    }

    // Search for an element
    int search(int element) {
        for (int i = 0; i < size; i++) {
            if (arr[i] == element) {
                return i;
            }
        }
        return -1;
    }

    // Display list elements
    void display() {
        if (size == 0) {
            cout << "List is empty." << endl;
            return;
        }

        cout << "List elements: ";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    ArrayList list;
    int choice, element, position;

    do {
        cout << "\n--- Array List Menu ---\n";
        cout << "1. Insert\n";
        cout << "2. Delete\n";
        cout << "3. Search\n";
        cout << "4. Display\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter element: ";
            cin >> element;
            cout << "Enter position (0-based): ";
            cin >> position;
            list.insert(element, position);
            break;

        case 2:
            cout << "Enter position to delete (0-based): ";
            cin >> position;
            list.remove(position);
            break;

        case 3:
            cout << "Enter element to search: ";
            cin >> element;
            position = list.search(element);
            if (position != -1)
                cout << "Element found at position " << position << endl;
            else
                cout << "Element not found!" << endl;
            break;

        case 4:
            list.display();
            break;

        case 5:
            cout << "Exiting program..." << endl;
            break;

        default:
            cout << "Invalid choice!" << endl;
        }
    } while (choice != 5);

    return 0;
}
