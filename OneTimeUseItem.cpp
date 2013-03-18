#include "Item.h"
#include <iostream>
using namespace std;
class OneTimeUseItem:Item
{
	private:
		int _effect;
		string attribute;

	public:
		OneTimeUseItem(string name, string attribute, int effect)::Item(name,1)
		{
			_effect = effect;	
		}
		
		void use()
		{
		
		}
}
