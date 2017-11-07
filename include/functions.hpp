#ifndef FUNCTIONS_HPP_
#define FUNCTIONS_HPP_

void printVector(std::vector<auto> v){
	for(auto i = v.begin(); i != v.end(); ++i){
		std::cout << *i << " ";
	}
	std::cout << "\n";
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


#endif