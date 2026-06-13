#ifndef PLAYABLE_H
#define PLAYABLE_H

class Playable {
public:
    virtual void play() = 0; // Pure virtual function
    virtual ~Playable() {}
};

#endif