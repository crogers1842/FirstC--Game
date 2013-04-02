#include <iostream>
#include "Actor.h"
#ifndef Inventory_H
#define Inventory_H
#include "tempInv.h"
#endif
using namespace std;
class Character: public Actor
{
	private:
	Inventory* inventory;
	public:
	Character(string name, string profession, string race, int age,Inventory * inventory):Actor( name,  profession,  race,  age)
	{
		initializeCharacter(profession);
		setLevel(1);
		this->inventory = inventory;
	} 	
	
	Character(string name, string profession,string race, int age, int health, int strength, int defence, int magic, int ressitance, int pace, int level):Actor(name,profession,race,age,health,
	strength, defence,magic,ressitance,pace,level)
	{
		
	}	

	void initializeCharacter(string profession)
	{
		//health strngth defence level magic ressistance pace
		if(profession.compare("Thief")==0 )	
		{
			setHealth(50);
			setStrength(2);
			setDefence(1);
			setMagic(0);
			setRessistance(0);	
			setPace(6);
		}
		else if(profession.compare("Fighter")==0)
		{
			setHealth(100);
			setStrength(10);
			setDefence(3);
			setMagic(0);
			setRessistance(2);	
			setPace(5);
		}
		else if(profession.compare("Mage")==0)
		{
			setHealth(60);
			setStrength(2);
			setDefence(2);
			setMagic(5);
			setRessistance(4);	
			setPace(5);	
		}
	} 
	
	void printStats()
	{
		printCharacterStats();
		getInventory()->toString();
	}
	
	Inventory*  getInventory()
	{
		return inventory;
	}
};

