#ifndef MATRIX_HPP_
#define MATRIX_HPP_

#include<vector>
#include<iostream>

class Matrix{

private:
	unsigned int rows, cols;
	std::vector<std::vector<double>> matrix;

public:
	Matrix();
	Matrix(unsigned int nRows, unsigned int nCols);
	~Matrix();
	void set(unsigned int r, unsigned int c, double element);
	double get(unsigned int r, unsigned int c);
	std::vector<double> getLine(unsigned int index);
	void print();
	void resize(unsigned int r, unsigned int c);
	unsigned int numRows();
	unsigned int numCols();
};

#endif