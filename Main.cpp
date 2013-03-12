#include<iostream>
#include "Actor.h"
int main()
{
	//Actor(name,profession,race,age)
	using namespace std;
	Actor chris  = Actor::Actor("Chris Rogers","Thief","Human",23);
	Actor diane = Actor::Actor("Diane Mickelson","Thief","Human",22);
	diane.attack(chris);
	chris.printCharacterStats();
	return 0;
}
