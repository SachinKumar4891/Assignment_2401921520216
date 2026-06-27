#include <iostream>
using namespace std;
class Outer {
public:
    void display() {
        cout << "Display function of Outer class" << endl;
    }
    class Inner {
    public:
        void display() {
            cout << "Display function of Inner class" << endl;
        }
    };
};
int main() {
    Outer obj1;
    obj1.display();

    Outer::Inner obj2;
    obj2.display();

    return 0;
}