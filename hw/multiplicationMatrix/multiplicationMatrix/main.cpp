// MINIMUM 15 SOLUTIONS

#include <iostream>
#include "multiplication.h"

	Multiplication mp;
int main()
{
	int n = mp.getN();
	std::cout << "Size of matrices: " << n << " x " << n << std::endl << std::endl;
	std::cout << "\n\nCalc multiplicaton matrices in 1D arrays" << std::endl << std::endl;
	mp.calculate1DArray();
	std::cout << "\n\nCalc multiplicaton matrices n 2D arrays" << std::endl << std::endl;
	mp.calculate2DArray();
	std::cout << "\n\nCalc multiplicaton matrices in vectors" << std::endl << std::endl;
	mp.calculateVectors();
	getchar();
	return 0;
}
