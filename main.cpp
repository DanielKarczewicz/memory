#include <iostream>

struct A {
	int m(int a, int b) { return a+b; }

};

int main() {
	A *a = new A;
	a = nullptr;
	std::cout << a->m(3, 4) << '\n';
	std::cout << "hello there\n";
	std::cout << "hello there\n";
	return 0;

}
