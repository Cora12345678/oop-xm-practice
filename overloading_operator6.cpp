#include <iostream>
using namespace std;
class MyArray {
private:
    int data[5]; // Internal array

public:
    // Constructor to initialize the array
    MyArray() {
        for (int i = 0; i < 5; ++i) {
            data[i] = i + 1;
        }
    }

    // Overloaded array subscript operator
    int operator[](int index) const {
        // Check if the index is within bounds
        if (index >= 0 && index < 5) {
            return data[index];
        } else {
            cout << "Index out of bounds!" <<endl;
            return -1; // You can handle the error as needed
        }
    }

    // Overloaded array subscript operator for non-const objects
    int &operator[](int index) {
        // Check if the index is within bounds
        if (index >= 0 && index < 5) {
            return data[index];
        } else {
            cout << "Index out of bounds!" <<endl;
            // Returning a reference allows modification of the array element
            // Handle the error by providing a reference to a dummy element
            static int dummy;
            return dummy;
        }
    }

    // Display the elements of the array
    void display() const {
        for (int i = 0; i < 5; ++i) {
            cout << data[i] << " ";
        }
        cout <<endl;
    }
};

int main() {
    MyArray myArray;

    // Accessing elements using array subscript operator
    cout << "Element at index 2: " << myArray[2] <<endl;

    // Modifying elements using array subscript operator
    myArray[3] = 99;

    // Displaying the modified array
    cout << "Modified array: ";
    myArray.display();

    return 0;
}
