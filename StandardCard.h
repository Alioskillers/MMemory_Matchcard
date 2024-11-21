#ifndef STANDARDCARD_H
#define STANDARDCARD_H
#include "Card.h"

class StandardCard: public Card {
public:
    StandardCard();
    StandardCard(int cardNumber, bool isFaceUp);
    ~StandardCard();
};
#endif //STANDARDCARD_H