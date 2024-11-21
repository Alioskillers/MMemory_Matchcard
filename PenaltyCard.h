#ifndef PENALTYCARD_H
#define PENALTYCARD_H
#include "Card.h"

class PenaltyCard: public Card {
public:
    PenaltyCard();
    PenaltyCard(int cardNumber, bool isFaceUp);
    ~PenaltyCard();
};

#endif //PENALTYCARD_H
