#include<iostream>
class A 
{
private:
public:
	A()
	{
		std::cout<<"A"<<std::endl;
	}
};

class B : public A
{
	private:
	public:
	B()
	{
		std::cout<<"B"<<std::endl;
	}
};

int main()
{
	B b = B::B();
	return 0;
}
