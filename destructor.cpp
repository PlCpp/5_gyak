#include <iostream>

class A {
	int* p;
	
	public:
		A() {
			p = new int(5);
		}
		
		~A() {
			delete p;
		}
		
		int getP() {
			return *p;
		}
};

int main() {
	A a;
	std::cout << a.getP() << std::endl;

	return 0;
}
