#include <iostream>

void hello() { std::cout << "hello there\n"; }

struct A {
	int m(int a, int b) { return a+b; }

};

int main() {
	A *a = new A;
	a = nullptr;
	std::cout << a->m(3, 4) << '\n';
	hello();
	hello();
	return 0;

}
