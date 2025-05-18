#include "cad.h"
#include <iostream>

class student {
public:
	static int total;

	student() {
		total++;
	}
};

int student::total = 0;

using std::cout, std::endl;

int main() {

	Box::print();
	Box::scale(2);
	Box::print();


	return 0;
}