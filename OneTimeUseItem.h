#ifndef Itemdef
#define Itemdef
#include "Item.h"
#endif
#ifndef Chardef
#define Chardef
#include "Character.h"
#endif
#include <iostream>
using namespace std;
class OneTimeUseItem: public Item
{
	private:
		int effect;
		string attribute;
		Character *holder;

	public:
		OneTimeUseItem(string name, string attribute, int effect, Character *holder):Item(name,1)
		{
			this->attribute = attribute;
			this->effect = effect;	
			this->holder = holder;
		}
		
		void use()
		{
			if(attribute.compare("strength")==0)
			{
				holder->setStrength(holder->getStrength()+effect);	
			}

			else if(attribute.compare("health")==0)
			{
				holder->setMagic(holder->getMagic()+effect);
			}

			else if(attribute.compare("magic")==0)
			{
				holder->setMagic(holder->getMagic()+effect);
			}

			else if(attribute.compare("defence")==0)
			{
				holder->setDefence(holder->getDefence()+effect);
			}
			else if(attribute.compare("ressistance")==0)
			{
				 holder->setRessistance(holder->getRessistance()+effect);
			}

			else if(attribute.compare("pace")==0)
			{
				holder->setPace(holder->getPace()+effect);
			}
		}
};
