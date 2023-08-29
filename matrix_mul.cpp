#include<iostream>
using namespace std;

class multmul {
public:
    int r1, r2, c1, c2, i, j, k;
    
    void getdata() {
        cout << "Enter number of rows for 1st matrix: ";
        cin >> r1;
        cout << "Enter number of columns for 1st matrix: ";
        cin >> c1;
        cout << "Enter number of rows for 2nd matrix: ";
        cin >> r2;
        cout << "Enter number of columns for 2nd matrix: ";
        cin >> c2;
    }
    
    bool check() {
        return (c1 == r2);
    }
    
    void calc() {
        int arr1[r1][c1], arr2[r2][c2], prod[r1][c2];
        
        cout << "Enter elements of the 1st matrix:" << endl;
        for (i = 0; i < r1; i++) {
            for (j = 0; j < c1; j++) {
                cin >> arr1[i][j];
            }
        }
        
        cout << "Enter elements of the 2nd matrix:" << endl;
        for (i = 0; i < r2; i++) {
            for (j = 0; j < c2; j++) {
                cin >> arr2[i][j];
            }
        }
        
        // multiplication
        for (i = 0; i < r1; i++) {
            for (j = 0; j < c2; j++) {
                prod[i][j] = 0;
                for ( k = 0; k < c1; k++) {
                    prod[i][j] += arr1[i][k] * arr2[k][j];
                }
            }
        }
        
        // displaying the product
        cout << "Product of the two matrices:" << endl;
        for (i = 0; i < r1; i++) {
            for (j = 0; j < c2; j++) {
                cout << prod[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    multmul m;
    m.getdata();
    
    if (m.check()) {
        m.calc(); // calling the calculation function
    } else {
        cout << "hudaina valid values hal majak nagar vetlas" << endl;
    }

    return 0;
}
