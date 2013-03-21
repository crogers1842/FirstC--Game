#ifndef Itemdef
#define Itemdef
#include "Item.h"
#include "Weapon.h"
#endif
class Inventory
{
	private: 
		Item * inventory[4];
		int numItems;
	public:
		Inventory()
		{
			numItems = 0;
		}
		void add(Weapon w)
		{
			Item * itemPtr = &w;
			inventory[numItems] = itemPtr;
			numItems++;
		}
		
		void add(Item item)
		{
			Item * itemPtr = &item;
			inventory[numItems] = itemPtr;
			numItems++;
		}
		void toString()
		{
			cout<<endl<<"Inventory:"<<endl;
			for(int i =0; i<numItems;i++)
			{
				cout<<numItems;
				inventory[i]->toString();
				cout<<endl;
			}
		}
};


int main()
{

	Inventory inv = Inventory();
	Weapon weap = Weapon("Steel Sword", 35, 100,2,10,"Sword");
	weap.toString();
	inv.add(weap);
	inv.toString();	
	return 0;
}
