//C++ program using object and class to short an array of string in order
#include <iostream>
#include <string>
#include <algorithm>

class StringSorter {
public:
    StringSorter(int size) : size_(size) {
        array_ = new std::string[size_];
    }

    ~StringSorter() {
        delete[] array_;
    }

    void inputStrings() {
        std::cout << "Enter " << size_ << " strings:" << std::endl;
        for (int i = 0; i < size_; ++i) {
            std::cin >> array_[i];
        }
    }

    void sortStrings() {
        std::sort(array_, array_ + size_);
    }

    void displaySortedStrings() {
        std::cout << "Sorted strings:" << std::endl;
        for (int i = 0; i < size_; ++i) {
            std::cout << array_[i] << std::endl;
        }
    }

private:
    int size_;
    std::string* array_;
};

int main() {
    int size;
    std::cout << "Enter the number of strings: ";
    std::cin >> size;

    StringSorter sorter(size);
    sorter.inputStrings();
    sorter.sortStrings();
    sorter.displaySortedStrings();

    return 0;
}

