#include<ctime>
//#include<chrono>
#include<cstdlib>
#include<fstream>
#include<iostream>

#include "Simplex.hpp"

int main(int argc, char **argv){

	/*std::vector<double> C = {-10, -20, -30};
	std::vector<double> b = {300,200,20,50};

	Matrix matrix(4,3);
	
	matrix.set(0,0,2);
	matrix.set(0,1,2);
	matrix.set(0,2,4);
	matrix.set(1,0,0);
	matrix.set(1,1,4);
	matrix.set(1,2,3);
	matrix.set(2,0,1);
	matrix.set(2,1,0);
	matrix.set(2,2,0);
	matrix.set(3,0,4);
	matrix.set(3,1,3);
	matrix.set(3,2,0);*/
	/*
	std::vector<double> C = {-3, -5};
	std::vector<double> b = {10,20,30};

	Matrix matrix(3,2);
	
	matrix.set(0,0,2);
	matrix.set(0,1,4);
	matrix.set(1,0,6);
	matrix.set(1,1,1);
	matrix.set(2,0,1);
	matrix.set(2,1,-1);
	*/
	
	std::vector<double> C;// = (-2.0, -3.0, -1.0);
	std::vector<double> b;// = (40.0,20.0,30.0);

	C.push_back(-2);
	C.push_back(-3);
	C.push_back(-1);
	b.push_back(40);
	b.push_back(20);
	b.push_back(30);

	Matrix matrix(3,3);
	
	matrix.set(0,0,1);
	matrix.set(0,1,1);
	matrix.set(0,2,1);
	matrix.set(1,0,2);
	matrix.set(1,1,1);
	matrix.set(1,2,-1);
	matrix.set(2,0,3);
	matrix.set(2,1,2);
	matrix.set(2,2,-1);
	Simplex simplex(C,matrix,b);
	
	/*
	std::ofstream out("../problem.txt");
	std::chrono::high_resolution_clock::time_point init, end;

	double r;
	unsigned int numEquations = 10;
	unsigned int numVariables = 5;

	Matrix matrix(numEquations, numVariables);
	std::vector<double> b;
	std::vector<double> C;

	out << numEquations << "\n";
	out << numVariables << "\n";

	std::srand((int)time(0));
	for(unsigned int i = 0; i < numEquations; ++i){

		r = (rand() % 500);
		
		b.push_back(r);

		for(unsigned int j = 0; j < numVariables; ++j){
			r = (rand() % 100) - 50;
			matrix.set(i,j,r);
		}
	}

	for(unsigned int i = 0; i < numVariables; ++i){
		r = (rand() % 100) - 50;
		while(r == 0){
			r = (rand() % 100) - 50;
		}
		C.push_back(r);
	}

	saveVector(C,out);
	saveVector(b,out);

	matrix.print();
	std::cout << "C vector: \n";
	printVector(C);
	std::cout << "b vector: \n";
	printVector(b);

	matrix.save(out);
	init = std::chrono::high_resolution_clock::now(); 
	Simplex simplex(C,matrix,b);
	end = std::chrono::high_resolution_clock::now();

	auto duration = std::chrono::duration_cast<std::chrono::seconds>(end - init).count();
	std::cout << "Executation time: " << (double)duration << " seconds.\n";

	out.close();*/

	return 0;
}
