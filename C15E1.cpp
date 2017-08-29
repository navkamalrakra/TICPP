// C15E1.cpp : Defines the entry point for the console application.
//

#include <iostream>

class shape {
public:
	virtual void draw()
	{
		std::cout << "shape::draw()\n";
	}

};

class circle :public shape
{
	void draw()
	{
		std::cout << "circle::draw()\n";
	}

};

class square :public shape
{
	void draw()
	{
		std::cout << "square::draw()\n";
	}

};

class triangle :public shape
{
	void draw()
	{
		std::cout << "trianlge::draw()\n";
	}

};


int main()
{
	shape *p[] = {new shape,new circle,new square, new triangle};
	p[0]->draw();
	p[1]->draw();
	p[2]->draw();
	p[3]->draw();
    return 0;
}

