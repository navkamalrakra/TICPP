// C15E1.cpp : Defines the entry point for the console application.
//

#include <iostream>

class shape {
public:
	virtual void draw() {
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

void foobar(shape& obj)
{
	obj.draw();
}

//void foobar(shape obj)
//{
//	obj.draw();
//}


int main()
{
	circle obj;
	foobar(obj);
	return 0;
}

