#pragma once
#include "cad.h"
#include <iostream>
#include <unordered_map>
#include <string>

/*  here i will apply anything i read
	about in article to further my
	understanding of a given topic.*/


using namespace std;

/* i just learnt how to make header files now i am an implementation */
namespace cad {
	int do_something(int a, int b) {
		return a * b;
	}

}

/* here i will do demontration stuff */
namespace demonstrate {

	// STATIC IMPLEMENTATION
	class static_class {
	public:
		static int i;

		static_class() {
			//do nothing
		}
	};
	int static_class::i = 1;
	static int global_static_variable = 0;
	
	namespace helper {
		void static_variable(int initial, int gap) {
			// it initializes only once
			static int count = initial;
			count += gap;
			cout << count << " ";
		}
	}

	void static_variable			() {
		/* here i will call the function 5 times, its outside the stack,
		   this is why it does not recet upon newer calls */

		for (int i = 0; i < 5; i++)
			helper::static_variable(2, 1);
	}
	void static_variable_in_class   () {
		static_class c1;
		static_class c2;

		c1.i = 1;
		c2.i = 2;


		cout << c1.i << ", " << c2.i << ", " << static_class::i << endl;
	}
	void static_increment			() {
		global_static_variable++;
		cout << global_static_variable << " ";
	}

	void reference() {
		// a variable
		int var = 3;
		cout << "int var = 3;"<< endl;

		cout << "var = " << var << "\n" << endl;

		int& ref = var;
		cout << "int& ref = var;" << endl;

		ref = 2;
		cout << "ref = 2;\n" << endl;

		cout << "var = " << var << endl;

	}

	namespace hash_map {
		void basic_implementation() {
			unordered_map <int, string> um = { {1,"hello"}, {2,"gang"} };

			for (auto i : um) {
				cout << i.first << ": " << i.second << endl;
			}
		}
	}

}

namespace observations {
	// i didnt know this existed damn...
	wchar_t wide_char;


}