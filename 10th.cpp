//C++ CODE TO DEMONSTRATE NEW AND DELETE OPERATORS ==> DMA
#include <iostream>

class MyClass {
public:
    MyClass(int value) : data(value) {
        std::cout << "Constructor called with value: " << data << std::endl;
    }

    ~MyClass() {
        std::cout << "Destructor called with value: " << data << std::endl;
    }

    void display() {
        std::cout << "Value: " << data << std::endl;
    }

private:
    int data;
};

int main() {
    // Using 'new' to dynamically allocate an object
    MyClass* ptr = new MyClass(42);

    // Accessing object's member function
    ptr->display();

    // Using 'delete' to deallocate the object and call its destructor
    delete ptr;

    return 0;
}
