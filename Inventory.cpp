#include <iostream>
#include "Item.h"
#include "Weapon.h"
using namespace std;
class Inventory
{
	private:
		Item _inventory[4]; 

	public:
		Inventory(Item *itemOne)
		{
			_inventory[0] = *itemOne;	
		}
		
		Inventory(Item *itemOne,Item *itemTwo)
		{
			_inventory[0] = *itemOne;
			_inventory[1] = *itemTwo;
		}

		Inventory(Item *itemOne,Item *itemTwo,Item *itemThree)
		{
			_inventory[0] = *itemOne;
			_inventory[1] = *itemTwo;
			_inventory[2] = *itemThree;
		}

		Inventory(Item *itemOne,Item *itemTwo,Item *itemThree, Item *itemFour)
		{
			_inventory[0] = *itemOne;
			_inventory[1] = *itemTwo;
			_inventory[2] = *itemThree;
			_inventory[3] = *itemFour;
		}
		
		void addItem(Item newItem)
		{
			if(_inventory[3].getName()!="")
				cout<<"Your Inventory is full"<<endl;
			else
			{
				for(int i  = 0;i<4;i++)
				{
					if(_inventory[i].getName()=="")
					{
						_inventory[i] = newItem;
						break;
					}
				}
				this->toString();
			}
		}
		
		void removeItem(int position)
		{
			_inventory[position]=Item::Item();
			removeEmptySpacesFromInventory();
		}

		void removeItem(Item item)
		{
			for(int i = 0;i<4;i++)
			{
				if(_inventory[i].getName()=="")
				{
					_inventory[i] = Item::Item();
					removeEmptySpacesFromInventory();
				}
			}	
		}
		
		void removeEmptySpacesFromInventory()
		{
			for(int i =0; i<4;i++)
			{
				if(_inventory[i].getName()==""&&i!=3)
				{
					int j = i;
					while(j<=2&&_inventory[j+1].getName()=="")
					{
						_inventory[j]=_inventory[++j];
						_inventory[j]=Item::Item();
					}
					break;
				}		
			}
		}

		void toString()
		{
			cout<<endl<<"Your Inventory is \n";
			for(int i = 0;i<4;i++)
			{
				if(_inventory[i].getName()!="")
					_inventory[i].toString();
			}
			cout<<endl;
		}
};
int main()
{
	Item * pSword;
	Item * pAxe;
	Item steelSword = Item::Item("Steel Sword", 35);
	Weapon ironAxe = Weapon::Weapon("Iron Axe", 35,75,10,5,"Axe",1);
	*pSword =steelSword;
	*pAxe = ironAxe; 
	Inventory inventory = Inventory::Inventory(pSword,pAxe);
	inventory.toString();
}
