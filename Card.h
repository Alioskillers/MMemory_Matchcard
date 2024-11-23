#ifndef CARD_H
#define CARD_H
#include<iostream>
using namespace std;

class Card {
private:
    int cardNumber;
    bool isFaceUp;

public:
    Card();
    Card(int cardNumber, bool isFaceUp);
    virtual ~Card();
    virtual void display();
    void setCardNumber(int cardNumber);
    int getCardNumber();
    void setIsFaceUp(bool isFaceUp);
    bool getIsFaceUp();

};
#endif //CARD_H
