#pragma once
#include <iostream>
#include "cad.h"

/*  here i will apply anything i read
	about in article to further my
	understanding of a given topic.*/


using namespace std;

namespace cad {
	int do_something(int a, int b) {
		return a * b;
	}

}

namespace demonstrate {
	namespace helper {
		void static_variable(int initial, int gap) {
			static int count = initial;

			count += gap;
			cout << count << " ";
		}
	}
	void static_variable() {
		for (int i = 0; i < 5; i++)
			helper::static_variable(2, 1);
	}
}