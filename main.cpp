#include<iostream>
#include <string>
#include "Game.h"
#include "Card.h"
#include "Deck.h"
#include "Player.h"
#include "StandardCard.h"
#include "BonusCard.h"
#include "PenaltyCard.h"
using namespace std;

Card::Card() {
    cardNumber = 0;
    isFaceUp = false;
}

Card::Card(int cardNumber, bool isFaceUp) {
    this->cardNumber=cardNumber;
    this->isFaceUp=isFaceUp;
}

Card::~Card() {}

void Card::display(){
    if(isFaceUp==false) {
        cout<<cardNumber;
    }
    else {
        cout<<"*";
    }
}

void Card::setCardNumber(int cardNumber) {
    this->cardNumber=cardNumber;
}

int Card::getCardNumber(){
    return cardNumber;
}

void Card::setIsFaceUp(bool isFaceUp) {
    this->isFaceUp=isFaceUp;
}

bool Card::getIsFaceUp(){
    return isFaceUp;
}


StandardCard::StandardCard(): Card() {}
StandardCard::StandardCard(int cardNumber, bool isFaceUp): Card(cardNumber, isFaceUp) {}
StandardCard::~StandardCard() {}


BonusCard::BonusCard(): Card() {}
BonusCard::BonusCard(int cardNumber, bool isFaceUp): Card(cardNumber, isFaceUp) {}
BonusCard::~BonusCard() {}


PenaltyCard::PenaltyCard(): Card() {}
PenaltyCard::PenaltyCard(int cardNumber, bool isFaceUp): Card(cardNumber, isFaceUp) {}
PenaltyCard::~PenaltyCard() {}


Deck::Deck() {
   this->cards=nullptr;
    this->numOfCards=0;
}
Deck::~Deck() {
    for(int i=0;i<numOfCards;i++) {
        delete cards[i];
    }
    delete[] cards;
}
//check
void Deck::shuffle() {
    srand(time(0));
    for(int i=0;i<numOfCards;i++) {
        int j=rand()%(i+1);
        swap(cards[i],cards[j]);
    }
}

void Deck::displayGrid() {
    int count=0;
    for(int i=0;i<numOfCards;i++) {
        cards[i]->display();
        cout<<" ";
        if(++count %4==0) {
            cout<<endl;
        }
    }
}

Card** Deck::getCards() {
    return cards;
}

void Deck::setCards(Card** newCards, int newCardNumber) {
    for(int i=0; i<numOfCards;i++) {
        delete cards[i];
    }
    delete [] cards;
    cards=newCards;
    numOfCards=newCardNumber;
}

Player::Player() {}

Player::Player(string name){
    this->name=name;
    this->score=0;
}

Player::~Player() {}

void Player::displayScore() {
    cout<<"Player"<<name<<"score is: "<<score<<endl;
}

string Player::getName() {
    return name;
}

void Player::setName( string &name) {
    this->name=name;
}

int Player::getScore()  {
    return score;
}

void Player::setScore(int score) {
    this->score=score;
}

Game::Game(string p1Name, string p2Name) {}
Game::~Game() {}


void Game::initializeGame() {
    int totalCards=16;
    Card** tempDeck= new Card *[totalCards];
    int index=0;
    for(int i=1;i<=6;i++) {
        tempDeck[index++]=(new StandardCard(i,false));
        tempDeck[index++]=(new StandardCard(i,false));
    }
    tempDeck[index++]=(new BonusCard(7,false));
    tempDeck[index++]=(new BonusCard(7,false));

    tempDeck[index++]=(new PenaltyCard(8,false));
    tempDeck[index++]=(new PenaltyCard(8,false));

    deck.setCards(tempDeck,totalCards);
    deck.shuffle();
    deck.displayGrid();
}

int main() {
    string p1Name,p2Name;
    cout<<"Enter player 1 name: ";
    cin>>p1Name;
    cout<<"Enter player 2 name: ";
    cin>>p2Name;
    Game game(p1Name,p2Name);
    game.initializeGame();
    return 0;
}