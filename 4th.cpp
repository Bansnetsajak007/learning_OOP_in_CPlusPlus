//find the position of a number in an array .
#include <iostream>
#include <vector>

class fourth {
private:
    std::vector<int> arr; // using vector to store nums

public:
    fourth() {
        // Constructor to initialize the vector with the provided elements
        arr = {3, 5, 6, 8, 9, 33, 44, 56, 76, 87, 989, 895, 453, 212, 324, 545, 656, 767, 675, 677, 567};
    }

    void searchNumber(int pos) {
        if (pos >= 0 && pos < arr.size()) {
            int num = arr[pos];
            if (pos == 5) {
                std::cout << "You're clown! Number at position " << pos << " is: " << num << std::endl;
            } else {
                std::cout << "Number at position " << pos << " is: " << num << std::endl;
            }
        } else {
            std::cout << "NERD!!!!!" << std::endl;
        }
    }
};

int main() {
    fourth obj;
    int position;

    std::cout << "Enter a position: ";
    std::cin >> position;

    obj.searchNumber(position);

    return 0;
}

