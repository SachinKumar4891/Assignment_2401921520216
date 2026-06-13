#ifndef VEENA_H
#define VEENA_H

#include <iostream>
#include "Playable.h"

class Veena : public Playable {
public:
    void play() override {
        std::cout << "Playing Veena" << std::endl;
    }
};

#endif