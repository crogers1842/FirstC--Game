#include "Item.h"
#include <iostream>
using namespace std;
Weapon
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
}
