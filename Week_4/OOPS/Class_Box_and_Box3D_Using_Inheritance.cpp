
#include <iostream>
using namespace std;
// Base class
class Box {
protected:
    float length, breadth;
public:
    Box(float l = 0, float b = 0) {
        length = l;
        breadth = b;
    }
    void setValue(float l, float b) {
        length = l;
        breadth = b;
    }
    float area() {
        return length * breadth;
    }
};
// Derived class
class Box3D : public Box {
private:
    float height;
public:
    Box3D(float l = 0, float b = 0, float h = 0)
        : Box(l, b) {
        height = h;
    }
    void setValue(float l, float b, float h) {
        length = l;
        breadth = b;
        height = h;
    }
    float volume() {
        return length * breadth * height;
    }
};
int main() {
    Box b1(10, 5);
    cout << "Area of Box = " << b1.area() << endl;

    Box3D b2(10, 5, 4);
    cout << "Area of Box3D = " << b2.area() << endl;
    cout << "Volume of Box3D = " << b2.volume() << endl;

    return 0;
}