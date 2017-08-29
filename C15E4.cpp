//: C14:Combined.cpp
// Inheritance & composition
#include <iostream>

class A {
	int i;
public:
	A(int ii) : i(ii) {}
	~A() {}
	void f() const {
		std::cout << "A::f()\n";
	}
};

class B {
	int i;
public:
	B(int ii) : i(ii) {}
	~B() {}
	 virtual void f() const {
		std::cout << "B::f()\n";
	}
};

class C : public B {
	A a;
public:
	C(int ii) : B(ii), a(ii) {}
	~C() {} // Calls ~A() and ~B()
	
	void f() const {  // Redefinition
		a.f(); 
		B::f();
	}
};

int main() {
	//C c(47);
	B *cp = new C(47);
	cp->f();
	return 0;
} ///:~