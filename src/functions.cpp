#include "functions.hpp"

void initialize_vars(std::vector<std::string>& v, unsigned int size){
	for(unsigned int i = 0; i < size; ++i){
		v.push_back("x"+std::to_string(i));
	}
}

void printVector(std::vector<auto> v){
	for(auto i = v.begin(); i != v.end(); ++i){
		std::cout << *i << " ";
	}
	std::cout << "\n";
}

void saveVector(std::vector<auto> v, std::ofstream& out){
	
	if(out.is_open()){
		for(auto i = v.begin(); i != v.end(); ++i){
			out << *i << " ";
		}
		out << "\n";
	}
	//out.close();
}

void findMinElementOfVector(std::vector<auto> v, auto& element, unsigned int& index){
	
	element = v[0];
	index = 0;

	for(unsigned int i = 1; i < v.size()-1; ++i){
		if(v[i] < element){
			element = v[i];
			index = i;
		}
	}
}

void findMinElementPositiveOfVector(std::vector<auto> v, auto& element, unsigned int& index){
	
	for(unsigned int i = 0; i < v.size(); ++i){
		if(v[i] > 0){
			element = v[i];
			index = i;
			break;
		}
	}

	for(unsigned int i = index+1; i < v.size();++i){
		if(v[i] < element && v[i] > 0){
			element = v[i];
			index = i;
		}	
	}
}

bool findElementInVector(std::vector<auto> v, auto e, unsigned int& index){
	for(unsigned int i = 0; i < v.size(); ++i){
		if(v[i] == e){
			index = i;
			return true;
		}
	}
	return false;
}