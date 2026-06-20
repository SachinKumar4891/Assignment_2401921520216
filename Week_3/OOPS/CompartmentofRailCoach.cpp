#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
class Compartment {
public:
    virtual string notice() = 0;
};
class FirstClass : public Compartment {
public:
    string notice() { return "First Class"; }
};
class Ladies : public Compartment {
public:
    string notice() { return "Ladies"; }
};
class General : public Compartment {
public:
    string notice() { return "General"; }
};
class Luggage : public Compartment {
public:
    string notice() { return "Luggage"; }
};
int main() {
    srand(time(0));
    Compartment* c[10];
    for (int i = 0; i < 10; i++) {
        switch (rand() % 4) {
            case 0: c[i] = new FirstClass(); break;
            case 1: c[i] = new Ladies(); break;
            case 2: c[i] = new General(); break;
            case 3: c[i] = new Luggage(); break;
        }
        cout << c[i]->notice() << endl;   
    }
    return 0;
}