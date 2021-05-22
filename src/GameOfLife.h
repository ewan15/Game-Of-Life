//
// Created by Ewan on 22/05/2021.
//

#ifndef HELLO_GAMEOFLIFE_H
#define HELLO_GAMEOFLIFE_H

#include <array>

#define SIZE_OF_WORLD 500

namespace {
    int world_1[SIZE_OF_WORLD][SIZE_OF_WORLD][SIZE_OF_WORLD] = {0};
    int world_2[SIZE_OF_WORLD][SIZE_OF_WORLD][SIZE_OF_WORLD] = {0};
}

class GameOfLife {
public:
    void Step();
private:
    bool world_state;
};


#endif //HELLO_GAMEOFLIFE_H
