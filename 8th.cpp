#include<iostream>
using namespace std;

class matrix {
public:
    int r1, r2, c1, c2;
    int i, j;

    void getdata() {
        cout << "Enter the number of rows for the 1st matrix: ";
        cin >> r1;
        cout << "Enter the number of columns for the 1st matrix: ";
        cin >> c1;
        cout << "Enter the number of rows for the 2nd matrix: ";
        cin >> r2;
        cout << "Enter the number of columns for the 2nd matrix: ";
        cin >> c2;
    }

    bool check() {
        return (r1 == r2) && (c1 == c2);
    }

    void calc() {
        int arr1[r1][c1], arr2[r2][c2], sum[r1][c1];

        cout << "Enter the elements of the 1st matrix:" << endl;
        for (i = 0; i < r1; i++) {
            for (j = 0; j < c1; j++) {
                cin >> arr1[i][j];
            }
        }

        cout << "Enter the elements of the 2nd matrix:" << endl;
        for (i = 0; i < r2; i++) {
            for (j = 0; j < c2; j++) {
                cin >> arr2[i][j];
            }
        }

        // Addition
        for (i = 0; i < r1; i++) {
            for (j = 0; j < c1; j++) {
                sum[i][j] = arr1[i][j] + arr2[i][j];
            }
        }

        // Display
        cout << "The sum of the matrices is:" << endl;
        for (i = 0; i < r1; i++) {
            for (j = 0; j < c1; j++) {
                cout << sum[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    matrix obj;
    obj.getdata();
    
    if (obj.check()) {
        obj.calc();
    } else {
        cout << "Matrices are not of the same size." << endl;
    }

    return 0;
}
