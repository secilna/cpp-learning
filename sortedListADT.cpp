
#include <iostream>
using namespace std;

class SortedList {
private:
    int items[15];
    int length;

public:
    SortedList() {
        length = 0;
    }

    void InsertItem(int item) {
        if (length == 15) {
            cout << "The list is full!" << endl;
            return;
        }

        int position = 0;

        while (position < length && items[position] < item) {
            position++;
        }

        for (int i = length; i > position; i--) {
            items[i] = items[i - 1];
        }

        items[position] = item;
        length++;
    }

    void DeleteItem(int item) {
        int position = 0;

        while (position < length && items[position] != item) {
            position++;
        }

        if (position == length) {
            cout << "Item not found: " << item << endl;
            return;
        }

        for (int i = position; i < length - 1; i++) {
            items[i] = items[i + 1];
        }

        length--;
    }

    void DisplayList() const {
        for (int i = 0; i < length; i++) {
            cout << items[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    SortedList museumInventory;

    int artifactIDs[15] = {
        508, 102, 715, 309, 921,
        204, 613, 407, 816, 110,
        525, 330, 740, 450, 680
    };

    // Insert 15 artifacts
    for (int i = 0; i < 15; i++) {
        museumInventory.InsertItem(artifactIDs[i]);
    }

    cout << "Original sorted inventory:" << endl;
    museumInventory.DisplayList();

    // Delete an artifact
    cout << "\nDeleting artifact 407..." << endl;
    museumInventory.DeleteItem(407);
    museumInventory.DisplayList();

    // Insert a new artifact
    cout << "\nInserting artifact 415..." << endl;
    museumInventory.InsertItem(415);
    museumInventory.DisplayList();

    cout << "\nTrying to insert into a full list..." << endl;
    museumInventory.InsertItem(999);

    return 0;
}
