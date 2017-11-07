#include<iostream>

#include "Simplex.hpp"
#include "Matrix.hpp"

int main(int argc, char **argv){

	std::vector<double> C = {-10, -20, -30};
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
	matrix.set(3,2,0);
	matrix.print();

	Simplex simplex(C,matrix,b);

	return 0;
}