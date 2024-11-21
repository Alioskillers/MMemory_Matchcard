#ifndef BONUSCARD_H
#define BONUSCARD_H
#include "Card.h"

class BonusCard: public Card {
public:
    BonusCard();
    BonusCard(int cardNumber, bool isFaceUp);
    ~BonusCard();
};
#endif //BONUSCARD_H
