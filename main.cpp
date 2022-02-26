#include <iostream>

void hello() { std::cout << "hello there\n"; }

struct A {
	int m(int a, int b) { return a+b; }

};

struct B {
	B(int x) : x(x) {}
	int x;
	int h(int e) { return x+e; }
};

int main() {
	A *a = new A;
	a = nullptr;
	std::cout << a->m(3, 4) << '\n';
	hello();
	hello();
	return 0;

}
