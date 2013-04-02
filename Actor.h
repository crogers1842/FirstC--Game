#include <iostream>
using namespace std;
class Actor
{
	private:
		int _health;
		int _currentHealth;
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
		Actor()
		{
		}
		Actor(string name,string profession,string race,int age)
		{
			_name = name;
			_profession = profession;
			_race = race;
			_health = 100;
			_currentHealth = _health;
			_age = age;
			_level = 1;	
		}
		
		Actor(string name, string profession, string race, int age, int health, int strength, int defence, int magic, int ressistance, int pace, int level )
		{
			_name = name;
			_profession = profession;
			_race = race;
			_health = 100;
			_currentHealth = _health;
			_age = age;
			_level = level;	
			_health = health;
			_strength = strength;
			_defence = defence;
			_magic = magic;
			_ressistance = ressistance;
			_pace = pace;
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
			
		int getCurrentHealth()
		{
			return _currentHealth;
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

//--------------Setters----------------------
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
			_currentHealth = newHealth;
		}
		
		void setMaxHealth(int newValue)
		{
			_health = newValue;
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
			cout<<"Max Health: "<<_health<<endl;
			cout<<"Current Health: "<< _currentHealth<<endl;
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
