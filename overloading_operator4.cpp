#include <iostream>
using namespace std;
class Comparison
{
private:
    double x;
    double y;

public:
    Comparison(double x_val, double y_val) : x(x_val), y(y_val) {}
    bool operator<(const Comparison &other) const
    {
        return (x < other.x) || ((x == other.x) && (y < other.y));
    }
    void display() const
    {
        std::cout << "Point(" << x << ", " << y << ")";
    }
};

int main()
{
    Comparison point1(3, 5);
    Comparison point2(30, 8);

    std::cout << "Comparing point1 and point2: ";
    if (point1 < point2)
    {
        std::cout << "point1 is less than point2." << std::endl;
    }
    else
    {
        std::cout << "point2 is less than point1." << std::endl;
    }

    return 0;
}