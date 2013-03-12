#include <iostream>
using namespace std;
class Actor
{
	private:
		int _health;
		string _name;
		string _profession;
		int _age;
		string _race;
		int _strength;
		int _defence;
		int _level;
		int _magic;
		int _ressistance;
		int _pace;
	public:
		Actor(string name,string profession,string race,int age)
		{
			_name = name;
			_profession = profession;
			_race = race;
			_health = 100;
			_age = age;
			_level = 1;	
		}
		
		//------------Getters------------
		int getStrength()
		{	
			return _strength;	
		  }		


		int getDefence()
		{
			 return _defence;
		}	

		int getHealth()
		{
			 return _health;
		}
		
		int getMagic()
		{
			return  _magic;	
		}

		int getRessistance()
		{
			return  _ressistance;	
		}

		int getPace()
		{
			return _pace;	
		}
		
		int getLevel()
		{
			return _level;
		}


//--------------setters----------------------
		void setLevel(int newVal)
		{
			_level = newVal;
		}
		void setStrength(int newVal)
		{
			_strength = newVal;
		}

		void setDefence(int newVal)
		{
			_defence = newVal;
		}

		void setMagic(int newVal)
		{
			_magic = newVal;
		}

		void setRessistance(int newVal)
		{
			_ressistance = newVal;
		}

		void setPace(int newVal)
		{
			_pace = newVal;
		}

		void setHealth(int newHealth)
		{
			_health = newHealth;
		}

		string getName()
		{
			return _name;
		}

		void  printCharacterInfo()
		{
			cout<<_name<<" is a "<<_age<<" year old "<<_race<<" who is a "<<_profession<<" and has "<<_health<<" health"<<endl;

		}	

		void printCharacterStats()
		{
			cout<<_name<<endl;
			cout<<"Current Health: "<< _health<<endl;
			cout<<"Level: "<<_level<<endl;
			cout<<"Strength: "<<_strength<<endl;
			cout<<"Defence: "<<_defence<<endl;
			cout<<"Magic: "<<_magic<<endl;
			cout<<"Ressitance: "<<_ressistance<<endl;
			cout<<"Pace: "<<_pace<<endl<<endl;
		}

		void attack(Actor &a)
		{
			int dmg =  getStrength()- a.getDefence();
		 	if(dmg>0)
 		 	{
				a.setHealth(a.getHealth() - (getStrength()-a.getDefence()));	
				cout<<endl<< getName()<<" attacked "<<a.getName()<< " and did "<<dmg<<" damage"<<endl<<endl;
		 	}
			else cout<<endl<<getName()<<" Did no damage to  "<< a.getName()<<endl;
			a.printCharacterStats();
		}
		
		void fight(Actor a)
		{
			Actor b = *this;
			attack(a);
			a.attack(b);	
		}
};
