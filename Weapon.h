#include "Item.h"
#include <iostream>
using namespace std;
class Weapon: public Item
{
	private:
		string _itemType
		string _weaponType;
		int _hit;
		int _dmg;
		int _crit;
		int range;
	public:
		Weapon(string name, int uses, int hit, int dmg, int crit, string weaponType):Item(name,uses)
		{
			_itemType = "weapon";
			_hit = hit;
			_dmg = dmg;
			_crit = crit;
			_weaponType = weaponType;
		}
		
		void toString()
		{
			cout<<endl<<"Weapon: "<< _name<<endl;
			cout<<"Is a "<<_weaponType;
			cout<<"Uses left: "<<_uses<<endl; 
			cout<<"Hit: "<<_hit<<endl;
			cout<<"Damage: "<< _damage<<endl;
			cout<<"Crit: "<< _crit<<endl;
			cout<<endl;
		}
};

