#include "Item.h"
#include "Weapon.h"
#include "OneTimeUseItem.h"
#include "Potion.h"
class ItemContainer
{
	private:
		string _itemType;
		Weapon _weapon;
		OneTimeUseItem oneTimeUse;
		Potion potion;
	public:
		ItemContainer()
		{
			_itemType = "";
		}
		ItemContainer(Weapon weapon)
		{
			_itemType = "weapon";
			_weapon = weapon;			
		}

		ItemContainer(OneTimeUseItem oneTimeUseItem)
		{
			_itemType = "one time use item";
			_oneTimeUseItem  = oneTimeUseItem;
		}

		ItemContainer(Potion poition)
		{
			_itemType = "potion";
			_potion = potion;
		}
		
		string getItemType()
		{
			
			return _itemType;
		}
};
