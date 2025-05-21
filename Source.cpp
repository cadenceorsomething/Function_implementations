#include "cad.h"
#include <iostream>
using namespace std;

class obj {
	int val;
public:
	obj() : val(0) {
		cout << "constuctor called!" << endl;
	}
	~obj() {
		cout << "destuctor called!" << endl;
	}

	void set(int val) {
		this->val = val;
	}
	int get_val() {
		return val;
	}
	void print() {
		std::cout << val << " ";
	}
};

int main() {
	/* FUTURE NOTE FOR MYSELF : 
	cad pls do a function
	that counts how many times 
	a number has been repeated*/


	demonstrate::hash_map::basic_implementation();


	return 0;
}