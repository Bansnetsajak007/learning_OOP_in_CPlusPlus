#include <iostream>
#include <math.h>
#define PI  3.14
using namespace std;

class Third {
public:
    void calculate_circle() {
        int r;
        float a;
        cout << "Enter the radius of a circle: ";
        cin >> r;
        a = PI * r * r;
        cout << "The area of the circle is: " << a << endl;
    }

    void calculate_triangle() {
        float base, height, area;
        cout << "Enter the base: ";
        cin >> base;
        cout << "Enter the height: ";
        cin >> height;
        area = 0.5 * base * height;
        cout << "Area of the triangle is: " << area << endl;
    }

    void calculate_rectangle() {
        float length, width, area;
        cout << "Enter the length: ";
        cin >> length;
        cout << "Enter the width: ";
        cin >> width;
        area = length * width;
        cout << "Area of the rectangle is: " << area << endl;
    }
};

int main() {
    int choice;
    Third obj;

    while (true) {
        cout << "Choose an option:" << endl;
        cout << "1. Calculate the area of a circle" << endl;
        cout << "2. Calculate the area of a triangle" << endl;
        cout << "3. Calculate the area of a rectangle" << endl;
        cout << "4. Exit" << endl;
        cin >> choice;

        switch (choice) {
            case 1:
                obj.calculate_circle();
                break;
            case 2:
                obj.calculate_triangle();
                break;
            case 3:
                obj.calculate_rectangle();
                break;
            case 4:
                cout << "Exiting program." << endl;
                return 0;
            default:
                cout << "Invalid choice. Please select again." << endl;
        }
    }

    return 0;
}

