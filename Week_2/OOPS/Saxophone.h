#ifndef SAXOPHONE_H
#define SAXOPHONE_H

#include <iostream>
#include "Playable.h"

class Saxophone : public Playable {
public:
    void play() override {
        std::cout << "Playing Saxophone" << std::endl;
    }
};

#endif