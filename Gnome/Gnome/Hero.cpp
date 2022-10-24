#include "Hero.h"

Hero::Hero() {

	this->Health = 0;
	this->Damage = 0;
	this->Name = "Name";
	this->Price = 0;

}

Hero::Hero(int Health, int Damage, string Name, int Price)
{
	this->Health = Health;
	this->Damage = Damage;
	this->Name = Name;
	this->Price = Price;
}

Hero::Hero(int heroId)
{
	switch (heroId)
	{
		// �� ���� 300
		// ����� ���� 25
		// ���� ���� 200

	case 1:
		this->Damage = 7;
		this->Health = 300;
		this->Name = "�������";
		this->Price = 10;
		break;

	case 2:
		this->Damage = 25;
		this->Health = 110;
		this->Name = "�����";
		this->Price = 200;
		break;

	case 3:
		this->Damage = 12;
		this->Health = 200;
		this->Name = "�����";
		this->Price = 150;
		break;

	case 4:
		this->Damage = 16;
		this->Health = 180;
		this->Name = "�����";
		this->Price = 100;
		break;

	case 5:
		this->Damage = 19;
		this->Health = 150;
		this->Name = "���";
		this->Price = 10;
		break;

	case 6:
		this->Damage = 21;
		this->Health = 135;
		this->Name = "������";
		this->Price = 50;
		break;

	default:
		this->Damage = 0;
		this->Health = 0;
		this->Name = "Test";
		this->Price = 0;
		break;
	}
}

Hero::~Hero() {}

int Hero::getHealth() { return Health; }


void Hero::setHealth(int Health) { this->Health = Health; }

int Hero::getDamage() { return Damage; }

void Hero::setDamage(int Damage) { this->Damage = Damage; }

string Hero::getName() { return Name; }

void Hero::setName(string Name) { this->Name = Name; }

int Hero::getPrice() { return Price; }

void Hero::setPrice(int Price) { this->Price = Price; }

//void Hero::setupHero(int choice) {}


Hero Hero::getHeroById(int heroId) { return Hero(heroId); }

void Hero::printHero()
{
	printSeparator();

	string str1;
	string str2 = " |";

	cout.fill(' ');
	SetConsoleTextAttribute(hConsole, lightGreenTextColor);

	////////////////////////////////
	str1 = "| ���: ";
	cout.width(heroTextWidth);
	cout << str1;

	cout.width(heroTextWidth - str2.length());
	cout << getName();

	cout.width(str2.length());
	cout << str2 << endl;

	////////////////////////////////

	str1 = "| ��������: ";
	cout.width(heroTextWidth);
	cout << str1;

	cout.width(heroTextWidth - str2.length());
	cout << to_string(getHealth());

	cout.width(str2.length());
	cout << str2 << endl;

	////////////////////////////////

	str1 = "| ����: ";
	cout.width(heroTextWidth);
	cout << str1;

	cout.width(heroTextWidth - str2.length());
	cout << to_string(getDamage());

	cout.width(str2.length());
	cout << str2 << endl;

	////////////////////////////////

	str1 = "| ����: ";
	cout.width(heroTextWidth);
	cout << str1;

	cout.width(heroTextWidth - str2.length());
	cout << to_string(getPrice());

	cout.width(str2.length());
	cout << str2 << endl;

	printSeparator();
}
