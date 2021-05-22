#include "iostream"
#include "vector"
#include "GameOfLife.h"


int main(){
    std::cout << "Welcome to Conway Game Of Life" << std::endl;

    GameOfLife gameOfLife;

    gameOfLife.Step();
}