#include "functions.hpp"

void initialize_vars(std::vector<std::string>& v, unsigned int size){
        //std::ostringstream ss;
	for(unsigned int i = 0; i < size; ++i){
		std::ostringstream ss;
		ss << i;
		v.push_back("x"+ss.str());
	}
}

void printStringVector(const std::vector<std::string>& v){
	//std::cout << v.size() << std::endl;
	for(unsigned int i = 0; i < v.size(); ++i){
		std::cout << v[i] << ' ';
	}
	std::cout << "\n";
}
