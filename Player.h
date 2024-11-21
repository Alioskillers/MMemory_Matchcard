#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include <string>
using namespace std;

class Player {
private:
    string name;
    int score;

public:
    Player();
    Player(string name);
    ~Player();
    void displayScore();
    string getName();
    void setName(string &name);
    int getScore();
    void setScore(int score);
};

#endif //PLAYER_H
