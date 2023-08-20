#include <iostream>
using namespace std;

class Second_cpp {
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

    void shortelement() {
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
};

int main() {
    Second_cpp obj;
    obj.getelement();
    obj.shortelement();
    return 0;
}

