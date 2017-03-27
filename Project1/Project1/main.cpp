#include <iostream>
#include "Character.h"
#include "Warrior.h"
#include "Archer.h"
#include "Berserker.h"

using namespace std;

void DisplayCharacterInfo(Character);
void Attack(Character);

int main()
{
	Character bob = Character("bob", 100);
	cout << bob.getName() << " has " << bob.getHealth() << " life." << endl;
	system("pause");

	Warrior mike = Warrior("mike", 150, "longsword");
	DisplayCharacterInfo(mike);
	system("pause");

	Archer legolas = Archer("legolas", 100, "cool elven bow");
	DisplayCharacterInfo(legolas);
	system("pause");

	Berserker angryMike = Berserker("angrymike", 200, "not a sword but an axe instead");

	system("cls");
	Attack(bob);
	Attack(mike);
	Attack(legolas);

	return 0;
}

void Attack(Character theCharacter) 
{
	cout << theCharacter.Attack();
}

void DisplayCharacterInfo(Character theCharacter)
{
	cout << theCharacter.getName() << " has " << theCharacter.getHealth() << " life." << endl;
}