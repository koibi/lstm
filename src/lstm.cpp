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
	Eigen::Vector2d weights;
	weights << 3, 2;
	Perceptron p = Perceptron(4,2,weights);

	//
	std::cout << "Perceptron anzahl ins: " << endl << p.nrInputs << endl
			<< "Perceptron anzahl  outs: " << endl << p.out << endl
			<< "Weights: " << endl << p.weights << endl;
	cout << "-------------------------------------------------------------"
			<< endl;

	Eigen::VectorXd v(2);
	v << 1, 0;
	p.calcOutput(v);
	for (int i = 0; i <= 3; i++) {
		cout << "x1 x2 " << v.transpose() << " out " << p.out;
		cout << endl;
	}
	/*MatrixXd m(2,2);
	 m(0,0) = 3;
	 m(1,0) = 2.5; //WFK
	 m(0,1) = -1;
	 m = m * m;*/
	//std::cout << "LSTM Matrix: " << endl << m << endl;
	return 0;
}
