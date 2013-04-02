#include<iostream>
#ifndef Inventory_H
#define Inventory_H
#include "Inventorry.h"
#endif
#ifndef Character_H
#define Character_h
#include "Character.h"
#endif
int main()
{
	Weapon sword  = Weapon("Steel Sword", 35,100,10,0,"sword",1);
	Item * sPtr = &sword;
	Inventory inv = Inventory(sPtr);
	Inventory * invPtr = &inv;
	Character chris  = Character("Chris", "Thief", "Human", 23,invPtr);
	chris.getInventory()->addItem(sword);
	chris.printStats();
}

