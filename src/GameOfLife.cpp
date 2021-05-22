//
// Created by Ewan on 22/05/2021.
//

#include "GameOfLife.h"


void GameOfLife::Step() {
    auto& world = world_state ? world_1 : world_2;

    for (int i = 1; i < SIZE_OF_WORLD-1; i++){
        for (int j = 1; j < SIZE_OF_WORLD-1; j++){
            for (int k = 1; k < SIZE_OF_WORLD-1; k++){
                int counter = -1;

                for (int h = -1; h < 2; h++){
                    for (int l = -1; l < 2; l++){
                        for (int m = -1; m < 2; m++){
                            counter += world[i+h][j+l][k+m];
                        }
                    }
                }
            }
        }
    }

    world_state = !world_state;
}
