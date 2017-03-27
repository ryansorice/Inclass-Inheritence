#include <iostream>
#include "Character.h"
#include "Warrior.h"
#include "Archer.h"

using namespace std;

void DisplayCharacterInfo(Character);

int main()
{
	Character bob = Character("bob", 100);
	cout << bob.getName() << " has " << bob.getHealth() << " life." << endl;
	system("pause");

	Warrior mike = Warrior("mike", 150, "longsword");
	DisplayCharacterInfo(mike);
	system("pause");

	auto legolas = Archer("legolas", 100, "cool elven bow");
	DisplayCharacterInfo(legolas);
	system("pause");

	return 0;
}

void DisplayCharacterInfo(Character theCharacter)
{
	cout << theCharacter.getName() << " has " << theCharacter.getHealth() << " life." << endl;
}