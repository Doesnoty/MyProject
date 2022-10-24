#pragma once

#include "Hero.h"
#include "Player.h"
#include "Constants.h"

using namespace std;
using namespace constants;

class Game
{
private:
	Player player;
	Player enemy;

	void initPlayer();
	void initPlayerHero();
	void initEnemy();


public:
	Game();
	~Game();

	Player getPlayer();
	void setPlayer(Player player);

	Player getEnemy();
	void setEnemy(Player enemy);


	void printBattle();
	void battle();
	void attack();
	void printTwoHero(Hero hero1, Hero hero2);
	void startGame();
	void shop();
	void settings();
	void exit();
	void menu();

	void initGame();

	void printGameLogo();
	void printGameBattle();
	void printGameShop();
	void printGameSettings();

	void printGameWin();
	void printGameLose();
};
