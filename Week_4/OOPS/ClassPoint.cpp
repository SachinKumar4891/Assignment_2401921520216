
#include <iostream>
using namespace std;
class Point {
private:
    int x, y;
public:
    // Default Constructor
    Point() {
        x = 0;
        y = 0;
    }
    // Parameterized Constructor
    Point(int x, int y) {
        this->x = x;
        this->y = y;
    }
    void setX(int x) {
        this->x = x;
    }
    void setY(int y) {
        this->y = y;
    }
    void setXY(int x, int y) {
        this->x = x;
        this->y = y;
    }
    void display() {
        cout << "Point(" << x << ", " << y << ")" << endl;
    }
};
int main() {
    Point p1;
    p1.display();

    Point p2(10, 20);
    p2.display();

    p1.setXY(5, 7);
    p1.display();

    return 0;
}