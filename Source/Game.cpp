#include "Base.h"
 
class Game
{

private:
    
public:
    Game(/* args */);
    ~Game();
};

Game::Game(/* args */)
{
    cout << "Game saying hello" << endl;
}

Game::~Game()
{
    cout << "Game Ended!" << endl;
}
