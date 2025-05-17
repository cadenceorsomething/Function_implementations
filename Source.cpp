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


int main() {
	

	return 0;
}