#include <iostream>

struct A {
	int m(int a, int b) { return a+b; }

};

struct B {
	B(int x) : x(x) {}
	int x;
	int h(int e) { return x+e; }
};

struct C {
	virtual int u(int x, int y) { return x+y; }
};


int main() {
	A *a = new A;
	a = nullptr;
	std::cout << a->m(3, 4) << '\n';
	B *b = new B(1);
	b = nullptr;
	//std::cout << b->h(6) << '\n';
	C *c = new C;
	c = nullptr;
	//std::cout << c->u(9, 5) << '\n';

	int *u = new int(10);
	delete u;
	*u = 123;
	std::cout << &u << '\n' << *u << '\n';
	return 0;

}
