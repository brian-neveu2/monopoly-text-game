#pragma once
#include"Space.h"
#include"Player.h"
#include<string>
#include"Game.h"

class SpaceHandler
{
public:
	static void handle(Game& game, Player& player, Space* space, std::vector<Player>& curPlayers);
	//handles player landing on spaces. more explanation in the cpp
private:
};
