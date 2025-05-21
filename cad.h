#pragma once
#include <iostream>
#include <unordered_map>
#include <string>

/*  here i will apply anything i read 
    about in article to further my 
    understanding of a given topic.*/

using namespace std;

namespace cad {
	int do_something(int a, int b);
}

namespace demonstrate {
    void static_variable();
    void static_variable_in_class();
    void static_increment();

    void reference();

    namespace hash_map {
        void basic_implementation();
    }
}