#include "Veena.h"
#include "Saxophone.h"

int main() {

    // a. Create an instance of Veena and call play()
    Veena veena;
    veena.play();

    // b. Create an instance of Saxophone and call play()
    Saxophone saxophone;
    saxophone.play();

    // c. Using Playable pointer
    Playable* p;

    p = &veena;
    p->play();

    p = &saxophone;
    p->play();

    return 0;
}