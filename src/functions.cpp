#include "functions.hpp"

void initialize_vars(std::vector<std::string>& v, unsigned int size){
	for(unsigned int i = 0; i < size; ++i){
		v.push_back("x"+std::to_string(i));
	}
}
