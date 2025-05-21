#include "cad.h"
#include <iostream>
#include <vector>
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

	return 0;
}