// C15E6.cpp : Defines the entry point for the console application.
//

#include <iostream>

class rodent
{
public:
	/*virtual*/ void foo()
	{
		std::cout << "rodent::foo()\n";
	}
};

class mouse : public rodent
{
public:
	void foo()
	{
		std::cout << "mouse::foo()\n";
	}
};

class gerbil : public rodent
{
public:
	void foo()
	{
		std::cout << "gerbil::foo()\n";
	}
};

class hamster : public rodent
{
public:
	void foo()
	{
		std::cout << "hamster::foo()\n";
	}
};


int main()
{
	rodent *p[] = {new rodent,new mouse, new gerbil, new hamster};
	p[0]->foo();
	p[1]->foo();
	p[2]->foo();
	p[3]->foo();
    return 0;
}

