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

int main() {

	//Erstelle PErceptron
	Perceptron p = Perceptron();
	p.weights<< 3, 2;

	std::cout << "Perceptron anzahl ins: " << endl <<  p.nrInputs  << endl
			  << "Perceptron anzahl  outs: " << endl << p.nrOut << endl
			  << "Weights: " << p.weights << endl;

	Eigen::VectorXd v;
	v << 1, 0;
	p.calcOutput(v);
	cout << "out" << p.nrOut << endl;

	MatrixXd m(2,2);
	  m(0,0) = 3;
	  m(1,0) = 2.5; //WFK
	  m(0,1) = -1;
	  m = m * m;
	  std::cout << "LSTM Matrix: " << endl << m << endl;
	return 0;
}
