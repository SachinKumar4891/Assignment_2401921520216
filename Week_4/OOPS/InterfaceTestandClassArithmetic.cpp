#include <iostream>
using namespace std;
// Interface
class test {
public:
    virtual int square(int x) = 0; // pure virtual function
};
// Implementing interface
class arithmetic : public test {
public:
    int square(int x) {
        return x * x;
    }
};
// Driver class
class ToTestInt {
public:
    void show() {
        arithmetic a;
        int num;

        cout << "Enter a number: ";
        cin >> num;

        cout << "Square = " << a.square(num) << endl;
    }
};
int main() {
    ToTestInt t;
    t.show();

    return 0;
}