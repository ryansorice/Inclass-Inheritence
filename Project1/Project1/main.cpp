#include <iostream>
#include "Character.h"

using namespace std;

int main()
{
	Character bob = Character("bob", 100);
	cout << bob.getName() << " has " << bob.getHealth() << " life." << endl;
	system("pause");
	return 0;
}