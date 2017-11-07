#include "Simplex.hpp"

Simplex::Simplex(std::vector<double> C, Matrix A, std::vector<double> b){

	std::vector<std::string> vars,aux_vars;

	for(unsigned int i = 0; i < A.numCols(); ++i){
		vars.push_back("x"+std::to_string(i));
	}

	aux_vars.push_back("z");
	for(unsigned int i = 0; i < A.numRows();++i){
		vars.push_back("f"+std::to_string(i));
		aux_vars.push_back("f"+std::to_string(i));
		C.push_back(0);
	}

	printVector(vars);
	printVector(aux_vars);

	tablau.resize(A.numRows()+1,A.numCols()+A.numRows()+1);

	for(unsigned int i = 0; i < tablau.numCols(); ++i){
		if(i < C.size()){
			tablau.set(0,i,C[i]);
		} else {
			tablau.set(0,i,0);
		}
	}

	for(unsigned int i = 1; i < tablau.numRows(); ++i){
		for(unsigned int j = 0; j < tablau.numCols()-1; ++j){
			if(j < A.numCols()){
				tablau.set(i,j,A.get(i-1,j));
			} else if(j == i + A.numCols()) {
				tablau.set(i,j,1);
			}
		}
	}

	for(unsigned int i = 0; i < b.size(); ++i){
		tablau.set(i+1,tablau.numCols()-1,b[i]);
	}

	tablau.print();

	bool ready = false;
	while(!ready){
		double minElement;
		unsigned int pivotC, pivotL;
		findMinElementOfVector(tablau.getLine(0), minElement, pivotC);
		std::cout << "Min Element: " << minElement << "\n";
		if(minElement >= 0){
			std::cout << "There is no negative element!!!\n";
			ready = true;
		} else {
			std::vector<double> elements;
			unsigned int aux_index = tablau.numCols()-1;
			for(unsigned int i = 1; i < tablau.numRows();++i){
				if(tablau.get(i,aux_index) > 0 && tablau.get(i,pivotC) > 0){
					std::cout << tablau.get(i,aux_index) << "/" << tablau.get(i,pivotC) << "\n";
					elements.push_back(tablau.get(i,aux_index)/tablau.get(i,pivotC));
				} else {
					elements.push_back(-1);
				}
			}
			findMinElementPositiveOfVector(elements, minElement, pivotL);
			pivotL += 1;
			double pivot = tablau.get(pivotL,pivotC);
			std::cout << "Pivot: " << pivot << "\n";
			aux_vars[pivotC] = vars[pivotC];
			printVector(aux_vars);

			for(unsigned int i = 0; i < tablau.numCols(); ++i){
				tablau.set(pivotL,i,tablau.get(pivotL,i)/pivot);
			}
			tablau.print();

			for(unsigned int i = 0; i < tablau.numRows(); ++i){
				if(i != pivotL){
					double coeficient = tablau.get(i, pivotC);
					std::cout << coeficient << "\n";
					for(unsigned int j = 0; j < tablau.numCols(); ++j){
						tablau.set(i,j,(-1)*coeficient*tablau.get(pivotL,j)+tablau.get(i,j));
					}
				}
			}
			tablau.print();

			ready = true;
		}
	}

}

Simplex::~Simplex(){

}

void Simplex::print(){
	std::cout << "Hello World\n";
}