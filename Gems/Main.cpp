#include <iostream>
#include <SFML/Graphics.hpp>
#include "Game.hpp"

const int WINDOW_WIDTH = 1200;
const int WINDOW_HEIGHT = 800;

int main()
{
    srand(time(NULL));
    Game game(WINDOW_WIDTH, WINDOW_HEIGHT);
    Board board = game.CreateBoard();

    game.Run(board);
    return 0;
}