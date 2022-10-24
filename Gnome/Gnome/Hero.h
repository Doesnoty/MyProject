#pragma once

#include <string>
#include <iostream>
#include "Functions.h"
#include "Constants.h"

using namespace std;
using namespace constants;

class Hero
{
private:
	int Health;
	int Damage;
	string Name;
	int Price;

public:

	Hero();
	Hero(int Health, int Damage, string Name, int Price);
	Hero(int heroid);
	~Hero();

	Hero getHeroById(int heroId);
	void printHero();

	int getHealth();
	void setHealth(int Health);

	int getDamage();
	void setDamage(int Damage);

	string getName();
	void setName(string Name);

	int getPrice();
	void setPrice(int Price);

};