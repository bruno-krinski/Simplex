#ifndef SIMPLEX_HPP_
#define SIMPLEX_HPP_

#include<string>
#include<vector>
#include<iostream>
#include<algorithm>

#include <thrust/device_vector.h>
#include <thrust/reduce.h>
#include <thrust/sequence.h>

#include "Matrix.hpp"
#include "functions.hpp"

class Simplex{
	Matrix tablau;

private:
	//Matrix tablau;

public:
	Simplex(std::vector<double> C, Matrix A, std::vector<double> b, bool parallel=false);
	~Simplex();
	void print();
};

#endif
