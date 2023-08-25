//C++ code to short given array element in ascending and descending order.
#include <iostream>
using namespace std;

class fifth_cpp {
public:
    int arr[50], i, j, n, temp;

    void getelement() {
        cout << "Enter the size of an array: ";
        cin >> n;
        cout << "Enter your array elements to sort them: ";
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
    }

    void sortAscending() {
        for (i = 0; i < n; i++) {
            for (j = i + 1; j < n; j++) {
                if (arr[i] > arr[j]) {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
        cout << "The array list in ascending order: ";
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    void sortDescending() {
        for (i = 0; i < n; i++) {
            for (j = i + 1; j < n; j++) {
                if (arr[i] < arr[j]) { // Change the comparison here
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
        cout << "The array list in descending order: ";
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    fifth_cpp obj;
    obj.getelement();
    obj.sortAscending(); //  sort in ascending order
    obj.sortDescending(); //  sort in descending order
    return 0;
}
