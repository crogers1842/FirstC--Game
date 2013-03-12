#include <iostream>
using namespace std;
class Inventory
{
	private:
		string _inventory[4];
	public:
		Inventory(string itemOne)
		{
			_inventory[0] = itemOne;	
		}
		
		Inventory(string itemOne,string itemTwo)
		{
			_inventory[0] = itemOne;
			_inventory[1] = itemTwo;
		}

		Inventory(string itemOne,string itemTwo,string itemThree)
		{
			_inventory[0] = itemOne;
			_inventory[1] = itemTwo;
			_inventory[2] = itemThree;
		}

		Inventory(string itemOne,string itemTwo,string itemThree, string itemFour)
		{
			_inventory[0] = itemOne;
			_inventory[1] = itemTwo;
			_inventory[2] = itemThree;
			_inventory[3] = itemFour;
		}
		
		void addItem(string newItem)
		{
			if(_inventory[3].compare("")!=0)
				cout<<"Your Inventory is full"<<endl;
			else
			{
				for(int i  = 0;i<4;i++)
				{
					if(_inventory[i].compare("")==0)
					{
						_inventory[i] = newItem;
						break;
					}
				}
				toString();
			}
		}
		
		void removeItem(int poisition)
		{
			_inventory[position]="";
			removeEmptySpacesFromInventory();
		}

		void removeItem(string item)
		{
			for(int i = 0;i<4;i++)
			{
				if(_inventory[i].compare(item)==0)
				{
					_inventory[i].clear();
					removeEmptySpacesFromInventory();
				}
			}	
		}
		
		void removeEmptySpacesFromInventory()
		{
			for(int i =0; i<4;i++)
			{
				if(_inventory[i].compare("") ==0&&i!=3)
				{
					int j = i;
					while(j<=2&&_inventory[j+1].compare("")!=0)
					{
						_inventory[j]=_inventory[++j];
						_inventory[j]="";
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
				if(&_inventory[i]!=NULL)
					cout<<_inventory[i]<<endl;
			}
			cout<<endl;
		}
};

