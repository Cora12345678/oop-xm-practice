#include <iostream>

class Complex {
private:
    double real;
    double imag;

public:
    // Constructor to initialize real and imag
    Complex(double r, double i) : real(r), imag(i) {}

    // Overloading the '+' operator for addition of Complex numbers
    Complex operator+(const Complex& other) const {
        Complex result(real + other.real, imag + other.imag);
        return result;
    }

    // Function to display the complex number
    void display() const {
        std::cout << "Real: " << real << " Imaginary: " << imag << std::endl;
    }
};

int main() {
    // Creating two complex numbers
    Complex num1(2.5, 3.0);
    Complex num2(1.5, 2.0);

    // Using the overloaded '+' operator to add two complex numbers
    Complex sum = num1 + num2;

    // Displaying the result
    std::cout << "Result of addition: ";
    sum.display();

    return 0;
}
