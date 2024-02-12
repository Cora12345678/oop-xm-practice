//compairing whether points are equal or not
#include <iostream>
using namespace std;

class Point {
private:
    int x;
    int y;

public:
    Point(int xVal, int yVal) : x(xVal), y(yVal) {}

    // Overloaded equal operator
    bool operator==(const Point &other) const {
        return (x == other.x) && (y == other.y);
    }

    void display() const {
        cout << "Point(" << x << ", " << y << ")";
    }
};

int main() {
    Point point1(3, 5);
    Point point2(3, 5);
    Point point3(1, 8);

    cout << "Comparing point1 and point2: ";
    if (point1 == point2) {
        cout << "They are equal." << endl;
    } else {
        cout << "They are not equal." << endl;
    }

    cout << "Comparing point1 and point3: ";
    if (point1 == point3) {
        cout << "They are equal." << endl;
    } else {
        cout << "They are not equal." << endl;
    }

    return 0;
}
