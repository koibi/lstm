/*
 * Perceptron.cpp
 *
 *  Created on: Feb 13, 2015
 *      Author: awecker
 */

#include "Perceptron.h"

using namespace std;

double Perceptron::run(Eigen::VectorXd inputData) {

	return 0;
}


Perceptron::Perceptron(int nrInputs, double myTheta = 0.5) {
	this->myTheta = myTheta;
	this->nrInputs = nrInputs;

}

Perceptron::~Perceptron() {
}

