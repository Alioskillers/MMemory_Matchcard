cmake_minimum_required(VERSION 3.29)
project(MMemory_Matchcard)

set(CMAKE_CXX_STANDARD 20)

add_executable(MMemory_Matchcard main.cpp
        Card.h
        StandardCard.h
        BonusCard.h
        PenaltyCard.h
        Deck.h
        Player.h
        Game.h)
