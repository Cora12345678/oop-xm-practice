#include <iostream>
using namespace std;
class Complex
{
private:
    double real;
    double imaginary;

public:
    Complex(double r, double imag) : real(r), imaginary(imag) {}
    Complex operator-(const Complex &other) const
    {
        Complex result(real - other.real, imaginary - other.imaginary);
        return result;
    }
    void display() const
    {
        std::cout << "Real: " << real << " Imaginary: " << imaginary << std::endl;
    }
};
int main()
{
    Complex num1(20.0,10.0);
    Complex num2(10.0,5.0);
    Complex subtract=num1-num2;
    cout<<"result of subtraction is ";
    subtract.display();
    return 0;
}