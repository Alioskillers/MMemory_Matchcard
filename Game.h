#ifndef GAME_H
#define GAME_H
#include "Deck.h"
#include "Player.h"

class Game {
private:
    Deck deck;
    Player p1;
    Player p2;
    public:
    Game(Player p1, Player p2);
    ~Game();
    void initializeGame();

};

#endif //GAME_H
