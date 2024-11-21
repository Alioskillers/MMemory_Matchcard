#ifndef DECK_H
#define DECK_H
#include "Card.h"
#include <vector>
using namespace std;

class Deck{
private:
    Card** cards;
    int numOfCards;
public:
    Deck();
    ~Deck();
    void shuffle();
    void displayGrid();
    Card** getCards();
    void setCards(Card** newCards, int numOfCards);
};

#endif //DECK_H
