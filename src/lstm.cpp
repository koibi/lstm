//============================================================================
// Name        : lstm.cpp
// Author      : awecker
// Version     :
// Copyright   : GLPL Included
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Perceptron.h"

using namespace Eigen;
using namespace std;

int main() { //test mano

	//Erstelle ein Testvector
	Eigen::VectorXd input = Eigen::VectorXd(2);
	input << 1, 1;
	std::cout << input << endl;

	//Erstelle PErceptron
	Perceptron *p = new Perceptron();

	std::cout << "Perceptron anzahl in und outs: " << *p->nrIn  << endl
			  << "Perceptron anzahl in und outs: " << *p->nrOut << endl
			  << "Weights: " << *p->weights << endl;

	MatrixXd m(2,2);
	  m(0,0) = 3;
	  m(1,0) = 2.5; //WFK
	  m(0,1) = -1;
	  m = m * m;
	  std::cout << "LSTM Matrix: " << endl << m << endl;
	return 0;
}
