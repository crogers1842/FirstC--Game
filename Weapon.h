#include "Item.h"
#include <iostream>
using namespace std;
class Weapon: public Item
{
	private:
		int _hit;
		int _dmg;
		int _crit;
	public:
		Weapon(string name, int uses, int hit, int dmg, int crit):Item(name,uses)
		{
			_hit = hit;
			_dmg = dmg;
			_crit = crit;
		}
		
		void toString()
		{
			cout<<endl<<"Weapon: "<< _name<<endl;
			cout<<"Uses left: "<<_uses<<endl; 
			cout<<"Hit: "<<_hit<<endl;
			cout<<"Damage: "<< _damage<<endl;
			cout<<"Crit: "<< _crit<<endl;
			cout<<endl;
		}
};

