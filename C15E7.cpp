// C15E6.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <vector>

class rodent
{
public:
	virtual void foo()
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
	std::vector<rodent*> rv;
	rodent *r = new rodent;
	mouse *m = new mouse;
	gerbil *g = new gerbil;
	hamster *h = new hamster;
	rv.push_back(r);
	rv.push_back(m);
	rv.push_back(g);
	rv.push_back(h);
	for (std::vector<rodent*>::iterator it = rv.begin(); it != rv.end(); it++)
	{
		(*it)->foo();
	}
	delete r,m,g,h;
	r = nullptr;
	m = nullptr;
	g = nullptr;
	h = nullptr;
	return 0;
}

