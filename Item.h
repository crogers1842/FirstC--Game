#include <iostream>
using namespace std;
class Item
{


  private:
	int _uses;
	string _name;


  public:
	Item()
	{
		_name = "";
	}



	Item(string name, int uses)
	{
		_name = name;
		_uses = uses;
	}



	string getName()
	{
		return _name;
	}
	

	int getUses()
	{
		return _uses;
	}


	bool use()
	{
		_uses--;
		return didBreak();
	}
	
	bool didBreak()
	{
		if(_uses==0)
		{
			cout<<endl<<_name<< "Broke"<<endl;
			return true;
		}
		else
		{
			cout<<endl<<_name<<" has   "<<_uses<<" left before breaking "<<endl;
			return false;	
		}	
	}	
	
	void toString()
	{
		cout<<endl<< "Item: "<<_name<<endl;
		cout<<"Uses: "<< _uses<<endl;
	}
};

