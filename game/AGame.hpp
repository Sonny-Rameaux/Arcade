/*
** EPITECH PROJECT, 2024
** B-OOP-400-MAR-4-1-arcade-vincent.montero-fontaine
** File description:
** AGame
*/

#ifndef AGAME_HPP_
#define AGAME_HPP_

#include "IGame.hpp"
#include "../core_/GameState.hpp"

namespace arcade
{
    class AGame;
}

class arcade::AGame : public arcade::IGame
{
public:
    AGame();
    ~AGame();
    virtual void updateGameState(GameState &gs) = 0;
    arcade::libType getLibType();

protected:
private:
};

#endif /* !AGAME_HPP_ */
