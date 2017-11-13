#ifndef FUNCTIONS_HPP_
#define FUNCTIONS_HPP_

#include<vector>
#include<string>
#include<fstream>
#include<iostream>

void initialize_vars(std::vector<std::string>& v, unsigned int size);
void printVector(std::vector<auto> v);
void saveVector(std::vector<auto> v, std::ofstream& out);
void findMinElementOfVector(std::vector<auto> v, auto& element, unsigned int& index);
void findMinElementPositiveOfVector(std::vector<auto> v, auto& element, unsigned int& index);
bool findElementInVector(std::vector<auto> v, auto e, unsigned int& index);

#endif