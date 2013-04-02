#ifndef Item_H
#define Item_H
#include "Item.h"
#endif
#include <iostream>
using namespace std;
class Weapon: public Item
{
        private:
                string _itemType;
                string _weaponType;
                int _hit;
                int _dmg;
                int _crit;
                int _range;
        public:
                Weapon(string name, int uses, int hit, int dmg, int crit, string weaponType,int range):Item(name,uses)
                {
                        _itemType = "weapon";
                        _hit = hit;
                        _dmg = dmg;
                        _crit = crit;
                        _weaponType = weaponType;
			_range =range; 
                }

                void toString()
                {
                        cout<<endl<<"Weapon: "<<getName() <<endl;
                        cout<<"Is a "<<_weaponType<<endl;
                        cout<<"Uses left: "<<getUses()<<endl;
                        cout<<"Hit: "<<_hit<<endl;
                        cout<<"Damage: "<< _dmg<<endl;
                        cout<<"Crit: "<< _crit<<endl;
			cout<<"Range:"<<_range;
                        cout<<endl;
                }
                friend class Item;
};
