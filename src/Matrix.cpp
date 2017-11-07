#include "Matrix.hpp"

Matrix::Matrix(){

}

Matrix::Matrix(unsigned int nRows, unsigned int nCols){
	rows = nRows;
	cols = nCols;
	matrix.resize(rows);
	for(unsigned int i = 0; i < rows; ++i){
		matrix[i].resize(cols);
	}
}

Matrix::~Matrix(){

}

void Matrix::set(unsigned int r, unsigned int c, double element){
	matrix[r][c] = element;
}

double Matrix::get(unsigned int r, unsigned int c){
	return matrix[r][c];
}

void Matrix::print(){
	for(unsigned int i = 0; i < rows; ++i){
		for(unsigned int j = 0; j < cols; ++j){
			std::cout << matrix[i][j] << " ";
		}
		std::cout << "\n";
	}
}


void Matrix::resize(unsigned int r, unsigned int c){
	rows = r;
	cols = c;
	if(matrix.size() == 0){
		matrix.resize(rows);
		for(unsigned int i = 0; i < rows; ++i){
			matrix[i].resize(cols);
		}			
	} else {
		std::cout << "Could not resize the matrix. There are elements in the matrix!!!\n";
	}
}

unsigned int Matrix::numRows(){
	return rows;
}

unsigned int Matrix::numCols(){
	return cols;
}

std::vector<double> Matrix::getLine(unsigned int index){
	return matrix[index];
}

void Matrix::save(std::ofstream& out){
	for(unsigned int i = 0; i < rows; ++i){
		for(unsigned int j = 0; j < cols; ++j){
			out << matrix[i][j] << " ";
		}
		out << "\n";
	}

}