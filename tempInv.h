#ifndef Item_H
#define Item_H
#include "Item.h"
#endif
#ifndef Weapon_H
#define Weapon_H
#include "Weapon.h"
#endif
#include <iostream>
using namespace std;
class Inventory
{
	private:
		Item *inventory[4];
		int numItems;
	public:
		
		Inventory()
		{
			numItems = 0;
		}


		Inventory(Item * item1)
		{
			inventory[0] = item1;
			numItems = 1;
		}	

		Inventory(Item *item1,Item *item2)
		{
			inventory[0] = item1;
			inventory[1] = item2;
			numItems = 2;
		}

		void toString()
		{
			cout<<endl<<"Inventory:"<<endl;
			for(int i =0;i<numItems;i++)
			{
				Item * temp = inventory[i];
				temp->toString();
			}
			cout<<endl;
		}
		Item*  getItem(int position)
		{
			return inventory[position];
		}


 		void removeEmptySpacesFromInventory()
                {
                        for(int i =0; i<4;i++)
                        {
                                if(inventory[i]==0&&i!=3)
                                {
                                        int j = i;
                                        while(j<=2&&inventory[j+1]->getName()=="")
                                        {
                                                inventory[j]=inventory[++j];
                                                inventory[j]=0;
                                        }
                                        break;
                                }               
                        }
                }



		void addItem(Weapon &w)
		{
			w.toString();
			Item * wPtr = &w;
			inventory[numItems++] = wPtr;
		}


		void addItem(Item i )
		{
			Item * iPtr = &i;
			inventory[numItems++] = iPtr;
		}
};

